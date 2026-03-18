/*
 * XREFs of ?PageInAllDevices@ADAPTER_RENDER@@AEAAXXZ @ 0x1C0177820
 * Callers:
 *     ?ResumeMemorySegments@ADAPTER_RENDER@@QEAAJXZ @ 0x1C0177D20 (-ResumeMemorySegments@ADAPTER_RENDER@@QEAAJXZ.c)
 * Callees:
 *     ??0DXGPROCESSVIDMMLOCK@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0003944 (--0DXGPROCESSVIDMMLOCK@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C009E4B0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

void __fastcall ADAPTER_RENDER::PageInAllDevices(ADAPTER_RENDER *this, __int64 a2)
{
  ADAPTER_RENDER *v2; // rbp
  _QWORD *v3; // r15
  __int64 v4; // r12
  _QWORD *i; // r14
  __int64 v6; // rdi
  __int64 v7; // rsi
  __int64 v8; // rbx
  struct _KTHREAD **Current; // rax
  int v10; // eax
  int v11; // ebx
  _QWORD *v12; // rcx
  __int64 v13; // rax
  ADAPTER_RENDER *v14; // [rsp+50h] [rbp+8h] BYREF

  v2 = this;
  v3 = (_QWORD *)((char *)this + 120);
  v4 = 2LL;
  do
  {
    for ( i = (_QWORD *)*v3; i != v3 && i; i = (_QWORD *)*i )
    {
      v6 = i[74];
      v7 = *((_QWORD *)v2 + 67);
      v8 = *((_QWORD *)v2 + 66);
      Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent((__int64)this, a2);
      DXGPROCESSVIDMMLOCK::DXGPROCESSVIDMMLOCK((DXGPROCESSVIDMMLOCK *)&v14, Current);
      v10 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)(v8 + 8) + 864LL))(v7, v6);
      this = v14;
      v11 = v10;
      if ( v14 )
      {
        v12 = (_QWORD *)((char *)v14 + 136);
        *((_QWORD *)v14 + 18) = 0LL;
        ExReleasePushLockExclusiveEx(v12, 0LL);
        KeLeaveCriticalRegion();
      }
      if ( v11 < 0 )
      {
        v13 = WdLogNewEntry5_WdAssertion(this);
        *(_QWORD *)(v13 + 24) = 2781LL;
        WdLogEvent5_WdAssertion(v13);
      }
    }
    v3 = (_QWORD *)((char *)v2 + 136);
    --v4;
  }
  while ( v4 );
}
