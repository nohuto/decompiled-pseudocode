/*
 * XREFs of ?VidMmQueryProcessStatistics@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAVDXGPROCESS@@PEAU_D3DKMT_QUERYSTATISTICS_PROCESS_INFORMATION@@@Z @ 0x1C0023A60
 * Callers:
 *     ?QueryProcessStatistics@@YAJPEAU_D3DKMT_QUERYSTATISTICS@@PEAVDXGADAPTER@@PEAVDXGPROCESS@@@Z @ 0x1C017F194 (-QueryProcessStatistics@@YAJPEAU_D3DKMT_QUERYSTATISTICS@@PEAVDXGADAPTER@@PEAVDXGPROCESS@@@Z.c)
 * Callees:
 *     ??0DXGPROCESSVIDMMLOCK@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0003944 (--0DXGPROCESSVIDMMLOCK@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C009E4B0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall VIDMM_EXPORT::VidMmQueryProcessStatistics(
        VIDMM_EXPORT *this,
        struct VIDMM_GLOBAL *a2,
        struct DXGPROCESS *a3,
        struct _D3DKMT_QUERYSTATISTICS_PROCESS_INFORMATION *a4)
{
  struct _KTHREAD **Current; // rax
  __int64 v9; // rdx
  unsigned int v10; // ebx
  __int64 v11; // rcx
  __int64 v13; // [rsp+30h] [rbp+8h] BYREF

  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  DXGPROCESSVIDMMLOCK::DXGPROCESSVIDMMLOCK((DXGPROCESSVIDMMLOCK *)&v13, Current);
  v9 = *((_QWORD *)a3 + 8);
  if ( v9 )
    v9 = *(_QWORD *)(v9 + 8LL * (unsigned int)(*(_DWORD *)this - 1));
  v10 = (*(__int64 (__fastcall **)(struct VIDMM_GLOBAL *, __int64, struct _D3DKMT_QUERYSTATISTICS_PROCESS_INFORMATION *))(*((_QWORD *)this + 1) + 296LL))(
          a2,
          v9,
          a4);
  if ( v13 )
  {
    v11 = v13 + 136;
    *(_QWORD *)(v13 + 144) = 0LL;
    ExReleasePushLockExclusiveEx(v11, 0LL);
    KeLeaveCriticalRegion();
  }
  return v10;
}
