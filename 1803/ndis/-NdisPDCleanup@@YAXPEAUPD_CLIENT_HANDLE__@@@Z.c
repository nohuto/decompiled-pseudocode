/*
 * XREFs of ?NdisPDCleanup@@YAXPEAUPD_CLIENT_HANDLE__@@@Z @ 0x1C00F7CB0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C003A83C (WPP_SF_q.c)
 *     ?AcquireExclusive@KLockHolder@@QEAAXXZ @ 0x1C00BEE50 (-AcquireExclusive@KLockHolder@@QEAAXXZ.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00BEEB4 (--1KLockHolder@@QEAA@XZ.c)
 *     ?ndisPDDereferenceClientDriver@@YAXPEAX@Z @ 0x1C00FA294 (-ndisPDDereferenceClientDriver@@YAXPEAX@Z.c)
 */

void __fastcall NdisPDCleanup(PVOID **P)
{
  PVOID *v2; // rcx
  PVOID *v3; // rax
  __int64 v4; // rcx
  KLockHolder v5; // [rsp+20h] [rbp-28h] BYREF

  if ( (unsigned __int8)byte_1C0099624 >= 4u )
    WPP_SF_q(0x15u, &WPP_a3b9db0bffd8342d0da72f7b6cff8d15_Traceguids, (__int64)P);
  v5.m_State = Unlocked;
  v5.m_Lock = (KPushLockBase *)qword_1C00996C8;
  v5.m_Region.m_Entered = 0;
  KLockHolder::AcquireExclusive(&v5);
  v2 = *P;
  if ( (*P)[1] != P || (v3 = P[1], *v3 != P) )
    __fastfail(3u);
  *v3 = v2;
  v2[1] = v3;
  v4 = qword_1C00996C8;
  *P = 0LL;
  RtlClearBit((PRTL_BITMAP)(v4 + 24), *((unsigned __int16 *)P + 52));
  KLockHolder::~KLockHolder(&v5);
  ndisPDDereferenceClientDriver(P[10]);
  P[10] = 0LL;
  ExFreePoolWithTag(P, 0x6341444Eu);
  if ( (unsigned __int8)byte_1C0099624 >= 4u )
    WPP_SF_q(0x16u, &WPP_a3b9db0bffd8342d0da72f7b6cff8d15_Traceguids, (__int64)P);
}
