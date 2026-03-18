/*
 * XREFs of ?CloseFromDevice@DXGDXGIKEYEDMUTEX@@QEAAXXZ @ 0x1C01C5A48
 * Callers:
 *     ?ProcessPendingDestroy@OUTPUTDUPL_MGR@@QEAAXPEAVDXGDEVICE@@H@Z @ 0x1C00907E0 (-ProcessPendingDestroy@OUTPUTDUPL_MGR@@QEAAXPEAVDXGDEVICE@@H@Z.c)
 *     ??1DXGDXGIKEYEDMUTEX@@QEAA@XZ @ 0x1C01C54D4 (--1DXGDXGIKEYEDMUTEX@@QEAA@XZ.c)
 *     ?OpenForDevice@DXGDXGIKEYEDMUTEX@@QEAAJPEAVDXGDEVICE@@@Z @ 0x1C01C75B0 (-OpenForDevice@DXGDXGIKEYEDMUTEX@@QEAAJPEAVDXGDEVICE@@@Z.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00027C0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0002D90 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0002DE4 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z @ 0x1C008BA68 (-DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z.c)
 *     ?DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C009DD6C (-DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVIC.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C009E4B0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?CloseLocalMutex@DXGDXGIKEYEDMUTEX@@QEAAXW4_OUTPUTDUPL_MUTEX_TYPE@@H@Z @ 0x1C01C5CB0 (-CloseLocalMutex@DXGDXGIKEYEDMUTEX@@QEAAXW4_OUTPUTDUPL_MUTEX_TYPE@@H@Z.c)
 */

void __fastcall DXGDXGIKEYEDMUTEX::CloseFromDevice(DXGDXGIKEYEDMUTEX *this, __int64 a2)
{
  _QWORD *v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  struct DXGPROCESS *Current; // rbx
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // r8
  int v15; // edx
  struct DXGRESOURCE *v16; // rsi
  __int64 v17; // rax
  unsigned int v18; // r8d
  __int64 v19; // rax
  __int64 v20; // r9
  int v21; // edx
  unsigned int v22; // ebx
  struct DXGSYNCOBJECT *v23; // rsi
  PERESOURCE *Global; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  _QWORD *v27; // rbx
  __int64 v28; // rdx
  __int64 v29; // rcx
  _BYTE v30[40]; // [rsp+30h] [rbp-28h] BYREF

  v3 = (_QWORD *)WdLogNewEntry5_WdTrace(this, a2);
  v3[3] = this;
  v3[4] = *((_QWORD *)this + 1);
  v5 = *((_QWORD *)this + 4);
  v3[5] = v5;
  if ( !*((_QWORD *)this + 1) )
    return;
  if ( *((_QWORD *)this + 4) != PsGetCurrentProcess(v4, v5)
    || !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 1) + 16LL) + 16LL)) )
  {
    v27 = (_QWORD *)WdLogNewEntry5_WdTrace(v7, v6);
    v27[3] = PsGetCurrentProcess(v29, v28);
    v27[4] = *((_QWORD *)this + 4);
    v27[5] = *((_QWORD *)this + 1);
    return;
  }
  v8 = *((_QWORD *)this + 1);
  if ( !*(_DWORD *)(v8 + 72) )
    ExIsResourceAcquiredExclusiveLite(*(PERESOURCE *)(v8 + 104));
  if ( *((_DWORD *)this + 22) )
  {
    Current = DXGPROCESS::GetCurrent(v8, v6);
    if ( !Current )
    {
      v11 = WdLogNewEntry5_WdAssertion(v9);
      *(_QWORD *)(v11 + 24) = 577LL;
      WdLogEvent5_WdAssertion(v11);
    }
    DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v30, Current);
    v12 = *((unsigned int *)this + 22);
    v13 = (*((_DWORD *)this + 22) >> 6) & 0xFFFFFF;
    if ( (unsigned int)v13 < *((_DWORD *)Current + 60)
      && (v14 = *((_QWORD *)Current + 28),
          v12 = ((unsigned int)v12 >> 25) & 0x60,
          v15 = *(_DWORD *)(v14 + 16 * v13 + 8),
          (_BYTE)v12 == (*(_BYTE *)(v14 + 16 * v13 + 8) & 0x60))
      && (v15 & 0x2000) == 0
      && (v15 & 0x1F) != 0
      && (*(_BYTE *)(v14 + 16LL * (unsigned int)v13 + 8) & 0x1F) == 4 )
    {
      v16 = *(struct DXGRESOURCE **)(v14 + 16LL * (unsigned int)v13);
      if ( v16 )
        goto LABEL_18;
    }
    else
    {
      v16 = 0LL;
    }
    v17 = WdLogNewEntry5_WdAssertion(v12);
    *(_QWORD *)(v17 + 24) = 583LL;
    WdLogEvent5_WdAssertion(v17);
LABEL_18:
    v18 = *((_DWORD *)this + 22);
    v19 = (v18 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v19 < *((_DWORD *)Current + 60) )
    {
      v20 = *((_QWORD *)Current + 28);
      v21 = *(_DWORD *)(v20 + 16 * v19 + 8);
      if ( ((v18 >> 25) & 0x60) == (*(_BYTE *)(v20 + 16 * v19 + 8) & 0x60) && (v21 & 0x2000) == 0 && (v21 & 0x1F) != 0 )
        *(_DWORD *)(v20 + 16LL * ((v18 >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
    }
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v30);
    DXGDEVICE::DestroyAllocationInternal(*((DXGDEVICE **)this + 1), 0, 0LL, v16, 0LL, DXGDEVICE::DestroyFlagsDefault);
    *((_QWORD *)this + 11) = 0LL;
  }
  v22 = *((_DWORD *)this + 24);
  if ( v22 )
  {
    v23 = (struct DXGSYNCOBJECT *)*((_QWORD *)this + 13);
    if ( v23 )
    {
      Global = (PERESOURCE *)DXGGLOBAL::GetGlobal(v8);
      DXGGLOBAL::DestroySyncObject(Global, v23, v22);
      *((_DWORD *)this + 24) = 0;
      *((_QWORD *)this + 13) = 0LL;
    }
  }
  if ( *((_QWORD *)this + 13) )
  {
    v25 = WdLogNewEntry5_WdAssertion(v8);
    *(_QWORD *)(v25 + 24) = 603LL;
    WdLogEvent5_WdAssertion(v25);
  }
  if ( *((_DWORD *)this + 24) )
  {
    v26 = WdLogNewEntry5_WdAssertion(v8);
    *(_QWORD *)(v26 + 24) = 604LL;
    WdLogEvent5_WdAssertion(v26);
  }
  if ( *((_DWORD *)this + 4) )
    DXGDXGIKEYEDMUTEX::CloseLocalMutex(this, 0LL, 1LL);
  *((_QWORD *)this + 1) = 0LL;
}
