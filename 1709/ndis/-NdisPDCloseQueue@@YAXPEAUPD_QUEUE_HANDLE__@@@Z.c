/*
 * XREFs of ?NdisPDCloseQueue@@YAXPEAUPD_QUEUE_HANDLE__@@@Z @ 0x1C00F5190
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C0039450 (WPP_SF_q.c)
 *     ?AcquireExclusive@KLockHolder@@QEAAXXZ @ 0x1C00BDCB4 (-AcquireExclusive@KLockHolder@@QEAAXXZ.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00BDCE8 (--1KLockHolder@@QEAA@XZ.c)
 */

void __fastcall NdisPDCloseQueue(_QWORD *P)
{
  _QWORD *v2; // rcx
  PVOID *v3; // rax
  KLockHolder v4; // [rsp+20h] [rbp-28h] BYREF

  if ( (unsigned __int8)byte_1C0098764 >= 4u )
    WPP_SF_q(0x60u, &WPP_2929d52fc6803c0d5180733d460ecc8a_Traceguids, (__int64)P);
  v4.m_State = Unlocked;
  v4.m_Lock = (KPushLockBase *)qword_1C00987F8;
  v4.m_Region.m_Entered = 0;
  KLockHolder::AcquireExclusive(&v4);
  v2 = (_QWORD *)*P;
  if ( *(_QWORD **)(*P + 8LL) != P || (v3 = (PVOID *)P[1], *v3 != P) )
    __fastfail(3u);
  *v3 = v2;
  v2[1] = v3;
  *P = 0LL;
  KLockHolder::~KLockHolder(&v4);
  ExFreePoolWithTag(P, 0);
  if ( (unsigned __int8)byte_1C0098764 >= 4u )
    WPP_SF_q(0x61u, &WPP_2929d52fc6803c0d5180733d460ecc8a_Traceguids, (__int64)P);
}
