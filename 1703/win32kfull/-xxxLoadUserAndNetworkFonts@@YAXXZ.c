/*
 * XREFs of ?xxxLoadUserAndNetworkFonts@@YAXXZ @ 0x1C000A460
 * Callers:
 *     xxxLW_LoadFonts @ 0x1C000A1A0 (xxxLW_LoadFonts.c)
 * Callees:
 *     ?xxxbEnumerateRegistryFonts@@YAHKIPEBG0@Z @ 0x1C000A594 (-xxxbEnumerateRegistryFonts@@YAHKIPEBG0@Z.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0035660 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C0037EB0 (PushW32ThreadLock.c)
 *     ?xxxbEnumerateRegistryFontsInternal@@YAHPEAXK@Z @ 0x1C003B5D0 (-xxxbEnumerateRegistryFontsInternal@@YAHPEAXK@Z.c)
 *     ThreadLockExchange @ 0x1C00CCF68 (ThreadLockExchange.c)
 */

void __fastcall xxxLoadUserAndNetworkFonts(
        __int64 a1,
        __int64 a2,
        const unsigned __int16 *a3,
        const unsigned __int16 *a4)
{
  const unsigned __int16 *v4; // r8
  const unsigned __int16 *v5; // r9
  ULONG v6; // esi
  void *v7; // rax
  void *v8; // rbx
  __int64 v9; // rax
  unsigned int *v10; // rdi
  ULONG i; // ebp
  NTSTATUS v12; // eax
  __int64 v13; // rax
  unsigned int *v14; // r14
  _WORD v15[4]; // [rsp+30h] [rbp-88h] BYREF
  unsigned int *v16; // [rsp+38h] [rbp-80h]
  _BYTE v17[24]; // [rsp+40h] [rbp-78h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+58h] [rbp-60h] BYREF
  ULONG ResultLength; // [rsp+C0h] [rbp+8h] BYREF
  void *KeyHandle; // [rsp+C8h] [rbp+10h] BYREF

  xxxbEnumerateRegistryFonts(1u, 0x38u, a3, a4);
  xxxbEnumerateRegistryFonts(2u, 0x38u, v4, v5);
  KeyHandle = 0LL;
  ResultLength = 0;
  v6 = 544;
  v7 = (void *)OpenCacheKeyEx(0LL, 6LL, 131097LL, 0LL);
  v8 = v7;
  if ( v7 )
  {
    xxxbEnumerateRegistryFontsInternal(v7, 2u);
    v9 = Win32AllocPool(544LL, 1919972181LL);
    v10 = (unsigned int *)v9;
    if ( v9 )
    {
      PushW32ThreadLock(v9, v17, Win32FreePool);
      for ( i = 0; ; ++i )
      {
        v12 = ZwEnumerateKey(v8, i, KeyBasicInformation, v10, v6 - 2, &ResultLength);
        if ( v12 != -2147483643 && v12 != -1073741789 )
          goto LABEL_6;
        ResultLength += 2;
        v13 = Win32AllocPool(ResultLength, 1919972181LL);
        v14 = (unsigned int *)v13;
        if ( v13 )
        {
          ThreadLockExchange(v13, v17);
          Win32FreePool(v10);
          v6 = ResultLength;
          v10 = v14;
          v12 = ZwEnumerateKey(v8, i, KeyBasicInformation, v14, ResultLength - 2, &ResultLength);
          if ( v12 != -2147483643 && v12 != -1073741789 )
          {
LABEL_6:
            if ( v12 < 0 )
            {
              PopAndFreeAlwaysW32ThreadLock(v17);
              ZwClose(v8);
              return;
            }
            *((_WORD *)v10 + ((unsigned __int64)v10[3] >> 1) + 8) = 0;
            v16 = v10 + 4;
            v15[0] = *((_WORD *)v10 + 6);
            v15[1] = v15[0];
            ObjectAttributes.ObjectName = (PUNICODE_STRING)v15;
            ObjectAttributes.Length = 48;
            ObjectAttributes.RootDirectory = v8;
            ObjectAttributes.Attributes = 576;
            *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
            if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
            {
              xxxbEnumerateRegistryFontsInternal(KeyHandle, 2u);
              ZwClose(KeyHandle);
            }
          }
        }
      }
    }
  }
}
