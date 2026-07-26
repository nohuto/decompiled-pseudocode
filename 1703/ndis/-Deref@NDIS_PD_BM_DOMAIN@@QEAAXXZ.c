/*
 * XREFs of ?Deref@NDIS_PD_BM_DOMAIN@@QEAAXXZ @ 0x1C00EB214
 * Callers:
 *     ?ndisPDCleanupPDBlock@@YAXPEAU_NDIS_PD_BLOCK@@@Z @ 0x1C00EDFCC (-ndisPDCleanupPDBlock@@YAXPEAU_NDIS_PD_BLOCK@@@Z.c)
 *     ?ndisPDInitializeMiniportBufferManagement@@YAJPEAU_NDIS_PD_BLOCK@@@Z @ 0x1C00EE1A0 (-ndisPDInitializeMiniportBufferManagement@@YAJPEAU_NDIS_PD_BLOCK@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0028760 (_guard_dispatch_icall_nop.c)
 *     ?ReleaseExclusive@KLockHolder@@QEAAXXZ @ 0x1C00B4FFC (-ReleaseExclusive@KLockHolder@@QEAAXXZ.c)
 *     ?AcquireExclusive@KLockHolder@@QEAAXXZ @ 0x1C00B502C (-AcquireExclusive@KLockHolder@@QEAAXXZ.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00B5090 (--1KLockHolder@@QEAA@XZ.c)
 */

void __fastcall NDIS_PD_BM_DOMAIN::Deref(char *P)
{
  char *v3; // rax
  __int64 v4; // rdx
  char **v5; // rcx
  KLockHolder v6; // [rsp+20h] [rbp-28h] BYREF

  v6.m_State = Unlocked;
  v6.m_Lock = (KPushLockBase *)qword_1C00926D0;
  v6.m_Region.m_Entered = 0;
  KLockHolder::AcquireExclusive(&v6);
  if ( (*(_DWORD *)P)-- == 1 )
  {
    v3 = P + 8;
    if ( *((_QWORD *)P + 1) )
    {
      v4 = *(_QWORD *)v3;
      v5 = (char **)*((_QWORD *)P + 2);
      if ( *(char **)(*(_QWORD *)v3 + 8LL) != v3 || *v5 != v3 )
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
