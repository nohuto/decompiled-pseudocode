/*
 * XREFs of ?BuildBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0_N@Z @ 0x1C0031FB0
 * Callers:
 *     ?Commit@CApplicationChannel@DirectComposition@@QEAAJPEA_N_NPEBUSynchronizationObject@2@@Z @ 0x1C0032AE4 (-Commit@CApplicationChannel@DirectComposition@@QEAAJPEA_N_NPEBUSynchronizationObject@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C002A65C (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C002DEE0 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     ?ClearAnimationTimeList@CApplicationChannel@DirectComposition@@IEAAXXZ @ 0x1C002ED08 (-ClearAnimationTimeList@CApplicationChannel@DirectComposition@@IEAAXXZ.c)
 *     ?ProcessReturnedBatches@CApplicationChannel@DirectComposition@@IEAA_NXZ @ 0x1C002F7D4 (-ProcessReturnedBatches@CApplicationChannel@DirectComposition@@IEAA_NXZ.c)
 *     ?RemoveExpiredAnimations@CApplicationChannel@DirectComposition@@IEAAXXZ @ 0x1C002FA2C (-RemoveExpiredAnimations@CApplicationChannel@DirectComposition@@IEAAXXZ.c)
 *     ?EmitCallbackIDCommand@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00317A8 (-EmitCallbackIDCommand@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSharedSectionUpdateCommands@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0031818 (-EmitSharedSectionUpdateCommands@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitUpdateCommands@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0031894 (-EmitUpdateCommands@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitBindingAddCommands@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C003190C (-EmitBindingAddCommands@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitCreationCommands@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00319F0 (-EmitCreationCommands@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitDeletionCommands@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0031ABC (-EmitDeletionCommands@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitBindingRemovalCommands@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0031B64 (-EmitBindingRemovalCommands@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?GetBatchFragment@CApplicationChannel@DirectComposition@@QEAAPEAVCBatch@2@_N0@Z @ 0x1C0031CBC (-GetBatchFragment@CApplicationChannel@DirectComposition@@QEAAPEAVCBatch@2@_N0@Z.c)
 *     ?EmitCommands@CTelemetryInfo@DirectComposition@@QEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00747E8 (-EmitCommands@CTelemetryInfo@DirectComposition@@QEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ??_GCEvent@DirectComposition@@QEAAPEAXI@Z @ 0x1C00814A0 (--_GCEvent@DirectComposition@@QEAAPEAXI@Z.c)
 *     EtwTraceDCompCommitBatchEvent @ 0x1C0089290 (EtwTraceDCompCommitBatchEvent.c)
 *     ?AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ @ 0x1C013FCEC (-AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ.c)
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
  if ( (*((_BYTE *)this + 240) & 2) != 0 )
  {
    DirectComposition::CApplicationChannel::RemoveExpiredAnimations(this);
    *((_BYTE *)this + 240) &= ~2u;
  }
  BatchFragment = 0LL;
  v10 = 0LL;
  if ( (*((_BYTE *)this + 48) & 2) == 0
    || *((_QWORD *)this + 21)
    || (*((_BYTE *)this + 240) & 0x60) != 0
    || *((_QWORD *)this + 53)
    || *((_QWORD *)this + 56)
    || *((_QWORD *)this + 50)
    || *((_QWORD *)this + 55)
    || *((_QWORD *)this + 51)
    || *((_QWORD *)this + 52)
    || *((DirectComposition::CApplicationChannel **)this + 66) != (DirectComposition::CApplicationChannel *)((char *)this + 528)
    || *((DirectComposition::CApplicationChannel **)this + 68) != (DirectComposition::CApplicationChannel *)((char *)this + 544)
    || *((DirectComposition::CApplicationChannel **)this + 70) != (DirectComposition::CApplicationChannel *)((char *)this + 560)
    || *((DirectComposition::CApplicationChannel **)this + 72) != (DirectComposition::CApplicationChannel *)((char *)this + 576)
    || *((_QWORD *)this + 92)
    || ((*((_DWORD *)this + 148) - 1) & 0xFFFFFFFD) == 0 )
  {
    BatchFragment = DirectComposition::CApplicationChannel::GetBatchFragment(this, 1, 1);
    *((_BYTE *)BatchFragment + 32) ^= (*((_BYTE *)BatchFragment + 32) ^ ~(*((_BYTE *)this + 48) >> 1)) & 1;
    *((_BYTE *)this + 48) |= 2u;
    EtwTraceDCompCommitBatchEvent(*((unsigned int *)this + 7), BatchFragment, *((unsigned int *)BatchFragment + 4));
    for ( i = *((_QWORD *)this + 54); i; i = *(_QWORD *)(i + 8) )
    {
      DirectComposition::CResourceMarshaler::AddRef((DirectComposition::CResourceMarshaler *)(*(_QWORD *)i + 16LL));
      *(_DWORD *)(i + 24) |= 2u;
    }
    *((_QWORD *)BatchFragment + 10) = *((_QWORD *)this + 54);
    *((_QWORD *)this + 54) = 0LL;
    v19 = BatchFragment;
    if ( !DirectComposition::CApplicationChannel::EmitCallbackIDCommand(this, &v19)
      || !DirectComposition::CTelemetryInfo::EmitCommands(
            (DirectComposition::CApplicationChannel *)((char *)this + 528),
            &v19)
      || !DirectComposition::CApplicationChannel::EmitBindingRemovalCommands(this, &v19)
      || !DirectComposition::CApplicationChannel::EmitDeletionCommands(this, &v19)
      || !DirectComposition::CApplicationChannel::EmitCreationCommands(this, &v19)
      || !DirectComposition::CApplicationChannel::EmitSharedSectionUpdateCommands(this, &v19)
      || !DirectComposition::CApplicationChannel::EmitUpdateCommands(this, &v19)
      || !DirectComposition::CApplicationChannel::EmitBindingRemovalCommands(this, &v19)
      || !DirectComposition::CApplicationChannel::EmitBindingAddCommands(this, &v19) )
    {
      goto LABEL_57;
    }
    if ( *((_QWORD *)this + 92) )
    {
      if ( DirectComposition::CBatch::EnsureBatchBuffer(&v19, 0x30uLL, &v20) )
      {
        v15 = (char *)v20;
        *(_DWORD *)v20 = 48;
        *((_DWORD *)v15 + 1) = 44;
        *((_DWORD *)v15 + 11) = *(_DWORD *)(*((_QWORD *)this + 92) + 24LL);
        *((_DWORD *)v15 + 2) = *((_DWORD *)this + 186);
        *((_DWORD *)v15 + 3) = *((_DWORD *)this + 187);
        *((_DWORD *)v15 + 4) = *((_DWORD *)this + 188);
        *((_DWORD *)v15 + 5) = *((_DWORD *)this + 189);
        *((_DWORD *)v15 + 6) = *((_DWORD *)this + 190);
        *(_QWORD *)(v15 + 28) = *((_QWORD *)this + 96);
        *(_QWORD *)(v15 + 36) = *((_QWORD *)this + 97);
        DirectComposition::CApplicationChannel::ReleaseResource(
          this,
          *((struct DirectComposition::CResourceMarshaler **)this + 92));
        v17 = (DirectComposition::CEvent *)*((_QWORD *)this + 91);
        *((_QWORD *)this + 92) = 0LL;
        if ( v17 )
          DirectComposition::CEvent::`scalar deleting destructor'(v17, v16);
        *((_QWORD *)this + 91) = 0LL;
      }
      if ( *((_QWORD *)this + 92) )
        goto LABEL_57;
    }
    if ( !DirectComposition::CApplicationChannel::EmitDeletionCommands(this, &v19) )
      goto LABEL_57;
    if ( ((*((_DWORD *)this + 148) - 1) & 0xFFFFFFFD) == 0
      && DirectComposition::CBatch::EnsureBatchBuffer(&v19, 0xCuLL, &v21) )
    {
      v18 = (char *)v21;
      *(_DWORD *)v21 = 12;
      *(_QWORD *)(v18 + 4) = 0LL;
      *((_DWORD *)v18 + 1) = 40;
      if ( *((_DWORD *)this + 148) == 1 )
      {
        *((_DWORD *)v18 + 2) = 1;
        *((_DWORD *)this + 148) = 2;
      }
      else
      {
        *((_DWORD *)v18 + 2) = 0;
        *((_DWORD *)this + 148) = 0;
      }
    }
    if ( (*((_DWORD *)this + 148) & 0xFFFFFFFD) != 0 )
LABEL_57:
      v8 = 0;
    v10 = v19;
  }
  else
  {
    if ( !a4 )
    {
      if ( *((_QWORD *)this + 45) )
      {
        v14 = (struct _ERESOURCE *)*((_QWORD *)this + 46);
        KeEnterCriticalRegion();
        ExAcquireResourceExclusiveLite(v14, 1u);
        if ( !*((_DWORD *)this + 56) )
          KeSetEvent(*(PRKEVENT *)(*((_QWORD *)this + 45) + 8LL), 1, 0);
        ExReleaseResourceLite(*((PERESOURCE *)this + 46));
        KeLeaveCriticalRegion();
      }
      goto LABEL_29;
    }
    BatchFragment = DirectComposition::CApplicationChannel::GetBatchFragment(this, 1, 1);
    EtwTraceDCompCommitBatchEvent(*((unsigned int *)this + 7), BatchFragment, *((unsigned int *)BatchFragment + 4));
    v10 = BatchFragment;
  }
  *((_QWORD *)BatchFragment + 13) = *((_QWORD *)this + 26);
  *((_QWORD *)this + 26) = 0LL;
  if ( v10 )
    *(_BYTE *)(*((_QWORD *)v10 + 15) + 64LL) = 0;
LABEL_29:
  *a2 = BatchFragment;
  *a3 = v10;
  if ( v8 )
  {
    if ( v10 )
    {
      v12 = *((_BYTE *)this + 240);
      if ( (v12 & 0x10) != 0 )
      {
        *((_BYTE *)this + 240) = v12 & 0xEF;
        *((_BYTE *)v10 + 32) |= 8u;
      }
    }
    *((_BYTE *)this + 240) &= ~1u;
  }
  return v8;
}
