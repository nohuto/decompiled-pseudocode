/*
 * XREFs of sub_1800EB1A0 @ 0x1800EB1A0
 * Callers:
 *     sub_1800CDEF0 @ 0x1800CDEF0 (sub_1800CDEF0.c)
 * Callees:
 *     SbSelectProcedure @ 0x18002D680 (SbSelectProcedure.c)
 *     RtlQueryResourcePolicy @ 0x18005A240 (RtlQueryResourcePolicy.c)
 *     RtlGetSuiteMask @ 0x18005A990 (RtlGetSuiteMask.c)
 *     sub_18005C774 @ 0x18005C774 (sub_18005C774.c)
 *     RtlInitializeCriticalSectionEx @ 0x18005C890 (RtlInitializeCriticalSectionEx.c)
 *     _guard_dispatch_icall_nop @ 0x18009E4A0 (_guard_dispatch_icall_nop.c)
 *     sub_1800ECD38 @ 0x1800ECD38 (sub_1800ECD38.c)
 *     sub_1800FC374 @ 0x1800FC374 (sub_1800FC374.c)
 *     sub_180102784 @ 0x180102784 (sub_180102784.c)
 *     sub_180104A3C @ 0x180104A3C (sub_180104A3C.c)
 */

__int64 __fastcall sub_1800EB1A0(__int64 a1)
{
  struct _PEB *v2; // rdi
  void (*v3)(void); // rax
  int v4; // eax
  int v5; // eax
  int v6; // ecx
  char v7; // al
  int v9; // [rsp+38h] [rbp+10h] BYREF

  qword_18015A440 = sub_18005C774();
  qword_18015A448 = sub_18005C774();
  qword_18015A450 = (__int64)&unk_1801597B0;
  v2 = NtCurrentPeb();
  if ( (dword_18015D040 & 0x10) != 0 || (unsigned int)sub_180104A3C(a1) )
  {
    byte_18015D028 |= 1u;
    v3 = (void (*)(void))qword_18015D748;
    if ( qword_18015D748
      || (v3 = (void (*)(void))SbSelectProcedure(2880154539LL, 0, (__int64)"kLsE", 1u),
          (qword_18015D748 = (__int64)v3) != 0) )
    {
      v3();
    }
  }
  v4 = dword_18015A43C;
  if ( (dword_18015A43C & 0x40) != 0 )
  {
    DueTime.QuadPart = -10000000LL;
    sub_1800ECD38(a1);
    v4 = dword_18015A43C;
  }
  dword_18015A43C = v4 | 0x18;
  if ( (int)RtlQueryResourcePolicy(0, 0, (__int64)&v9, 4LL) >= 0 && v9 > 10 )
  {
    dword_18015A43C |= 0x60u;
    DueTime.QuadPart = -10000000LL;
  }
  if ( (dword_18015D040 & 8) != 0 )
    byte_18015D028 &= ~1u;
  dword_18015D014 = sub_1800FC374();
  if ( (NtCurrentPeb()->NtGlobalFlag & 0x100000) != 0 )
  {
    v5 = dword_18015D450;
    if ( dword_18015D450 <= 1 )
      v5 = 2;
    v6 = 0;
    dword_18015D450 = v5;
  }
  else
  {
    v6 = dword_18015D014;
  }
  v7 = dword_18015D42C & 1;
  v2->MaximumNumberOfHeaps = 16;
  v2->NumberOfHeaps = 0;
  dword_18015D014 = v7 != 0 ? v6 : 0;
  v2->ProcessHeaps = (PVOID *)&unk_18015AB20;
  RtlInitializeCriticalSectionEx(&stru_18015AAC0, 0, 0x10000000u);
  qword_18015D758 = sub_18005C774();
  if ( (RtlGetSuiteMask() & 0x10000) != 0 )
  {
    dword_18015D040 |= 4u;
    qword_180159758 = 1024LL;
  }
  sub_180102784();
  return sub_180102178();
}
