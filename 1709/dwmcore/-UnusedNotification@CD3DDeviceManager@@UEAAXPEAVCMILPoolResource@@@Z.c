/*
 * XREFs of ?UnusedNotification@CD3DDeviceManager@@UEAAXPEAVCMILPoolResource@@@Z @ 0x180019FE0
 * Callers:
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x180081030 (-Release@CMILPoolResource@@UEAAKXZ.c)
 * Callees:
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x1800106C4 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?ScheduleCompositionPass@CPartitionVerticalBlankScheduler@@UEAAXKW4ScheduledCompositionPassReason@@@Z @ 0x180011520 (-ScheduleCompositionPass@CPartitionVerticalBlankScheduler@@UEAAXKW4ScheduledCompositionPassReaso.c)
 *     ?GetCurrentFrameId@@YA_KXZ @ 0x1800BE2A8 (-GetCurrentFrameId@@YA_KXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CD3DDeviceManager::UnusedNotification(CD3DDeviceManager *this, struct CMILPoolResource *a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  unsigned __int64 CurrentFrameId; // rax
  struct CCrossThreadComposition *v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rcx
  void (__fastcall *v10)(__int64, ULONG, unsigned int); // rax
  struct _RTL_CRITICAL_SECTION *v11; // [rsp+30h] [rbp+8h] BYREF

  v11 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 24);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 24));
  LODWORD(v4) = *((_DWORD *)this + 38);
  if ( (_DWORD)v4 )
  {
    while ( 1 )
    {
      v4 = (unsigned int)(v4 - 1);
      v5 = *(_QWORD *)(*((_QWORD *)this + 16) + 24 * v4);
      if ( v5 == (((unsigned __int64)a2 - 472) & -(__int64)(a2 != 0LL)) )
        break;
      if ( !(_DWORD)v4 )
        goto LABEL_7;
    }
    if ( *(int *)(v5 + 888) >= 0 )
    {
      CurrentFrameId = GetCurrentFrameId();
      v7 = g_pComposition;
      *(_QWORD *)(v8 + 1032) = CurrentFrameId + 1;
      if ( v7 )
      {
        v9 = *((_QWORD *)v7 + 66);
        v10 = *(void (__fastcall **)(__int64, ULONG, unsigned int))(*(_QWORD *)v9 + 104LL);
        if ( v10 == CPartitionVerticalBlankScheduler::ScheduleCompositionPass )
          CPartitionVerticalBlankScheduler::ScheduleCompositionPass(v9, 0x3E8u, 0x20000u);
        else
          v10(v9, 1000LL, 0x20000u);
      }
    }
  }
LABEL_7:
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v11);
}
