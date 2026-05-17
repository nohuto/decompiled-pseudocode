/*
 * XREFs of sub_180061420 @ 0x180061420
 * Callers:
 *     sub_180091AB4 @ 0x180091AB4 (sub_180091AB4.c)
 * Callees:
 *     sub_18000EEA8 @ 0x18000EEA8 (sub_18000EEA8.c)
 *     RtlGetSuiteMask @ 0x18000FC90 (RtlGetSuiteMask.c)
 *     SbSelectProcedure @ 0x180039270 (SbSelectProcedure.c)
 *     sub_180061354 @ 0x180061354 (sub_180061354.c)
 *     sub_18006155C @ 0x18006155C (sub_18006155C.c)
 *     sub_18006161C @ 0x18006161C (sub_18006161C.c)
 *     sub_1800616E4 @ 0x1800616E4 (sub_1800616E4.c)
 *     _guard_dispatch_icall_nop @ 0x1800A8C20 (_guard_dispatch_icall_nop.c)
 */

__int64 sub_180061420()
{
  struct _PEB *v0; // rbx
  int v1; // eax
  int v2; // ecx
  char v3; // al
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // r9
  void (*v10)(void); // rax

  v0 = NtCurrentPeb();
  if ( (dword_18015BFDC & 0x10) != 0 || (unsigned int)sub_1800616E4() )
  {
    byte_18015BFBC |= 1u;
    v10 = (void (*)(void))qword_18015BF98;
    if ( qword_18015BF98
      || (v10 = (void (*)(void))SbSelectProcedure(2880154539LL, 0, (__int64)"kLsE", 1u),
          (qword_18015BF98 = (__int64)v10) != 0) )
    {
      v10();
    }
  }
  if ( (dword_18015BFDC & 8) != 0 )
    byte_18015BFBC &= ~1u;
  dword_18015BFA4 = sub_18006161C();
  if ( (NtCurrentPeb()->NtGlobalFlag & 0x100000) != 0 )
  {
    v1 = dword_18015BFD8;
    if ( dword_18015BFD8 <= 1 )
      v1 = 2;
    v2 = 0;
    dword_18015BFD8 = v1;
  }
  else
  {
    v2 = dword_18015BFA4;
  }
  v3 = dword_18015C3B8 & 1;
  v0->MaximumNumberOfHeaps = 16;
  v0->NumberOfHeaps = 0;
  dword_18015BFA4 = v3 != 0 ? v2 : 0;
  v0->ProcessHeaps = (void **)&unk_180159AE0;
  qword_18015BFA8 = sub_18000EEA8();
  if ( (RtlGetSuiteMask(v5, v4, v6, v7) & 0x10000) != 0 )
  {
    dword_18015BFDC |= 4u;
    qword_180158678 = 1024LL;
  }
  sub_180061354();
  sub_18006155C();
  return RtlInitializeCriticalSectionEx((__int64)&unk_180159A80, 0LL, 0x10000000LL, v8);
}
