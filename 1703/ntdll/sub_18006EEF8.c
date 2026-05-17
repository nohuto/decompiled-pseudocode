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

_WORD *__fastcall sub_18006EEF8(__int64 a1)
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
  v2 = sub_18003CBC0(&v15, (__int64)&v13);
  if ( v2 < 0 )
  {
    v6 = dword_180155A10;
    if ( (dword_180155A10 & 3) == 0 )
      goto LABEL_14;
    v7 = v2;
    sub_1800D5274(
      (unsigned int)"minkernel\\ntdll\\ldrinit.c",
      2537,
      (unsigned int)"LdrpInitShimEngine",
      0,
      "Building shim engine DLL system32 filename failed with status 0x%08lx\n",
      v7);
    goto LABEL_13;
  }
  sub_18003BE90(0LL, 16385LL, v18);
  v3 = sub_18003C350((__int64)&v15, (int)v18, 0, 1, (__int64 *)&v10);
  if ( v19 )
    RtlReleasePath(v18[0]);
  if ( v3 < 0 )
  {
    v6 = dword_180155A10;
    if ( (dword_180155A10 & 3) != 0 )
    {
      v9 = v3;
      sub_1800D5274(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        2557,
        (unsigned int)"LdrpInitShimEngine",
        0,
        "Loading the shim engine DLL failed with status 0x%08lx\n",
        v9);
LABEL_13:
      v6 = dword_180155A10;
    }
  }
  else
  {
    *(_DWORD *)(v10 + 104) |= 0x100u;
    qword_18015B310 = *(_QWORD *)(v10 + 48);
    sub_18001A084(v10);
    sub_18003015C(v10);
    v4 = sub_18006F46C();
    if ( v4 >= 0 )
    {
      SourceString = (PCWSTR)v20;
      v11 = 0x2000000;
      if ( ((int (__fastcall *)(int *, __int64, __int64))(__ROR8__(qword_18016B228, 64 - (MEMORY[0x7FFE0330] & 0x3Fu)) ^ MEMORY[0x7FFE0330]))(
             &v11,
             qword_18015AE50 + 72,
             a1) >= 0 )
      {
        sub_18006F0A0(SourceString);
        if ( SourceString != (PCWSTR)v20 )
          RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)SourceString);
      }
      goto LABEL_9;
    }
    v6 = dword_180155A10;
    if ( (dword_180155A10 & 3) != 0 )
    {
      v8 = v4;
      sub_1800D5274(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        2571,
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
    return (_WORD *)RtlDeleteBoundaryDescriptor();
  return result;
}
