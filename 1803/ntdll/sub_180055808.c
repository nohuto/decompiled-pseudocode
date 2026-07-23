/*
 * XREFs of sub_180055808 @ 0x180055808
 * Callers:
 *     sub_1800CDEF0 @ 0x1800CDEF0 (sub_1800CDEF0.c)
 * Callees:
 *     RtlDeleteBoundaryDescriptor @ 0x180013CA0 (RtlDeleteBoundaryDescriptor.c)
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 *     sub_18001F5FC @ 0x18001F5FC (sub_18001F5FC.c)
 *     RtlReleasePath @ 0x1800258A0 (RtlReleasePath.c)
 *     sub_18003B7AC @ 0x18003B7AC (sub_18003B7AC.c)
 *     sub_18003BE00 @ 0x18003BE00 (sub_18003BE00.c)
 *     sub_180042054 @ 0x180042054 (sub_180042054.c)
 *     sub_1800559B0 @ 0x1800559B0 (sub_1800559B0.c)
 *     sub_180055D80 @ 0x180055D80 (sub_180055D80.c)
 *     sub_180059158 @ 0x180059158 (sub_180059158.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009E4A0 (_guard_dispatch_icall_nop.c)
 *     sub_1800CA554 @ 0x1800CA554 (sub_1800CA554.c)
 */

void __fastcall sub_180055808(__int64 a1)
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
  v2 = sub_18003BE00(&v14, (__int64)&v12);
  if ( v2 < 0 )
  {
    v5 = dword_180156A70;
    if ( (dword_180156A70 & 3) == 0 )
      goto LABEL_14;
    v6 = v2;
    sub_1800CA554(
      (unsigned int)"minkernel\\ntdll\\ldrinit.c",
      2512,
      (unsigned int)"LdrpInitShimEngine",
      0,
      "Building shim engine DLL system32 filename failed with status 0x%08lx\n",
      v6);
    goto LABEL_13;
  }
  sub_180042054(0LL, (const WCHAR *)0x4001, (const WCHAR **)Path);
  v3 = sub_18003B7AC((__int64)&v14, (__int64)Path, 0, 1, &v9);
  if ( v18 )
    RtlReleasePath(Path[0]);
  if ( v3 < 0 )
  {
    v5 = dword_180156A70;
    if ( (dword_180156A70 & 3) != 0 )
    {
      v8 = v3;
      sub_1800CA554(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        2532,
        (unsigned int)"LdrpInitShimEngine",
        0,
        "Loading the shim engine DLL failed with status 0x%08lx\n",
        v8);
LABEL_13:
      v5 = dword_180156A70;
    }
  }
  else
  {
    *((_DWORD *)v9 + 26) |= 0x100u;
    DllHandle = (PVOID)*((_QWORD *)v9 + 6);
    sub_180059158(v9);
    sub_18001F5FC((char *)v9);
    v4 = sub_180055D80();
    if ( v4 >= 0 )
    {
      BaseAddress = v19;
      v10 = 0x2000000;
      if ( ((int (__fastcall *)(int *, __int64, __int64))(__ROR8__(qword_18016F238, 64 - (MEMORY[0x7FFE0330] & 0x3Fu)) ^ MEMORY[0x7FFE0330]))(
             &v10,
             qword_18015BF88 + 72,
             a1) >= 0 )
      {
        sub_1800559B0((PCWSTR)BaseAddress);
        if ( BaseAddress != v19 )
          RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
      }
      goto LABEL_9;
    }
    v5 = dword_180156A70;
    if ( (dword_180156A70 & 3) != 0 )
    {
      v7 = v4;
      sub_1800CA554(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        2546,
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
