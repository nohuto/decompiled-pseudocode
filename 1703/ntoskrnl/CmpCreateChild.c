/*
 * XREFs of CmpCreateChild @ 0x1404D0388
 * Callers:
 *     CmpDoParseKey @ 0x1405343E0 (CmpDoParseKey.c)
 * Callees:
 *     CmpGetSecurityDescriptorNode @ 0x14006ECBC (CmpGetSecurityDescriptorNode.c)
 *     CmpTransEnlistUowInCmTrans @ 0x14007FCDC (CmpTransEnlistUowInCmTrans.c)
 *     HvpGetCellContextReinitialize @ 0x14008D150 (HvpGetCellContextReinitialize.c)
 *     ExAcquireResourceSharedLite @ 0x14008F530 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1400EEB50 (ExReleaseResourceLite.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x1400F0C70 (ExReleasePushLockEx.c)
 *     CmpTransEnlistUowInKcb @ 0x14011E248 (CmpTransEnlistUowInKcb.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     CmAddLogForAction @ 0x14042C988 (CmAddLogForAction.c)
 *     CmpRecordParseFailure @ 0x140444E0C (CmpRecordParseFailure.c)
 *     SeDeassignSecurity @ 0x140449CF0 (SeDeassignSecurity.c)
 *     CmpAllocateUnitOfWork @ 0x1404589B0 (CmpAllocateUnitOfWork.c)
 *     CmpLogTransactionAbortedWithChildName @ 0x14045E258 (CmpLogTransactionAbortedWithChildName.c)
 *     HvFreeCell @ 0x14048C8DC (HvFreeCell.c)
 *     HvAllocateCell @ 0x14048CDA0 (HvAllocateCell.c)
 *     CmpReportNotify @ 0x14048CFF4 (CmpReportNotify.c)
 *     CmpCleanUpKcbValueCache @ 0x140491380 (CmpCleanUpKcbValueCache.c)
 *     CmpCopyName @ 0x140491A0C (CmpCopyName.c)
 *     CmpNameSize @ 0x140491A5C (CmpNameSize.c)
 *     CmpLockIXLockExclusive @ 0x1404CE168 (CmpLockIXLockExclusive.c)
 *     CmpLockIXLockIntent @ 0x1404CE1C4 (CmpLockIXLockIntent.c)
 *     CmpRundownUnitOfWork @ 0x1404CE510 (CmpRundownUnitOfWork.c)
 *     CmpRebuildKcbCacheFromNode @ 0x1404D0DFC (CmpRebuildKcbCacheFromNode.c)
 *     CmpCleanUpSubKeyInfo @ 0x1404D0ED8 (CmpCleanUpSubKeyInfo.c)
 *     CmpAssignSecurityToKcb @ 0x1404D0F50 (CmpAssignSecurityToKcb.c)
 *     SeAssignSecurity @ 0x1404D1000 (SeAssignSecurity.c)
 *     CmpFreeKeyByCell @ 0x1404D1394 (CmpFreeKeyByCell.c)
 *     CmpMarkKeyDirty @ 0x1404D177C (CmpMarkKeyDirty.c)
 *     CmpAddSubKeyEx @ 0x1404D2220 (CmpAddSubKeyEx.c)
 *     CmpFreeSecurityDescriptor @ 0x1404D3160 (CmpFreeSecurityDescriptor.c)
 *     CmpIsKeyStackDeleted @ 0x1404D4080 (CmpIsKeyStackDeleted.c)
 *     CmpIsSystemEntity @ 0x1404D4280 (CmpIsSystemEntity.c)
 *     CmpGetSecurityCacheEntryForKcbStack @ 0x1404FCEA0 (CmpGetSecurityCacheEntryForKcbStack.c)
 *     CmpGetKcbAtLayerHeight @ 0x140500634 (CmpGetKcbAtLayerHeight.c)
 *     CmpUpdateKeyNodeAccessBits @ 0x140500654 (CmpUpdateKeyNodeAccessBits.c)
 *     HvpMarkCellDirty @ 0x14051559C (HvpMarkCellDirty.c)
 *     CmpUndoDeleteKeyForTrans @ 0x14056B998 (CmpUndoDeleteKeyForTrans.c)
 *     CmpLogUnsupportedOperation @ 0x14066DAD0 (CmpLogUnsupportedOperation.c)
 *     CmpSnapshotTxOwnerArray @ 0x14067355C (CmpSnapshotTxOwnerArray.c)
 */

__int64 __fastcall CmpCreateChild(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        UNICODE_STRING *a4,
        __int64 a5,
        __int16 a6,
        char a7,
        __int64 a8)
{
  char *v9; // r13
  unsigned int v10; // edx
  unsigned int v11; // edx
  __int64 v12; // r11
  __int64 KcbAtLayerHeight; // r12
  __int64 v14; // r10
  __int64 v15; // r10
  __int64 v16; // r11
  __int64 v17; // r14
  ULONG_PTR v18; // r15
  int v19; // eax
  __int16 v20; // cx
  __int16 v21; // dx
  _DWORD *v22; // rsi
  int v23; // eax
  void *v24; // rbx
  __int64 SecurityCacheEntryForKcbStack; // rax
  NTSTATUS v26; // eax
  unsigned int v27; // ebx
  unsigned int v28; // ebx
  unsigned int v29; // eax
  unsigned int v30; // r13d
  unsigned __int16 v31; // ax
  _BYTE *v32; // rbx
  __int16 v33; // ax
  int v34; // eax
  unsigned __int16 v35; // ax
  int SecurityDescriptorNode; // eax
  __int64 v37; // rax
  ULONG v38; // edx
  __int64 v39; // r13
  unsigned int Length; // edx
  unsigned int v41; // eax
  char v42; // al
  PVOID v43; // r14
  PVOID v44; // r14
  __int64 v45; // rsi
  void *v46; // rcx
  _QWORD *UnitOfWork; // rax
  int v49; // eax
  _QWORD *v50; // rax
  int v51; // eax
  _DWORD *v52; // rcx
  _DWORD *v53; // rax
  int v54; // eax
  int v55; // r8d
  int v56; // edx
  unsigned int v57; // ebx
  unsigned __int16 v58; // ax
  int v59; // edx
  __int64 v60; // rbx
  int v61; // eax
  __int64 v62; // r9
  int v63; // eax
  __int64 v64; // r9
  int v65; // eax
  __int64 v66; // r9
  int v67; // eax
  __int64 v68; // r9
  int v69; // edx
  int v70; // r8d
  int v71; // edx
  char v72; // [rsp+40h] [rbp-D8h]
  char v73; // [rsp+41h] [rbp-D7h]
  char v74; // [rsp+43h] [rbp-D5h]
  __int16 v75; // [rsp+48h] [rbp-D0h]
  unsigned int BugCheckParameter3; // [rsp+4Ch] [rbp-CCh]
  unsigned int BugCheckParameter3_4; // [rsp+50h] [rbp-C8h]
  __int16 v78; // [rsp+54h] [rbp-C4h]
  void *v79; // [rsp+58h] [rbp-C0h] BYREF
  PVOID P; // [rsp+60h] [rbp-B8h]
  PVOID v81; // [rsp+68h] [rbp-B0h]
  int v82; // [rsp+70h] [rbp-A8h]
  PSECURITY_DESCRIPTOR NewDescriptor; // [rsp+78h] [rbp-A0h] BYREF
  void *v84; // [rsp+80h] [rbp-98h] BYREF
  unsigned int v85; // [rsp+88h] [rbp-90h] BYREF
  unsigned int v86; // [rsp+8Ch] [rbp-8Ch]
  __int64 v87; // [rsp+90h] [rbp-88h]
  _BYTE v88[8]; // [rsp+98h] [rbp-80h] BYREF
  _QWORD *v89; // [rsp+A0h] [rbp-78h]
  _QWORD *v90; // [rsp+A8h] [rbp-70h]
  _BYTE v91[8]; // [rsp+B0h] [rbp-68h] BYREF
  _BYTE v92[16]; // [rsp+B8h] [rbp-60h] BYREF
  __int64 v93; // [rsp+C8h] [rbp-50h]
  __int64 v94; // [rsp+D0h] [rbp-48h]
  ULONG_PTR v95; // [rsp+D8h] [rbp-40h]
  unsigned int v97; // [rsp+120h] [rbp+8h]

  v74 = 0;
  v72 = 0;
  v9 = 0LL;
  v79 = 0LL;
  BugCheckParameter3_4 = -1;
  v82 = -1;
  HvpGetCellContextReinitialize((__int64)v92);
  v84 = 0LL;
  BugCheckParameter3 = v10;
  HvpGetCellContextReinitialize((__int64)v88);
  v87 = 0LL;
  HvpGetCellContextReinitialize((__int64)v91);
  NewDescriptor = 0LL;
  v85 = v11;
  v81 = 0LL;
  v89 = 0LL;
  P = 0LL;
  v90 = 0LL;
  v73 = 0;
  KcbAtLayerHeight = CmpGetKcbAtLayerHeight(v12, *(unsigned __int16 *)(v12 + 2));
  v93 = KcbAtLayerHeight;
  v17 = CmpGetKcbAtLayerHeight(v14, *(unsigned __int16 *)(v14 + 2));
  v94 = v17;
  v18 = *(_QWORD *)(v17 + 24);
  v95 = v18;
  if ( a8 && (*(_DWORD *)(v18 + 144) & 2) != 0 )
  {
    v55 = -1072103423;
    v56 = 262400;
    goto LABEL_121;
  }
  if ( (*(_DWORD *)(KcbAtLayerHeight + 4) & 0x80u) != 0 )
  {
    v55 = -1073741790;
    v56 = 262656;
    goto LABEL_121;
  }
  if ( (*(_DWORD *)(*(_QWORD *)(KcbAtLayerHeight + 24) + 144LL) & 0x100000) != 0 )
  {
    v55 = -1073741790;
    v56 = 262912;
    goto LABEL_121;
  }
  if ( *(_BYTE *)(KcbAtLayerHeight + 57) == 1 )
  {
    v55 = -1073741790;
    v56 = 263168;
    goto LABEL_121;
  }
  if ( !CmpVEEnabled || (v19 = 1, (*(_DWORD *)(KcbAtLayerHeight + 176) & 0x1000000) == 0) )
    v19 = 0;
  v20 = a6 | 0x100;
  if ( !v19 )
    v20 = a6;
  v21 = v20 | 0x200;
  if ( (*(_DWORD *)(KcbAtLayerHeight + 176) & 0x2000000) == 0 )
    v21 = v20;
  v75 = v21;
  if ( (*(_DWORD *)(v18 + 5360) & 0x20) != 0 && *(_QWORD *)(a3 + 64) )
  {
    v55 = -1073741790;
    v56 = 263424;
LABEL_121:
    v22 = (_DWORD *)a5;
LABEL_123:
    v27 = v55;
    goto LABEL_115;
  }
  v22 = (_DWORD *)a5;
  v23 = *(_DWORD *)(a5 + 24) & 1;
  v86 = v23;
  if ( *(_DWORD *)(KcbAtLayerHeight + 32) >= 0x80000000 && v23 != 1 && (!a8 || !*(_QWORD *)(KcbAtLayerHeight + 232)) )
  {
    v27 = -1073741439;
    v55 = -1073741439;
    v56 = 263680;
    goto LABEL_115;
  }
  if ( a8 )
  {
    if ( !(unsigned __int8)CmpIsKeyStackDeleted(v15, 0LL) )
    {
      if ( (int)CmpUndoDeleteKeyForTrans(v17, a8) < 0 )
      {
        v27 = -1073741772;
        v55 = -1073741772;
        v56 = 263936;
LABEL_115:
        CmpRecordParseFailure((__int64)v22, v56, v55);
        goto LABEL_64;
      }
LABEL_63:
      v27 = 0;
LABEL_64:
      v42 = 0;
      goto LABEL_65;
    }
    v16 = a1;
    LOBYTE(v21) = v75;
  }
  v78 = v21 & 2;
  if ( (v21 & 2) == 0 )
  {
    if ( (*(_DWORD *)(v18 + 5360) & 0x20) != 0 )
    {
      NewDescriptor = (PSECURITY_DESCRIPTOR)(CmpGetSecurityCacheEntryForKcbStack(v16, a8) + 32);
    }
    else
    {
      if ( (*(_DWORD *)(v17 + 176) & 0x2000000) == 0 || (unsigned __int8)CmpIsSystemEntity(a5 + 16) )
        v24 = *(void **)(a3 + 64);
      else
        v24 = 0LL;
      SecurityCacheEntryForKcbStack = CmpGetSecurityCacheEntryForKcbStack(a1, a8);
      v26 = SeAssignSecurity(
              (PSECURITY_DESCRIPTOR)(SecurityCacheEntryForKcbStack + 32),
              v24,
              &NewDescriptor,
              1u,
              (PSECURITY_SUBJECT_CONTEXT)(a3 + 32),
              (PGENERIC_MAPPING)((char *)CmKeyObjectType + 76),
              *((POOL_TYPE *)CmKeyObjectType + 25));
      v27 = v26;
      if ( v26 < 0 )
      {
        v55 = v26;
        v56 = 264192;
        goto LABEL_115;
      }
    }
  }
  v28 = v86;
  if ( a8 )
    v28 = 1;
  v97 = v28;
  v29 = *(_DWORD *)(v17 + 32);
  if ( v29 != -1 )
  {
    if ( v28 != v29 >> 31 )
      CmpLogUnsupportedOperation(2LL);
    v57 = *(_DWORD *)(v17 + 32) >> 31;
    if ( !a7 )
    {
      ExAcquireResourceSharedLite(*(PERESOURCE *)(v18 + 2848), 1u);
      v72 = 1;
    }
    v9 = (char *)(*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _BYTE *))(v18 + 8))(
                   v18,
                   *(unsigned int *)(v17 + 32),
                   v92);
    v79 = v9;
    if ( (unsigned __int16)CmpNameSize(&a4->Length) != *((_WORD *)v9 + 36) )
    {
      CmpLogUnsupportedOperation(1LL);
      v27 = -1073741822;
      v55 = -1073741822;
      v56 = 264448;
      goto LABEL_115;
    }
    if ( !(unsigned __int8)CmpMarkKeyDirty(v18, *(unsigned int *)(v17 + 32)) )
    {
      v55 = -1073741443;
      v56 = 264704;
      goto LABEL_123;
    }
    if ( !(unsigned __int8)HvpMarkCellDirty(v18, *(unsigned int *)(KcbAtLayerHeight + 32)) )
    {
      v55 = -1073741443;
      v56 = 264960;
      goto LABEL_123;
    }
    v58 = *(_WORD *)(a5 + 4);
    if ( v58 )
    {
      BugCheckParameter3 = HvAllocateCell(v18, v58, v57, (__int64)&v84, (__int64)v88);
      if ( BugCheckParameter3 == -1 )
      {
        v55 = -1073741670;
        v56 = 265216;
        goto LABEL_123;
      }
      memmove(v84, *(const void **)(a5 + 8), *(unsigned __int16 *)(a5 + 4));
      (*(void (__fastcall **)(ULONG_PTR, _BYTE *))(v18 + 16))(v18, v88);
      v84 = 0LL;
    }
    ExAcquirePushLockExclusiveEx(v18 + 2952, 0LL);
    SecurityDescriptorNode = CmpGetSecurityDescriptorNode(
                               v18,
                               *(unsigned int *)(v17 + 32),
                               (__int64)v9,
                               NewDescriptor,
                               1,
                               &v85);
    v27 = SecurityDescriptorNode;
    if ( SecurityDescriptorNode >= 0 )
    {
      CmpFreeSecurityDescriptor(v18);
      *((_DWORD *)v9 + 11) = v85;
      ExReleasePushLockEx(v18 + 2952, 0LL);
      *((_DWORD *)v9 + 12) = BugCheckParameter3;
      *((_WORD *)v9 + 37) = *(_WORD *)(a5 + 4);
      BugCheckParameter3 = -1;
      CmpCopyName(v9 + 76, (const void **)a4);
      v9[13] |= 3u;
      *((_WORD *)v9 + 1) = v75;
      if ( *((_WORD *)v9 + 36) < a4->Length )
        *((_WORD *)v9 + 1) = v75 | 0x20;
      v60 = MEMORY[0xFFFFF78000000014];
      v9 = (char *)v79;
      *(_QWORD *)((char *)v79 + 4) = MEMORY[0xFFFFF78000000014];
      CmpRebuildKcbCacheFromNode(v17);
      v87 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _BYTE *))(v18 + 8))(
              v18,
              *(unsigned int *)(KcbAtLayerHeight + 32),
              v91);
      *(_QWORD *)(v87 + 4) = v60;
      if ( v72 )
      {
        ExReleaseResourceLite(*(PERESOURCE *)(v18 + 2848));
        v72 = 0;
      }
      CmpReportNotify(v17, *(_QWORD *)(v17 + 24), *(_DWORD *)(v17 + 32), 0LL, 1, 0LL);
      goto LABEL_63;
    }
    v59 = 265728;
    goto LABEL_147;
  }
  if ( !a7 )
  {
    ExAcquireResourceSharedLite(*(PERESOURCE *)(v18 + 2848), 1u);
    v72 = 1;
  }
  if ( a8 )
  {
    UnitOfWork = CmpAllocateUnitOfWork();
    v81 = UnitOfWork;
    v89 = UnitOfWork;
    if ( !UnitOfWork )
    {
      v55 = -1073741670;
      v56 = 265984;
      goto LABEL_123;
    }
    CmpTransEnlistUowInKcb(UnitOfWork, KcbAtLayerHeight);
    v49 = CmpTransEnlistUowInCmTrans(v81, a8);
    v27 = v49;
    if ( v49 < 0 )
    {
      v55 = v49;
      v56 = 266240;
      goto LABEL_115;
    }
    v50 = CmpAllocateUnitOfWork();
    P = v50;
    v90 = v50;
    if ( !v50 )
    {
      v55 = -1073741670;
      v56 = 266496;
      goto LABEL_123;
    }
    CmpTransEnlistUowInKcb(v50, v17);
    v51 = CmpTransEnlistUowInCmTrans(P, a8);
    v27 = v51;
    if ( v51 < 0 )
    {
      v55 = v51;
      v56 = 266752;
      goto LABEL_115;
    }
    if ( !CmpLockIXLockIntent((unsigned int *)(KcbAtLayerHeight + 240), (__int64)v81) )
    {
      v55 = -1072103423;
      v56 = 267008;
      goto LABEL_123;
    }
    if ( !CmpLockIXLockExclusive(v17 + 240, P, 0) )
    {
      v55 = -1072103423;
      v56 = 267264;
      goto LABEL_123;
    }
    if ( !CmpLockIXLockExclusive(v17 + 256, P, 1) )
    {
      v55 = -1072103423;
      v56 = 267520;
      goto LABEL_123;
    }
    v28 = v97;
  }
  else
  {
    if ( *(_QWORD *)(KcbAtLayerHeight + 232) )
    {
      v61 = CmpSnapshotTxOwnerArray(KcbAtLayerHeight + 240, a5 + 120, a5 + 128);
      v27 = v61;
      if ( v61 < 0 )
      {
        v55 = v61;
        v56 = 267776;
        goto LABEL_115;
      }
      CmpLogTransactionAbortedWithChildName(KcbAtLayerHeight, a4, 6u, v62, *(_DWORD *)(a5 + 120));
      *(_DWORD *)(a5 + 96) |= 4u;
      v55 = -1073741267;
      v56 = 268032;
      goto LABEL_123;
    }
    if ( *(int *)(KcbAtLayerHeight + 240) < 0 )
    {
      v63 = CmpSnapshotTxOwnerArray(KcbAtLayerHeight + 240, a5 + 120, a5 + 128);
      v27 = v63;
      if ( v63 < 0 )
      {
        v55 = v63;
        v56 = 268288;
        goto LABEL_115;
      }
      CmpLogTransactionAbortedWithChildName(KcbAtLayerHeight, a4, 6u, v64, *(_DWORD *)(a5 + 120));
      *(_DWORD *)(a5 + 96) |= 4u;
      v55 = -1073741267;
      v56 = 268544;
      goto LABEL_123;
    }
    if ( *(_DWORD *)(v17 + 240) )
    {
      v65 = CmpSnapshotTxOwnerArray(v17 + 240, a5 + 120, a5 + 128);
      v27 = v65;
      if ( v65 < 0 )
      {
        v55 = v65;
        v56 = 268800;
        goto LABEL_115;
      }
      CmpLogTransactionAbortedWithChildName(KcbAtLayerHeight, a4, 6u, v66, *(_DWORD *)(a5 + 120));
      *(_DWORD *)(a5 + 96) |= 4u;
      v55 = -1073741267;
      v56 = 269056;
      goto LABEL_123;
    }
    if ( *(_DWORD *)(v17 + 256) )
    {
      v67 = CmpSnapshotTxOwnerArray(v17 + 256, a5 + 120, a5 + 128);
      v27 = v67;
      if ( v67 < 0 )
      {
        v55 = v67;
        v56 = 269312;
        goto LABEL_115;
      }
      CmpLogTransactionAbortedWithChildName(KcbAtLayerHeight, a4, 6u, v68, *(_DWORD *)(a5 + 120));
      *(_DWORD *)(a5 + 96) |= 4u;
      v55 = -1073741267;
      v56 = 269568;
      goto LABEL_123;
    }
  }
  v30 = (unsigned __int16)CmpNameSize(&a4->Length) + 76;
  BugCheckParameter3_4 = HvAllocateCell(v18, v30, v28, (__int64)&v79, (__int64)v92);
  v82 = BugCheckParameter3_4;
  if ( BugCheckParameter3_4 == -1 )
  {
    v69 = 269824;
    goto LABEL_173;
  }
  v31 = *(_WORD *)(a5 + 4);
  if ( v31 )
  {
    BugCheckParameter3 = HvAllocateCell(v18, v31, v28, (__int64)&v84, (__int64)v88);
    if ( BugCheckParameter3 != -1 )
    {
      memmove(v84, *(const void **)(a5 + 8), *(unsigned __int16 *)(a5 + 4));
      (*(void (__fastcall **)(ULONG_PTR, _BYTE *))(v18 + 16))(v18, v88);
      v84 = 0LL;
      goto LABEL_32;
    }
    v69 = 270080;
LABEL_173:
    v27 = -1073741670;
    CmpRecordParseFailure(a5, v69, -1073741670);
    v9 = (char *)v79;
    goto LABEL_64;
  }
LABEL_32:
  v32 = v79;
  memset(v79, 0, v30);
  v33 = 27500;
  if ( !v78 )
    v33 = 27502;
  *(_WORD *)v32 = v33;
  v32[12] = CmpAccessBitForPhase;
  if ( *(_BYTE *)(KcbAtLayerHeight + 57) == 3 )
    v32[13] |= 3u;
  else
    v32[13] &= 0xFCu;
  *((_WORD *)v32 + 1) = v75;
  v9 = (char *)v79;
  *(_QWORD *)((char *)v79 + 4) = MEMORY[0xFFFFF78000000014];
  *((_DWORD *)v9 + 4) = *(_DWORD *)(KcbAtLayerHeight + 32);
  *(_QWORD *)(v9 + 28) = -1LL;
  *((_QWORD *)v9 + 5) = -1LL;
  *((_DWORD *)v9 + 12) = BugCheckParameter3;
  *((_WORD *)v9 + 37) = *(_WORD *)(a5 + 4);
  BugCheckParameter3 = -1;
  v34 = *(_DWORD *)(KcbAtLayerHeight + 176);
  if ( (v34 & 0x80u) != 0 )
    *((_DWORD *)v9 + 13) ^= (*((_DWORD *)v9 + 13) ^ (v34 << 16)) & 0xF00000;
  v35 = CmpCopyName(v9 + 76, (const void **)a4);
  *((_WORD *)v9 + 36) = v35;
  if ( v35 < a4->Length )
    *((_WORD *)v32 + 1) |= 0x20u;
  if ( v78 )
  {
    *(_QWORD *)(v9 + 36) = *(_QWORD *)(a5 + 48);
    *((_DWORD *)v9 + 7) = *(_DWORD *)(a5 + 40);
  }
  v74 = 1;
  if ( v78 )
  {
LABEL_45:
    if ( (unsigned __int8)HvpMarkCellDirty(v18, *(unsigned int *)(KcbAtLayerHeight + 32)) )
    {
      v37 = a8;
      if ( a8 )
      {
LABEL_49:
        v73 = 1;
        *(_DWORD *)(v17 + 32) = BugCheckParameter3_4;
        BugCheckParameter3_4 = -1;
        *(_QWORD *)(v17 + 232) = v37;
        if ( (v75 & 0x42) == 0 )
        {
          *(_DWORD *)(v17 + 88) = *((_DWORD *)v9 + 9);
          *(_QWORD *)(v17 + 96) = *((unsigned int *)v9 + 10);
        }
        CmpRebuildKcbCacheFromNode(v17);
        if ( !v78 )
          CmpAssignSecurityToKcb(v17, *((unsigned int *)v9 + 11), 0);
        if ( !a8 )
          goto LABEL_54;
        v52 = P;
        *((_DWORD *)P + 17) = 0;
        v52[18] = v86;
        v53 = v81;
        *((_QWORD *)v52 + 10) = v81;
        v53[17] = 1;
        *((_QWORD *)v53 + 11) = v17;
        v54 = CmAddLogForAction((__int64)v52, v38);
        v27 = v54;
        if ( v54 >= 0 )
        {
          P = 0LL;
          v81 = 0LL;
LABEL_54:
          v39 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _BYTE *))(*(_QWORD *)(KcbAtLayerHeight + 24) + 8LL))(
                  *(_QWORD *)(KcbAtLayerHeight + 24),
                  *(unsigned int *)(KcbAtLayerHeight + 32),
                  v91);
          v87 = v39;
          CmpUpdateKeyNodeAccessBits(*(_QWORD *)(KcbAtLayerHeight + 24), v39, *(unsigned int *)(KcbAtLayerHeight + 32));
          *(_QWORD *)(v39 + 4) = MEMORY[0xFFFFF78000000014];
          Length = a4->Length;
          if ( (unsigned __int16)*(_DWORD *)(v39 + 52) < Length )
            *(_WORD *)(v39 + 52) = Length;
          v41 = *(unsigned __int16 *)(a5 + 4);
          if ( *(_DWORD *)(v39 + 56) < v41 )
            *(_DWORD *)(v39 + 56) = v41;
          *(_WORD *)(KcbAtLayerHeight + 168) = *(_WORD *)(v39 + 52);
          *(_QWORD *)(KcbAtLayerHeight + 160) = *(_QWORD *)(v39 + 4);
          CmpCleanUpSubKeyInfo(KcbAtLayerHeight);
          if ( v72 )
          {
            ExReleaseResourceLite(*(PERESOURCE *)(v18 + 2848));
            v72 = 0;
          }
          if ( (*(_DWORD *)a5 & 2) == 0 )
            CmpReportNotify(v17, *(_QWORD *)(v17 + 24), *(_DWORD *)(v17 + 32), a8, 1, 0LL);
          v73 = 0;
          v9 = (char *)v79;
          goto LABEL_63;
        }
        v70 = v54;
        v71 = 271360;
LABEL_179:
        CmpRecordParseFailure(a5, v71, v70);
        goto LABEL_67;
      }
      if ( (unsigned __int8)CmpAddSubKeyEx(v18) )
      {
        v37 = 0LL;
        goto LABEL_49;
      }
      v70 = -1073741670;
      v71 = 271104;
    }
    else
    {
      v70 = -1073741443;
      v71 = 270848;
    }
    v27 = v70;
    goto LABEL_179;
  }
  ExAcquirePushLockExclusiveEx(v18 + 2952, 0LL);
  SecurityDescriptorNode = CmpGetSecurityDescriptorNode(
                             v18,
                             BugCheckParameter3_4,
                             (__int64)v9,
                             NewDescriptor,
                             0,
                             (unsigned int *)v9 + 11);
  v27 = SecurityDescriptorNode;
  if ( SecurityDescriptorNode >= 0 )
  {
    ExReleasePushLockEx(v18 + 2952, 0LL);
    goto LABEL_45;
  }
  v59 = 270592;
LABEL_147:
  CmpRecordParseFailure(a5, v59, SecurityDescriptorNode);
  v42 = 1;
LABEL_65:
  if ( v42 )
    ExReleasePushLockEx(v18 + 2952, 0LL);
LABEL_67:
  if ( v73 )
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
  v43 = P;
  if ( P )
  {
    CmpRundownUnitOfWork(P);
    ExFreePoolWithTag(v43, 0x77554D43u);
  }
  v44 = v81;
  if ( v81 )
  {
    CmpRundownUnitOfWork(v81);
    ExFreePoolWithTag(v44, 0x77554D43u);
  }
  if ( NewDescriptor && (*(_DWORD *)(v18 + 5360) & 0x20) == 0 )
  {
    if ( (*v22 & 1) != 0 && (v22[6] & 4) != 0 )
    {
      SeDeassignSecurity(&NewDescriptor);
    }
    else
    {
      v45 = *(_QWORD *)(a3 + 72);
      v46 = *(void **)(v45 + 48);
      if ( v46 )
        ExFreePoolWithTag(v46, 0);
      *(_QWORD *)(v45 + 48) = NewDescriptor;
    }
  }
  if ( v87 )
    (*(void (__fastcall **)(_QWORD, _BYTE *))(*(_QWORD *)(KcbAtLayerHeight + 24) + 16LL))(
      *(_QWORD *)(KcbAtLayerHeight + 24),
      v91);
  if ( v84 )
    (*(void (__fastcall **)(ULONG_PTR, _BYTE *))(v18 + 16))(v18, v88);
  if ( BugCheckParameter3 != -1 )
    HvFreeCell(v18, BugCheckParameter3);
  if ( v9 )
    (*(void (__fastcall **)(ULONG_PTR, _BYTE *))(v18 + 16))(v18, v92);
  if ( BugCheckParameter3_4 != -1 )
  {
    if ( v74 )
      CmpFreeKeyByCell(v18);
    else
      HvFreeCell(v18, BugCheckParameter3_4);
  }
  if ( v72 )
    ExReleaseResourceLite(*(PERESOURCE *)(v18 + 2848));
  return v27;
}
