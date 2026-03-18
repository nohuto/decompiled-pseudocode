/*
 * XREFs of ?xxxLoadUserAndNetworkFonts@@YAXXZ @ 0x1C00BFAB0
 * Callers:
 *     xxxLW_LoadFonts @ 0x1C00BF850 (xxxLW_LoadFonts.c)
 * Callees:
 *     ?xxxbEnumerateRegistryFontsInternal@@YAHPEAXK@Z @ 0x1C00589E0 (-xxxbEnumerateRegistryFontsInternal@@YAHPEAXK@Z.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C00756A0 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C009DD90 (PushW32ThreadLock.c)
 *     ?xxxbEnumerateRegistryFonts@@YAHKIPEBG0@Z @ 0x1C00BFBE4 (-xxxbEnumerateRegistryFonts@@YAHKIPEBG0@Z.c)
 *     ThreadLockExchange @ 0x1C01242F4 (ThreadLockExchange.c)
 */

void __fastcall xxxLoadUserAndNetworkFonts(
        __int64 a1,
        __int64 a2,
        const unsigned __int16 *a3,
        const unsigned __int16 *a4)
{
  const unsigned __int16 *v4; // r8
  const unsigned __int16 *v5; // r9
  ULONG v6; // edi
  void *v7; // rax
  void *v8; // rbx
  __int64 v9; // rax
  __int64 v10; // r9
  unsigned int *v11; // rsi
  ULONG i; // ebp
  NTSTATUS v13; // eax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rax
  unsigned int *v18; // r14
  __int64 v19; // rdx
  __int64 v20; // r8
  _WORD v21[4]; // [rsp+30h] [rbp-88h] BYREF
  unsigned int *v22; // [rsp+38h] [rbp-80h]
  _QWORD v23[3]; // [rsp+40h] [rbp-78h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+58h] [rbp-60h] BYREF
  ULONG ResultLength; // [rsp+C0h] [rbp+8h] BYREF
  void *KeyHandle; // [rsp+C8h] [rbp+10h] BYREF

  xxxbEnumerateRegistryFonts(1u, 0x38u, a3, a4);
  xxxbEnumerateRegistryFonts(2u, 0x38u, v4, v5);
  KeyHandle = 0LL;
  ResultLength = 0;
  v6 = 544;
  v7 = (void *)OpenCacheKeyEx(0LL, 6LL, 131097LL);
  v8 = v7;
  if ( v7 )
  {
    xxxbEnumerateRegistryFontsInternal(v7);
    v9 = Win32AllocPool(544LL, 1919972181LL);
    v11 = (unsigned int *)v9;
    if ( v9 )
    {
      PushW32ThreadLock(v9, v23, (__int64)Win32FreePool, v10);
      for ( i = 0; ; ++i )
      {
        v13 = ZwEnumerateKey(v8, i, KeyBasicInformation, v11, v6 - 2, &ResultLength);
        if ( v13 != -2147483643 && v13 != -1073741789 )
          goto LABEL_6;
        ResultLength += 2;
        v17 = Win32AllocPool(ResultLength, 1919972181LL);
        v18 = (unsigned int *)v17;
        if ( v17 )
        {
          ThreadLockExchange(v17, v23);
          Win32FreePool(v11, v19, v20);
          v6 = ResultLength;
          v11 = v18;
          v13 = ZwEnumerateKey(v8, i, KeyBasicInformation, v18, ResultLength - 2, &ResultLength);
          if ( v13 != -2147483643 && v13 != -1073741789 )
          {
LABEL_6:
            if ( v13 < 0 )
            {
              PopAndFreeAlwaysW32ThreadLock((__int64)v23, v14, v15, v16);
              ZwClose(v8);
              return;
            }
            *((_WORD *)v11 + ((unsigned __int64)v11[3] >> 1) + 8) = 0;
            v22 = v11 + 4;
            v21[0] = *((_WORD *)v11 + 6);
            v21[1] = v21[0];
            ObjectAttributes.ObjectName = (PUNICODE_STRING)v21;
            ObjectAttributes.Length = 48;
            ObjectAttributes.RootDirectory = v8;
            ObjectAttributes.Attributes = 576;
            *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
            if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
            {
              xxxbEnumerateRegistryFontsInternal(KeyHandle);
              ZwClose(KeyHandle);
            }
          }
        }
      }
    }
  }
}
