/*
 * XREFs of MiAllocateChildVads @ 0x14057AC60
 * Callers:
 *     MiCloneProcessAddressSpace @ 0x14057A87C (MiCloneProcessAddressSpace.c)
 * Callees:
 *     MiVadMapsLargeImage @ 0x140015000 (MiVadMapsLargeImage.c)
 *     MiVadPureReserve @ 0x14003DDE0 (MiVadPureReserve.c)
 *     KiStackAttachProcess @ 0x1400A0410 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400BF430 (KiUnstackDetachProcess.c)
 *     MiCloneImageVad @ 0x140120754 (MiCloneImageVad.c)
 *     MiCloneCaptureVadCommit @ 0x1401207B0 (MiCloneCaptureVadCommit.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     MiFreeVadEvents @ 0x14021CA00 (MiFreeVadEvents.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     MiInsertSharedCommitNode @ 0x1404D0A10 (MiInsertSharedCommitNode.c)
 *     MiRemoveSharedCommitNode @ 0x1404D0D00 (MiRemoveSharedCommitNode.c)
 *     MiCreateVadEventBitmap @ 0x14056A9D8 (MiCreateVadEventBitmap.c)
 *     MiVadHasSharedCommit @ 0x14057AFC0 (MiVadHasSharedCommit.c)
 *     MiCloneNoChange @ 0x14057B014 (MiCloneNoChange.c)
 *     MiInsertChildVads @ 0x14057B0BC (MiInsertChildVads.c)
 *     MiCloneLargeFileOnlyVad @ 0x1406E3EE8 (MiCloneLargeFileOnlyVad.c)
 *     MiCloneDiscardVadCommit @ 0x1406E4B5C (MiCloneDiscardVadCommit.c)
 *     MiCreateLargePageVad @ 0x1406EBC04 (MiCreateLargePageVad.c)
 *     MiDeletePartialCloneVads @ 0x1406EC69C (MiDeletePartialCloneVads.c)
 */

__int64 __fastcall MiAllocateChildVads(ULONG_PTR BugCheckParameter1, _QWORD *a2)
{
  void *v3; // r15
  _QWORD *v5; // rdi
  _QWORD *i; // rax
  _QWORD *v7; // rax
  __int64 v8; // rbp
  _QWORD *v9; // rcx
  int v10; // edx
  ULONG v11; // eax
  SIZE_T v12; // rsi
  _QWORD *PoolWithTag; // rax
  _QWORD *v14; // rbx
  int inserted; // esi
  bool v16; // sf
  int v17; // edx
  int v18; // eax
  $709EDFC2F9E0D4565D6AA3C4377BC643 v20; // [rsp+20h] [rbp-68h] BYREF

  v3 = 0LL;
  v5 = 0LL;
  for ( i = (_QWORD *)KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[4]; i; i = (_QWORD *)*i )
    v5 = i;
  while ( 1 )
  {
    do
    {
      if ( !v5 )
        return MiInsertChildVads(BugCheckParameter1, v3);
      v7 = (_QWORD *)v5[1];
      v8 = (__int64)v5;
      v9 = v5;
      if ( v7 )
      {
        do
        {
          v5 = v7;
          v7 = (_QWORD *)*v7;
        }
        while ( v7 );
      }
      else
      {
        while ( 1 )
        {
          v5 = (_QWORD *)(v5[2] & 0xFFFFFFFFFFFFFFFCuLL);
          if ( !v5 || (_QWORD *)*v5 == v9 )
            break;
          v9 = v5;
        }
      }
      v10 = *(_DWORD *)(v8 + 48);
    }
    while ( ((1 << (*(_BYTE *)(v8 + 48) & 7)) & 0xB5) == 0
         || (v10 & 0x40000) != 0
         || (v10 & 0x8000) == 0 && (*(_DWORD *)(v8 + 64) & 0x4000000) == 0 );
    v11 = 1818517846;
    v12 = (-(__int64)((*(_DWORD *)(v8 + 48) & 0x8000) != 0) & 0xFFFFFFFFFFFFFFB8uLL) + 136;
    if ( (*(_DWORD *)(v8 + 48) & 7) == 2 && (v10 & 0x10000) != 0 )
    {
      v11 = 1231315286;
      v12 = 8
          * (((unsigned __int64)*(unsigned int *)(***(_QWORD ***)(v8 + 72) + 8LL) >> 6)
           + ((*(_DWORD *)(***(_QWORD ***)(v8 + 72) + 8LL) & 0x3F) != 0)
           + 20LL);
    }
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v12, v11);
    v14 = PoolWithTag;
    if ( !PoolWithTag )
      break;
    memmove(PoolWithTag, (const void *)v8, v12);
    if ( (*(_DWORD *)(v8 + 48) & 0x8000) != 0 )
      *((_DWORD *)v14 + 12) &= ~0x4000u;
    else
      v14[14] = BugCheckParameter1 | 1;
    v14[7] = 0LL;
    *((_DWORD *)v14 + 9) = 0;
    v14[5] = 0LL;
    v14[1] = 0LL;
    v14[2] = -2LL;
    if ( (unsigned int)MiVadHasSharedCommit(v8) )
    {
      inserted = MiInsertSharedCommitNode(**(_QWORD ***)(v8 + 72), BugCheckParameter1, 0);
      if ( inserted < 0 )
        goto LABEL_52;
    }
    if ( (unsigned int)MiVadPureReserve((__int64)v14) )
    {
      inserted = MiCloneCaptureVadCommit((__int64)v14);
      if ( inserted < 0 )
      {
        if ( (unsigned int)MiVadHasSharedCommit(v14) )
          MiRemoveSharedCommitNode(*(_QWORD *)v14[9], BugCheckParameter1, 0);
        ExFreePoolWithTag(v14, 0);
        v14 = 0LL;
LABEL_48:
        if ( !v14 )
          goto LABEL_54;
        if ( (unsigned int)MiVadHasSharedCommit(v14) )
          MiRemoveSharedCommitNode(*(_QWORD *)v14[9], BugCheckParameter1, 0);
        MiCloneDiscardVadCommit(v14);
        MiFreeVadEvents((__int64)v14);
LABEL_52:
        ExFreePoolWithTag(v14, 0);
        goto LABEL_54;
      }
    }
    if ( (*(_DWORD *)(v8 + 48) & 0x4000) != 0 )
    {
      inserted = MiCloneNoChange(v8, v14);
      if ( inserted < 0 )
        goto LABEL_48;
    }
    if ( (*(_DWORD *)(v8 + 48) & 7) == 4 )
    {
      inserted = MiCreateVadEventBitmap(
                   BugCheckParameter1,
                   (__int64)v14,
                   (*((unsigned int *)v14 + 7) | ((unsigned __int64)*((unsigned __int8 *)v14 + 33) << 32))
                 - (*((unsigned int *)v14 + 6) | ((unsigned __int64)*((unsigned __int8 *)v14 + 32) << 32))
                 + 1,
                   4);
      if ( inserted >= 0 )
      {
        _InterlockedOr((volatile signed __int32 *)(BugCheckParameter1 + 772), 0x8000u);
        inserted = 0;
      }
      v16 = inserted < 0;
LABEL_37:
      if ( v16 )
        goto LABEL_48;
      goto LABEL_44;
    }
    if ( !MiVadMapsLargeImage(v8) && v17 != 5 )
    {
      if ( v17 == 2 )
      {
        v18 = MiCloneImageVad(BugCheckParameter1, (__int64)v14, v8);
      }
      else
      {
        if ( v17 != 7 || !*(_QWORD *)(**(_QWORD **)(v8 + 72) + 64LL) )
          goto LABEL_44;
        v18 = MiCloneLargeFileOnlyVad(v8);
      }
      inserted = v18;
      v16 = v18 < 0;
      goto LABEL_37;
    }
    inserted = MiCreateLargePageVad(BugCheckParameter1, v14);
    if ( inserted < 0 )
      goto LABEL_48;
    ++*a2;
LABEL_44:
    *v14 = v3;
    v3 = v14;
  }
  inserted = -1073741670;
LABEL_54:
  if ( v3 )
  {
    KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)&v20);
    MiDeletePartialCloneVads(v3);
    KiUnstackDetachProcess(&v20, 0LL);
  }
  return (unsigned int)inserted;
}
