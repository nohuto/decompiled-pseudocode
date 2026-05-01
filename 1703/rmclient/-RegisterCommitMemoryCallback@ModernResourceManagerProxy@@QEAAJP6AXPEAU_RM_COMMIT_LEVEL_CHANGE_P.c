/*
 * XREFs of ?RegisterCommitMemoryCallback@ModernResourceManagerProxy@@QEAAJP6AXPEAU_RM_COMMIT_LEVEL_CHANGE_PAYLOAD@@@ZP6AX_K2@Z@Z @ 0x180003D40
 * Callers:
 *     ?GetAppMemoryReport@CMemoryManager@System@Windows@@UEAAJPEAPEAUIAppMemoryReport@23@@Z @ 0x1800030C0 (-GetAppMemoryReport@CMemoryManager@System@Windows@@UEAAJPEAPEAUIAppMemoryReport@23@@Z.c)
 *     ?Init@CMemoryManager@System@Windows@@CAJXZ @ 0x180003F80 (-Init@CMemoryManager@System@Windows@@CAJXZ.c)
 * Callees:
 *     ?RegisterWithServer@ModernResourceManagerProxy@@IEAAJXZ @ 0x180003AC0 (-RegisterWithServer@ModernResourceManagerProxy@@IEAAJXZ.c)
 */

__int64 __fastcall ModernResourceManagerProxy::RegisterCommitMemoryCallback(
        ModernResourceManagerProxy *this,
        void (*a2)(struct _RM_COMMIT_LEVEL_CHANGE_PAYLOAD *),
        void (*a3)(unsigned __int64, unsigned __int64))
{
  DWORD CurrentThreadId; // eax
  bool v5; // zf
  int v6; // edi

  RtlAcquireSRWLockExclusive((char *)this + 72, a2, a3);
  CurrentThreadId = GetCurrentThreadId();
  v5 = *((_QWORD *)this + 3) == 0LL;
  *((_DWORD *)this + 20) = CurrentThreadId;
  if ( !v5 || *((_QWORD *)this + 4) )
  {
    v6 = -2147483635;
    goto LABEL_7;
  }
  *((_QWORD *)this + 3) = Windows::System::CMemoryManager::OnCommitLevelChangeRoutine;
  *((_QWORD *)this + 4) = Windows::System::CMemoryManager::OnCommitLimitChangeRoutine;
  v6 = ModernResourceManagerProxy::RegisterWithServer(this);
  if ( v6 < 0 )
  {
LABEL_7:
    *((_QWORD *)this + 3) = 0LL;
    *((_QWORD *)this + 4) = 0LL;
    goto LABEL_5;
  }
  v6 = 0;
LABEL_5:
  *((_DWORD *)this + 20) = 0;
  RtlReleaseSRWLockExclusive((char *)this + 72);
  return (unsigned int)v6;
}
