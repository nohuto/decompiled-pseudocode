/*
 * XREFs of ?Deref@NDIS_PD_BM_DOMAIN@@QEAAXXZ @ 0x1C00F47D4
 * Callers:
 *     ?ndisPDCleanupPDBlock@@YAXPEAU_NDIS_PD_BLOCK@@@Z @ 0x1C00F75A4 (-ndisPDCleanupPDBlock@@YAXPEAU_NDIS_PD_BLOCK@@@Z.c)
 *     ?ndisPDInitializeMiniportBufferManagement@@YAJPEAU_NDIS_PD_BLOCK@@@Z @ 0x1C00F7778 (-ndisPDInitializeMiniportBufferManagement@@YAJPEAU_NDIS_PD_BLOCK@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0024F10 (_guard_dispatch_icall_nop.c)
 *     ?ReleaseExclusive@KLockHolder@@QEAAXXZ @ 0x1C00BDC84 (-ReleaseExclusive@KLockHolder@@QEAAXXZ.c)
 *     ?AcquireExclusive@KLockHolder@@QEAAXXZ @ 0x1C00BDCB4 (-AcquireExclusive@KLockHolder@@QEAAXXZ.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00BDCE8 (--1KLockHolder@@QEAA@XZ.c)
 */

void __fastcall NDIS_PD_BM_DOMAIN::Deref(char *P)
{
  char *v3; // rax
  __int64 v4; // rdx
  char **v5; // rcx
  KLockHolder v6; // [rsp+20h] [rbp-28h] BYREF

  v6.m_State = Unlocked;
  v6.m_Lock = (KPushLockBase *)qword_1C00987F8;
  v6.m_Region.m_Entered = 0;
  KLockHolder::AcquireExclusive(&v6);
  if ( (*(_DWORD *)P)-- == 1 )
  {
    v3 = P + 8;
    if ( *((_QWORD *)P + 1) )
    {
      v4 = *(_QWORD *)v3;
      if ( *(char **)(*(_QWORD *)v3 + 8LL) != v3 || (v5 = (char **)*((_QWORD *)P + 2), *v5 != v3) )
        __fastfail(3u);
      *v5 = (char *)v4;
      *(_QWORD *)(v4 + 8) = v5;
      *(_QWORD *)v3 = 0LL;
    }
    KLockHolder::ReleaseExclusive(&v6);
    if ( *((_QWORD *)P + 4) )
    {
      (*((void (**)(void))P + 10))();
      *((_QWORD *)P + 4) = 0LL;
    }
    ExFreePoolWithTag(P, 0x6D41444Eu);
  }
  KLockHolder::~KLockHolder(&v6);
}
