/*
 * XREFs of MiTranslatePageForCopy @ 0x1402105E8
 * Callers:
 *     MmCopyMemory @ 0x140210B00 (MmCopyMemory.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x140044660 (ExAcquireSpinLockExclusive.c)
 *     MiAcquireProperVm @ 0x14006BF58 (MiAcquireProperVm.c)
 *     MiGetPagingFileOffset @ 0x14007720C (MiGetPagingFileOffset.c)
 *     MiLockTransitionLeafPage @ 0x14007A494 (MiLockTransitionLeafPage.c)
 *     MiLockPageAtDpcInline @ 0x14009C240 (MiLockPageAtDpcInline.c)
 *     MiLockProtoPoolPage @ 0x1400A1530 (MiLockProtoPoolPage.c)
 *     MiUnlockProtoPoolPage @ 0x1400A3920 (MiUnlockProtoPoolPage.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1400A5D60 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x1400A6AB0 (ExAcquireSpinLockShared.c)
 *     MiGetSharedVm @ 0x1400A7780 (MiGetSharedVm.c)
 *     MiGetAnyMultiplexedVm @ 0x1400B1BCC (MiGetAnyMultiplexedVm.c)
 *     MiVaToPfn @ 0x1400B2D70 (MiVaToPfn.c)
 *     MiIsPfnInline @ 0x1400B54F0 (MiIsPfnInline.c)
 *     MiCheckVirtualAddress @ 0x1400C20D0 (MiCheckVirtualAddress.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400D8DB0 (MiUnlockWorkingSetExclusive.c)
 *     MiLockLeafPage @ 0x140104100 (MiLockLeafPage.c)
 *     MiObtainProtoReference @ 0x140109844 (MiObtainProtoReference.c)
 *     MiWaitForCollidedFaultComplete @ 0x1401180BC (MiWaitForCollidedFaultComplete.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     MiGetPrototypePteDirect @ 0x14017CE98 (MiGetPrototypePteDirect.c)
 *     MiIsPrototypePteVadLookup @ 0x14017CEE4 (MiIsPrototypePteVadLookup.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14021EDEC (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
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
  __int64 v10; // r8
  unsigned __int64 *v11; // rdx
  unsigned __int64 v12; // rcx
  int v13; // r13d
  char *AnyMultiplexedVm; // r15
  LONG *SharedVm; // rbx
  KIRQL v16; // r12
  KIRQL v17; // al
  int v18; // r9d
  unsigned __int64 v19; // rbx
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  LONG *v23; // rdi
  KIRQL v24; // al
  ULONG_PTR v25; // r13
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rcx
  unsigned __int64 v29; // rax
  char v30; // al
  unsigned __int64 v31; // r8
  __int64 v32; // rdx
  __int64 PrototypePteDirect; // rdi
  __int64 v34; // r13
  __int64 v35; // rdx
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // rbx
  __int64 v39; // rdi
  __int64 v40; // rax
  __int64 v41; // rcx
  unsigned __int8 v42; // dl
  char v43; // al
  int PagingFileOffset; // eax
  unsigned __int8 v45; // [rsp+40h] [rbp-89h] BYREF
  KIRQL v46[3]; // [rsp+41h] [rbp-88h] BYREF
  int v47; // [rsp+44h] [rbp-85h] BYREF
  __int64 v48; // [rsp+48h] [rbp-81h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+50h] [rbp-79h]
  unsigned __int64 v50; // [rsp+58h] [rbp-71h]
  unsigned __int64 v51; // [rsp+60h] [rbp-69h]
  __int64 *v52; // [rsp+68h] [rbp-61h]
  int v53; // [rsp+70h] [rbp-59h] BYREF
  unsigned __int64 *v54; // [rsp+78h] [rbp-51h]
  char **v55; // [rsp+80h] [rbp-49h]
  KIRQL *v56; // [rsp+88h] [rbp-41h]
  __int64 *v57; // [rsp+90h] [rbp-39h]
  __int64 v58; // [rsp+98h] [rbp-31h] BYREF
  _QWORD v59[4]; // [rsp+A0h] [rbp-29h] BYREF

  v6 = 0;
  *a2 = 0LL;
  v7 = a1;
  v51 = a1;
  v8 = -1LL;
  v52 = a4;
  v57 = a3;
  v55 = a2;
  *a5 = 17;
  *a3 = -1LL;
  *a4 = 0LL;
  *a6 = 0LL;
  v56 = a5;
  v54 = a6;
  if ( a1 >= 0xFFFFF68000000000uLL && a1 <= 0xFFFFF6FFFFFFFFFFuLL )
    return 3221225711LL;
  v10 = 4LL;
  v11 = v59;
  LODWORD(BugCheckParameter2) = 4;
  v12 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  do
  {
    *v11 = v12;
    v12 = ((v12 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    ++v11;
    --v10;
  }
  while ( v10 );
  v13 = 0;
  v50 = -1LL;
  if ( v7 < qword_14036D870 || v7 > qword_14036C5D0 )
  {
    AnyMultiplexedVm = (char *)MiAcquireProperVm(v7, v46);
    if ( !AnyMultiplexedVm )
      return 3221225632LL;
    v16 = v46[0];
  }
  else
  {
    AnyMultiplexedVm = (char *)&KeGetCurrentThread()->ApcState.Process[1].IdealNode[12];
    SharedVm = MiGetSharedVm((__int64)AnyMultiplexedVm);
    v16 = ExAcquireSpinLockExclusive(SharedVm);
    SharedVm[1] = 0;
  }
  v17 = ExAcquireSpinLockShared(&dword_14036C59C);
  v18 = BugCheckParameter2;
  v46[0] = v17;
  while ( 1 )
  {
    BugCheckParameter2 = v59[v18 - 1];
    v19 = MI_READ_PTE_LOCK_FREE(BugCheckParameter2);
    v48 = v19;
    if ( (v19 & 1) == 0 )
      break;
    if ( v18 )
    {
      if ( (v19 & 0x80u) != 0LL )
      {
        v50 = MiVaToPfn(v7);
        v18 = 0;
      }
      if ( v18 )
        continue;
    }
    goto LABEL_21;
  }
  if ( v18 )
    v13 = -1073741819;
LABEL_21:
  ExReleaseSpinLockSharedFromDpcLevel(&dword_14036C59C);
  __writecr8(v46[0]);
  if ( v50 == -1LL )
  {
    if ( AnyMultiplexedVm != (char *)1 )
      goto LABEL_26;
    return 3221225632LL;
  }
  if ( AnyMultiplexedVm == (char *)1 )
  {
    AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
    v23 = MiGetSharedVm((__int64)AnyMultiplexedVm);
    v24 = ExAcquireSpinLockExclusive(v23);
    v23[1] = 0;
    v16 = v24;
    v7 = v51;
  }
  else
  {
    v13 = -1073741819;
  }
LABEL_26:
  if ( v13 < 0 )
  {
    MiUnlockWorkingSetExclusive((__int64)AnyMultiplexedVm, v16);
    return (unsigned int)v13;
  }
  v45 = 17;
  if ( (v19 & 1) == 0 )
  {
    v25 = BugCheckParameter2;
    while ( (v19 & 0x400) == 0 )
    {
      v26 = (v19 >> 5) & 0x1F;
      if ( v26 == 24 || !v26 )
        goto LABEL_52;
      if ( (v19 & 0x800) == 0 )
      {
        if ( !(unsigned int)MiGetPagingFileOffset((__int64)&v48) )
        {
LABEL_45:
          MiUnlockWorkingSetExclusive((__int64)AnyMultiplexedVm, v16);
          AnyMultiplexedVm = 0LL;
          v6 = 273;
          goto LABEL_72;
        }
LABEL_54:
        v6 = -1073741608;
LABEL_71:
        MiUnlockWorkingSetExclusive((__int64)AnyMultiplexedVm, v16);
LABEL_72:
        v16 = 17;
        goto LABEL_73;
      }
      v27 = MiLockTransitionLeafPage(v25, &v45);
      v28 = v27;
      if ( v27 )
      {
        v30 = *(_BYTE *)(v27 + 34);
        if ( (v30 & 0x20) == 0 )
        {
          v8 = (v28 + 0x58000000000LL) / 48;
          goto LABEL_73;
        }
        if ( (v30 & 8) != 0 )
          goto LABEL_54;
        v31 = v7;
        v32 = 0LL;
LABEL_67:
        v47 = 1;
        MiWaitForCollidedFaultComplete(v28, v32, v31, (__int64)AnyMultiplexedVm, v16, v45, &v47);
        goto LABEL_54;
      }
      v48 = MI_READ_PTE_LOCK_FREE(v25);
      v19 = v48;
      if ( (v48 & 1) != 0 )
        goto LABEL_36;
    }
    if ( (v19 & 2) != 0 )
    {
      PrototypePteDirect = MiGetPrototypePteDirect(v19, v20, v21, v22);
      MiUnlockWorkingSetExclusive((__int64)AnyMultiplexedVm, v16);
      if ( !PrototypePteDirect )
        v19 &= ~0x400uLL;
      AnyMultiplexedVm = 0LL;
      v6 = 273;
      *v54 = v19 & 0xFFFFFFFFFFFFFFFDuLL;
      goto LABEL_73;
    }
    v34 = MiGetPrototypePteDirect(v19, v20, v21, v22);
    if ( MiIsPrototypePteVadLookup(v19, v35, v36, v37) )
    {
      v34 = MiCheckVirtualAddress(v7, &v53, &v58);
      if ( !v34 )
      {
LABEL_52:
        v6 = -1073741819;
        goto LABEL_71;
      }
    }
    v38 = MiLockProtoPoolPage(v34, &v45);
    if ( !v38 )
      goto LABEL_54;
    v39 = MiLockLeafPage(v34, 0);
    v40 = MI_READ_PTE_LOCK_FREE(v34);
    v48 = v40;
    if ( (v40 & 1) != 0 )
    {
LABEL_56:
      v8 = (v39 + 0x58000000000LL) / 48;
      *v52 = v38;
      goto LABEL_73;
    }
    if ( !v40 )
    {
      MiUnlockProtoPoolPage(v38, v45);
      goto LABEL_52;
    }
    if ( (v40 & 0x400) != 0 )
    {
      v41 = v38;
    }
    else
    {
      if ( (v40 & 0x800) == 0 )
      {
        PagingFileOffset = MiGetPagingFileOffset((__int64)&v48);
        v42 = v45;
        v41 = v38;
        if ( !PagingFileOffset )
        {
          MiUnlockProtoPoolPage(v38, v45);
          goto LABEL_45;
        }
        goto LABEL_62;
      }
      v43 = *(_BYTE *)(v39 + 34);
      if ( (v43 & 0x20) == 0 )
        goto LABEL_56;
      v41 = v38;
      if ( (v43 & 8) == 0 )
      {
        MiObtainProtoReference(v38, 1);
        v31 = v51;
        v32 = v38;
        v28 = v39;
        goto LABEL_67;
      }
    }
    v42 = v45;
LABEL_62:
    MiUnlockProtoPoolPage(v41, v42);
    goto LABEL_54;
  }
LABEL_36:
  v29 = v50;
  if ( v50 == -1LL )
    v29 = MI_GET_PAGE_FRAME_FROM_PTE(&v48);
  v8 = v29;
  if ( !MiIsPfnInline(v29) )
  {
    v6 = -1073741503;
    goto LABEL_71;
  }
  MiLockPageAtDpcInline(48 * v8 - 0x58000000000LL);
LABEL_73:
  *v55 = AnyMultiplexedVm;
  *v56 = v16;
  *v57 = v8;
  return v6;
}
