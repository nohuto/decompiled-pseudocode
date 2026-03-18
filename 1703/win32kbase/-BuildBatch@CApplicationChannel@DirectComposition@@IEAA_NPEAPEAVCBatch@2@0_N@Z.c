/*
 * XREFs of ?BuildBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0_N@Z @ 0x1C001C8E0
 * Callers:
 *     ?Commit@CApplicationChannel@DirectComposition@@QEAAJPEA_N_NPEBUSynchronizationObject@2@@Z @ 0x1C001D424 (-Commit@CApplicationChannel@DirectComposition@@QEAAJPEA_N_NPEBUSynchronizationObject@2@@Z.c)
 * Callees:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C00188E4 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     ?ClearAnimationTimeList@CApplicationChannel@DirectComposition@@IEAAXXZ @ 0x1C0019790 (-ClearAnimationTimeList@CApplicationChannel@DirectComposition@@IEAAXXZ.c)
 *     ?ProcessReturnedBatches@CApplicationChannel@DirectComposition@@IEAA_NXZ @ 0x1C001A268 (-ProcessReturnedBatches@CApplicationChannel@DirectComposition@@IEAA_NXZ.c)
 *     ?RemoveExpiredAnimations@CApplicationChannel@DirectComposition@@IEAAXXZ @ 0x1C001A4E4 (-RemoveExpiredAnimations@CApplicationChannel@DirectComposition@@IEAAXXZ.c)
 *     ?EmitCallbackIDCommand@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C001C0B4 (-EmitCallbackIDCommand@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSharedSectionUpdateCommands@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C001C12C (-EmitSharedSectionUpdateCommands@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitUpdateCommands@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C001C1B0 (-EmitUpdateCommands@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitBindingAddCommands@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C001C228 (-EmitBindingAddCommands@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitCreationCommands@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C001C314 (-EmitCreationCommands@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitDeletionCommands@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C001C3F0 (-EmitDeletionCommands@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitBindingRemovalCommands@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C001C498 (-EmitBindingRemovalCommands@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?GetBatchFragment@CApplicationChannel@DirectComposition@@QEAAPEAVCBatch@2@_N0@Z @ 0x1C001C5F8 (-GetBatchFragment@CApplicationChannel@DirectComposition@@QEAAPEAVCBatch@2@_N0@Z.c)
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C001E274 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     ?EmitEndInteractionCommands@CTelemetryInfo@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C007BDAC (-EmitEndInteractionCommands@CTelemetryInfo@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitUpdateInteractionCommands@CTelemetryInfo@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C007BE3C (-EmitUpdateInteractionCommands@CTelemetryInfo@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitBeginInteractionCommands@CTelemetryInfo@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C007BEE8 (-EmitBeginInteractionCommands@CTelemetryInfo@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitAnimationCommands@CTelemetryInfo@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C007BF80 (-EmitAnimationCommands@CTelemetryInfo@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ??_GCEvent@DirectComposition@@QEAAPEAXI@Z @ 0x1C008207C (--_GCEvent@DirectComposition@@QEAAPEAXI@Z.c)
 *     EtwTraceDCompCommitBatchEvent @ 0x1C0082330 (EtwTraceDCompCommitBatchEvent.c)
 *     ?AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ @ 0x1C01407EC (-AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ.c)
 */

char __fastcall DirectComposition::CApplicationChannel::BuildBatch(
        DirectComposition::CApplicationChannel *this,
        struct DirectComposition::CBatch **a2,
        struct DirectComposition::CBatch **a3,
        char a4)
{
  char v8; // si
  struct DirectComposition::CBatch *BatchFragment; // r15
  struct DirectComposition::CBatch *v10; // r14
  __int64 i; // rbx
  char v12; // al
  struct _ERESOURCE *v14; // rbx
  char *v15; // rdx
  unsigned int v16; // edx
  DirectComposition::CEvent *v17; // rcx
  char *v18; // rax
  struct DirectComposition::CBatch *v19; // [rsp+60h] [rbp+40h] BYREF
  void *v20; // [rsp+68h] [rbp+48h] BYREF
  void *v21; // [rsp+70h] [rbp+50h] BYREF

  v8 = 1;
  if ( *((int *)this + 6) > 2 )
    DirectComposition::CApplicationChannel::ClearAnimationTimeList(this);
  DirectComposition::CApplicationChannel::ProcessReturnedBatches((union _SLIST_HEADER *)this);
  if ( (*((_BYTE *)this + 256) & 2) != 0 )
  {
    DirectComposition::CApplicationChannel::RemoveExpiredAnimations(this);
    *((_BYTE *)this + 256) &= ~2u;
  }
  BatchFragment = 0LL;
  v10 = 0LL;
  if ( (*((_BYTE *)this + 48) & 2) == 0
    || *((_QWORD *)this + 23)
    || (*((_BYTE *)this + 256) & 0x60) != 0
    || *((_QWORD *)this + 55)
    || *((_QWORD *)this + 58)
    || *((_QWORD *)this + 52)
    || *((_QWORD *)this + 57)
    || *((_QWORD *)this + 53)
    || *((_QWORD *)this + 54)
    || *((DirectComposition::CApplicationChannel **)this + 69) != (DirectComposition::CApplicationChannel *)((char *)this + 552)
    || *((DirectComposition::CApplicationChannel **)this + 71) != (DirectComposition::CApplicationChannel *)((char *)this + 568)
    || *((DirectComposition::CApplicationChannel **)this + 73) != (DirectComposition::CApplicationChannel *)((char *)this + 584)
    || *((DirectComposition::CApplicationChannel **)this + 75) != (DirectComposition::CApplicationChannel *)((char *)this + 600)
    || *((_QWORD *)this + 95)
    || ((*((_DWORD *)this + 154) - 1) & 0xFFFFFFFD) == 0 )
  {
    BatchFragment = DirectComposition::CApplicationChannel::GetBatchFragment(this, 1, 1);
    *((_BYTE *)BatchFragment + 32) ^= (*((_BYTE *)BatchFragment + 32) ^ ~(*((_BYTE *)this + 48) >> 1)) & 1;
    *((_BYTE *)this + 48) |= 2u;
    EtwTraceDCompCommitBatchEvent(*((unsigned int *)this + 7), BatchFragment, *((unsigned int *)BatchFragment + 4));
    for ( i = *((_QWORD *)this + 56); i; i = *(_QWORD *)(i + 8) )
    {
      DirectComposition::CResourceMarshaler::AddRef((DirectComposition::CResourceMarshaler *)(*(_QWORD *)i + 16LL));
      *(_DWORD *)(i + 24) |= 2u;
    }
    *((_QWORD *)BatchFragment + 10) = *((_QWORD *)this + 56);
    *((_QWORD *)this + 56) = 0LL;
    v19 = BatchFragment;
    if ( !DirectComposition::CApplicationChannel::EmitCallbackIDCommand(this, &v19)
      || !DirectComposition::CTelemetryInfo::EmitAnimationCommands(
            (DirectComposition::CApplicationChannel *)((char *)this + 552),
            &v19)
      || !DirectComposition::CTelemetryInfo::EmitBeginInteractionCommands(
            (DirectComposition::CApplicationChannel *)((char *)this + 552),
            &v19)
      || !DirectComposition::CTelemetryInfo::EmitUpdateInteractionCommands(
            (DirectComposition::CApplicationChannel *)((char *)this + 552),
            &v19)
      || !DirectComposition::CTelemetryInfo::EmitEndInteractionCommands(
            (DirectComposition::CApplicationChannel *)((char *)this + 552),
            &v19)
      || !DirectComposition::CApplicationChannel::EmitBindingRemovalCommands(this, &v19)
      || !DirectComposition::CApplicationChannel::EmitDeletionCommands(this, &v19)
      || !DirectComposition::CApplicationChannel::EmitCreationCommands(this, &v19)
      || !DirectComposition::CApplicationChannel::EmitSharedSectionUpdateCommands(this, &v19)
      || !DirectComposition::CApplicationChannel::EmitUpdateCommands(this, &v19)
      || !DirectComposition::CApplicationChannel::EmitBindingRemovalCommands(this, &v19)
      || !DirectComposition::CApplicationChannel::EmitBindingAddCommands(this, &v19) )
    {
      goto LABEL_60;
    }
    if ( *((_QWORD *)this + 95) )
    {
      if ( DirectComposition::CBatch::EnsureBatchBuffer(&v19, 0x30uLL, &v20) )
      {
        v15 = (char *)v20;
        *(_DWORD *)v20 = 48;
        *((_DWORD *)v15 + 1) = 29;
        *((_DWORD *)v15 + 11) = *(_DWORD *)(*((_QWORD *)this + 95) + 24LL);
        *((_DWORD *)v15 + 2) = *((_DWORD *)this + 192);
        *((_DWORD *)v15 + 3) = *((_DWORD *)this + 193);
        *((_DWORD *)v15 + 4) = *((_DWORD *)this + 194);
        *((_DWORD *)v15 + 5) = *((_DWORD *)this + 195);
        *((_DWORD *)v15 + 6) = *((_DWORD *)this + 196);
        *(_QWORD *)(v15 + 28) = *((_QWORD *)this + 99);
        *(_QWORD *)(v15 + 36) = *((_QWORD *)this + 100);
        DirectComposition::CApplicationChannel::ReleaseResource(
          this,
          *((struct DirectComposition::CResourceMarshaler **)this + 95));
        v17 = (DirectComposition::CEvent *)*((_QWORD *)this + 94);
        *((_QWORD *)this + 95) = 0LL;
        if ( v17 )
          DirectComposition::CEvent::`scalar deleting destructor'(v17, v16);
        *((_QWORD *)this + 94) = 0LL;
      }
      if ( *((_QWORD *)this + 95) )
        goto LABEL_60;
    }
    if ( !DirectComposition::CApplicationChannel::EmitDeletionCommands(this, &v19) )
      goto LABEL_60;
    if ( ((*((_DWORD *)this + 154) - 1) & 0xFFFFFFFD) == 0
      && DirectComposition::CBatch::EnsureBatchBuffer(&v19, 0xCuLL, &v21) )
    {
      v18 = (char *)v21;
      *(_DWORD *)v21 = 12;
      *(_QWORD *)(v18 + 4) = 0LL;
      *((_DWORD *)v18 + 1) = 27;
      if ( *((_DWORD *)this + 154) == 1 )
      {
        *((_DWORD *)v18 + 2) = 1;
        *((_DWORD *)this + 154) = 2;
      }
      else
      {
        *((_DWORD *)v18 + 2) = 0;
        *((_DWORD *)this + 154) = 0;
      }
    }
    if ( (*((_DWORD *)this + 154) & 0xFFFFFFFD) != 0 )
LABEL_60:
      v8 = 0;
    v10 = v19;
  }
  else
  {
    if ( !a4 )
    {
      if ( *((_QWORD *)this + 47) )
      {
        v14 = (struct _ERESOURCE *)*((_QWORD *)this + 48);
        KeEnterCriticalRegion();
        ExAcquireResourceExclusiveLite(v14, 1u);
        if ( !*((_DWORD *)this + 60) )
          KeSetEvent(*(PRKEVENT *)(*((_QWORD *)this + 47) + 8LL), 1, 0);
        ExReleaseResourceLite(*((PERESOURCE *)this + 48));
        KeLeaveCriticalRegion();
      }
      goto LABEL_45;
    }
    BatchFragment = DirectComposition::CApplicationChannel::GetBatchFragment(this, 1, 1);
    EtwTraceDCompCommitBatchEvent(*((unsigned int *)this + 7), BatchFragment, *((unsigned int *)BatchFragment + 4));
    v10 = BatchFragment;
  }
  *((_QWORD *)BatchFragment + 13) = *((_QWORD *)this + 28);
  *((_QWORD *)this + 28) = 0LL;
  if ( v10 )
    *(_BYTE *)(*((_QWORD *)v10 + 15) + 64LL) = 0;
LABEL_45:
  *a2 = BatchFragment;
  *a3 = v10;
  if ( v8 )
  {
    if ( v10 )
    {
      v12 = *((_BYTE *)this + 256);
      if ( (v12 & 0x10) != 0 )
      {
        *((_BYTE *)this + 256) = v12 & 0xEF;
        *((_BYTE *)v10 + 32) |= 8u;
      }
    }
    *((_BYTE *)this + 256) &= ~1u;
  }
  return v8;
}
