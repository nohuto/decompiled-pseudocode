/*
 * XREFs of ?CompleteDisconnection@CApplicationChannel@DirectComposition@@MEAAX_N@Z @ 0x1C001A040
 * Callers:
 *     <none>
 * Callees:
 *     ?UnmapUserModeView@CBatchSharedMemoryPool@DirectComposition@@QEAAXXZ @ 0x1C00144B4 (-UnmapUserModeView@CBatchSharedMemoryPool@DirectComposition@@QEAAXXZ.c)
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C00188E4 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     ?ReleaseShellResourceReference@CApplicationChannel@DirectComposition@@IEAAXPEAVCResourceMarshaler@2@@Z @ 0x1C0018D28 (-ReleaseShellResourceReference@CApplicationChannel@DirectComposition@@IEAAXPEAVCResourceMarshale.c)
 *     ?ClearAnimationTimeList@CApplicationChannel@DirectComposition@@IEAAXXZ @ 0x1C0019790 (-ClearAnimationTimeList@CApplicationChannel@DirectComposition@@IEAAXXZ.c)
 *     ?ProcessReturnedBatches@CApplicationChannel@DirectComposition@@IEAA_NXZ @ 0x1C001A268 (-ProcessReturnedBatches@CApplicationChannel@DirectComposition@@IEAA_NXZ.c)
 *     ?EnumerateObjects@CLinearObjectTableBase@DirectComposition@@QEAAPEAXPEA_K@Z @ 0x1C001DE08 (-EnumerateObjects@CLinearObjectTableBase@DirectComposition@@QEAAPEAXPEA_K@Z.c)
 *     ?DetachAndDelete@CAnimationBinding@DirectComposition@@QEAAXPEAVCApplicationChannel@2@@Z @ 0x1C0025A54 (-DetachAndDelete@CAnimationBinding@DirectComposition@@QEAAXPEAVCApplicationChannel@2@@Z.c)
 *     ?SetRetrievingProcess@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C007F288 (-SetRetrievingProcess@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     ??_GCEvent@DirectComposition@@QEAAPEAXI@Z @ 0x1C008207C (--_GCEvent@DirectComposition@@QEAAPEAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00A20B0 (_guard_dispatch_icall_nop.c)
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
  _DWORD *v9; // rax
  __int64 v10; // rax
  struct DirectComposition::CResourceMarshaler *v11; // rbx
  DirectComposition::CBatchSharedMemoryPool *i; // rbx
  unsigned int v13; // edx
  DirectComposition::CEvent *v14; // rcx
  DirectComposition::CAnimationBinding *v15; // rbx
  int v16; // ecx
  __int64 v17; // rdx
  unsigned __int64 v18; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0;
  if ( this[29] )
    DirectComposition::CApplicationChannel::ProcessReturnedBatches((DirectComposition::CApplicationChannel *)this);
  v5 = this[94];
  if ( v5 )
  {
    KeSetEvent(*((PRKEVENT *)v5 + 1), 1, 0);
    v14 = this[94];
    if ( v14 )
      DirectComposition::CEvent::`scalar deleting destructor'(v14, v13);
    this[94] = 0LL;
  }
  DirectComposition::CApplicationChannel::ReleaseResource((DirectComposition::CApplicationChannel *)this, this[95]);
  this[95] = 0LL;
  v18 = 0LL;
  while ( 1 )
  {
    v6 = DirectComposition::CLinearObjectTableBase::EnumerateObjects(
           (DirectComposition::CLinearObjectTableBase *)(this + 15),
           &v18);
    if ( !v6 )
      break;
    (*(void (__fastcall **)(void *, struct DirectComposition::CResourceMarshaler **))(*(_QWORD *)v6 + 96LL))(v6, this);
  }
  if ( !a2 )
  {
    for ( i = this[78];
          i != (DirectComposition::CBatchSharedMemoryPool *)(this + 78);
          i = *(DirectComposition::CBatchSharedMemoryPool **)i )
    {
      DirectComposition::CBatchSharedMemoryPool::UnmapUserModeView(i);
    }
    DirectComposition::CBatchSharedMemoryPoolSet::SetRetrievingProcess(
      (DirectComposition::CBatchSharedMemoryPoolSet *)(this + 78),
      0LL);
    *((_BYTE *)this + 48) &= ~2u;
  }
  v7 = this[58];
  *((_DWORD *)this + 170) = 0;
  if ( v7 )
  {
    do
    {
      v15 = *(DirectComposition::CAnimationBinding **)v7;
      *(_QWORD *)v7 = 0LL;
      DirectComposition::CAnimationBinding::DetachAndDelete(v7, (struct DirectComposition::CApplicationChannel *)this);
      v7 = v15;
    }
    while ( v15 );
  }
  v8 = this[55];
  if ( v8 )
  {
    do
    {
      v11 = (struct DirectComposition::CResourceMarshaler *)*((_QWORD *)v8 + 1);
      DirectComposition::CApplicationChannel::ReleaseShellResourceReference(this, v8);
      (*(void (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)v8 + 104LL))(v8, 1LL);
      v8 = v11;
    }
    while ( v11 );
  }
  DirectComposition::CApplicationChannel::ClearAnimationTimeList((DirectComposition::CApplicationChannel *)this);
  this[58] = 0LL;
  this[55] = 0LL;
  this[52] = 0LL;
  this[57] = 0LL;
  this[53] = 0LL;
  this[54] = 0LL;
  v18 = 0LL;
  while ( 1 )
  {
    v9 = DirectComposition::CLinearObjectTableBase::EnumerateObjects(
           (DirectComposition::CLinearObjectTableBase *)(this + 15),
           &v18);
    if ( !v9 )
      break;
    v9[4] &= 0xFFFFFFEE;
    *((_QWORD *)v9 + 1) = 0LL;
    v10 = *((_QWORD *)v9 + 4);
    if ( v10 )
    {
      do
      {
        v16 = *(_DWORD *)(v10 + 8);
        v17 = *(_QWORD *)(v10 + 32);
        if ( (v16 & 1) != 0 )
          *(_DWORD *)(v10 + 8) = v16 & 0xFFFFFFFC | 2;
        *(_QWORD *)v10 = 0LL;
        v10 = v17;
      }
      while ( v17 );
    }
  }
  LOBYTE(v2) = (unsigned int)(*((_DWORD *)this + 154) - 1) <= 1;
  *((_DWORD *)this + 154) = v2;
  *((_DWORD *)this + 6) = a2 != 0 ? 6 : 3;
}
