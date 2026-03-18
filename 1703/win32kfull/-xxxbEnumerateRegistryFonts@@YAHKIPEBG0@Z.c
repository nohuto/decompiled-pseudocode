/*
 * XREFs of ?xxxbEnumerateRegistryFonts@@YAHKIPEBG0@Z @ 0x1C000A594
 * Callers:
 *     ?xxxLoadPermanentFonts@@YAHXZ @ 0x1C000A2C0 (-xxxLoadPermanentFonts@@YAHXZ.c)
 *     ?xxxLoadUserAndNetworkFonts@@YAXXZ @ 0x1C000A460 (-xxxLoadUserAndNetworkFonts@@YAXXZ.c)
 * Callees:
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0035660 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C0037EB0 (PushW32ThreadLock.c)
 *     ?xxxbEnumerateRegistryFontsInternal@@YAHPEAXK@Z @ 0x1C003B5D0 (-xxxbEnumerateRegistryFontsInternal@@YAHPEAXK@Z.c)
 *     ThreadLockExchange @ 0x1C00CCF68 (ThreadLockExchange.c)
 */

__int64 __fastcall xxxbEnumerateRegistryFonts(
        unsigned int a1,
        unsigned int a2,
        const unsigned __int16 *a3,
        const unsigned __int16 *a4)
{
  __int64 ProfileUserName; // rbx
  ULONG v7; // r12d
  void *v8; // rdi
  unsigned int v9; // ebx
  __int64 v10; // rax
  unsigned int *v11; // rsi
  ULONG i; // r14d
  NTSTATUS v13; // eax
  __int64 v15; // rax
  unsigned int *v16; // r15
  _WORD v17[4]; // [rsp+30h] [rbp-49h] BYREF
  unsigned int *v18; // [rsp+38h] [rbp-41h]
  _BYTE v19[24]; // [rsp+40h] [rbp-39h] BYREF
  _BYTE v20[24]; // [rsp+58h] [rbp-21h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp-9h] BYREF
  ULONG ResultLength; // [rsp+E8h] [rbp+6Fh] BYREF
  void *KeyHandle; // [rsp+F8h] [rbp+7Fh] BYREF

  KeyHandle = 0LL;
  ResultLength = 0;
  ProfileUserName = 0LL;
  v7 = 544;
  if ( a2 == 56 )
  {
    ProfileUserName = CreateProfileUserName(v20);
    if ( !ProfileUserName )
      return 0LL;
  }
  v8 = (void *)OpenCacheKeyEx(ProfileUserName, a2, 131097LL, 0LL);
  if ( ProfileUserName )
    FreeProfileUserName(ProfileUserName, v20);
  if ( !v8 )
    return 0LL;
  v9 = xxxbEnumerateRegistryFontsInternal(v8, a1);
  v10 = Win32AllocPool(544LL, 1919972181LL);
  v11 = (unsigned int *)v10;
  if ( !v10 )
    return v9;
  PushW32ThreadLock(v10, v19, Win32FreePool);
  for ( i = 0; ; ++i )
  {
    v13 = ZwEnumerateKey(v8, i, KeyBasicInformation, v11, v7 - 2, &ResultLength);
    if ( v13 != -2147483643 && v13 != -1073741789 )
      break;
    ResultLength += 2;
    v15 = Win32AllocPool(ResultLength, 1919972181LL);
    v16 = (unsigned int *)v15;
    if ( v15 )
    {
      ThreadLockExchange(v15, v19);
      Win32FreePool(v11);
      v7 = ResultLength;
      v11 = v16;
      v13 = ZwEnumerateKey(v8, i, KeyBasicInformation, v16, ResultLength - 2, &ResultLength);
      if ( v13 != -2147483643 && v13 != -1073741789 )
        break;
    }
LABEL_20:
    ;
  }
  if ( v13 >= 0 )
  {
    *((_WORD *)v11 + ((unsigned __int64)v11[3] >> 1) + 8) = 0;
    v18 = v11 + 4;
    v17[0] = *((_WORD *)v11 + 6);
    v17[1] = v17[0];
    ObjectAttributes.ObjectName = (PUNICODE_STRING)v17;
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = v8;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
    {
      v9 |= xxxbEnumerateRegistryFontsInternal(KeyHandle, a1);
      ZwClose(KeyHandle);
    }
    goto LABEL_20;
  }
  PopAndFreeAlwaysW32ThreadLock(v19);
  ZwClose(v8);
  return v9;
}
