/*
 * XREFs of ?CloseFromDevice@DXGDXGIKEYEDMUTEX@@QEAAXXZ @ 0x1C01ABFE8
 * Callers:
 *     ?ProcessPendingDestroy@OUTPUTDUPL_MGR@@QEAAXPEAVDXGDEVICE@@H@Z @ 0x1C00DDEC0 (-ProcessPendingDestroy@OUTPUTDUPL_MGR@@QEAAXPEAVDXGDEVICE@@H@Z.c)
 *     ??1DXGDXGIKEYEDMUTEX@@QEAA@XZ @ 0x1C01ABAAC (--1DXGDXGIKEYEDMUTEX@@QEAA@XZ.c)
 *     ?OpenForDevice@DXGDXGIKEYEDMUTEX@@QEAAJPEAVDXGDEVICE@@@Z @ 0x1C01ADAB8 (-OpenForDevice@DXGDXGIKEYEDMUTEX@@QEAAJPEAVDXGDEVICE@@@Z.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0006260 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0006ED0 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0006F28 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00BF530 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C00CA174 (-DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVIC.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00CCEF0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z @ 0x1C00D81F0 (-DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z.c)
 *     ?CloseLocalMutex@DXGDXGIKEYEDMUTEX@@QEAAXW4_OUTPUTDUPL_MUTEX_TYPE@@H@Z @ 0x1C01AC258 (-CloseLocalMutex@DXGDXGIKEYEDMUTEX@@QEAAXW4_OUTPUTDUPL_MUTEX_TYPE@@H@Z.c)
 */

void __fastcall DXGDXGIKEYEDMUTEX::CloseFromDevice(DXGDXGIKEYEDMUTEX *this, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  struct DXGPROCESS *Current; // rsi
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rax
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rdx
  __int64 v21; // rcx
  struct DXGRESOURCE *v22; // rbx
  __int64 v23; // rax
  unsigned int v24; // r8d
  __int64 v25; // rax
  __int64 v26; // r9
  int v27; // edx
  unsigned int v28; // ebx
  struct DXGSYNCOBJECT *v29; // rsi
  PERESOURCE *Global; // rax
  __int64 v31; // r9
  __int64 v32; // rax
  __int64 v33; // rax
  _QWORD *v34; // rbx
  __int64 v35; // rcx
  _BYTE v36[40]; // [rsp+30h] [rbp-28h] BYREF

  v5 = (_QWORD *)WdLogNewEntry5_WdTrace(this, a2, a3, a4);
  v5[3] = this;
  v5[4] = *((_QWORD *)this + 2);
  v5[5] = *((_QWORD *)this + 5);
  if ( !*((_QWORD *)this + 2) )
    return;
  if ( *((_QWORD *)this + 5) != PsGetCurrentProcess(v6)
    || !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL)) )
  {
    v34 = (_QWORD *)WdLogNewEntry5_WdTrace(v8, v7, v9, v10);
    v34[3] = PsGetCurrentProcess(v35);
    v34[4] = *((_QWORD *)this + 5);
    v34[5] = *((_QWORD *)this + 2);
    return;
  }
  v11 = *((_QWORD *)this + 2);
  if ( !*(_DWORD *)(v11 + 72) )
    ExIsResourceAcquiredExclusiveLite(*(PERESOURCE *)(v11 + 104));
  if ( *((_DWORD *)this + 24) )
  {
    Current = DXGPROCESS::GetCurrent(v11);
    if ( !Current )
    {
      v17 = WdLogNewEntry5_WdAssertion(v13, v12, v15, v16);
      *(_QWORD *)(v17 + 24) = 505LL;
      WdLogEvent5_WdAssertion(v17);
    }
    DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v36, Current, v15, v16);
    v20 = *((unsigned int *)this + 24);
    v21 = (*((_DWORD *)this + 24) >> 6) & 0xFFFFFF;
    if ( (unsigned int)v21 < *((_DWORD *)Current + 52)
      && (v19 = *((_QWORD *)Current + 24),
          v20 = ((unsigned int)v20 >> 26) & 0x30,
          v18 = *(unsigned int *)(v19 + 16LL * (unsigned int)v21 + 8),
          (_BYTE)v20 == (*(_BYTE *)(v19 + 16LL * (unsigned int)v21 + 8) & 0x30))
      && (v18 & 0x1000) == 0
      && (v18 & 0xF) != 0
      && (*(_BYTE *)(v19 + 16LL * (unsigned int)v21 + 8) & 0xF) == 4 )
    {
      v22 = *(struct DXGRESOURCE **)(v19 + 16LL * (unsigned int)v21);
      if ( v22 )
        goto LABEL_18;
    }
    else
    {
      v22 = 0LL;
    }
    v23 = WdLogNewEntry5_WdAssertion(v21, v20, v18, v19);
    *(_QWORD *)(v23 + 24) = 511LL;
    WdLogEvent5_WdAssertion(v23);
LABEL_18:
    v24 = *((_DWORD *)this + 24);
    v25 = (v24 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v25 < *((_DWORD *)Current + 52) )
    {
      v26 = *((_QWORD *)Current + 24);
      v27 = *(_DWORD *)(v26 + 16 * v25 + 8);
      if ( ((v24 >> 26) & 0x30) == (*(_BYTE *)(v26 + 16 * v25 + 8) & 0x30) && (v27 & 0x1000) == 0 && (v27 & 0xF) != 0 )
        *(_DWORD *)(v26 + 16LL * ((v24 >> 6) & 0xFFFFFF) + 8) |= 0x1000u;
    }
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v36);
    DXGDEVICE::DestroyAllocationInternal(*((DXGDEVICE **)this + 2), 0, 0LL, v22, 0LL, DXGDEVICE::DestroyFlagsDefault);
    *((_QWORD *)this + 12) = 0LL;
  }
  v28 = *((_DWORD *)this + 26);
  if ( v28 )
  {
    v29 = (struct DXGSYNCOBJECT *)*((_QWORD *)this + 14);
    if ( v29 )
    {
      Global = (PERESOURCE *)DXGGLOBAL::GetGlobal(v11, v7, v9, v10);
      DXGGLOBAL::DestroySyncObject(Global, v29, v28, v31);
      *((_DWORD *)this + 26) = 0;
      *((_QWORD *)this + 14) = 0LL;
    }
  }
  if ( *((_QWORD *)this + 14) )
  {
    v32 = WdLogNewEntry5_WdAssertion(v11, v7, v9, v10);
    *(_QWORD *)(v32 + 24) = 531LL;
    WdLogEvent5_WdAssertion(v32);
  }
  if ( *((_DWORD *)this + 26) )
  {
    v33 = WdLogNewEntry5_WdAssertion(v11, v7, v9, v10);
    *(_QWORD *)(v33 + 24) = 532LL;
    WdLogEvent5_WdAssertion(v33);
  }
  if ( *((_DWORD *)this + 6) )
    DXGDXGIKEYEDMUTEX::CloseLocalMutex(this, 0LL, 1LL);
  *((_QWORD *)this + 2) = 0LL;
}
