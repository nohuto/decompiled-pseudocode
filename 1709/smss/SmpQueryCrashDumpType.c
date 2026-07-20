/*
 * XREFs of SmpQueryCrashDumpType @ 0x14000799C
 * Callers:
 *     SmpPagefileInitialize @ 0x140005FB8 (SmpPagefileInitialize.c)
 * Callees:
 *     SmpQueryDwordFromRegistry @ 0x1400079E0 (SmpQueryDwordFromRegistry.c)
 */

__int64 __fastcall SmpQueryCrashDumpType(__int64 a1)
{
  int v1; // eax
  unsigned int v2; // ecx
  int v4; // [rsp+20h] [rbp-18h] BYREF
  const wchar_t *v5; // [rsp+28h] [rbp-10h]
  unsigned int v6; // [rsp+40h] [rbp+8h] BYREF

  v4 = 2228256;
  v5 = L"CrashDumpEnabled";
  v1 = ((__int64 (__fastcall *)(__int64, int *, __int64, unsigned int *))SmpQueryDwordFromRegistry)(a1, &v4, 4LL, &v6);
  v2 = v6;
  if ( v1 < 0 )
    return 4;
  return v2;
}
