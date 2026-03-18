/*
 * XREFs of VidMmTerminateProcessX @ 0x1C00C0764
 * Callers:
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C00F71CC (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 * Callees:
 *     ??0DXGPROCESSVIDMMLOCK@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0006078 (--0DXGPROCESSVIDMMLOCK@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00E5A90 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

void __fastcall VidMmTerminateProcessX(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 v2; // rbp
  __int64 v3; // rdi
  __int64 v4; // rsi
  struct _KTHREAD **Current; // rax
  __int64 v6; // rcx
  __int64 v7; // [rsp+38h] [rbp+10h] BYREF

  v1 = 0;
  v2 = a1;
  v3 = 104LL;
  do
  {
    if ( *(_QWORD *)((char *)DXGGLOBAL::GetGlobal(a1) + v3) )
    {
      v4 = *(_QWORD *)((char *)DXGGLOBAL::GetGlobal(a1) + v3);
      Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
      DXGPROCESSVIDMMLOCK::DXGPROCESSVIDMMLOCK((DXGPROCESSVIDMMLOCK *)&v7, Current);
      a1 = *(_QWORD *)(v2 + 72);
      if ( a1 )
        a1 = *(_QWORD *)(a1 + 8LL * (unsigned int)(*(_DWORD *)v4 - 1));
      if ( a1 )
      {
        (*(void (**)(void))(*(_QWORD *)(v4 + 8) + 360LL))();
        a1 = (unsigned int)(*(_DWORD *)v4 - 1);
        *(_QWORD *)(*(_QWORD *)(v2 + 72) + 8 * a1) = 0LL;
      }
      if ( v7 )
      {
        v6 = v7 + 144;
        *(_QWORD *)(v7 + 152) = 0LL;
        ExReleasePushLockExclusiveEx(v6, 0LL);
        KeLeaveCriticalRegion();
      }
    }
    ++v1;
    v3 += 8LL;
  }
  while ( v1 < 2 );
}
