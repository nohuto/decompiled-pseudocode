/*
 * XREFs of ?CloseAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@EPEAPEAU_VIDMM_LOCAL_ALLOC@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAPEAU_KEVENT@@@Z @ 0x1C006433C
 * Callers:
 *     VidMmCloseAllocation @ 0x1C0013030 (VidMmCloseAllocation.c)
 *     VidMmTryCloseAllocation @ 0x1C00137E0 (VidMmTryCloseAllocation.c)
 * Callees:
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0002090 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     McTemplateK0q @ 0x1C0016F44 (McTemplateK0q.c)
 *     ?CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAU_VIDMM_LOCAL_ALLOC@@EU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAPEAU_KEVENT@@@Z @ 0x1C0061B40 (-CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAU_VIDMM_LOCAL_ALLOC@@EU_D3DDDICB_D.c)
 */

__int64 __fastcall VIDMM_GLOBAL::CloseAllocation(
        VIDMM_GLOBAL *this,
        struct _EX_RUNDOWN_REF *a2,
        char a3,
        struct _VIDMM_LOCAL_ALLOC **a4,
        struct _D3DDDICB_DESTROYALLOCATION2FLAGS a5,
        struct _KEVENT **a6)
{
  struct DXGPROCESS *v10; // rbx
  __int64 v11; // rcx
  __int64 v12; // r8
  int v13; // eax
  unsigned int v14; // edi
  int v16; // r9d
  struct DXGPROCESS *Current; // [rsp+58h] [rbp+10h]

  ExWaitForRundownProtectionRelease(a2 + 29);
  Current = DXGPROCESS::GetCurrent();
  v10 = Current;
  if ( Current )
  {
    if ( *((struct _KTHREAD **)Current + 18) == KeGetCurrentThread() )
    {
      v10 = 0LL;
    }
    else
    {
      KeEnterCriticalRegion();
      if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx((char *)Current + 136, 0LL) )
      {
        if ( bTracingEnabled )
        {
          v16 = *((_DWORD *)Current + 38);
          if ( v16 != -1 && ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
            McTemplateK0q(v11, (__int64)&EventBlockThread, v12, v16);
        }
        ExAcquirePushLockExclusiveEx((char *)Current + 136, 0LL);
      }
      *((_QWORD *)Current + 18) = KeGetCurrentThread();
      v10 = Current;
    }
  }
  if ( a4 )
    *a4 = 0LL;
  v13 = VIDMM_GLOBAL::CloseOneAllocation(this, (struct _KEVENT *)a2, a4, a3, a5, a6);
  v14 = 0;
  if ( v13 < 0 )
    v14 = -1071775486;
  if ( v10 )
  {
    *((_QWORD *)v10 + 18) = 0LL;
    ExReleasePushLockExclusiveEx((char *)v10 + 136, 0LL);
    KeLeaveCriticalRegion();
  }
  return v14;
}
