/*
 * XREFs of CmpCreateChild @ 0x140475B90
 * Callers:
 *     CmpDoParseKey @ 0x1404B47B0 (CmpDoParseKey.c)
 * Callees:
 *     CmpGetSecurityDescriptorNode @ 0x140016054 (CmpGetSecurityDescriptorNode.c)
 *     ExAcquireResourceSharedLite @ 0x1400800D0 (ExAcquireResourceSharedLite.c)
 *     HvpGetCellContextReinitialize @ 0x1400812C8 (HvpGetCellContextReinitialize.c)
 *     ExReleaseResourceLite @ 0x1400830F0 (ExReleaseResourceLite.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140084E80 (ExReleasePushLockEx.c)
 *     CmpTransEnlistUowInKcb @ 0x140100358 (CmpTransEnlistUowInKcb.c)
 *     CmpTransEnlistUowInCmTrans @ 0x14010A3B0 (CmpTransEnlistUowInCmTrans.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     CmpUndoDeleteKeyForTrans @ 0x14045005C (CmpUndoDeleteKeyForTrans.c)
 *     CmpFreeSecurityDescriptor @ 0x1404731A0 (CmpFreeSecurityDescriptor.c)
 *     CmpMarkKeyDirty @ 0x1404735A4 (CmpMarkKeyDirty.c)
 *     CmpAddSubKeyEx @ 0x140473D00 (CmpAddSubKeyEx.c)
 *     CmpFreeKeyByCell @ 0x140475940 (CmpFreeKeyByCell.c)
 *     SeAssignSecurity @ 0x140475B00 (SeAssignSecurity.c)
 *     CmpAssignSecurityToKcb @ 0x1404765F8 (CmpAssignSecurityToKcb.c)
 *     CmpRebuildKcbCacheFromNode @ 0x1404766A8 (CmpRebuildKcbCacheFromNode.c)
 *     CmpCleanUpSubKeyInfo @ 0x140476784 (CmpCleanUpSubKeyInfo.c)
 *     HvFreeCell @ 0x1404778AC (HvFreeCell.c)
 *     CmpCopyName @ 0x140477D28 (CmpCopyName.c)
 *     CmpCleanUpKcbValueCache @ 0x1404789E8 (CmpCleanUpKcbValueCache.c)
 *     HvAllocateCell @ 0x140479BF4 (HvAllocateCell.c)
 *     CmpReportNotify @ 0x14047C204 (CmpReportNotify.c)
 *     HvpMarkCellDirty @ 0x14047D0F4 (HvpMarkCellDirty.c)
 *     CmpGetKcbAtLayerHeight @ 0x140481B64 (CmpGetKcbAtLayerHeight.c)
 *     CmpUpdateKeyNodeAccessBits @ 0x140481B84 (CmpUpdateKeyNodeAccessBits.c)
 *     CmpGetSecurityCacheEntryForKcbStack @ 0x140482B3C (CmpGetSecurityCacheEntryForKcbStack.c)
 *     CmpLockIXLockExclusive @ 0x140569108 (CmpLockIXLockExclusive.c)
 *     CmpLockIXLockIntent @ 0x140569164 (CmpLockIXLockIntent.c)
 *     CmpRundownUnitOfWork @ 0x140569428 (CmpRundownUnitOfWork.c)
 *     CmpIsKeyStackDeleted @ 0x140569C20 (CmpIsKeyStackDeleted.c)
 *     CmpIsSystemEntity @ 0x140569D5C (CmpIsSystemEntity.c)
 *     CmpNameSize @ 0x1405750F8 (CmpNameSize.c)
 *     SeDeassignSecurity @ 0x14057D4B0 (SeDeassignSecurity.c)
 *     CmpRecordParseFailure @ 0x14057F118 (CmpRecordParseFailure.c)
 *     CmAddLogForAction @ 0x140593D1C (CmAddLogForAction.c)
 *     CmpAllocateUnitOfWork @ 0x14059ABD8 (CmpAllocateUnitOfWork.c)
 *     CmpLogTransactionAbortedWithChildName @ 0x14059E850 (CmpLogTransactionAbortedWithChildName.c)
 *     CmpLogUnsupportedOperation @ 0x140697FF0 (CmpLogUnsupportedOperation.c)
 *     CmpSnapshotTxOwnerArray @ 0x1406998A4 (CmpSnapshotTxOwnerArray.c)
 */

__int64 __fastcall CmpCreateChild(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int16 *a4,
        __int64 a5,
        __int16 a6,
        char a7,
        __int64 a8)
{
  char *v9; // r13
  unsigned int v10; // edx
  unsigned int v11; // edx
  __int64 v12; // r9
  ULONG_PTR KcbAtLayerHeight; // r12
  __int64 v14; // r10
  __int64 v15; // r9
  __int64 v16; // r10
  ULONG_PTR v17; // r14
  ULONG_PTR v18; // r15
  int v19; // eax
  __int16 v20; // cx
  __int16 v21; // r8
  _DWORD *v22; // rsi
  int v23; // eax
  __int64 SecurityCacheEntryForKcbStack; // rax
  int SecurityDescriptorNode; // ebx
  __int64 v26; // rcx
  unsigned int v27; // eax
  int *v28; // rcx
  unsigned int v29; // r13d
  unsigned __int16 v30; // ax
  _BYTE *v31; // rbx
  __int16 v32; // ax
  int v33; // eax
  unsigned __int16 v34; // ax
  __int64 v35; // rax
  __int64 v36; // r13
  unsigned int v37; // edx
  unsigned int v38; // eax
  char v39; // al
  char v40; // cl
  PVOID v41; // r14
  PVOID v42; // r14
  __int64 v43; // rsi
  void *v44; // rcx
  __int64 v46; // r8
  _QWORD *UnitOfWork; // rax
  __int64 v48; // rcx
  _QWORD *v49; // rax
  _DWORD *v50; // rax
  _DWORD *v51; // rcx
  int v52; // r8d
  __int64 v53; // rdx
  unsigned __int16 v54; // ax
  __int64 v55; // rdx
  __int64 v56; // rbx
  __int64 v57; // rax
  unsigned int v58; // ecx
  __int64 v59; // rdx
  int v60; // r8d
  __int64 v61; // rdx
  char v62; // [rsp+40h] [rbp-E8h]
  char v63; // [rsp+42h] [rbp-E6h]
  char v64; // [rsp+43h] [rbp-E5h]
  __int16 v65; // [rsp+46h] [rbp-E2h]
  unsigned int BugCheckParameter3; // [rsp+48h] [rbp-E0h]
  unsigned int BugCheckParameter3_4; // [rsp+4Ch] [rbp-DCh]
  __int16 v68; // [rsp+50h] [rbp-D8h]
  void *v69; // [rsp+58h] [rbp-D0h] BYREF
  PVOID P; // [rsp+60h] [rbp-C8h]
  PVOID v71; // [rsp+68h] [rbp-C0h]
  int v72; // [rsp+70h] [rbp-B8h]
  PSECURITY_DESCRIPTOR NewDescriptor; // [rsp+78h] [rbp-B0h] BYREF
  void *v74; // [rsp+80h] [rbp-A8h] BYREF
  unsigned int v75; // [rsp+88h] [rbp-A0h] BYREF
  unsigned int v76; // [rsp+8Ch] [rbp-9Ch]
  __int64 v77; // [rsp+90h] [rbp-98h]
  _BYTE v78[8]; // [rsp+98h] [rbp-90h] BYREF
  _QWORD *v79; // [rsp+A0h] [rbp-88h]
  _QWORD *v80; // [rsp+A8h] [rbp-80h]
  _BYTE v81[8]; // [rsp+B0h] [rbp-78h] BYREF
  _BYTE v82[8]; // [rsp+B8h] [rbp-70h] BYREF
  PSECURITY_DESCRIPTOR ExplicitDescriptor; // [rsp+C0h] [rbp-68h]
  ULONG_PTR v84; // [rsp+D0h] [rbp-58h]
  ULONG_PTR v85; // [rsp+D8h] [rbp-50h]
  ULONG_PTR v86; // [rsp+E0h] [rbp-48h]
  int v88; // [rsp+130h] [rbp+8h]
  int v91; // [rsp+168h] [rbp+40h]
  unsigned __int16 *v92; // [rsp+168h] [rbp+40h]

  v64 = 0;
  v62 = 0;
  v9 = 0LL;
  v69 = 0LL;
  BugCheckParameter3_4 = -1;
  v72 = -1;
  HvpGetCellContextReinitialize((__int64)v82);
  v74 = 0LL;
  BugCheckParameter3 = v10;
  HvpGetCellContextReinitialize((__int64)v78);
  v77 = 0LL;
  HvpGetCellContextReinitialize((__int64)v81);
  NewDescriptor = 0LL;
  v75 = v11;
  v71 = 0LL;
  v79 = 0LL;
  P = 0LL;
  v80 = 0LL;
  v63 = 0;
  KcbAtLayerHeight = CmpGetKcbAtLayerHeight(v12, *(unsigned __int16 *)(v12 + 2));
  v84 = KcbAtLayerHeight;
  v17 = CmpGetKcbAtLayerHeight(v14, *(unsigned __int16 *)(v14 + 2));
  v85 = v17;
  v18 = *(_QWORD *)(v17 + 24);
  v86 = v18;
  if ( a8 && (*(_DWORD *)(v18 + 144) & 2) != 0 )
  {
    v52 = -1072103423;
    v53 = 262400LL;
    goto LABEL_119;
  }
  if ( (*(_DWORD *)(KcbAtLayerHeight + 4) & 0x80u) != 0 )
  {
    v52 = -1073741790;
    v53 = 262656LL;
    goto LABEL_119;
  }
  if ( (*(_DWORD *)(*(_QWORD *)(KcbAtLayerHeight + 24) + 144LL) & 0x100000) != 0 )
  {
    v52 = -1073741790;
    v53 = 262912LL;
    goto LABEL_119;
  }
  if ( *(_BYTE *)(KcbAtLayerHeight + 57) == 1 )
  {
    v52 = -1073741790;
    v53 = 263168LL;
    goto LABEL_119;
  }
  if ( !CmpVEEnabled || (v19 = 1, (*(_DWORD *)(KcbAtLayerHeight + 176) & 0x1000000) == 0) )
    v19 = 0;
  v20 = a6 | 0x100;
  if ( !v19 )
    v20 = a6;
  v21 = v20 | 0x200;
  if ( (*(_DWORD *)(KcbAtLayerHeight + 176) & 0x2000000) == 0 )
    v21 = v20;
  v65 = v21;
  if ( (*(_DWORD *)(v18 + 5360) & 0x20) != 0 && *(_QWORD *)(a3 + 64) )
  {
    v52 = -1073741790;
    v53 = 263424LL;
LABEL_119:
    v22 = (_DWORD *)a5;
    goto LABEL_121;
  }
  v22 = (_DWORD *)a5;
  v23 = *(_DWORD *)(a5 + 24) & 1;
  v76 = v23;
  if ( *(int *)(KcbAtLayerHeight + 32) < 0 && !v23 && (!a8 || !*(_QWORD *)(KcbAtLayerHeight + 232)) )
  {
    SecurityDescriptorNode = -1073741439;
    v53 = 263680LL;
    goto LABEL_122;
  }
  if ( a8 )
  {
    if ( !(unsigned __int8)CmpIsKeyStackDeleted(v16, 0LL) )
    {
      if ( (int)CmpUndoDeleteKeyForTrans(v17, a8, v46) < 0 )
      {
        SecurityDescriptorNode = -1073741772;
        v53 = 263936LL;
LABEL_122:
        CmpRecordParseFailure(v22, v53);
        goto LABEL_64;
      }
LABEL_63:
      SecurityDescriptorNode = 0;
LABEL_64:
      v39 = 0;
      goto LABEL_65;
    }
    v15 = a1;
    LOBYTE(v21) = v65;
  }
  v68 = v21 & 2;
  if ( (v21 & 2) == 0 )
  {
    if ( (*(_DWORD *)(v18 + 5360) & 0x20) != 0 )
    {
      NewDescriptor = (PSECURITY_DESCRIPTOR)(CmpGetSecurityCacheEntryForKcbStack(v15) + 32);
    }
    else
    {
      if ( (*(_DWORD *)(v17 + 176) & 0x2000000) == 0 || (unsigned __int8)CmpIsSystemEntity(a5 + 16) )
        ExplicitDescriptor = *(PSECURITY_DESCRIPTOR *)(a3 + 64);
      else
        ExplicitDescriptor = 0LL;
      SecurityCacheEntryForKcbStack = CmpGetSecurityCacheEntryForKcbStack(a1);
      SecurityDescriptorNode = SeAssignSecurity(
                                 (PSECURITY_DESCRIPTOR)(SecurityCacheEntryForKcbStack + 32),
                                 ExplicitDescriptor,
                                 &NewDescriptor,
                                 1u,
                                 (PSECURITY_SUBJECT_CONTEXT)(a3 + 32),
                                 (PGENERIC_MAPPING)((char *)CmKeyObjectType + 76),
                                 *((POOL_TYPE *)CmKeyObjectType + 25));
      if ( SecurityDescriptorNode < 0 )
      {
        v53 = 264192LL;
        goto LABEL_122;
      }
    }
  }
  v26 = v76;
  if ( a8 )
    v26 = 1LL;
  v88 = v26;
  v27 = *(_DWORD *)(v17 + 32);
  if ( v27 != -1 )
  {
    if ( (_DWORD)v26 != v27 >> 31 )
      CmpLogUnsupportedOperation(2LL);
    v91 = *(_DWORD *)(v17 + 32) >> 31;
    if ( !a7 )
    {
      ExAcquireResourceSharedLite(*(PERESOURCE *)(v18 + 2848), 1u);
      v62 = 1;
    }
    v9 = (char *)(*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _BYTE *, __int64))(v18 + 8))(
                   v18,
                   *(unsigned int *)(v17 + 32),
                   v82,
                   v15);
    v69 = v9;
    if ( (unsigned __int16)CmpNameSize(a4) != *((_WORD *)v9 + 36) )
    {
      CmpLogUnsupportedOperation(1LL);
      SecurityDescriptorNode = -1073741822;
      v53 = 264448LL;
      goto LABEL_122;
    }
    if ( !CmpMarkKeyDirty(v18, *(unsigned int *)(v17 + 32), 0) )
    {
      v52 = -1073741443;
      v53 = 264704LL;
      goto LABEL_121;
    }
    if ( !(unsigned __int8)HvpMarkCellDirty(v18, *(unsigned int *)(KcbAtLayerHeight + 32)) )
    {
      v52 = -1073741443;
      v53 = 264960LL;
      goto LABEL_121;
    }
    v54 = *(_WORD *)(a5 + 4);
    if ( v54 )
    {
      BugCheckParameter3 = HvAllocateCell(v18, v54, v91, (unsigned int)&v74, (__int64)v78);
      if ( BugCheckParameter3 == -1 )
      {
        v52 = -1073741670;
        v53 = 265216LL;
        goto LABEL_121;
      }
      memmove(v74, *(const void **)(a5 + 8), *(unsigned __int16 *)(a5 + 4));
      (*(void (__fastcall **)(ULONG_PTR, _BYTE *))(v18 + 16))(v18, v78);
      v74 = 0LL;
    }
    ExAcquirePushLockExclusiveEx(v18 + 2952, 0LL);
    SecurityDescriptorNode = CmpGetSecurityDescriptorNode(
                               v18,
                               *(unsigned int *)(v17 + 32),
                               (__int64)v9,
                               NewDescriptor,
                               1,
                               &v75);
    if ( SecurityDescriptorNode >= 0 )
    {
      CmpFreeSecurityDescriptor(v18, *(unsigned int *)(v17 + 32));
      *((_DWORD *)v9 + 11) = v75;
      ExReleasePushLockEx(v18 + 2952, 0LL);
      *((_DWORD *)v9 + 12) = BugCheckParameter3;
      v92 = (unsigned __int16 *)(v9 + 74);
      *((_WORD *)v9 + 37) = *(_WORD *)(a5 + 4);
      BugCheckParameter3 = -1;
      CmpCopyName(v9 + 76, a4);
      v9[13] |= 3u;
      *((_WORD *)v9 + 1) = v65;
      if ( *((_WORD *)v9 + 36) < *a4 )
        *((_WORD *)v9 + 1) = v65 | 0x20;
      v56 = MEMORY[0xFFFFF78000000014];
      v9 = (char *)v69;
      *(_QWORD *)((char *)v69 + 4) = MEMORY[0xFFFFF78000000014];
      ++*(_QWORD *)(v17 + 296);
      CmpRebuildKcbCacheFromNode(v17);
      v57 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _BYTE *))(v18 + 8))(
              v18,
              *(unsigned int *)(KcbAtLayerHeight + 32),
              v81);
      v77 = v57;
      *(_QWORD *)(v57 + 4) = v56;
      *(_QWORD *)(KcbAtLayerHeight + 160) = v56;
      ++*(_QWORD *)(KcbAtLayerHeight + 296);
      v58 = *v92;
      if ( *(_DWORD *)(v57 + 56) < v58 )
        *(_DWORD *)(v57 + 56) = v58;
      if ( v62 )
      {
        ExReleaseResourceLite(*(PERESOURCE *)(v18 + 2848));
        v62 = 0;
      }
      CmpReportNotify(v17, *(_QWORD *)(v17 + 24), *(_DWORD *)(v17 + 32), 0, 1, 0LL);
      goto LABEL_63;
    }
    v55 = 265728LL;
    goto LABEL_147;
  }
  if ( !a7 )
  {
    ExAcquireResourceSharedLite(*(PERESOURCE *)(v18 + 2848), 1u);
    v62 = 1;
  }
  if ( a8 )
  {
    UnitOfWork = (_QWORD *)CmpAllocateUnitOfWork(v26);
    v71 = UnitOfWork;
    v79 = UnitOfWork;
    if ( !UnitOfWork )
    {
      v52 = -1073741670;
      v53 = 265984LL;
      goto LABEL_121;
    }
    CmpTransEnlistUowInKcb(UnitOfWork, KcbAtLayerHeight);
    SecurityDescriptorNode = CmpTransEnlistUowInCmTrans(v71, a8);
    if ( SecurityDescriptorNode < 0 )
    {
      v53 = 266240LL;
      goto LABEL_122;
    }
    v49 = (_QWORD *)CmpAllocateUnitOfWork(v48);
    P = v49;
    v80 = v49;
    if ( !v49 )
    {
      v52 = -1073741670;
      v53 = 266496LL;
      goto LABEL_121;
    }
    CmpTransEnlistUowInKcb(v49, v17);
    SecurityDescriptorNode = CmpTransEnlistUowInCmTrans(P, a8);
    if ( SecurityDescriptorNode < 0 )
    {
      v53 = 266752LL;
      goto LABEL_122;
    }
    if ( !(unsigned __int8)CmpLockIXLockIntent(KcbAtLayerHeight + 240, v71) )
    {
      v52 = -1072103423;
      v53 = 267008LL;
      goto LABEL_121;
    }
    if ( !(unsigned __int8)CmpLockIXLockExclusive(v17 + 240, P, 0LL) )
    {
      v52 = -1072103423;
      v53 = 267264LL;
      goto LABEL_121;
    }
    if ( !(unsigned __int8)CmpLockIXLockExclusive(v17 + 256, P, 1LL) )
    {
      v52 = -1072103423;
      v53 = 267520LL;
LABEL_121:
      SecurityDescriptorNode = v52;
      goto LABEL_122;
    }
  }
  else
  {
    v28 = (int *)(KcbAtLayerHeight + 240);
    if ( *(_QWORD *)(KcbAtLayerHeight + 232) )
    {
      SecurityDescriptorNode = CmpSnapshotTxOwnerArray(v28, a5 + 120, a5 + 128);
      if ( SecurityDescriptorNode < 0 )
      {
        v53 = 267776LL;
        goto LABEL_122;
      }
      CmpLogTransactionAbortedWithChildName(KcbAtLayerHeight, a4, 6LL);
      *(_DWORD *)(a5 + 96) |= 4u;
      v52 = -1073741267;
      v53 = 268032LL;
      goto LABEL_121;
    }
    if ( *v28 < 0 )
    {
      SecurityDescriptorNode = CmpSnapshotTxOwnerArray(v28, a5 + 120, a5 + 128);
      if ( SecurityDescriptorNode < 0 )
      {
        v53 = 268288LL;
        goto LABEL_122;
      }
      CmpLogTransactionAbortedWithChildName(KcbAtLayerHeight, a4, 6LL);
      *(_DWORD *)(a5 + 96) |= 4u;
      v52 = -1073741267;
      v53 = 268544LL;
      goto LABEL_121;
    }
    if ( *(_DWORD *)(v17 + 240) )
    {
      SecurityDescriptorNode = CmpSnapshotTxOwnerArray(v17 + 240, a5 + 120, a5 + 128);
      if ( SecurityDescriptorNode < 0 )
      {
        v53 = 268800LL;
        goto LABEL_122;
      }
      CmpLogTransactionAbortedWithChildName(KcbAtLayerHeight, a4, 6LL);
      *(_DWORD *)(a5 + 96) |= 4u;
      v52 = -1073741267;
      v53 = 269056LL;
      goto LABEL_121;
    }
    if ( *(_DWORD *)(v17 + 256) )
    {
      SecurityDescriptorNode = CmpSnapshotTxOwnerArray(v17 + 256, a5 + 120, a5 + 128);
      if ( SecurityDescriptorNode < 0 )
      {
        v53 = 269312LL;
        goto LABEL_122;
      }
      CmpLogTransactionAbortedWithChildName(KcbAtLayerHeight, a4, 6LL);
      *(_DWORD *)(a5 + 96) |= 4u;
      v52 = -1073741267;
      v53 = 269568LL;
      goto LABEL_121;
    }
  }
  v29 = (unsigned __int16)CmpNameSize(a4) + 76;
  BugCheckParameter3_4 = HvAllocateCell(v18, v29, v88, (unsigned int)&v69, (__int64)v82);
  v72 = BugCheckParameter3_4;
  if ( BugCheckParameter3_4 == -1 )
  {
    v59 = 269824LL;
    goto LABEL_174;
  }
  v30 = *(_WORD *)(a5 + 4);
  if ( v30 )
  {
    BugCheckParameter3 = HvAllocateCell(v18, v30, v88, (unsigned int)&v74, (__int64)v78);
    if ( BugCheckParameter3 != -1 )
    {
      memmove(v74, *(const void **)(a5 + 8), *(unsigned __int16 *)(a5 + 4));
      (*(void (__fastcall **)(ULONG_PTR, _BYTE *))(v18 + 16))(v18, v78);
      v74 = 0LL;
      goto LABEL_32;
    }
    v59 = 270080LL;
LABEL_174:
    SecurityDescriptorNode = -1073741670;
    CmpRecordParseFailure(a5, v59);
    v9 = (char *)v69;
    goto LABEL_64;
  }
LABEL_32:
  v31 = v69;
  memset(v69, 0, v29);
  v32 = 27500;
  if ( !v68 )
    v32 = 27502;
  *(_WORD *)v31 = v32;
  v31[12] = CmpAccessBitForPhase;
  if ( *(_BYTE *)(KcbAtLayerHeight + 57) == 3 )
    v31[13] |= 3u;
  else
    v31[13] &= 0xFCu;
  *((_WORD *)v31 + 1) = v65;
  v9 = (char *)v69;
  *(_QWORD *)((char *)v69 + 4) = MEMORY[0xFFFFF78000000014];
  *((_DWORD *)v9 + 4) = *(_DWORD *)(KcbAtLayerHeight + 32);
  *(_QWORD *)(v9 + 28) = -1LL;
  *((_QWORD *)v9 + 5) = -1LL;
  *((_DWORD *)v9 + 12) = BugCheckParameter3;
  *((_WORD *)v9 + 37) = *(_WORD *)(a5 + 4);
  BugCheckParameter3 = -1;
  v33 = *(_DWORD *)(KcbAtLayerHeight + 176);
  if ( (v33 & 0x80u) != 0 )
    *((_DWORD *)v9 + 13) ^= (*((_DWORD *)v9 + 13) ^ (v33 << 16)) & 0xF00000;
  v34 = CmpCopyName(v9 + 76, a4);
  *((_WORD *)v9 + 36) = v34;
  if ( v34 < *a4 )
    *((_WORD *)v31 + 1) |= 0x20u;
  if ( v68 )
  {
    *(_QWORD *)(v9 + 36) = *(_QWORD *)(a5 + 48);
    *((_DWORD *)v9 + 7) = *(_DWORD *)(a5 + 40);
  }
  v64 = 1;
  if ( v68 )
  {
LABEL_45:
    if ( (unsigned __int8)HvpMarkCellDirty(v18, *(unsigned int *)(KcbAtLayerHeight + 32)) )
    {
      v35 = a8;
      if ( a8 )
      {
LABEL_49:
        v63 = 1;
        *(_DWORD *)(v17 + 32) = BugCheckParameter3_4;
        BugCheckParameter3_4 = -1;
        *(_QWORD *)(v17 + 232) = v35;
        if ( (v65 & 0x42) == 0 )
        {
          *(_DWORD *)(v17 + 88) = *((_DWORD *)v9 + 9);
          *(_QWORD *)(v17 + 96) = *((unsigned int *)v9 + 10);
        }
        ++*(_QWORD *)(v17 + 296);
        CmpRebuildKcbCacheFromNode(v17);
        if ( !v68 )
          CmpAssignSecurityToKcb(v17, *((unsigned int *)v9 + 11), 0);
        if ( !a8 )
          goto LABEL_54;
        v50 = P;
        *((_DWORD *)P + 17) = 0;
        v50[18] = v76;
        v51 = v71;
        *((_QWORD *)v50 + 10) = v71;
        v51[17] = 1;
        *((_QWORD *)v51 + 11) = v17;
        SecurityDescriptorNode = CmAddLogForAction(v50);
        if ( SecurityDescriptorNode >= 0 )
        {
          P = 0LL;
          v71 = 0LL;
LABEL_54:
          v36 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _BYTE *))(*(_QWORD *)(KcbAtLayerHeight + 24) + 8LL))(
                  *(_QWORD *)(KcbAtLayerHeight + 24),
                  *(unsigned int *)(KcbAtLayerHeight + 32),
                  v81);
          v77 = v36;
          CmpUpdateKeyNodeAccessBits(*(_QWORD *)(KcbAtLayerHeight + 24), v36, *(unsigned int *)(KcbAtLayerHeight + 32));
          *(_QWORD *)(v36 + 4) = MEMORY[0xFFFFF78000000014];
          v37 = *a4;
          if ( (unsigned __int16)*(_DWORD *)(v36 + 52) < v37 )
            *(_WORD *)(v36 + 52) = v37;
          v38 = *(unsigned __int16 *)(a5 + 4);
          if ( *(_DWORD *)(v36 + 56) < v38 )
            *(_DWORD *)(v36 + 56) = v38;
          ++*(_QWORD *)(KcbAtLayerHeight + 296);
          *(_WORD *)(KcbAtLayerHeight + 168) = *(_WORD *)(v36 + 52);
          *(_QWORD *)(KcbAtLayerHeight + 160) = *(_QWORD *)(v36 + 4);
          CmpCleanUpSubKeyInfo(KcbAtLayerHeight);
          if ( v62 )
          {
            ExReleaseResourceLite(*(PERESOURCE *)(v18 + 2848));
            v62 = 0;
          }
          if ( (*(_DWORD *)a5 & 2) == 0 )
            CmpReportNotify(v17, *(_QWORD *)(v17 + 24), *(_DWORD *)(v17 + 32), a8, 1, 0LL);
          v9 = (char *)v69;
          goto LABEL_63;
        }
        v61 = 271360LL;
LABEL_180:
        CmpRecordParseFailure(a5, v61);
        v40 = v63;
        goto LABEL_67;
      }
      if ( CmpAddSubKeyEx(v18, *(unsigned int *)(KcbAtLayerHeight + 32), BugCheckParameter3_4, 0) )
      {
        v35 = 0LL;
        goto LABEL_49;
      }
      v60 = -1073741670;
      v61 = 271104LL;
    }
    else
    {
      v60 = -1073741443;
      v61 = 270848LL;
    }
    SecurityDescriptorNode = v60;
    goto LABEL_180;
  }
  ExAcquirePushLockExclusiveEx(v18 + 2952, 0LL);
  SecurityDescriptorNode = CmpGetSecurityDescriptorNode(
                             v18,
                             BugCheckParameter3_4,
                             (__int64)v9,
                             NewDescriptor,
                             0,
                             (unsigned int *)v9 + 11);
  if ( SecurityDescriptorNode >= 0 )
  {
    ExReleasePushLockEx(v18 + 2952, 0LL);
    goto LABEL_45;
  }
  v55 = 270592LL;
LABEL_147:
  CmpRecordParseFailure(a5, v55);
  v39 = 1;
LABEL_65:
  v40 = 0;
  if ( v39 )
  {
    ExReleasePushLockEx(v18 + 2952, 0LL);
    v40 = 0;
  }
LABEL_67:
  if ( v40 )
  {
    BugCheckParameter3_4 = *(_DWORD *)(v17 + 32);
    *(_DWORD *)(v17 + 32) = -1;
    CmpCleanUpKcbValueCache(v17);
    *(_DWORD *)(v17 + 88) = 0;
    *(_QWORD *)(v17 + 96) = 0xFFFFFFFFLL;
    *(_WORD *)(v17 + 178) = 0;
    *(_DWORD *)(v17 + 104) = 0;
    *(_QWORD *)(v17 + 160) = 0LL;
    *(_QWORD *)(v17 + 168) = 0LL;
    *(_DWORD *)(v17 + 176) &= 0xFFFFFF00;
    *(_BYTE *)(v17 + 177) = 0;
    *(_QWORD *)(v17 + 232) = 0LL;
    *(_QWORD *)(v17 + 80) = 0LL;
  }
  v41 = P;
  if ( P )
  {
    CmpRundownUnitOfWork((ULONG_PTR)P);
    ExFreePoolWithTag(v41, 0x77554D43u);
  }
  v42 = v71;
  if ( v71 )
  {
    CmpRundownUnitOfWork((ULONG_PTR)v71);
    ExFreePoolWithTag(v42, 0x77554D43u);
  }
  if ( NewDescriptor && (*(_DWORD *)(v18 + 5360) & 0x20) == 0 )
  {
    if ( (*v22 & 1) != 0 && (v22[6] & 4) != 0 )
    {
      SeDeassignSecurity(&NewDescriptor);
    }
    else
    {
      v43 = *(_QWORD *)(a3 + 72);
      v44 = *(void **)(v43 + 48);
      if ( v44 )
        ExFreePoolWithTag(v44, 0);
      *(_QWORD *)(v43 + 48) = NewDescriptor;
    }
  }
  if ( v77 )
    (*(void (__fastcall **)(_QWORD, _BYTE *))(*(_QWORD *)(KcbAtLayerHeight + 24) + 16LL))(
      *(_QWORD *)(KcbAtLayerHeight + 24),
      v81);
  if ( v74 )
    (*(void (__fastcall **)(ULONG_PTR, _BYTE *))(v18 + 16))(v18, v78);
  if ( BugCheckParameter3 != -1 )
    HvFreeCell(v18, BugCheckParameter3);
  if ( v9 )
    (*(void (__fastcall **)(ULONG_PTR, _BYTE *))(v18 + 16))(v18, v82);
  if ( BugCheckParameter3_4 != -1 )
  {
    if ( v64 )
      CmpFreeKeyByCell(v18, BugCheckParameter3_4, 0);
    else
      HvFreeCell(v18, BugCheckParameter3_4);
  }
  if ( v62 )
    ExReleaseResourceLite(*(PERESOURCE *)(v18 + 2848));
  return (unsigned int)SecurityDescriptorNode;
}
