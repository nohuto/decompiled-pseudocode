/*
 * XREFs of ?xxxLoadPermanentFonts@@YAHXZ @ 0x1C00BF910
 * Callers:
 *     xxxLW_LoadFonts @ 0x1C00BF850 (xxxLW_LoadFonts.c)
 * Callees:
 *     ?xxxbEnumerateRegistryFontsInternal@@YAHPEAXK@Z @ 0x1C00589E0 (-xxxbEnumerateRegistryFontsInternal@@YAHPEAXK@Z.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C00756A0 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C009DD90 (PushW32ThreadLock.c)
 *     ?xxxbEnumerateRegistryFonts@@YAHKIPEBG0@Z @ 0x1C00BFBE4 (-xxxbEnumerateRegistryFonts@@YAHKIPEBG0@Z.c)
 *     ThreadLockExchange @ 0x1C01242F4 (ThreadLockExchange.c)
 */

__int64 __fastcall xxxLoadPermanentFonts(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  const unsigned __int16 *v3; // r8
  const unsigned __int16 *v4; // r9
  unsigned int v5; // ebx
  ULONG v6; // ebp
  void *v7; // rax
  void *v8; // rdi
  unsigned int v9; // r14d
  __int64 v10; // rax
  __int64 v11; // r9
  unsigned int *v12; // rsi
  ULONG i; // r15d
  NTSTATUS v14; // eax
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rax
  unsigned int *v19; // r12
  __int64 v20; // rdx
  __int64 v21; // r8
  _WORD v22[4]; // [rsp+30h] [rbp-88h] BYREF
  unsigned int *v23; // [rsp+38h] [rbp-80h]
  _QWORD v24[3]; // [rsp+40h] [rbp-78h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+58h] [rbp-60h] BYREF
  ULONG ResultLength; // [rsp+C0h] [rbp+8h] BYREF
  void *KeyHandle; // [rsp+C8h] [rbp+10h] BYREF

  if ( gbPermanentFontsLoaded )
    return 1LL;
  if ( PsGetCurrentProcess(a1, a2) == gpepCSRSS )
    xxxbEnumerateRegistryFonts(0x80000000, 0x36u, v3, v4);
  v5 = 0;
  KeyHandle = 0LL;
  ResultLength = 0;
  v6 = 544;
  v7 = (void *)OpenCacheKeyEx(0LL, 6LL, 131097LL);
  v8 = v7;
  if ( !v7 )
    goto LABEL_13;
  v9 = xxxbEnumerateRegistryFontsInternal(v7);
  v10 = Win32AllocPool(544LL, 1919972181LL);
  v12 = (unsigned int *)v10;
  if ( !v10 )
    goto LABEL_12;
  PushW32ThreadLock(v10, v24, (__int64)Win32FreePool, v11);
  for ( i = 0; ; ++i )
  {
    v14 = ZwEnumerateKey(v8, i, KeyBasicInformation, v12, v6 - 2, &ResultLength);
    if ( v14 != -2147483643 && v14 != -1073741789 )
      break;
    ResultLength += 2;
    v18 = Win32AllocPool(ResultLength, 1919972181LL);
    v19 = (unsigned int *)v18;
    if ( v18 )
    {
      ThreadLockExchange(v18, v24);
      Win32FreePool(v12, v20, v21);
      v6 = ResultLength;
      v12 = v19;
      v14 = ZwEnumerateKey(v8, i, KeyBasicInformation, v19, ResultLength - 2, &ResultLength);
      if ( v14 != -2147483643 && v14 != -1073741789 )
        break;
    }
LABEL_20:
    ;
  }
  if ( v14 >= 0 )
  {
    *((_WORD *)v12 + ((unsigned __int64)v12[3] >> 1) + 8) = 0;
    v23 = v12 + 4;
    v22[0] = *((_WORD *)v12 + 6);
    v22[1] = v22[0];
    ObjectAttributes.ObjectName = (PUNICODE_STRING)v22;
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = v8;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
    {
      v9 |= xxxbEnumerateRegistryFontsInternal(KeyHandle);
      ZwClose(KeyHandle);
    }
    goto LABEL_20;
  }
  PopAndFreeAlwaysW32ThreadLock((__int64)v24, v15, v16, v17);
  ZwClose(v8);
LABEL_12:
  v5 = v9;
LABEL_13:
  result = v5;
  gbPermanentFontsLoaded = 1;
  return result;
}
