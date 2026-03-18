/*
 * XREFs of ?CompleteDisconnection@CApplicationChannel@DirectComposition@@MEAAX_N@Z @ 0x1C000ACA0
 * Callers:
 *     <none>
 * Callees:
 *     ??_GCEvent@DirectComposition@@QEAAPEAXI@Z @ 0x1C0001518 (--_GCEvent@DirectComposition@@QEAAPEAXI@Z.c)
 *     ?EnumerateObjects@CLinearObjectTableBase@DirectComposition@@QEAAPEAXPEA_K@Z @ 0x1C00037E8 (-EnumerateObjects@CLinearObjectTableBase@DirectComposition@@QEAAPEAXPEA_K@Z.c)
 *     ?DetachAndDelete@CAnimationBinding@DirectComposition@@QEAAXPEAVCApplicationChannel@2@@Z @ 0x1C0006248 (-DetachAndDelete@CAnimationBinding@DirectComposition@@QEAAXPEAVCApplicationChannel@2@@Z.c)
 *     ?ReleaseShellResourceReference@CApplicationChannel@DirectComposition@@IEAAXPEAVCResourceMarshaler@2@@Z @ 0x1C000A828 (-ReleaseShellResourceReference@CApplicationChannel@DirectComposition@@IEAAXPEAVCResourceMarshale.c)
 *     ?ClearAnimationTimeList@CApplicationChannel@DirectComposition@@IEAAXXZ @ 0x1C000A894 (-ClearAnimationTimeList@CApplicationChannel@DirectComposition@@IEAAXXZ.c)
 *     ?SetRetrievingProcess@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C000FEE4 (-SetRetrievingProcess@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C0015294 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     ?ProcessReturnedBatches@CApplicationChannel@DirectComposition@@IEAA_NXZ @ 0x1C00160C8 (-ProcessReturnedBatches@CApplicationChannel@DirectComposition@@IEAA_NXZ.c)
 *     ?UnmapUserModeView@CBatchSharedMemoryPool@DirectComposition@@QEAAXXZ @ 0x1C001B078 (-UnmapUserModeView@CBatchSharedMemoryPool@DirectComposition@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0079B40 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DirectComposition::CApplicationChannel::CompleteDisconnection(
        struct DirectComposition::CResourceMarshaler **this,
        char a2)
{
  int v2; // edi
  struct DirectComposition::CResourceMarshaler *v5; // rcx
  void *v6; // rax
  DirectComposition::CAnimationBinding *v7; // rcx
  struct DirectComposition::CResourceMarshaler *v8; // r14
  struct DirectComposition::CResourceMarshaler *v9; // rbx
  _DWORD *v10; // rax
  __int64 v11; // rax
  DirectComposition::CEvent *v12; // rcx
  DirectComposition::CBatchSharedMemoryPool *i; // rbx
  DirectComposition::CAnimationBinding *v14; // rbx
  int v15; // ecx
  __int64 v16; // rdx
  unsigned __int64 v17; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0;
  if ( this[27] )
    DirectComposition::CApplicationChannel::ProcessReturnedBatches((DirectComposition::CApplicationChannel *)this);
  v5 = this[91];
  if ( v5 )
  {
    KeSetEvent(*((PRKEVENT *)v5 + 1), 1, 0);
    v12 = this[91];
    if ( v12 )
      DirectComposition::CEvent::`scalar deleting destructor'(v12);
    this[91] = 0LL;
  }
  DirectComposition::CApplicationChannel::ReleaseResource((DirectComposition::CApplicationChannel *)this, this[92]);
  this[92] = 0LL;
  v17 = 0LL;
  while ( 1 )
  {
    v6 = DirectComposition::CLinearObjectTableBase::EnumerateObjects(
           (DirectComposition::CLinearObjectTableBase *)(this + 14),
           &v17);
    if ( !v6 )
      break;
    (*(void (__fastcall **)(void *, struct DirectComposition::CResourceMarshaler **))(*(_QWORD *)v6 + 96LL))(v6, this);
  }
  if ( !a2 )
  {
    for ( i = this[75];
          i != (DirectComposition::CBatchSharedMemoryPool *)(this + 75);
          i = *(DirectComposition::CBatchSharedMemoryPool **)i )
    {
      DirectComposition::CBatchSharedMemoryPool::UnmapUserModeView(i);
    }
    DirectComposition::CBatchSharedMemoryPoolSet::SetRetrievingProcess(
      (DirectComposition::CBatchSharedMemoryPoolSet *)(this + 75),
      0LL);
    *((_BYTE *)this + 48) &= ~2u;
  }
  v7 = this[56];
  *((_DWORD *)this + 164) = 0;
  if ( v7 )
  {
    do
    {
      v14 = *(DirectComposition::CAnimationBinding **)v7;
      *(_QWORD *)v7 = 0LL;
      DirectComposition::CAnimationBinding::DetachAndDelete(v7, (struct DirectComposition::CApplicationChannel *)this);
      v7 = v14;
    }
    while ( v14 );
  }
  v8 = this[53];
  if ( v8 )
  {
    do
    {
      v9 = (struct DirectComposition::CResourceMarshaler *)*((_QWORD *)v8 + 1);
      DirectComposition::CApplicationChannel::ReleaseShellResourceReference(this, v8);
      (*(void (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)v8 + 104LL))(v8, 1LL);
      v8 = v9;
    }
    while ( v9 );
  }
  DirectComposition::CApplicationChannel::ClearAnimationTimeList((DirectComposition::CApplicationChannel *)this);
  this[56] = 0LL;
  this[53] = 0LL;
  this[50] = 0LL;
  this[55] = 0LL;
  this[51] = 0LL;
  this[52] = 0LL;
  v17 = 0LL;
  while ( 1 )
  {
    v10 = DirectComposition::CLinearObjectTableBase::EnumerateObjects(
            (DirectComposition::CLinearObjectTableBase *)(this + 14),
            &v17);
    if ( !v10 )
      break;
    v10[4] &= 0xFFFFFFEE;
    *((_QWORD *)v10 + 1) = 0LL;
    v11 = *((_QWORD *)v10 + 4);
    if ( v11 )
    {
      do
      {
        v15 = *(_DWORD *)(v11 + 8);
        v16 = *(_QWORD *)(v11 + 32);
        if ( (v15 & 1) != 0 )
          *(_DWORD *)(v11 + 8) = v15 & 0xFFFFFFFC | 2;
        *(_QWORD *)v11 = 0LL;
        v11 = v16;
      }
      while ( v16 );
    }
  }
  LOBYTE(v2) = (unsigned int)(*((_DWORD *)this + 148) - 1) <= 1;
  *((_DWORD *)this + 148) = v2;
  *((_DWORD *)this + 6) = a2 != 0 ? 6 : 3;
}
