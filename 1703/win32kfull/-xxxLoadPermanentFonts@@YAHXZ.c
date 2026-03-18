/*
 * XREFs of ?xxxLoadPermanentFonts@@YAHXZ @ 0x1C000A2C0
 * Callers:
 *     xxxLW_LoadFonts @ 0x1C000A1A0 (xxxLW_LoadFonts.c)
 * Callees:
 *     ?xxxbEnumerateRegistryFonts@@YAHKIPEBG0@Z @ 0x1C000A594 (-xxxbEnumerateRegistryFonts@@YAHKIPEBG0@Z.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0035660 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C0037EB0 (PushW32ThreadLock.c)
 *     ?xxxbEnumerateRegistryFontsInternal@@YAHPEAXK@Z @ 0x1C003B5D0 (-xxxbEnumerateRegistryFontsInternal@@YAHPEAXK@Z.c)
 *     ThreadLockExchange @ 0x1C00CCF68 (ThreadLockExchange.c)
 */

__int64 xxxLoadPermanentFonts(void)
{
  const unsigned __int16 *v0; // r8
  const unsigned __int16 *v1; // r9
  unsigned int v2; // ebx
  ULONG v3; // ebp
  void *v4; // rax
  void *v5; // rdi
  unsigned int v6; // r14d
  __int64 v7; // rax
  unsigned int *v8; // rsi
  ULONG i; // r15d
  NTSTATUS v10; // eax
  __int64 result; // rax
  __int64 v12; // rax
  unsigned int *v13; // r12
  _WORD v14[4]; // [rsp+30h] [rbp-88h] BYREF
  unsigned int *v15; // [rsp+38h] [rbp-80h]
  _BYTE v16[24]; // [rsp+40h] [rbp-78h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+58h] [rbp-60h] BYREF
  ULONG ResultLength; // [rsp+C0h] [rbp+8h] BYREF
  void *KeyHandle; // [rsp+C8h] [rbp+10h] BYREF

  if ( gbPermanentFontsLoaded )
    return 1LL;
  if ( PsGetCurrentProcess() == gpepCSRSS )
    xxxbEnumerateRegistryFonts(0x80000000, 0x36u, v0, v1);
  v2 = 0;
  KeyHandle = 0LL;
  ResultLength = 0;
  v3 = 544;
  v4 = (void *)OpenCacheKeyEx(0LL, 6LL, 131097LL, 0LL);
  v5 = v4;
  if ( !v4 )
    goto LABEL_12;
  v6 = xxxbEnumerateRegistryFontsInternal(v4, 1u);
  v7 = Win32AllocPool(544LL, 1919972181LL);
  v8 = (unsigned int *)v7;
  if ( !v7 )
    goto LABEL_11;
  PushW32ThreadLock(v7, v16, Win32FreePool);
  for ( i = 0; ; ++i )
  {
    v10 = ZwEnumerateKey(v5, i, KeyBasicInformation, v8, v3 - 2, &ResultLength);
    if ( v10 != -2147483643 && v10 != -1073741789 )
      break;
    ResultLength += 2;
    v12 = Win32AllocPool(ResultLength, 1919972181LL);
    v13 = (unsigned int *)v12;
    if ( v12 )
    {
      ThreadLockExchange(v12, v16);
      Win32FreePool(v8);
      v3 = ResultLength;
      v8 = v13;
      v10 = ZwEnumerateKey(v5, i, KeyBasicInformation, v13, ResultLength - 2, &ResultLength);
      if ( v10 != -2147483643 && v10 != -1073741789 )
        break;
    }
LABEL_20:
    ;
  }
  if ( v10 >= 0 )
  {
    *((_WORD *)v8 + ((unsigned __int64)v8[3] >> 1) + 8) = 0;
    v15 = v8 + 4;
    v14[0] = *((_WORD *)v8 + 6);
    v14[1] = v14[0];
    ObjectAttributes.ObjectName = (PUNICODE_STRING)v14;
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = v5;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
    {
      v6 |= xxxbEnumerateRegistryFontsInternal(KeyHandle, 1u);
      ZwClose(KeyHandle);
    }
    goto LABEL_20;
  }
  PopAndFreeAlwaysW32ThreadLock(v16);
  ZwClose(v5);
LABEL_11:
  v2 = v6;
LABEL_12:
  result = v2;
  gbPermanentFontsLoaded = 1;
  return result;
}
