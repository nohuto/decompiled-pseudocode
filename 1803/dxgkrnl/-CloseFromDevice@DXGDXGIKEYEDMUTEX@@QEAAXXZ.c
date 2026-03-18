/*
 * XREFs of ?CloseFromDevice@DXGDXGIKEYEDMUTEX@@QEAAXXZ @ 0x1C01C84D8
 * Callers:
 *     ?ProcessPendingDestroy@OUTPUTDUPL_MGR@@QEAAXPEAVDXGDEVICE@@H@Z @ 0x1C00E2EC0 (-ProcessPendingDestroy@OUTPUTDUPL_MGR@@QEAAXPEAVDXGDEVICE@@H@Z.c)
 *     ??1DXGDXGIKEYEDMUTEX@@QEAA@XZ @ 0x1C01C7EF0 (--1DXGDXGIKEYEDMUTEX@@QEAA@XZ.c)
 *     ?OpenForDevice@DXGDXGIKEYEDMUTEX@@QEAAJPEAVDXGDEVICE@@@Z @ 0x1C01CA6D4 (-OpenForDevice@DXGDXGIKEYEDMUTEX@@QEAAJPEAVDXGDEVICE@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0015370 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C00153C4 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0016110 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00E5A90 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C00F2480 (-DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVIC.c)
 *     ?DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z @ 0x1C00F9F84 (-DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z.c)
 *     ?CloseLocalMutex@DXGDXGIKEYEDMUTEX@@QEAAXW4_OUTPUTDUPL_MUTEX_TYPE@@H@Z @ 0x1C01C8750 (-CloseLocalMutex@DXGDXGIKEYEDMUTEX@@QEAAXW4_OUTPUTDUPL_MUTEX_TYPE@@H@Z.c)
 */

void __fastcall DXGDXGIKEYEDMUTEX::CloseFromDevice(DXGDXGIKEYEDMUTEX *this, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rcx
  __int64 v13; // rcx
  struct DXGPROCESS *Current; // rbx
  __int64 v15; // rax
  __int64 v16; // rcx
  unsigned int v17; // r8d
  unsigned int v18; // r9d
  __int64 v19; // rax
  __int64 v20; // r10
  int v21; // edx
  struct DXGRESOURCE *v22; // rsi
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // r9
  int v26; // edx
  unsigned int v27; // ebx
  unsigned int v28; // eax
  struct DXGSYNCOBJECT *v29; // rsi
  PERESOURCE *Global; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  _QWORD *v33; // rbx
  __int64 v34; // rdx
  __int64 v35; // rcx
  _BYTE v36[40]; // [rsp+30h] [rbp-28h] BYREF

  v5 = (_QWORD *)WdLogNewEntry5_WdTrace(this, a2, a3, a4);
  v5[3] = this;
  v5[4] = *((_QWORD *)this + 1);
  v7 = *((_QWORD *)this + 4);
  v5[5] = v7;
  if ( !*((_QWORD *)this + 1) )
    return;
  if ( *((_QWORD *)this + 4) != PsGetCurrentProcess(v6, v7)
    || !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 1) + 16LL) + 16LL)) )
  {
    v33 = (_QWORD *)WdLogNewEntry5_WdTrace(v9, v8, v10, v11);
    v33[3] = PsGetCurrentProcess(v35, v34);
    v33[4] = *((_QWORD *)this + 4);
    v33[5] = *((_QWORD *)this + 1);
    return;
  }
  v12 = *((_QWORD *)this + 1);
  if ( !*(_DWORD *)(v12 + 72) )
    ExIsResourceAcquiredExclusiveLite(*(PERESOURCE *)(v12 + 104));
  if ( *((_DWORD *)this + 22) )
  {
    Current = DXGPROCESS::GetCurrent(v12, v8);
    if ( !Current )
    {
      v15 = WdLogNewEntry5_WdAssertion(v13);
      *(_QWORD *)(v15 + 24) = 577LL;
      WdLogEvent5_WdAssertion(v15);
    }
    DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE(
      (DXGHANDLETABLELOCKEXCLUSIVE *)v36,
      (struct _KTHREAD **)Current);
    v17 = *((_DWORD *)this + 22);
    v18 = *((_DWORD *)Current + 62);
    v19 = (v17 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v19 < v18
      && (v20 = *((_QWORD *)Current + 29),
          v16 = (v17 >> 25) & 0x60,
          v21 = *(_DWORD *)(v20 + 16 * v19 + 8),
          ((v17 >> 25) & 0x60) == (*(_BYTE *)(v20 + 16 * v19 + 8) & 0x60))
      && (v21 & 0x2000) == 0
      && (v21 & 0x1F) == 4 )
    {
      v22 = *(struct DXGRESOURCE **)(v20 + 16LL * (unsigned int)v19);
      if ( v22 )
        goto LABEL_17;
    }
    else
    {
      v22 = 0LL;
    }
    v23 = WdLogNewEntry5_WdAssertion(v16);
    *(_QWORD *)(v23 + 24) = 583LL;
    WdLogEvent5_WdAssertion(v23);
    v17 = *((_DWORD *)this + 22);
    v18 = *((_DWORD *)Current + 62);
LABEL_17:
    v24 = (v17 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v24 < v18 )
    {
      v25 = *((_QWORD *)Current + 29);
      v26 = *(_DWORD *)(v25 + 16 * v24 + 8);
      if ( ((v17 >> 25) & 0x60) == (*(_BYTE *)(v25 + 16 * v24 + 8) & 0x60) && (v26 & 0x2000) == 0 && (v26 & 0x1F) != 0 )
        *(_DWORD *)(v25 + 16LL * ((v17 >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
    }
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v36);
    DXGDEVICE::DestroyAllocationInternal(*((DXGDEVICE **)this + 1), 0, 0LL, v22, 0LL, DXGDEVICE::DestroyFlagsDefault);
    *((_DWORD *)this + 22) = 0;
    *((_DWORD *)this + 23) = 0;
  }
  v27 = *((_DWORD *)this + 24);
  v28 = v27;
  if ( v27 )
  {
    v29 = (struct DXGSYNCOBJECT *)*((_QWORD *)this + 13);
    if ( v29 )
    {
      Global = (PERESOURCE *)DXGGLOBAL::GetGlobal(v12);
      DXGGLOBAL::DestroySyncObject(Global, v29, v27);
      *((_DWORD *)this + 24) = 0;
      *((_QWORD *)this + 13) = 0LL;
      v28 = 0;
    }
  }
  if ( *((_QWORD *)this + 13) )
  {
    v31 = WdLogNewEntry5_WdAssertion(v12);
    *(_QWORD *)(v31 + 24) = 603LL;
    WdLogEvent5_WdAssertion(v31);
    v28 = *((_DWORD *)this + 24);
  }
  if ( v28 )
  {
    v32 = WdLogNewEntry5_WdAssertion(v12);
    *(_QWORD *)(v32 + 24) = 604LL;
    WdLogEvent5_WdAssertion(v32);
  }
  if ( *((_DWORD *)this + 4) )
    DXGDXGIKEYEDMUTEX::CloseLocalMutex(this, 0LL, 1LL);
  *((_QWORD *)this + 1) = 0LL;
}
