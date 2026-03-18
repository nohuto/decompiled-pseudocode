/*
 * XREFs of ?xxxbEnumerateRegistryFonts@@YAHKIPEBG0@Z @ 0x1C00BFBE4
 * Callers:
 *     ?xxxLoadPermanentFonts@@YAHXZ @ 0x1C00BF910 (-xxxLoadPermanentFonts@@YAHXZ.c)
 *     ?xxxLoadUserAndNetworkFonts@@YAXXZ @ 0x1C00BFAB0 (-xxxLoadUserAndNetworkFonts@@YAXXZ.c)
 * Callees:
 *     ?xxxbEnumerateRegistryFontsInternal@@YAHPEAXK@Z @ 0x1C00589E0 (-xxxbEnumerateRegistryFontsInternal@@YAHPEAXK@Z.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C00756A0 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C009DD90 (PushW32ThreadLock.c)
 *     ThreadLockExchange @ 0x1C01242F4 (ThreadLockExchange.c)
 */

__int64 __fastcall xxxbEnumerateRegistryFonts(
        __int64 a1,
        unsigned int a2,
        const unsigned __int16 *a3,
        const unsigned __int16 *a4)
{
  __int64 ProfileUserName; // rbx
  ULONG v6; // r12d
  void *v7; // rdi
  unsigned int v8; // ebx
  __int64 v9; // rax
  __int64 v10; // r9
  unsigned int *v11; // rsi
  ULONG i; // r14d
  NTSTATUS v13; // eax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v18; // rax
  unsigned int *v19; // r15
  __int64 v20; // rdx
  __int64 v21; // r8
  _WORD v22[4]; // [rsp+30h] [rbp-49h] BYREF
  unsigned int *v23; // [rsp+38h] [rbp-41h]
  _QWORD v24[3]; // [rsp+40h] [rbp-39h] BYREF
  _BYTE v25[24]; // [rsp+58h] [rbp-21h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp-9h] BYREF
  ULONG ResultLength; // [rsp+E8h] [rbp+6Fh] BYREF
  void *KeyHandle; // [rsp+F8h] [rbp+7Fh] BYREF

  KeyHandle = 0LL;
  ResultLength = 0;
  ProfileUserName = 0LL;
  v6 = 544;
  if ( a2 == 56 )
  {
    ProfileUserName = CreateProfileUserName(v25);
    if ( !ProfileUserName )
      return 0LL;
  }
  v7 = (void *)OpenCacheKeyEx(ProfileUserName, a2, 131097LL);
  if ( ProfileUserName )
    FreeProfileUserName(ProfileUserName, v25);
  if ( !v7 )
    return 0LL;
  v8 = xxxbEnumerateRegistryFontsInternal(v7);
  v9 = Win32AllocPool(544LL, 1919972181LL);
  v11 = (unsigned int *)v9;
  if ( !v9 )
    return v8;
  PushW32ThreadLock(v9, v24, (__int64)Win32FreePool, v10);
  for ( i = 0; ; ++i )
  {
    v13 = ZwEnumerateKey(v7, i, KeyBasicInformation, v11, v6 - 2, &ResultLength);
    if ( v13 != -2147483643 && v13 != -1073741789 )
      break;
    ResultLength += 2;
    v18 = Win32AllocPool(ResultLength, 1919972181LL);
    v19 = (unsigned int *)v18;
    if ( v18 )
    {
      ThreadLockExchange(v18, v24);
      Win32FreePool(v11, v20, v21);
      v6 = ResultLength;
      v11 = v19;
      v13 = ZwEnumerateKey(v7, i, KeyBasicInformation, v19, ResultLength - 2, &ResultLength);
      if ( v13 != -2147483643 && v13 != -1073741789 )
        break;
    }
LABEL_20:
    ;
  }
  if ( v13 >= 0 )
  {
    *((_WORD *)v11 + ((unsigned __int64)v11[3] >> 1) + 8) = 0;
    v23 = v11 + 4;
    v22[0] = *((_WORD *)v11 + 6);
    v22[1] = v22[0];
    ObjectAttributes.ObjectName = (PUNICODE_STRING)v22;
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = v7;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
    {
      v8 |= xxxbEnumerateRegistryFontsInternal(KeyHandle);
      ZwClose(KeyHandle);
    }
    goto LABEL_20;
  }
  PopAndFreeAlwaysW32ThreadLock((__int64)v24, v14, v15, v16);
  ZwClose(v7);
  return v8;
}
