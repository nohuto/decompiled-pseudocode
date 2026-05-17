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

_WORD *__fastcall sub_180055808(__int64 a1)
{
  int v2; // eax
  int v3; // ebx
  int v4; // eax
  _WORD *result; // rax
  char v6; // cl
  int v7; // [rsp+28h] [rbp-D8h]
  int v8; // [rsp+28h] [rbp-D8h]
  int v9; // [rsp+28h] [rbp-D8h]
  unsigned __int64 v10; // [rsp+30h] [rbp-D0h] BYREF
  int v11; // [rsp+38h] [rbp-C8h] BYREF
  PCWSTR SourceString; // [rsp+40h] [rbp-C0h]
  int v13; // [rsp+48h] [rbp-B8h] BYREF
  const wchar_t *v14; // [rsp+50h] [rbp-B0h]
  int v15; // [rsp+60h] [rbp-A0h] BYREF
  _WORD *v16; // [rsp+68h] [rbp-98h]
  _WORD v17[128]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v18[15]; // [rsp+170h] [rbp+70h] BYREF
  char v19; // [rsp+1ECh] [rbp+ECh]
  _BYTE v20[512]; // [rsp+1F0h] [rbp+F0h] BYREF

  v13 = 1572886;
  v14 = L"apphelp.dll";
  v15 = 0x1000000;
  v16 = v17;
  v17[0] = 0;
  v2 = sub_18003BE00(&v15, (__int64)&v13);
  if ( v2 < 0 )
  {
    v6 = dword_180156A70;
    if ( (dword_180156A70 & 3) == 0 )
      goto LABEL_14;
    v7 = v2;
    sub_1800CA554(
      (unsigned int)"minkernel\\ntdll\\ldrinit.c",
      2512,
      (unsigned int)"LdrpInitShimEngine",
      0,
      "Building shim engine DLL system32 filename failed with status 0x%08lx\n",
      v7);
    goto LABEL_13;
  }
  sub_180042054(0LL, 16385LL, v18);
  v3 = sub_18003B7AC((__int64)&v15, (int)v18, 0, 1, (__int64 *)&v10);
  if ( v19 )
    RtlReleasePath(v18[0]);
  if ( v3 < 0 )
  {
    v6 = dword_180156A70;
    if ( (dword_180156A70 & 3) != 0 )
    {
      v9 = v3;
      sub_1800CA554(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        2532,
        (unsigned int)"LdrpInitShimEngine",
        0,
        "Loading the shim engine DLL failed with status 0x%08lx\n",
        v9);
LABEL_13:
      v6 = dword_180156A70;
    }
  }
  else
  {
    *(_DWORD *)(v10 + 104) |= 0x100u;
    qword_18015C340 = *(_QWORD *)(v10 + 48);
    sub_180059158(v10);
    sub_18001F5FC(v10);
    v4 = sub_180055D80();
    if ( v4 >= 0 )
    {
      SourceString = (PCWSTR)v20;
      v11 = 0x2000000;
      if ( ((int (__fastcall *)(int *, __int64, __int64))(__ROR8__(qword_18016F238, 64 - (MEMORY[0x7FFE0330] & 0x3Fu)) ^ MEMORY[0x7FFE0330]))(
             &v11,
             qword_18015BF88 + 72,
             a1) >= 0 )
      {
        sub_1800559B0(SourceString);
        if ( SourceString != (PCWSTR)v20 )
          RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)SourceString);
      }
      goto LABEL_9;
    }
    v6 = dword_180156A70;
    if ( (dword_180156A70 & 3) != 0 )
    {
      v8 = v4;
      sub_1800CA554(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        2546,
        (unsigned int)"LdrpInitShimEngine",
        0,
        "Getting the shim engine exports failed with status 0x%08lx\n",
        v8);
      goto LABEL_13;
    }
  }
LABEL_14:
  if ( (v6 & 0x10) != 0 )
    __debugbreak();
LABEL_9:
  result = v17;
  if ( v17 != v16 )
    return (_WORD *)RtlDeleteBoundaryDescriptor((__int64)v16);
  return result;
}
