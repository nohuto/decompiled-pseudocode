/*
 * XREFs of ??0DXGVIRTUALMACHINE@@QEAA@PEAVDXGPROCESSVMWP@@@Z @ 0x1C01B5E78
 * Callers:
 *     ?InitializeVmwpProcess@DXGPROCESSVMWP@@QEAAJPEAXPEAVDXGPROCESS@@PEAU_EPROCESS@@2E@Z @ 0x1C01B723C (-InitializeVmwpProcess@DXGPROCESSVMWP@@QEAAJPEAXPEAVDXGPROCESS@@PEAU_EPROCESS@@2E@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C00165E0 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXG_VMBUS_CHANNEL_BASE@@QEAA@XZ @ 0x1C017A2D8 (--0DXG_VMBUS_CHANNEL_BASE@@QEAA@XZ.c)
 */

DXGVIRTUALMACHINE *__fastcall DXGVIRTUALMACHINE::DXGVIRTUALMACHINE(DXGVIRTUALMACHINE *this, struct DXGPROCESSVMWP *a2)
{
  __int64 v3; // rcx
  struct DXGGLOBAL *v4; // rsi
  __int64 v5; // rdx
  struct DXGGLOBAL *Global; // rax
  struct DXGGLOBAL *v7; // rdi
  char v8; // dl
  struct DXGGLOBAL **v9; // rcx

  *(_DWORD *)this = 0;
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 20) = -1;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  DXG_VMBUS_CHANNEL_BASE::DXG_VMBUS_CHANNEL_BASE((DXGVIRTUALMACHINE *)((char *)this + 88));
  *(_DWORD *)(v3 + 48) = 0;
  v4 = (DXGVIRTUALMACHINE *)((char *)this + 8);
  *(_QWORD *)(v3 + 56) = 0LL;
  *(_QWORD *)(v3 + 64) = 0LL;
  *((_QWORD *)this + 20) = 0LL;
  *((_QWORD *)this + 21) = 0LL;
  *((_QWORD *)this + 22) = 0LL;
  *((_QWORD *)this + 24) = 0LL;
  *((_QWORD *)this + 25) = 0LL;
  *((_DWORD *)this + 52) = 0;
  *((_QWORD *)this + 27) = 0LL;
  *((_QWORD *)this + 28) = 0LL;
  *((_QWORD *)this + 29) = 0LL;
  *((_BYTE *)this + 240) = 0;
  *((_QWORD *)this + 4) = (char *)this + 24;
  *((_QWORD *)this + 3) = (char *)this + 24;
  *((_QWORD *)this + 6) = (char *)this + 40;
  *((_QWORD *)this + 5) = (char *)this + 40;
  *((_QWORD *)this + 7) = v5;
  *((_QWORD *)this + 23) = 0LL;
  Global = DXGGLOBAL::GetGlobal(v3);
  v7 = Global;
  if ( *((struct _KTHREAD **)Global + 34) == KeGetCurrentThread() )
  {
    v8 = 0;
  }
  else
  {
    DXGPUSHLOCK::AcquireExclusive((struct DXGGLOBAL *)((char *)Global + 264));
    v8 = 1;
  }
  v9 = (struct DXGGLOBAL **)*((_QWORD *)v7 + 154);
  if ( *v9 != (struct DXGGLOBAL *)((char *)v7 + 1224) )
    __fastfail(3u);
  *(_QWORD *)v4 = (char *)v7 + 1224;
  *((_QWORD *)this + 2) = v9;
  *v9 = v4;
  *((_QWORD *)v7 + 154) = v4;
  ++*((_DWORD *)v7 + 310);
  if ( v8 )
  {
    *((_QWORD *)v7 + 34) = 0LL;
    ExReleasePushLockExclusiveEx((char *)v7 + 264, 0LL);
    KeLeaveCriticalRegion();
  }
  return this;
}
