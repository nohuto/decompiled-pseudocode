/*
 * XREFs of ?NdisPDCleanup@@YAXPEAUPD_CLIENT_HANDLE__@@@Z @ 0x1C00EBB00
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C003C9C8 (WPP_SF_q.c)
 *     ?AcquireExclusive@KLockHolder@@QEAAXXZ @ 0x1C00B502C (-AcquireExclusive@KLockHolder@@QEAAXXZ.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00B5090 (--1KLockHolder@@QEAA@XZ.c)
 *     ?ndisPDDereferenceClientDriver@@YAXPEAX@Z @ 0x1C00EE0C4 (-ndisPDDereferenceClientDriver@@YAXPEAX@Z.c)
 */

void __fastcall NdisPDCleanup(unsigned __int16 *P)
{
  _QWORD *v2; // rcx
  PVOID *v3; // rax
  __int64 v4; // rcx
  KLockHolder v5; // [rsp+20h] [rbp-28h] BYREF

  if ( (unsigned __int8)byte_1C0092624 >= 4u )
    WPP_SF_q(0x15u, &WPP_2929d52fc6803c0d5180733d460ecc8a_Traceguids, (__int64)P);
  v5.m_State = Unlocked;
  v5.m_Lock = (KPushLockBase *)qword_1C00926D0;
  v5.m_Region.m_Entered = 0;
  KLockHolder::AcquireExclusive(&v5);
  v2 = *(_QWORD **)P;
  v3 = (PVOID *)*((_QWORD *)P + 1);
  if ( *(unsigned __int16 **)(*(_QWORD *)P + 8LL) != P || *v3 != P )
    __fastfail(3u);
  *v3 = v2;
  v2[1] = v3;
  v4 = qword_1C00926D0;
  *(_QWORD *)P = 0LL;
  RtlClearBit((PRTL_BITMAP)(v4 + 24), P[52]);
  KLockHolder::~KLockHolder(&v5);
  ndisPDDereferenceClientDriver(*((void **)P + 10));
  *((_QWORD *)P + 10) = 0LL;
  ExFreePoolWithTag(P, 0x6341444Eu);
  if ( (unsigned __int8)byte_1C0092624 >= 4u )
    WPP_SF_q(0x16u, &WPP_2929d52fc6803c0d5180733d460ecc8a_Traceguids, (__int64)P);
}
