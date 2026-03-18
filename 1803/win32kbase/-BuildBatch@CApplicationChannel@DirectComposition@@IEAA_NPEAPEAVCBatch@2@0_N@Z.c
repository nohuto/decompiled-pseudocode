/*
 * XREFs of ?BuildBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0_N@Z @ 0x1C0017AA0
 * Callers:
 *     ?Commit@CApplicationChannel@DirectComposition@@QEAAJPEA_N_NPEBUSynchronizationObject@2@@Z @ 0x1C001555C (-Commit@CApplicationChannel@DirectComposition@@QEAAJPEA_N_NPEBUSynchronizationObject@2@@Z.c)
 * Callees:
 *     ??_GCEvent@DirectComposition@@QEAAPEAXI@Z @ 0x1C0001518 (--_GCEvent@DirectComposition@@QEAAPEAXI@Z.c)
 *     ?ClearAnimationTimeList@CApplicationChannel@DirectComposition@@IEAAXXZ @ 0x1C000A894 (-ClearAnimationTimeList@CApplicationChannel@DirectComposition@@IEAAXXZ.c)
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C0015294 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     ?ProcessReturnedBatches@CApplicationChannel@DirectComposition@@IEAA_NXZ @ 0x1C00160C8 (-ProcessReturnedBatches@CApplicationChannel@DirectComposition@@IEAA_NXZ.c)
 *     ?RemoveExpiredAnimations@CApplicationChannel@DirectComposition@@IEAAXXZ @ 0x1C0016268 (-RemoveExpiredAnimations@CApplicationChannel@DirectComposition@@IEAAXXZ.c)
 *     ?EmitCallbackIDCommand@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C001715C (-EmitCallbackIDCommand@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSharedSectionUpdateCommands@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00171CC (-EmitSharedSectionUpdateCommands@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitUpdateCommands@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C001723C (-EmitUpdateCommands@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitBindingAddCommands@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00172B0 (-EmitBindingAddCommands@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitCreationCommands@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0017394 (-EmitCreationCommands@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitDeletionCommands@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0017458 (-EmitDeletionCommands@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitBindingRemovalCommands@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00174F8 (-EmitBindingRemovalCommands@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?GetBatchFragment@CApplicationChannel@DirectComposition@@QEAAPEAVCBatch@2@_N0@Z @ 0x1C0017660 (-GetBatchFragment@CApplicationChannel@DirectComposition@@QEAAPEAVCBatch@2@_N0@Z.c)
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C0019744 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     ?EmitCommands@CTelemetryInfo@DirectComposition@@QEAA_NPEAPEAVCBatch@2@@Z @ 0x1C005F8CC (-EmitCommands@CTelemetryInfo@DirectComposition@@QEAA_NPEAPEAVCBatch@2@@Z.c)
 *     EtwTraceDCompCommitBatchEvent @ 0x1C00665E0 (EtwTraceDCompCommitBatchEvent.c)
 *     ?AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ @ 0x1C0145F48 (-AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ.c)
 */

char __fastcall DirectComposition::CApplicationChannel::BuildBatch(
        DirectComposition::CApplicationChannel *this,
        struct DirectComposition::CBatch **a2,
        struct DirectComposition::CBatch **a3,
        char a4)
{
  char v8; // di
  char v9; // cl
  struct DirectComposition::CBatch *BatchFragment; // r14
  struct DirectComposition::CBatch *v11; // rsi
  __int64 v12; // rsi
  char v13; // al
  struct _ERESOURCE *v15; // r15
  char *v16; // rdx
  DirectComposition::CEvent *v17; // rcx
  char *v18; // rax
  char *v19; // rcx
  void *v20; // [rsp+20h] [rbp-10h] BYREF
  struct DirectComposition::CBatch *v21; // [rsp+70h] [rbp+40h] BYREF
  void *v22; // [rsp+78h] [rbp+48h] BYREF
  void *v23; // [rsp+80h] [rbp+50h] BYREF

  v8 = 1;
  if ( *((int *)this + 6) > 2 )
    DirectComposition::CApplicationChannel::ClearAnimationTimeList(this);
  DirectComposition::CApplicationChannel::ProcessReturnedBatches((union _SLIST_HEADER *)this);
  v9 = *((_BYTE *)this + 240);
  if ( (v9 & 2) != 0 )
  {
    DirectComposition::CApplicationChannel::RemoveExpiredAnimations(this);
    *((_BYTE *)this + 240) &= ~2u;
    v9 = *((_BYTE *)this + 240);
  }
  BatchFragment = 0LL;
  v11 = 0LL;
  if ( (*((_BYTE *)this + 48) & 2) == 0
    || *((_QWORD *)this + 21)
    || (v9 & 0x60) != 0
    || (*((_BYTE *)this + 241) & 2) != 0
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
    v12 = *((_QWORD *)this + 54);
    if ( v12 )
    {
      do
      {
        DirectComposition::CResourceMarshaler::AddRef((DirectComposition::CResourceMarshaler *)(*(_QWORD *)v12 + 16LL));
        *(_DWORD *)(v12 + 24) |= 2u;
        v12 = *(_QWORD *)(v12 + 8);
      }
      while ( v12 );
      v12 = *((_QWORD *)this + 54);
    }
    *((_QWORD *)BatchFragment + 10) = v12;
    *((_QWORD *)this + 54) = 0LL;
    v21 = BatchFragment;
    if ( !DirectComposition::CApplicationChannel::EmitCallbackIDCommand(this, &v21)
      || !DirectComposition::CTelemetryInfo::EmitCommands(
            (DirectComposition::CApplicationChannel *)((char *)this + 528),
            &v21)
      || !DirectComposition::CApplicationChannel::EmitBindingRemovalCommands(this, &v21)
      || !DirectComposition::CApplicationChannel::EmitDeletionCommands(this, &v21)
      || !DirectComposition::CApplicationChannel::EmitCreationCommands(this, &v21)
      || !DirectComposition::CApplicationChannel::EmitSharedSectionUpdateCommands(this, &v21)
      || !DirectComposition::CApplicationChannel::EmitUpdateCommands(this, &v21)
      || !DirectComposition::CApplicationChannel::EmitBindingRemovalCommands(this, &v21)
      || !DirectComposition::CApplicationChannel::EmitBindingAddCommands(this, &v21) )
    {
      goto LABEL_67;
    }
    if ( *((_QWORD *)this + 92) )
    {
      if ( DirectComposition::CBatch::EnsureBatchBuffer(&v21, 0x30uLL, &v22) )
      {
        v16 = (char *)v22;
        *(_DWORD *)v22 = 48;
        *((_DWORD *)v16 + 1) = 57;
        *((_DWORD *)v16 + 11) = *(_DWORD *)(*((_QWORD *)this + 92) + 24LL);
        *((_DWORD *)v16 + 2) = *((_DWORD *)this + 186);
        *((_DWORD *)v16 + 3) = *((_DWORD *)this + 187);
        *((_DWORD *)v16 + 4) = *((_DWORD *)this + 188);
        *((_DWORD *)v16 + 5) = *((_DWORD *)this + 189);
        *((_DWORD *)v16 + 6) = *((_DWORD *)this + 190);
        *(_QWORD *)(v16 + 28) = *((_QWORD *)this + 96);
        *(_QWORD *)(v16 + 36) = *((_QWORD *)this + 97);
        DirectComposition::CApplicationChannel::ReleaseResource(
          this,
          *((struct DirectComposition::CResourceMarshaler **)this + 92));
        v17 = (DirectComposition::CEvent *)*((_QWORD *)this + 91);
        *((_QWORD *)this + 92) = 0LL;
        if ( v17 )
          DirectComposition::CEvent::`scalar deleting destructor'(v17);
        *((_QWORD *)this + 91) = 0LL;
      }
      if ( *((_QWORD *)this + 92) )
        goto LABEL_67;
    }
    if ( !DirectComposition::CApplicationChannel::EmitDeletionCommands(this, &v21) )
      goto LABEL_67;
    if ( ((*((_DWORD *)this + 148) - 1) & 0xFFFFFFFD) == 0
      && DirectComposition::CBatch::EnsureBatchBuffer(&v21, 0xCuLL, &v23) )
    {
      v18 = (char *)v23;
      *(_DWORD *)v23 = 12;
      *(_QWORD *)(v18 + 4) = 0LL;
      *((_DWORD *)v18 + 1) = 52;
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
      goto LABEL_67;
    if ( (*((_BYTE *)this + 241) & 2) != 0 )
    {
      if ( DirectComposition::CBatch::EnsureBatchBuffer(&v21, 0x10uLL, &v20) )
      {
        v19 = (char *)v20;
        *(_DWORD *)v20 = 16;
        *(_QWORD *)(v19 + 4) = 0LL;
        *((_DWORD *)v19 + 3) = 0;
        *((_DWORD *)v19 + 1) = 55;
        *((_DWORD *)v19 + 2) = (*((unsigned __int8 *)this + 241) >> 2) & 1;
        *((_DWORD *)v19 + 3) = (*((unsigned __int8 *)this + 241) >> 3) & 1;
        *((_BYTE *)this + 241) &= ~2u;
      }
      if ( (*((_BYTE *)this + 241) & 2) != 0 )
LABEL_67:
        v8 = 0;
    }
    v11 = v21;
  }
  else
  {
    if ( !a4 )
    {
      v15 = (struct _ERESOURCE *)*((_QWORD *)this + 46);
      if ( v15 )
      {
        KeEnterCriticalRegion();
        ExAcquireResourceExclusiveLite(v15, 1u);
        if ( !*((_DWORD *)this + 56) )
          KeSetEvent(*(PRKEVENT *)(*((_QWORD *)this + 45) + 8LL), 1, 0);
        ExReleaseResourceLite(*((PERESOURCE *)this + 46));
        KeLeaveCriticalRegion();
      }
      goto LABEL_25;
    }
    BatchFragment = DirectComposition::CApplicationChannel::GetBatchFragment(this, 1, 1);
    EtwTraceDCompCommitBatchEvent(*((unsigned int *)this + 7), BatchFragment, *((unsigned int *)BatchFragment + 4));
    v11 = BatchFragment;
  }
  *((_QWORD *)BatchFragment + 13) = *((_QWORD *)this + 26);
  *((_QWORD *)this + 26) = 0LL;
  if ( v11 )
    *(_BYTE *)(*((_QWORD *)v11 + 17) + 64LL) = 0;
LABEL_25:
  *a2 = BatchFragment;
  *a3 = v11;
  if ( v8 )
  {
    if ( v11 )
    {
      v13 = *((_BYTE *)this + 240);
      if ( (v13 & 0x10) != 0 )
      {
        *((_BYTE *)this + 240) = v13 & 0xEF;
        *((_BYTE *)v11 + 32) |= 8u;
      }
    }
    *((_BYTE *)this + 240) &= ~1u;
    *((_BYTE *)this + 241) &= ~8u;
  }
  return v8;
}
