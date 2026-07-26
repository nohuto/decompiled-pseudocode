/*
 * XREFs of ?NdisPDBMRemoveMemberFromDomain@@YAXPEAUNDIS_PD_BM_DOMAIN_MEMBER_HANDLE__@@@Z @ 0x1C00FBF90
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0025E10 (_guard_dispatch_icall_nop.c)
 *     ?ReleaseExclusive@KLockHolder@@QEAAXXZ @ 0x1C00BEE20 (-ReleaseExclusive@KLockHolder@@QEAAXXZ.c)
 *     ?AcquireExclusive@KLockHolder@@QEAAXXZ @ 0x1C00BEE50 (-AcquireExclusive@KLockHolder@@QEAAXXZ.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00BEEB4 (--1KLockHolder@@QEAA@XZ.c)
 */

void __fastcall NdisPDBMRemoveMemberFromDomain(_QWORD *P)
{
  KPushLockBase *v1; // rax
  _QWORD *v3; // rcx
  PVOID *v4; // rax
  __int64 v5; // rcx
  KLockHolder v6; // [rsp+20h] [rbp-28h] BYREF

  v1 = (KPushLockBase *)P[2];
  v6.m_State = Unlocked;
  v6.m_Lock = v1;
  v6.m_Region.m_Entered = 0;
  KLockHolder::AcquireExclusive(&v6);
  v3 = (_QWORD *)*P;
  if ( *(_QWORD **)(*P + 8LL) != P || (v4 = (PVOID *)P[1], *v4 != P) )
    __fastfail(3u);
  *v4 = v3;
  v3[1] = v4;
  *P = 0LL;
  P[2] = 0LL;
  v5 = P[3];
  if ( v5 )
  {
    (*(void (**)(void))(*(_QWORD *)(v5 + 8) + 8LL))();
    P[3] = 0LL;
  }
  KLockHolder::ReleaseExclusive(&v6);
  ExFreePoolWithTag(P, 0x6D41444Eu);
  KLockHolder::~KLockHolder(&v6);
}
