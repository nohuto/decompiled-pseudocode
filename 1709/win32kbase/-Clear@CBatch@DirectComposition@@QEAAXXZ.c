/*
 * XREFs of ?Clear@CBatch@DirectComposition@@QEAAXXZ @ 0x1C0034CD8
 * Callers:
 *     ?ProcessReturnedBatches@CApplicationChannel@DirectComposition@@IEAA_NXZ @ 0x1C002F7D4 (-ProcessReturnedBatches@CApplicationChannel@DirectComposition@@IEAA_NXZ.c)
 *     ?GetBatchFragment@CApplicationChannel@DirectComposition@@QEAAPEAVCBatch@2@_N0@Z @ 0x1C0031CBC (-GetBatchFragment@CApplicationChannel@DirectComposition@@QEAAPEAVCBatch@2@_N0@Z.c)
 *     ?Shutdown@CApplicationChannel@DirectComposition@@MEAAXXZ @ 0x1C0032790 (-Shutdown@CApplicationChannel@DirectComposition@@MEAAXXZ.c)
 * Callees:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C002DEE0 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     ?ReleaseShellResourceAccess@CConnection@DirectComposition@@QEAAXI@Z @ 0x1C00331C8 (-ReleaseShellResourceAccess@CConnection@DirectComposition@@QEAAXI@Z.c)
 *     ?ReleaseSystemResource@CConnection@DirectComposition@@QEAAXVResourceHandle@@@Z @ 0x1C0033230 (-ReleaseSystemResource@CConnection@DirectComposition@@QEAAXVResourceHandle@@@Z.c)
 *     ?Reset@CBatchSharedMemoryPool@DirectComposition@@QEAAXXZ @ 0x1C0037938 (-Reset@CBatchSharedMemoryPool@DirectComposition@@QEAAXXZ.c)
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 *     ?RemoveFromSynchronizationTable@CSynchronizationManager@DirectComposition@@SAXPEAVCBatch@2@@Z @ 0x1C005B3F8 (-RemoveFromSynchronizationTable@CSynchronizationManager@DirectComposition@@SAXPEAVCBatch@2@@Z.c)
 *     ?UpdateAnimationTimeState@CAnimationMarshaler@DirectComposition@@IEAAX_K@Z @ 0x1C007C77C (-UpdateAnimationTimeState@CAnimationMarshaler@DirectComposition@@IEAAX_K@Z.c)
 *     ?Release@CAnimationTimeList@DirectComposition@@QEAAKXZ @ 0x1C007D160 (-Release@CAnimationTimeList@DirectComposition@@QEAAKXZ.c)
 *     ??_GCEvent@DirectComposition@@QEAAPEAXI@Z @ 0x1C00814A0 (--_GCEvent@DirectComposition@@QEAAPEAXI@Z.c)
 */

void __fastcall DirectComposition::CBatch::Clear(DirectComposition::CBatch *this)
{
  __int64 v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // r8
  DirectComposition::CAnimationMarshaler **v5; // r14
  unsigned __int64 v6; // rbp
  DirectComposition::CApplicationChannel *v7; // r15
  int v8; // edx
  __int64 *v9; // rbx
  __int64 v10; // rdi
  DirectComposition::CAnimationMarshaler *v11; // rbx
  DirectComposition::CAnimationMarshaler **v12; // rdi
  DirectComposition::CAnimationMarshaler *v13; // rcx
  DirectComposition::CEvent *v14; // rcx
  __int64 v15; // rbx

  if ( *((_QWORD *)this + 5) )
  {
    DirectComposition::CSynchronizationManager::RemoveFromSynchronizationTable(this);
    *((_QWORD *)this + 5) = 0LL;
  }
  v2 = *((_QWORD *)this + 15);
  v3 = *((_QWORD *)this + 17) + 40LL;
  v4 = v3 + *(_QWORD *)(v2 + 32);
  *(_QWORD *)(v2 + 32) = v4;
  if ( !*(_BYTE *)(v2 + 64) && *(_QWORD *)(v2 + 40) == v4 )
    DirectComposition::CBatchSharedMemoryPool::Reset((DirectComposition::CBatchSharedMemoryPool *)v2);
  *((_BYTE *)this + 32) &= 0xF2u;
  v5 = (DirectComposition::CAnimationMarshaler **)*((_QWORD *)this + 10);
  v6 = *((_QWORD *)this + 9);
  v7 = (DirectComposition::CApplicationChannel *)*((_QWORD *)this + 1);
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  *((_DWORD *)this + 12) = 0;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  if ( v5 )
  {
    do
    {
      v11 = *v5;
      v12 = (DirectComposition::CAnimationMarshaler **)v5[1];
      v13 = *v5;
      v5[1] = 0LL;
      DirectComposition::CAnimationMarshaler::UpdateAnimationTimeState(v13, v6);
      DirectComposition::CAnimationTimeList::Release((DirectComposition::CAnimationTimeList *)v5);
      DirectComposition::CApplicationChannel::ReleaseResource(
        v7,
        (struct DirectComposition::CResourceMarshaler *)(((unsigned __int64)v11 + 16) & -(__int64)(v11 != 0LL)));
      v5 = v12;
    }
    while ( v12 );
  }
  *((_QWORD *)this + 10) = 0LL;
  if ( *((_QWORD *)this + 11) )
  {
    do
    {
      v9 = (__int64 *)*((_QWORD *)this + 11);
      v10 = *v9;
      if ( *((_DWORD *)v9 + 2) )
      {
        DirectComposition::CConnection::ReleaseSystemResource(
          *(_QWORD *)(*((_QWORD *)this + 1) + 40LL),
          *((_DWORD *)v9 + 2));
        *((_DWORD *)v9 + 2) = 0;
      }
      Win32FreePool(v9, v3, v4);
      *((_QWORD *)this + 11) = v10;
    }
    while ( v10 );
  }
  if ( *((_QWORD *)this + 13) )
  {
    do
    {
      v14 = (DirectComposition::CEvent *)*((_QWORD *)this + 13);
      v15 = *(_QWORD *)v14;
      if ( v14 )
        DirectComposition::CEvent::`scalar deleting destructor'(v14, v3);
      *((_QWORD *)this + 13) = v15;
    }
    while ( v15 );
  }
  v8 = *((_DWORD *)this + 28);
  if ( v8 )
  {
    DirectComposition::CConnection::ReleaseShellResourceAccess(
      *(DirectComposition::CConnection **)(*((_QWORD *)this + 1) + 40LL),
      v8);
    *((_DWORD *)this + 28) = 0;
  }
}
