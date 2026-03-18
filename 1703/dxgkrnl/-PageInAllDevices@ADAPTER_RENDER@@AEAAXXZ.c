/*
 * XREFs of ?PageInAllDevices@ADAPTER_RENDER@@AEAAXXZ @ 0x1C0173D34
 * Callers:
 *     ?ResumeMemorySegments@ADAPTER_RENDER@@QEAAJXZ @ 0x1C0174230 (-ResumeMemorySegments@ADAPTER_RENDER@@QEAAJXZ.c)
 * Callees:
 *     ??0DXGPROCESSVIDMMLOCK@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000E010 (--0DXGPROCESSVIDMMLOCK@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00BF530 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

void __fastcall ADAPTER_RENDER::PageInAllDevices(ADAPTER_RENDER *this)
{
  ADAPTER_RENDER *v1; // rbp
  _QWORD *v2; // r15
  __int64 v3; // r12
  _QWORD *i; // r14
  __int64 v5; // rdi
  __int64 v6; // rsi
  __int64 v7; // rbx
  struct _KTHREAD **Current; // rax
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  int v13; // ebx
  __int64 v14; // rax
  ADAPTER_RENDER *v15; // [rsp+50h] [rbp+8h] BYREF

  v1 = this;
  v2 = (_QWORD *)((char *)this + 120);
  v3 = 2LL;
  do
  {
    for ( i = (_QWORD *)*v2; i != v2 && i; i = (_QWORD *)*i )
    {
      v5 = i[74];
      v6 = *((_QWORD *)v1 + 55);
      v7 = *((_QWORD *)v1 + 54);
      Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent((__int64)this);
      DXGPROCESSVIDMMLOCK::DXGPROCESSVIDMMLOCK((DXGPROCESSVIDMMLOCK *)&v15, Current);
      v9 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)(v7 + 8) + 864LL))(v6, v5);
      this = v15;
      v13 = v9;
      if ( v15 )
      {
        *((_QWORD *)v15 + 15) = 0LL;
        ExReleasePushLockExclusiveEx((char *)this + 112, 0LL);
        KeLeaveCriticalRegion();
      }
      if ( v13 < 0 )
      {
        v14 = WdLogNewEntry5_WdAssertion(this, v10, v11, v12);
        *(_QWORD *)(v14 + 24) = 2649LL;
        WdLogEvent5_WdAssertion(v14);
      }
    }
    v2 = (_QWORD *)((char *)v1 + 136);
    --v3;
  }
  while ( v3 );
}
