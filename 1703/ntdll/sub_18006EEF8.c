/*
 * XREFs of sub_18006EEF8 @ 0x18006EEF8
 * Callers:
 *     sub_180091AB4 @ 0x180091AB4 (sub_180091AB4.c)
 * Callees:
 *     sub_18001A084 @ 0x18001A084 (sub_18001A084.c)
 *     RtlDeleteBoundaryDescriptor @ 0x180022070 (RtlDeleteBoundaryDescriptor.c)
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     sub_18003015C @ 0x18003015C (sub_18003015C.c)
 *     sub_18003BE90 @ 0x18003BE90 (sub_18003BE90.c)
 *     sub_18003C350 @ 0x18003C350 (sub_18003C350.c)
 *     sub_18003CBC0 @ 0x18003CBC0 (sub_18003CBC0.c)
 *     sub_18006F0A0 @ 0x18006F0A0 (sub_18006F0A0.c)
 *     sub_18006F46C @ 0x18006F46C (sub_18006F46C.c)
 *     RtlReleasePath @ 0x18006F830 (RtlReleasePath.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     _guard_dispatch_icall_nop @ 0x1800A8C20 (_guard_dispatch_icall_nop.c)
 *     sub_1800D5274 @ 0x1800D5274 (sub_1800D5274.c)
 */

void __fastcall sub_18006EEF8(__int64 a1)
{
  int v2; // eax
  int v3; // ebx
  int v4; // eax
  char v5; // cl
  int v6; // [rsp+28h] [rbp-D8h]
  int v7; // [rsp+28h] [rbp-D8h]
  int v8; // [rsp+28h] [rbp-D8h]
  PVOID v9; // [rsp+30h] [rbp-D0h] BYREF
  int v10; // [rsp+38h] [rbp-C8h] BYREF
  PVOID BaseAddress; // [rsp+40h] [rbp-C0h]
  int v12; // [rsp+48h] [rbp-B8h] BYREF
  const wchar_t *v13; // [rsp+50h] [rbp-B0h]
  int v14; // [rsp+60h] [rbp-A0h] BYREF
  POBJECT_BOUNDARY_DESCRIPTOR BoundaryDescriptor; // [rsp+68h] [rbp-98h]
  _WORD v16[128]; // [rsp+70h] [rbp-90h] BYREF
  PWSTR Path[15]; // [rsp+170h] [rbp+70h] BYREF
  char v18; // [rsp+1ECh] [rbp+ECh]
  _BYTE v19[512]; // [rsp+1F0h] [rbp+F0h] BYREF

  v12 = 1572886;
  v13 = L"apphelp.dll";
  v14 = 0x1000000;
  BoundaryDescriptor = (POBJECT_BOUNDARY_DESCRIPTOR)v16;
  v16[0] = 0;
  v2 = sub_18003CBC0(&v14, (__int64)&v12);
  if ( v2 < 0 )
  {
    v5 = dword_180155A10;
    if ( (dword_180155A10 & 3) == 0 )
      goto LABEL_14;
    v6 = v2;
    sub_1800D5274(
      (unsigned int)"minkernel\\ntdll\\ldrinit.c",
      2537,
      (unsigned int)"LdrpInitShimEngine",
      0,
      "Building shim engine DLL system32 filename failed with status 0x%08lx\n",
      v6);
    goto LABEL_13;
  }
  sub_18003BE90(0LL, 16385LL, (__int64 *)Path);
  v3 = sub_18003C350((__int64)&v14, (int)Path, 0, 1, &v9);
  if ( v18 )
    RtlReleasePath(Path[0]);
  if ( v3 < 0 )
  {
    v5 = dword_180155A10;
    if ( (dword_180155A10 & 3) != 0 )
    {
      v8 = v3;
      sub_1800D5274(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        2557,
        (unsigned int)"LdrpInitShimEngine",
        0,
        "Loading the shim engine DLL failed with status 0x%08lx\n",
        v8);
LABEL_13:
      v5 = dword_180155A10;
    }
  }
  else
  {
    *((_DWORD *)v9 + 26) |= 0x100u;
    DllHandle = (PVOID)*((_QWORD *)v9 + 6);
    sub_18001A084((__int64)v9);
    sub_18003015C((char *)v9);
    v4 = sub_18006F46C();
    if ( v4 >= 0 )
    {
      BaseAddress = v19;
      v10 = 0x2000000;
      if ( ((int (__fastcall *)(int *, __int64, __int64))(__ROR8__(qword_18016B228, 64 - (MEMORY[0x7FFE0330] & 0x3Fu)) ^ MEMORY[0x7FFE0330]))(
             &v10,
             qword_18015AE50 + 72,
             a1) >= 0 )
      {
        sub_18006F0A0((PCWSTR)BaseAddress);
        if ( BaseAddress != v19 )
          RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
      }
      goto LABEL_9;
    }
    v5 = dword_180155A10;
    if ( (dword_180155A10 & 3) != 0 )
    {
      v7 = v4;
      sub_1800D5274(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        2571,
        (unsigned int)"LdrpInitShimEngine",
        0,
        "Getting the shim engine exports failed with status 0x%08lx\n",
        v7);
      goto LABEL_13;
    }
  }
LABEL_14:
  if ( (v5 & 0x10) != 0 )
    __debugbreak();
LABEL_9:
  if ( v16 != (_WORD *)BoundaryDescriptor )
    RtlDeleteBoundaryDescriptor(BoundaryDescriptor);
}
