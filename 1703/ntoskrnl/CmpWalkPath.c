/*
 * XREFs of CmpWalkPath @ 0x1405B6CBC
 * Callers:
 *     CmpPreserveSystemHiveData @ 0x14066F58C (CmpPreserveSystemHiveData.c)
 *     CmSelectQualifiedInstallLanguage @ 0x14080DD28 (CmSelectQualifiedInstallLanguage.c)
 *     CmGetSystemControlValues @ 0x14080E8DC (CmGetSystemControlValues.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400F0F60 (RtlInitUnicodeString.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     CmpFindSubKeyByNameWithStatus @ 0x1404D2CDC (CmpFindSubKeyByNameWithStatus.c)
 *     CmpGetNextName @ 0x1405B6D60 (CmpGetNextName.c)
 */

__int64 __fastcall CmpWalkPath(__int64 a1, unsigned int a2, const WCHAR *a3)
{
  __int64 v5; // rax
  _DWORD v7[2]; // [rsp+20h] [rbp-30h] BYREF
  _WORD v8[8]; // [rsp+28h] [rbp-28h] BYREF
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-18h] BYREF
  char v10; // [rsp+78h] [rbp+28h] BYREF
  unsigned int v11; // [rsp+88h] [rbp+38h] BYREF

  v7[0] = -1;
  v7[1] = 0;
  RtlInitUnicodeString(&DestinationString, a3);
  while ( 1 )
  {
    CmpGetNextName(&DestinationString, v8, &v10);
    if ( !v8[0] )
      break;
    v5 = (*(__int64 (__fastcall **)(__int64, _QWORD, _DWORD *))(a1 + 8))(a1, a2, v7);
    if ( v5 )
    {
      CmpFindSubKeyByNameWithStatus(a1, v5, (__int64)v8, &v11);
      a2 = v11;
      (*(void (__fastcall **)(__int64, _DWORD *))(a1 + 16))(a1, v7);
      if ( a2 != -1 )
        continue;
    }
    return 0xFFFFFFFFLL;
  }
  return a2;
}
