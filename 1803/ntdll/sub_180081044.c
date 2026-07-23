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

__int64 __fastcall sub_180081044(PVOID *a1)
{
  bool v2; // si
  int v3; // ebx
  int *v4; // r14
  char *v5; // rcx
  PVOID BaseAddress; // [rsp+30h] [rbp-1C8h] BYREF
  ULONG_PTR ReturnLength; // [rsp+38h] [rbp-1C0h] BYREF
  int v9; // [rsp+40h] [rbp-1B8h] BYREF
  POBJECT_BOUNDARY_DESCRIPTOR BoundaryDescriptor; // [rsp+48h] [rbp-1B0h]
  _WORD v11[128]; // [rsp+50h] [rbp-1A8h] BYREF
  PWSTR Path[15]; // [rsp+150h] [rbp-A8h] BYREF
  char v13; // [rsp+1CCh] [rbp-2Ch]

  v2 = 1;
  RtlEnterCriticalSection(&stru_18015BE80);
  if ( RtlQueryEnvironmentVariable(0LL, L"COMPLUS_InstallRoot", 0x13uLL, 0LL, 0LL, &ReturnLength) == -1073741789 )
    v2 = RtlQueryEnvironmentVariable(0LL, L"COMPLUS_Version", 0xFuLL, 0LL, 0LL, &ReturnLength) != -1073741789;
  RtlLeaveCriticalSection(&stru_18015BE80);
  BoundaryDescriptor = (POBJECT_BOUNDARY_DESCRIPTOR)v11;
  v9 = 0x1000000;
  v11[0] = 0;
  if ( v2 )
    v3 = sub_18003BE00(&v9, (__int64)&unk_1801108C0);
  else
    v3 = 0;
  v4 = &v9;
  if ( !v2 )
    v4 = (int *)&unk_1801108C0;
  if ( v3 >= 0 )
  {
    sub_180042054(0LL, 0LL, (const WCHAR **)Path);
    v3 = sub_18003B7AC((__int64)v4, (__int64)Path, 0, 0, &BaseAddress);
    if ( v13 )
      RtlReleasePath(Path[0]);
    if ( v3 >= 0 )
    {
      v3 = sub_18000FA60(*((_QWORD *)BaseAddress + 6), "_CorExeMain", 0, (char **)&ReturnLength);
      if ( v3 < 0 )
      {
        sub_180046E54((__int64)BaseAddress, 0);
        v5 = (char *)BaseAddress;
      }
      else
      {
        qword_18015C3C0 = __ROR8__(ReturnLength ^ MEMORY[0x7FFE0330], MEMORY[0x7FFE0330] & 0x3F);
        v5 = (char *)BaseAddress;
        *a1 = BaseAddress;
      }
      sub_18001F5FC(v5);
    }
  }
  if ( v11 != (_WORD *)BoundaryDescriptor )
    RtlDeleteBoundaryDescriptor(BoundaryDescriptor);
  return (unsigned int)v3;
}
