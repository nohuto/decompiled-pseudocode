/*
 * XREFs of MiAllocateChildVads @ 0x1405BF6F8
 * Callers:
 *     MiCloneProcessAddressSpace @ 0x1405BF2F8 (MiCloneProcessAddressSpace.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x1400083C0 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140009050 (KiStackAttachProcess.c)
 *     MiVadPureReserve @ 0x14000BFF0 (MiVadPureReserve.c)
 *     MiVadMapsLargeImage @ 0x140062430 (MiVadMapsLargeImage.c)
 *     MiLocateVadEvent @ 0x1401147D0 (MiLocateVadEvent.c)
 *     MiCloneImageVad @ 0x1401429A4 (MiCloneImageVad.c)
 *     MiCloneCaptureVadCommit @ 0x140142A00 (MiCloneCaptureVadCommit.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     MiFreeVadEvents @ 0x140258BDC (MiFreeVadEvents.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     MiFreePlaceholderStorage @ 0x140584AB8 (MiFreePlaceholderStorage.c)
 *     MiInsertSharedCommitNode @ 0x140595350 (MiInsertSharedCommitNode.c)
 *     MiRemoveSharedCommitNode @ 0x140595640 (MiRemoveSharedCommitNode.c)
 *     MiCreateVadEventBitmap @ 0x1405BABD8 (MiCreateVadEventBitmap.c)
 *     MiVadHasSharedCommit @ 0x1405BF9E8 (MiVadHasSharedCommit.c)
 *     MiCloneNoChange @ 0x1405BFA3C (MiCloneNoChange.c)
 *     MiInsertChildVads @ 0x1405BFB04 (MiInsertChildVads.c)
 *     MiFreeVadEventBitmap @ 0x14074D260 (MiFreeVadEventBitmap.c)
 *     MiCloneLargeFileOnlyVad @ 0x14074E2D4 (MiCloneLargeFileOnlyVad.c)
 *     MiCloneDiscardVadCommit @ 0x14074EF78 (MiCloneDiscardVadCommit.c)
 *     MiCreatePlaceholderStorage @ 0x140755004 (MiCreatePlaceholderStorage.c)
 *     MiCreateLargePageVad @ 0x140755658 (MiCreateLargePageVad.c)
 *     MiDeletePartialCloneVads @ 0x140756210 (MiDeletePartialCloneVads.c)
 */

__int64 __fastcall MiAllocateChildVads(ULONG_PTR BugCheckParameter1, _QWORD *a2)
{
  void *v3; // r12
  int v4; // r15d
  _QWORD *j; // rsi
  _QWORD *i; // rax
  int v8; // r8d
  int v9; // ecx
  ULONG v10; // r8d
  SIZE_T v11; // rdi
  _QWORD *PoolWithTag; // rax
  _QWORD *v13; // rbx
  int v14; // ecx
  int inserted; // edi
  int v16; // eax
  _QWORD **v17; // rax
  __int64 v18; // rbp
  _QWORD *v19; // rcx
  _QWORD *v20; // rcx
  int v21; // eax
  bool v22; // sf
  __int64 v23; // rax
  int v25; // eax
  __int64 v27; // r9
  __int64 v28; // r9
  _BYTE v29[48]; // [rsp+20h] [rbp-78h] BYREF

  v3 = 0LL;
  v4 = 0;
  j = 0LL;
  for ( i = (_QWORD *)KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[4]; i; i = (_QWORD *)*i )
    j = i;
  while ( 1 )
  {
    do
    {
      if ( !j )
        return MiInsertChildVads(BugCheckParameter1, v3);
      v17 = (_QWORD **)j[1];
      v18 = (__int64)j;
      v19 = j;
      if ( v17 )
      {
        v20 = *v17;
        for ( j = (_QWORD *)j[1]; v20; v20 = (_QWORD *)*v20 )
          j = v20;
      }
      else
      {
        while ( 1 )
        {
          j = (_QWORD *)(j[2] & 0xFFFFFFFFFFFFFFFCuLL);
          if ( !j || (_QWORD *)*j == v19 )
            break;
          v19 = j;
        }
      }
      v8 = *(_DWORD *)(v18 + 48);
    }
    while ( ((1 << (*(_BYTE *)(v18 + 48) & 7)) & 0xB5) == 0
         || (v8 & 0x10000) != 0
         || (v8 & 0x4000) == 0 && (*(_DWORD *)(v18 + 64) & 0x4000000) == 0 );
    v9 = *(_DWORD *)(v18 + 48);
    v10 = 1818517846;
    v11 = (-(__int64)((v9 & 0x4000) != 0) & 0xFFFFFFFFFFFFFFB8uLL) + 136;
    if ( (v9 & 7) == 2 && (v9 & 0x8000) != 0 )
    {
      v10 = 1231315286;
      v11 = 8
          * (((unsigned __int64)*(unsigned int *)(***(_QWORD ***)(v18 + 72) + 8LL) >> 6)
           + ((*(_DWORD *)(***(_QWORD ***)(v18 + 72) + 8LL) & 0x3F) != 0)
           + 20LL);
    }
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v11, v10);
    v13 = PoolWithTag;
    if ( !PoolWithTag )
      break;
    memmove(PoolWithTag, (const void *)v18, v11);
    v14 = *((_DWORD *)v13 + 12);
    if ( (*(_DWORD *)(v18 + 48) & 0x4000) != 0 )
    {
      v14 &= ~0x8000000u;
      *((_DWORD *)v13 + 12) = v14;
    }
    else
    {
      v13[14] = BugCheckParameter1 | 1;
    }
    v13[7] = 0LL;
    *((_DWORD *)v13 + 9) = 0;
    v13[5] = 0LL;
    v13[1] = 0LL;
    *((_DWORD *)v13 + 12) = v14 & 0x3FFFFFFF;
    v13[2] = -2LL;
    if ( (unsigned int)MiVadHasSharedCommit(v18) )
    {
      inserted = MiInsertSharedCommitNode(**(__int64 ***)(v18 + 72), BugCheckParameter1, 0);
      if ( inserted < 0 )
        goto LABEL_57;
    }
    if ( (unsigned int)MiVadPureReserve((__int64)v13) )
    {
      v23 = *((unsigned int *)v13 + 13);
      LODWORD(v23) = v23 & 0x7FFFFFFF;
      if ( (v23 | ((unsigned __int64)*((unsigned __int8 *)v13 + 34) << 31)) < 0x7FFFFFFFDLL )
      {
        inserted = MiCloneCaptureVadCommit((__int64)v13);
        if ( inserted < 0 )
        {
          if ( (unsigned int)MiVadHasSharedCommit(v13) )
            MiRemoveSharedCommitNode(*(_QWORD *)v13[9], BugCheckParameter1, 0, v27);
LABEL_57:
          ExFreePoolWithTag(v13, 0);
          v13 = 0LL;
          goto LABEL_61;
        }
      }
    }
    if ( (*(_DWORD *)(v18 + 48) & 0x8000000) != 0 )
    {
      inserted = MiCloneNoChange(v18, v13);
      if ( inserted < 0 )
        goto LABEL_61;
    }
    if ( MiLocateVadEvent(v18, 512) )
    {
      KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)v29);
      v4 = 1;
      inserted = MiCreatePlaceholderStorage(v13);
      if ( inserted < 0 )
        goto LABEL_61;
    }
    if ( (*(_DWORD *)(v18 + 48) & 7) == 4 )
    {
      if ( !v4 )
      {
        KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)v29);
        v4 = 1;
      }
      inserted = MiCreateVadEventBitmap(
                   BugCheckParameter1,
                   (__int64)v13,
                   (*((unsigned int *)v13 + 7) | ((unsigned __int64)*((unsigned __int8 *)v13 + 33) << 32))
                 - (*((unsigned int *)v13 + 6) | ((unsigned __int64)*((unsigned __int8 *)v13 + 32) << 32))
                 + 1,
                   4);
      if ( inserted >= 0 )
      {
        _InterlockedOr((volatile signed __int32 *)(BugCheckParameter1 + 772), 0x8000u);
        inserted = 0;
      }
      v22 = inserted < 0;
LABEL_38:
      if ( v22 )
        goto LABEL_61;
      goto LABEL_22;
    }
    if ( !MiVadMapsLargeImage(v18) )
    {
      v16 = *(_DWORD *)(v18 + 48) & 7;
      if ( v16 != 5 )
      {
        if ( v16 == 2 )
        {
          v21 = MiCloneImageVad(BugCheckParameter1, (__int64)v13, v18);
        }
        else
        {
          if ( v16 != 7 || !*(_QWORD *)(**(_QWORD **)(v18 + 72) + 64LL) )
            goto LABEL_22;
          v21 = MiCloneLargeFileOnlyVad(v18);
        }
        inserted = v21;
        v22 = v21 < 0;
        goto LABEL_38;
      }
    }
    v25 = (*((_DWORD *)v13 + 13) ^ (*((_DWORD *)v13 + 7) - *((_DWORD *)v13 + 6) + 1)) & 0x7FFFFFFF;
    *((_BYTE *)v13 + 34) = ((*((unsigned int *)v13 + 7) | ((unsigned __int64)*((unsigned __int8 *)v13 + 33) << 32))
                          - (*((unsigned int *)v13 + 6) | ((unsigned __int64)*((unsigned __int8 *)v13 + 32) << 32))
                          + 1) >> 31;
    *((_DWORD *)v13 + 13) ^= v25;
    inserted = MiCreateLargePageVad(BugCheckParameter1, v13, 0LL);
    if ( inserted < 0 )
      goto LABEL_61;
    ++*a2;
LABEL_22:
    if ( v4 )
      KiUnstackDetachProcess((__int64)v29, 0LL);
    *v13 = v3;
    v4 = 0;
    v3 = v13;
  }
  inserted = -1073741670;
LABEL_61:
  if ( !v4 )
    KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)v29);
  if ( v13 )
  {
    if ( (unsigned int)MiVadHasSharedCommit(v13) )
      MiRemoveSharedCommitNode(*(_QWORD *)v13[9], BugCheckParameter1, 0, v28);
    MiCloneDiscardVadCommit(v13);
    MiFreeVadEventBitmap(BugCheckParameter1, v13, 4LL);
    MiFreePlaceholderStorage((__int64)v13);
    MiFreeVadEvents((__int64)v13);
    ExFreePoolWithTag(v13, 0);
  }
  if ( v3 )
    MiDeletePartialCloneVads(v3);
  KiUnstackDetachProcess((__int64)v29, 0LL);
  return (unsigned int)inserted;
}
