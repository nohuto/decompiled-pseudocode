/*
 * XREFs of ?VidMmPurgeAllSegments@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@U_VIDMM_PURGE_FLAGS@@PEAVDXGPROCESS@@@Z @ 0x1C00011E8
 * Callers:
 *     ?PurgeSegments@ADAPTER_RENDER@@AEAAXU_VIDMM_PURGE_FLAGS@@PEAVDXGPROCESS@@@Z @ 0x1C009C000 (-PurgeSegments@ADAPTER_RENDER@@AEAAXU_VIDMM_PURGE_FLAGS@@PEAVDXGPROCESS@@@Z.c)
 * Callees:
 *     ??0DXGPROCESSVIDMMLOCK@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0006078 (--0DXGPROCESSVIDMMLOCK@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00E5A90 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

void __fastcall VIDMM_EXPORT::VidMmPurgeAllSegments(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  struct DXGPROCESS *Current; // rax
  __int64 v9; // r8
  __int64 v10; // r8
  __int64 v11; // rcx
  __int64 v12; // [rsp+30h] [rbp+8h] BYREF

  Current = DXGPROCESS::GetCurrent();
  DXGPROCESSVIDMMLOCK::DXGPROCESSVIDMMLOCK((DXGPROCESSVIDMMLOCK *)&v12, Current);
  if ( a4 && (v9 = *(_QWORD *)(a4 + 72)) != 0 )
    v10 = *(_QWORD *)(v9 + 8LL * (unsigned int)(*(_DWORD *)a1 - 1));
  else
    v10 = 0LL;
  (*(void (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)(a1 + 8) + 80LL))(a2, a3, v10);
  if ( v12 )
  {
    v11 = v12 + 144;
    *(_QWORD *)(v12 + 152) = 0LL;
    ExReleasePushLockExclusiveEx(v11, 0LL);
    KeLeaveCriticalRegion();
  }
}
