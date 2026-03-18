/*
 * XREFs of VidMmTerminateProcessX @ 0x1C00FEF38
 * Callers:
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00D6150 (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     ??0DXGPROCESSVIDMMLOCK@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000E010 (--0DXGPROCESSVIDMMLOCK@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00BF530 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00CCEF0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 */

void __fastcall VidMmTerminateProcessX(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebx
  __int64 v5; // rbp
  __int64 v6; // rdi
  __int64 v7; // rsi
  __int64 v8; // rcx
  struct _KTHREAD **Current; // rax
  __int64 v10; // rcx
  __int64 v11; // [rsp+38h] [rbp+10h] BYREF

  v4 = 0;
  v5 = a1;
  v6 = 104LL;
  do
  {
    if ( *(_QWORD *)((char *)DXGGLOBAL::GetGlobal(a1, a2, a3, a4) + v6) )
    {
      v7 = *(_QWORD *)((char *)DXGGLOBAL::GetGlobal(a1, a2, a3, a4) + v6);
      Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v8);
      DXGPROCESSVIDMMLOCK::DXGPROCESSVIDMMLOCK((DXGPROCESSVIDMMLOCK *)&v11, Current);
      a1 = *(_QWORD *)(v5 + 64);
      if ( a1 )
        a1 = *(_QWORD *)(a1 + 8LL * (unsigned int)(*(_DWORD *)v7 - 1));
      if ( a1 )
      {
        (*(void (**)(void))(*(_QWORD *)(v7 + 8) + 360LL))();
        a1 = (unsigned int)(*(_DWORD *)v7 - 1);
        *(_QWORD *)(*(_QWORD *)(v5 + 64) + 8 * a1) = 0LL;
      }
      if ( v11 )
      {
        v10 = v11 + 112;
        *(_QWORD *)(v11 + 120) = 0LL;
        ExReleasePushLockExclusiveEx(v10, 0LL);
        KeLeaveCriticalRegion();
      }
    }
    ++v4;
    v6 += 8LL;
  }
  while ( v4 < 2 );
}
