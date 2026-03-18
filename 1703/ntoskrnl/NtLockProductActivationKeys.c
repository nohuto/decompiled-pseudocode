/*
 * XREFs of NtLockProductActivationKeys @ 0x1405AF814
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeString @ 0x1400F0F60 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     wcscat_s @ 0x1401703F0 (wcscat_s.c)
 *     wcscpy_s @ 0x1401704A0 (wcscpy_s.c)
 *     wcsncat_s @ 0x140170530 (wcsncat_s.c)
 *     ZwClose @ 0x14017E120 (ZwClose.c)
 *     ZwOpenKey @ 0x14017E180 (ZwOpenKey.c)
 *     ZwEnumerateKey @ 0x14017E580 (ZwEnumerateKey.c)
 *     ZwLockRegistryKey @ 0x14017FFC0 (ZwLockRegistryKey.c)
 *     IsRegistryKeyLocked @ 0x1405AFBD4 (IsRegistryKeyLocked.c)
 */

NTSTATUS __stdcall NtLockProductActivationKeys(PULONG pPrivateVer, PULONG pSafeMode)
{
  NTSTATUS v3; // ebx
  __int16 v4; // r8
  unsigned __int64 i; // rdx
  __int64 j; // r8
  unsigned int v7; // r9d
  unsigned int v8; // r10d
  unsigned int v9; // esi
  int v10; // r14d
  unsigned __int64 v11; // r11
  NTSTATUS result; // eax
  NTSTATUS v13; // edi
  ULONG v14; // r14d
  NTSTATUS k; // eax
  NTSTATUS v16; // esi
  NTSTATUS v17; // eax
  NTSTATUS v18; // eax
  bool v19; // sf
  __int64 v20; // rcx
  _BYTE v21[8]; // [rsp+30h] [rbp-908h] BYREF
  HANDLE KeyHandle; // [rsp+38h] [rbp-900h] BYREF
  ULONG ResultLength; // [rsp+40h] [rbp-8F8h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-8F0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-8E8h] BYREF
  UNICODE_STRING v26; // [rsp+60h] [rbp-8D8h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp-8C8h] BYREF
  OBJECT_ATTRIBUTES v28; // [rsp+A0h] [rbp-898h] BYREF
  WCHAR SourceString[8]; // [rsp+D0h] [rbp-868h] BYREF
  __int128 v30; // [rsp+E0h] [rbp-858h]
  __int128 v31; // [rsp+F0h] [rbp-848h]
  __int64 v32; // [rsp+100h] [rbp-838h]
  int v33; // [rsp+108h] [rbp-830h]
  _BYTE KeyInformation[12]; // [rsp+110h] [rbp-828h] BYREF
  unsigned int v35; // [rsp+11Ch] [rbp-81Ch]
  wchar_t Src[504]; // [rsp+120h] [rbp-818h] BYREF
  wchar_t Dst[512]; // [rsp+510h] [rbp-428h] BYREF

  v3 = 0;
  KeyHandle = 0LL;
  *(_OWORD *)SourceString = xmmword_1402A8A70;
  v30 = xmmword_1402A8A80;
  v31 = xmmword_1402A8A90;
  v32 = 0x2C7EFB57828734DALL;
  v33 = 593434642;
  v4 = -21647;
  for ( i = 0LL; i < 0x1E; ++i )
    v4 = SourceString[i] ^ (SourceString[i] + v4);
  if ( v4 != -18097 )
    return -1073741823;
  for ( j = 52LL; j >= 0; --j )
  {
    v7 = *(_DWORD *)((char *)SourceString + j);
    v8 = *(_DWORD *)((char *)&SourceString[2] + j);
    v9 = -957401312;
    v10 = 32;
    v11 = 3337565984LL;
    do
    {
      v8 -= (v9 + abWPAStringKey[(v11 >> 11) & 3]) ^ (v7 + ((16 * v7) ^ (v7 >> 5)));
      v9 += 1640531527;
      v11 = v9;
      v7 -= (v9 + abWPAStringKey[v9 & 3]) ^ (v8 + ((16 * v8) ^ (v8 >> 5)));
      --v10;
    }
    while ( v10 );
    *(_DWORD *)((char *)SourceString + j) = v7;
    *(_DWORD *)((char *)&SourceString[2] + j) = v8;
  }
  RtlInitUnicodeString(&DestinationString, SourceString);
  if ( KeGetCurrentThread()->PreviousMode )
  {
    if ( pSafeMode )
    {
      v20 = (__int64)pSafeMode;
      if ( (unsigned __int64)pSafeMode >= 0x7FFFFFFF0000LL )
        v20 = 0x7FFFFFFF0000LL;
      *(_DWORD *)v20 = *(_DWORD *)v20;
      *pSafeMode = InitSafeBootMode;
    }
  }
  else if ( pSafeMode )
  {
    *pSafeMode = InitSafeBootMode;
  }
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.ObjectName = &DestinationString;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  v13 = result;
  if ( result >= 0 )
  {
    v14 = 0;
    for ( k = ZwEnumerateKey(KeyHandle, 0, KeyBasicInformation, KeyInformation, 0x400u, &ResultLength);
          ;
          k = ZwEnumerateKey(KeyHandle, v14, KeyBasicInformation, KeyInformation, 0x400u, &ResultLength) )
    {
      v16 = k;
      if ( k == -2147483622 )
        break;
      if ( k < 0 )
      {
        v13 = k;
        break;
      }
      if ( v35 + 64 > 0x400 )
      {
        v13 = -1073741801;
      }
      else
      {
        wcscpy_s(Dst, 0x200uLL, SourceString);
        wcsncat_s(Dst, 0x200uLL, Src, (unsigned __int64)v35 >> 1);
        wcscat_s(Dst, 0x200uLL, L"\\");
        RtlInitUnicodeString(&v26, Dst);
        v28.Length = 48;
        v28.RootDirectory = 0LL;
        v28.Attributes = 576;
        v28.ObjectName = &v26;
        *(_OWORD *)&v28.SecurityDescriptor = 0LL;
        v17 = ZwOpenKey(&Handle, 0x20019u, &v28);
        if ( v17 < 0 )
        {
          v13 = v17;
        }
        else
        {
          v18 = IsRegistryKeyLocked(Handle, v21);
          v19 = v18 < 0;
          if ( v18 >= 0 )
          {
            if ( !v21[0] )
              v18 = ZwLockRegistryKey(Handle);
            v19 = v18 < 0;
          }
          if ( v19 )
            v13 = v18;
          ZwClose(Handle);
        }
        ++v14;
      }
    }
    ZwClose(KeyHandle);
    if ( v16 != -2147483622 )
      return v13;
    return v3;
  }
  return result;
}
