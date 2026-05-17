/*
 * XREFs of sub_180081044 @ 0x180081044
 * Callers:
 *     sub_1800CDEF0 @ 0x1800CDEF0 (sub_1800CDEF0.c)
 * Callees:
 *     sub_18000FA60 @ 0x18000FA60 (sub_18000FA60.c)
 *     RtlDeleteBoundaryDescriptor @ 0x180013CA0 (RtlDeleteBoundaryDescriptor.c)
 *     RtlLeaveCriticalSection @ 0x18001E290 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18001EE90 (RtlEnterCriticalSection.c)
 *     sub_18001F5FC @ 0x18001F5FC (sub_18001F5FC.c)
 *     RtlQueryEnvironmentVariable @ 0x180022780 (RtlQueryEnvironmentVariable.c)
 *     RtlReleasePath @ 0x1800258A0 (RtlReleasePath.c)
 *     sub_18003B7AC @ 0x18003B7AC (sub_18003B7AC.c)
 *     sub_18003BE00 @ 0x18003BE00 (sub_18003BE00.c)
 *     sub_180042054 @ 0x180042054 (sub_180042054.c)
 *     sub_180046E54 @ 0x180046E54 (sub_180046E54.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 */

__int64 __fastcall sub_180081044(unsigned __int64 *a1)
{
  bool v2; // si
  int v3; // ebx
  int *v4; // r14
  unsigned __int64 *v5; // r8
  __int64 v6; // r9
  unsigned __int64 v7; // rcx
  unsigned __int64 v9; // [rsp+30h] [rbp-1C8h] BYREF
  unsigned __int64 v10; // [rsp+38h] [rbp-1C0h] BYREF
  int v11; // [rsp+40h] [rbp-1B8h] BYREF
  _WORD *v12; // [rsp+48h] [rbp-1B0h]
  _WORD v13[128]; // [rsp+50h] [rbp-1A8h] BYREF
  __int64 v14[15]; // [rsp+150h] [rbp-A8h] BYREF
  char v15; // [rsp+1CCh] [rbp-2Ch]

  v2 = 1;
  RtlEnterCriticalSection((__int64)&unk_18015BE80);
  if ( (unsigned int)RtlQueryEnvironmentVariable(0LL, L"COMPLUS_InstallRoot", 0x13uLL, 0LL, 0LL, &v10) == -1073741789 )
    v2 = (unsigned int)RtlQueryEnvironmentVariable(0LL, L"COMPLUS_Version", 0xFuLL, 0LL, 0LL, &v10) != -1073741789;
  RtlLeaveCriticalSection((__int64)&unk_18015BE80);
  v12 = v13;
  v11 = 0x1000000;
  v13[0] = 0;
  if ( v2 )
    v3 = sub_18003BE00(&v11, (__int64)&unk_1801108C0);
  else
    v3 = 0;
  v4 = &v11;
  if ( !v2 )
    v4 = (int *)&unk_1801108C0;
  if ( v3 >= 0 )
  {
    sub_180042054(0LL, 0LL, v14);
    v3 = sub_18003B7AC((__int64)v4, (int)v14, 0, 0, (__int64 *)&v9);
    if ( v15 )
      RtlReleasePath(v14[0]);
    if ( v3 >= 0 )
    {
      v3 = sub_18000FA60(*(_QWORD *)(v9 + 48), "_CorExeMain", 0, (char **)&v10);
      if ( v3 < 0 )
      {
        sub_180046E54(v9, 0LL, v5, v6);
        v7 = v9;
      }
      else
      {
        qword_18015C3C0 = __ROR8__(v10 ^ MEMORY[0x7FFE0330], MEMORY[0x7FFE0330] & 0x3F);
        v7 = v9;
        *a1 = v9;
      }
      sub_18001F5FC(v7);
    }
  }
  if ( v13 != v12 )
    RtlDeleteBoundaryDescriptor((__int64)v12);
  return (unsigned int)v3;
}
