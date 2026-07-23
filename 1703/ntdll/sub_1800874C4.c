/*
 * XREFs of sub_1800874C4 @ 0x1800874C4
 * Callers:
 *     sub_180091AB4 @ 0x180091AB4 (sub_180091AB4.c)
 * Callees:
 *     sub_180011D94 @ 0x180011D94 (sub_180011D94.c)
 *     RtlDeleteBoundaryDescriptor @ 0x180022070 (RtlDeleteBoundaryDescriptor.c)
 *     RtlLeaveCriticalSection @ 0x18002F090 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18002F9C0 (RtlEnterCriticalSection.c)
 *     sub_18003015C @ 0x18003015C (sub_18003015C.c)
 *     sub_180030914 @ 0x180030914 (sub_180030914.c)
 *     RtlQueryEnvironmentVariable @ 0x18003B180 (RtlQueryEnvironmentVariable.c)
 *     sub_18003BE90 @ 0x18003BE90 (sub_18003BE90.c)
 *     sub_18003C350 @ 0x18003C350 (sub_18003C350.c)
 *     sub_18003CBC0 @ 0x18003CBC0 (sub_18003CBC0.c)
 *     RtlReleasePath @ 0x18006F830 (RtlReleasePath.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 */

__int64 __fastcall sub_1800874C4(PVOID *a1)
{
  bool v2; // bl
  int v3; // ebx
  int *v4; // rdi
  char *v5; // rcx
  PVOID BaseAddress; // [rsp+30h] [rbp-1B8h] BYREF
  ULONG_PTR ReturnLength; // [rsp+38h] [rbp-1B0h] BYREF
  int v9; // [rsp+40h] [rbp-1A8h] BYREF
  POBJECT_BOUNDARY_DESCRIPTOR BoundaryDescriptor; // [rsp+48h] [rbp-1A0h]
  _WORD v11[128]; // [rsp+50h] [rbp-198h] BYREF
  PWSTR Path[15]; // [rsp+150h] [rbp-98h] BYREF
  char v13; // [rsp+1CCh] [rbp-1Ch]

  v2 = 1;
  RtlEnterCriticalSection(&stru_18015AE60);
  if ( RtlQueryEnvironmentVariable(0LL, L"COMPLUS_InstallRoot", 0x13uLL, 0LL, 0LL, &ReturnLength) == -1073741789 )
    v2 = RtlQueryEnvironmentVariable(0LL, L"COMPLUS_Version", 0xFuLL, 0LL, 0LL, &ReturnLength) != -1073741789;
  RtlLeaveCriticalSection(&stru_18015AE60);
  BoundaryDescriptor = (POBJECT_BOUNDARY_DESCRIPTOR)v11;
  v9 = 0x1000000;
  v11[0] = 0;
  if ( v2 )
  {
    v3 = sub_18003CBC0(&v9, (__int64)&unk_180110880);
    v4 = &v9;
  }
  else
  {
    v4 = (int *)&unk_180110880;
    v3 = 0;
  }
  if ( v3 >= 0 )
  {
    sub_18003BE90(0LL, 0LL, (__int64 *)Path);
    v3 = sub_18003C350((__int64)v4, (int)Path, 0, 0, &BaseAddress);
    if ( v13 )
      RtlReleasePath(Path[0]);
    if ( v3 >= 0 )
    {
      v3 = sub_180030914(*((_QWORD *)BaseAddress + 6), "_CorExeMain", 0, (char **)&ReturnLength);
      if ( v3 < 0 )
      {
        sub_180011D94((__int64)BaseAddress, 0);
        v5 = (char *)BaseAddress;
      }
      else
      {
        qword_18015B3A0 = __ROR8__(ReturnLength ^ MEMORY[0x7FFE0330], MEMORY[0x7FFE0330] & 0x3F);
        v5 = (char *)BaseAddress;
        *a1 = BaseAddress;
      }
      sub_18003015C(v5);
    }
  }
  if ( v11 != (_WORD *)BoundaryDescriptor )
    RtlDeleteBoundaryDescriptor(BoundaryDescriptor);
  return (unsigned int)v3;
}
