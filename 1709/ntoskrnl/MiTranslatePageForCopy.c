/*
 * XREFs of MiTranslatePageForCopy @ 0x140217C58
 * Callers:
 *     MmCopyMemory @ 0x140218220 (MmCopyMemory.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 *     MiObtainProtoReference @ 0x140027120 (MiObtainProtoReference.c)
 *     MiLockLeafPage @ 0x14002F4D4 (MiLockLeafPage.c)
 *     MiUnlockProtoPoolPage @ 0x140030AF0 (MiUnlockProtoPoolPage.c)
 *     MiLockProtoPoolPage @ 0x140030E90 (MiLockProtoPoolPage.c)
 *     MiLockPageAtDpcInline @ 0x140031780 (MiLockPageAtDpcInline.c)
 *     MiGetSharedVm @ 0x140035920 (MiGetSharedVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400578A0 (MiUnlockWorkingSetExclusive.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140065040 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x140066590 (ExAcquireSpinLockShared.c)
 *     MiGetAnyMultiplexedVm @ 0x1400C0094 (MiGetAnyMultiplexedVm.c)
 *     MiVaToPfn @ 0x1400C00C4 (MiVaToPfn.c)
 *     MiAcquireProperVm @ 0x1400D5208 (MiAcquireProperVm.c)
 *     MiLockTransitionLeafPage @ 0x1400E5058 (MiLockTransitionLeafPage.c)
 *     MiIsPfnInline @ 0x140106F50 (MiIsPfnInline.c)
 *     MiCheckVirtualAddress @ 0x140109690 (MiCheckVirtualAddress.c)
 *     MiVaIsUltra @ 0x14010A160 (MiVaIsUltra.c)
 *     MiGetPagingFileOffset @ 0x14010C6B8 (MiGetPagingFileOffset.c)
 *     MiWaitForCollidedFaultComplete @ 0x140125424 (MiWaitForCollidedFaultComplete.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MiGetPrototypePteDirect @ 0x14017C6D0 (MiGetPrototypePteDirect.c)
 *     MiIsPrototypePteVadLookup @ 0x14017C740 (MiIsPrototypePteVadLookup.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14022A184 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 */

__int64 __fastcall MiTranslatePageForCopy(
        unsigned __int64 a1,
        char **a2,
        __int64 *a3,
        __int64 *a4,
        KIRQL *a5,
        unsigned __int64 *a6)
{
  unsigned int v6; // esi
  unsigned __int64 v7; // rdi
  __int64 v8; // r14
  unsigned __int64 v9; // r9
  __int64 v11; // r8
  unsigned __int64 *v12; // rdx
  unsigned __int64 v13; // rcx
  int v14; // r13d
  char *AnyMultiplexedVm; // r15
  LONG *SharedVm; // rbx
  KIRQL v17; // r12
  KIRQL v18; // al
  __int64 v19; // rcx
  unsigned __int64 v20; // r9
  unsigned __int64 *v21; // r8
  unsigned __int64 v22; // rbx
  __int64 PteShadow; // rax
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  LONG *v27; // rdi
  KIRQL v28; // al
  ULONG_PTR *v29; // r13
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rcx
  unsigned __int64 v33; // rax
  char v34; // al
  __int64 v35; // r8
  __int64 v36; // rdx
  __int64 PrototypePteDirect; // rax
  __int64 v38; // rdx
  __int64 v39; // rdi
  __int64 *v40; // r13
  __int64 v41; // rdx
  __int64 v42; // r8
  __int64 v43; // rbx
  __int64 v44; // r8
  __int64 v45; // r9
  __int64 v46; // rdi
  __int64 v47; // rax
  __int64 v48; // rcx
  unsigned __int8 v49; // dl
  char v50; // al
  int PagingFileOffset; // eax
  unsigned __int8 v52; // [rsp+40h] [rbp-89h] BYREF
  KIRQL v53[3]; // [rsp+41h] [rbp-88h] BYREF
  int v54; // [rsp+44h] [rbp-85h]
  ULONG_PTR BugCheckParameter2; // [rsp+48h] [rbp-81h] BYREF
  unsigned __int64 v56; // [rsp+50h] [rbp-79h] BYREF
  __int64 v57; // [rsp+58h] [rbp-71h]
  unsigned __int64 v58; // [rsp+60h] [rbp-69h]
  __int64 *v59; // [rsp+68h] [rbp-61h]
  int v60; // [rsp+70h] [rbp-59h] BYREF
  unsigned __int64 *v61; // [rsp+78h] [rbp-51h]
  char **v62; // [rsp+80h] [rbp-49h]
  KIRQL *v63; // [rsp+88h] [rbp-41h]
  __int64 *v64; // [rsp+90h] [rbp-39h]
  unsigned __int64 v65; // [rsp+98h] [rbp-31h] BYREF
  _QWORD v66[4]; // [rsp+A0h] [rbp-29h] BYREF

  v6 = 0;
  *a2 = 0LL;
  v7 = a1;
  v58 = a1;
  v8 = -1LL;
  v59 = a4;
  v64 = a3;
  v62 = a2;
  *a5 = 17;
  *a3 = -1LL;
  *a4 = 0LL;
  *a6 = 0LL;
  v9 = 0xFFFFF68000000000uLL;
  v63 = a5;
  v61 = a6;
  if ( a1 >= 0xFFFFF68000000000uLL && a1 <= 0xFFFFF6FFFFFFFFFFuLL || a1 >= 0xFFFF800000000000uLL && MiVaIsUltra(a1) )
    return 3221225711LL;
  v11 = 4LL;
  v12 = v66;
  v54 = 4;
  v13 = v9 + ((v7 >> 9) & 0x7FFFFFFFF8LL);
  do
  {
    *v12 = v13;
    v13 = v9 + ((v13 >> 9) & 0x7FFFFFFFF8LL);
    ++v12;
    --v11;
  }
  while ( v11 );
  v14 = 0;
  v57 = -1LL;
  if ( v7 < qword_140389B40 || v7 > qword_140388958 )
  {
    AnyMultiplexedVm = (char *)MiAcquireProperVm(v7, v53);
    if ( !AnyMultiplexedVm )
      return 3221225632LL;
    v17 = v53[0];
  }
  else
  {
    AnyMultiplexedVm = (char *)&KeGetCurrentThread()->ApcState.Process[1].IdealNode[12];
    SharedVm = MiGetSharedVm((__int64)AnyMultiplexedVm);
    v17 = ExAcquireSpinLockExclusive(SharedVm);
    SharedVm[1] = 0;
  }
  v18 = ExAcquireSpinLockShared(&dword_140388924);
  LODWORD(v19) = v54;
  v53[0] = v18;
  v20 = 0xFFFFF6FB7DBED000uLL;
  while ( 1 )
  {
    v19 = (unsigned int)(v19 - 1);
    v54 = v19;
    v21 = (unsigned __int64 *)v66[v19];
    BugCheckParameter2 = (ULONG_PTR)v21;
    v22 = *v21;
    if ( (unsigned __int64)v21 >= v20 && (unsigned __int64)v21 <= 0xFFFFF6FB7DBED7F8uLL )
    {
      PteShadow = MiReadPteShadow();
      LODWORD(v19) = v54;
      v22 = PteShadow;
    }
    v56 = v22;
    if ( (v22 & 1) == 0 )
      break;
    if ( (_DWORD)v19 )
    {
      if ( (v22 & 0x80u) != 0LL )
      {
        v57 = MiVaToPfn(v7);
        LODWORD(v19) = 0;
        v20 = 0xFFFFF6FB7DBED000uLL;
      }
      if ( (_DWORD)v19 )
        continue;
    }
    goto LABEL_26;
  }
  if ( (_DWORD)v19 )
    v14 = -1073741819;
LABEL_26:
  ExReleaseSpinLockSharedFromDpcLevel(&dword_140388924);
  __writecr8(v53[0]);
  if ( v57 == -1 )
  {
    if ( AnyMultiplexedVm != (char *)1 )
      goto LABEL_31;
    return 3221225632LL;
  }
  if ( AnyMultiplexedVm == (char *)1 )
  {
    AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
    v27 = MiGetSharedVm((__int64)AnyMultiplexedVm);
    v28 = ExAcquireSpinLockExclusive(v27);
    v27[1] = 0;
    v17 = v28;
    v7 = v58;
  }
  else
  {
    v14 = -1073741819;
  }
LABEL_31:
  if ( v14 < 0 )
  {
    LOBYTE(v24) = v17;
    MiUnlockWorkingSetExclusive((__int64)AnyMultiplexedVm, v24);
    return (unsigned int)v14;
  }
  v52 = 17;
  if ( (v22 & 1) == 0 )
  {
    v29 = (ULONG_PTR *)BugCheckParameter2;
    while ( (v22 & 0x400) == 0 )
    {
      v30 = (v22 >> 5) & 0x1F;
      if ( v30 == 24 || !v30 )
        goto LABEL_60;
      if ( (v22 & 0x800) == 0 )
      {
        if ( !(unsigned int)MiGetPagingFileOffset((__int64 *)&v56) )
        {
LABEL_53:
          LOBYTE(v24) = v17;
          MiUnlockWorkingSetExclusive((__int64)AnyMultiplexedVm, v24);
          AnyMultiplexedVm = 0LL;
          v6 = 273;
          goto LABEL_83;
        }
LABEL_62:
        v6 = -1073741608;
LABEL_82:
        LOBYTE(v24) = v17;
        MiUnlockWorkingSetExclusive((__int64)AnyMultiplexedVm, v24);
LABEL_83:
        v17 = 17;
        goto LABEL_84;
      }
      v31 = MiLockTransitionLeafPage(v29, (unsigned __int64)&v52, v25, v26);
      v32 = v31;
      if ( v31 )
      {
        v34 = *(_BYTE *)(v31 + 34);
        if ( (v34 & 0x20) == 0 )
        {
          v8 = (v32 + 0x58000000000LL) / 48;
          goto LABEL_84;
        }
        if ( (v34 & 8) != 0 )
          goto LABEL_62;
        v35 = v7;
        v36 = 0LL;
LABEL_78:
        LODWORD(BugCheckParameter2) = 1;
        MiWaitForCollidedFaultComplete(v32, v36, v35, (__int64)AnyMultiplexedVm, v17, v52, &BugCheckParameter2);
        goto LABEL_62;
      }
      v22 = *v29;
      if ( (unsigned __int64)v29 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v29 <= 0xFFFFF6FB7DBED7F8uLL )
        v22 = MiReadPteShadow();
      v56 = v22;
      if ( (v22 & 1) != 0 )
        goto LABEL_44;
    }
    if ( (v22 & 2) != 0 )
    {
      PrototypePteDirect = MiGetPrototypePteDirect(v22, v24, v25);
      LOBYTE(v38) = v17;
      v39 = PrototypePteDirect;
      MiUnlockWorkingSetExclusive((__int64)AnyMultiplexedVm, v38);
      if ( !v39 )
        v22 &= ~0x400uLL;
      AnyMultiplexedVm = 0LL;
      v6 = 273;
      *v61 = v22 & 0xFFFFFFFFFFFFFFFDuLL;
      goto LABEL_84;
    }
    v40 = (__int64 *)MiGetPrototypePteDirect(v22, v24, v25);
    if ( MiIsPrototypePteVadLookup(v22, v41, v42) )
    {
      v40 = (__int64 *)MiCheckVirtualAddress(v7, &v60, &v65);
      if ( !v40 )
      {
LABEL_60:
        v6 = -1073741819;
        goto LABEL_82;
      }
    }
    v43 = MiLockProtoPoolPage((unsigned __int64)v40, &v52);
    if ( !v43 )
      goto LABEL_62;
    v46 = MiLockLeafPage(v40, 0LL, v44, v45);
    v47 = *v40;
    if ( (unsigned __int64)v40 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v40 <= 0xFFFFF6FB7DBED7F8uLL )
      v47 = MiReadPteShadow();
    v56 = v47;
    if ( (v47 & 1) != 0 )
    {
LABEL_67:
      v8 = (v46 + 0x58000000000LL) / 48;
      *v59 = v43;
      goto LABEL_84;
    }
    if ( !v47 )
    {
      MiUnlockProtoPoolPage(v43, v52);
      goto LABEL_60;
    }
    if ( (v47 & 0x400) != 0 )
    {
      v48 = v43;
    }
    else
    {
      if ( (v47 & 0x800) == 0 )
      {
        PagingFileOffset = MiGetPagingFileOffset((__int64 *)&v56);
        v49 = v52;
        v48 = v43;
        if ( !PagingFileOffset )
        {
          MiUnlockProtoPoolPage(v43, v52);
          goto LABEL_53;
        }
        goto LABEL_73;
      }
      v50 = *(_BYTE *)(v46 + 34);
      if ( (v50 & 0x20) == 0 )
        goto LABEL_67;
      v48 = v43;
      if ( (v50 & 8) == 0 )
      {
        MiObtainProtoReference(v43, 1);
        v35 = v58;
        v36 = v43;
        v32 = v46;
        goto LABEL_78;
      }
    }
    v49 = v52;
LABEL_73:
    MiUnlockProtoPoolPage(v48, v49);
    goto LABEL_62;
  }
LABEL_44:
  v33 = v57;
  if ( v57 == -1 )
    v33 = MI_GET_PAGE_FRAME_FROM_PTE(&v56);
  v8 = v33;
  if ( !MiIsPfnInline(v33) )
  {
    v6 = -1073741503;
    goto LABEL_82;
  }
  MiLockPageAtDpcInline(48 * v8 - 0x58000000000LL);
LABEL_84:
  *v62 = AnyMultiplexedVm;
  *v63 = v17;
  *v64 = v8;
  return v6;
}
