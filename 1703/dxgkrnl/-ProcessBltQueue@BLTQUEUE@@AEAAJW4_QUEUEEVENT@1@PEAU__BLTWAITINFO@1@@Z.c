/*
 * XREFs of ?ProcessBltQueue@BLTQUEUE@@AEAAJW4_QUEUEEVENT@1@PEAU__BLTWAITINFO@1@@Z @ 0x1C00A047C
 * Callers:
 *     ?BltQueueWorker@BLTQUEUE@@QEAAXXZ @ 0x1C011F164 (-BltQueueWorker@BLTQUEUE@@QEAAXXZ.c)
 * Callees:
 *     ?GetAdapter@DXGDODPRESENT@@QEAAPEAVDXGADAPTER@@XZ @ 0x1C0002744 (-GetAdapter@DXGDODPRESENT@@QEAAPEAVDXGADAPTER@@XZ.c)
 *     ?FinishCommand@BLTQUEUE@@AEAAXJ@Z @ 0x1C00A05B0 (-FinishCommand@BLTQUEUE@@AEAAXJ@Z.c)
 *     ?RemoveQueueHead@BLTQUEUE@@AEAAPEAVBLTENTRY@@PEAU_LIST_ENTRY@@@Z @ 0x1C00A065C (-RemoveQueueHead@BLTQUEUE@@AEAAPEAVBLTENTRY@@PEAU_LIST_ENTRY@@@Z.c)
 *     ?SignalVSyncEvent@BLTQUEUE@@AEAAXXZ @ 0x1C0103C8C (-SignalVSyncEvent@BLTQUEUE@@AEAAXXZ.c)
 *     ?Blt@BLTENTRY@@QEAAJXZ @ 0x1C01B4004 (-Blt@BLTENTRY@@QEAAJXZ.c)
 *     ?DiscardPendingPresent@BLTQUEUE@@AEAAXXZ @ 0x1C01B4664 (-DiscardPendingPresent@BLTQUEUE@@AEAAXXZ.c)
 *     ?IndirectBlt@BLTENTRY@@QEAAJXZ @ 0x1C01B4890 (-IndirectBlt@BLTENTRY@@QEAAJXZ.c)
 *     ?InsertQueueHead@BLTQUEUE@@AEAAXPEAU_LIST_ENTRY@@PEAVBLTENTRY@@@Z @ 0x1C01B48F8 (-InsertQueueHead@BLTQUEUE@@AEAAXPEAU_LIST_ENTRY@@PEAVBLTENTRY@@@Z.c)
 *     ?InsertQueueTail@BLTQUEUE@@AEAAXPEAU_LIST_ENTRY@@PEAVBLTENTRY@@@Z @ 0x1C01B49A8 (-InsertQueueTail@BLTQUEUE@@AEAAXPEAU_LIST_ENTRY@@PEAVBLTENTRY@@@Z.c)
 *     ?ReleasePresentDoneEvent@BLTENTRY@@QEAAXE@Z @ 0x1C01B5DC0 (-ReleasePresentDoneEvent@BLTENTRY@@QEAAXE@Z.c)
 *     ?UpdatePresentStats@BLTQUEUE@@AEAAXPEAVBLTENTRY@@PEAU__BLTWAITINFO@1@@Z @ 0x1C01B6AE0 (-UpdatePresentStats@BLTQUEUE@@AEAAXPEAVBLTENTRY@@PEAU__BLTWAITINFO@1@@Z.c)
 */

__int64 __fastcall BLTQUEUE::ProcessBltQueue(__int64 a1, int a2, __int64 a3)
{
  int v3; // r12d
  int v5; // r13d
  struct _LIST_ENTRY *v7; // rdi
  int v8; // ebx
  struct BLTENTRY *v9; // rax
  struct BLTENTRY *v10; // rbp
  char v11; // cl
  __int64 v12; // rbx
  int v14; // eax
  void *v15; // rcx
  struct _KEVENT *v16; // rdi
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rax
  bool v20; // zf
  int v21; // eax

  v3 = 0;
  v5 = a2;
  if ( *(int *)(a1 + 852) < 0 )
  {
    if ( a2 == 1 )
      BLTQUEUE::SignalVSyncEvent((BLTQUEUE *)a1);
    BLTQUEUE::DiscardPendingPresent((BLTQUEUE *)a1);
    return *(unsigned int *)(a1 + 852);
  }
  if ( a2 == 1 )
  {
    v14 = *(_DWORD *)(a1 + 324);
    if ( v14 )
      *(_DWORD *)(a1 + 324) = v14 - 1;
  }
  v7 = (struct _LIST_ENTRY *)(a1 + 64);
  v8 = 2;
  while ( 1 )
  {
    if ( *(_DWORD *)(a1 + 324) )
      *(_DWORD *)a3 |= 2u;
    v9 = BLTQUEUE::RemoveQueueHead((BLTQUEUE *)a1, v7);
    v10 = v9;
    if ( !v9 )
      break;
    if ( v5 == 2 )
    {
      v15 = (void *)*((_QWORD *)v9 + 5);
      *((_DWORD *)v9 + 130) |= 1u;
      ObfDereferenceObject(v15);
      *((_QWORD *)v10 + 5) = 0LL;
    }
    if ( (*((_DWORD *)v10 + 130) & 1) == 0 )
    {
      v16 = (struct _KEVENT *)*((_QWORD *)v10 + 5);
      if ( KeReadStateEvent(v16) )
      {
        *((_DWORD *)v10 + 130) |= 1u;
        goto LABEL_30;
      }
      *(_DWORD *)a3 |= 1u;
      HIDWORD(v18) = 0;
      *(_QWORD *)(a3 + 8) = v16;
      ++*((_DWORD *)v10 + 131);
      LODWORD(v18) = (unsigned int)(5 * *(_DWORD *)(a1 + 208)) % *(_DWORD *)(a1 + 212);
      if ( *((_DWORD *)v10 + 131) > (unsigned int)(5 * *(_DWORD *)(a1 + 208)) / *(_DWORD *)(a1 + 212) )
      {
        *((_DWORD *)v10 + 130) |= 3u;
        *(_DWORD *)(a1 + 848) |= 4u;
        v19 = WdLogNewEntry5_WdError(v17, v18);
        *(_QWORD *)(v19 + 24) = a1;
        WdLogEvent5_WdError(v19);
        *(_DWORD *)a3 &= ~1u;
LABEL_30:
        ObfDereferenceObject(*((PVOID *)v10 + 5));
        *((_QWORD *)v10 + 5) = 0LL;
      }
      v7 = (struct _LIST_ENTRY *)(a1 + 64);
    }
    if ( v5 != 1
      && (*((_DWORD *)v10 + 130) & 1) != 0
      && !*(_DWORD *)(a1 + 324)
      && *((_DWORD *)v10 + 14)
      && !*(_BYTE *)(a1 + 192) )
    {
      *(_DWORD *)a3 |= 2u;
    }
    if ( (*(_DWORD *)a3 & 2) != 0 || (*(_DWORD *)a3 & 1) != 0 )
    {
      BLTQUEUE::InsertQueueHead((BLTQUEUE *)a1, v7, v10);
      goto LABEL_13;
    }
    KeWaitForSingleObject((PVOID)(a1 + 104), Executive, 0, 0, 0LL);
    BLTQUEUE::UpdatePresentStats((BLTQUEUE *)a1, v10, (struct BLTQUEUE::__BLTWAITINFO *)a3);
    if ( v5 == 1 )
      BLTQUEUE::SignalVSyncEvent((BLTQUEUE *)a1);
    if ( (*(_DWORD *)a3 & 2) != 0 )
    {
      BLTQUEUE::InsertQueueHead((BLTQUEUE *)a1, (struct _LIST_ENTRY *)(a1 + 64), v10);
      KeReleaseMutex((PRKMUTEX)(a1 + 104), 0);
      goto LABEL_13;
    }
    v5 = -1;
    if ( (*((_DWORD *)DXGDODPRESENT::GetAdapter(*(DXGDODPRESENT **)a1) + 75) & 0x100) != 0 )
    {
      KeWaitForSingleObject((PVOID)(a1 + 2568), Executive, 0, 0, 0LL);
      v3 = BLTENTRY::IndirectBlt(v10);
      KeReleaseMutex((PRKMUTEX)(a1 + 2568), 0);
      v8 = 2;
    }
    else
    {
      v3 = BLTENTRY::Blt(v10);
      BLTENTRY::ReleasePresentDoneEvent(v10, 1u);
    }
    if ( v3 >= 0 )
    {
      v20 = *(_BYTE *)(a1 + 192) == 0;
      *(_DWORD *)(a1 + 320) = *((_DWORD *)v10 + 14);
      if ( v20 )
        v21 = *((_DWORD *)v10 + 14);
      else
        v21 = 0;
      *(_DWORD *)(a1 + 324) = v21;
    }
    BLTQUEUE::InsertQueueTail((BLTQUEUE *)a1, (struct _LIST_ENTRY *)(a1 + 80), v10);
    if ( *(_BYTE *)(a1 + 406) )
    {
      *(_BYTE *)(a1 + 406) = 0;
      BLTQUEUE::FinishCommand((BLTQUEUE *)a1, v3);
    }
    KeReleaseMutex((PRKMUTEX)(a1 + 104), 0);
    if ( v3 < 0 )
    {
      BLTQUEUE::DiscardPendingPresent((BLTQUEUE *)a1);
      *(_DWORD *)(a1 + 852) = v3;
      return (unsigned int)v3;
    }
    v7 = (struct _LIST_ENTRY *)(a1 + 64);
  }
  v11 = *(_BYTE *)(a1 + 405);
  if ( v11 )
  {
    if ( !*(_BYTE *)(a1 + 406) )
      goto LABEL_9;
  }
  else
  {
    if ( !*(_BYTE *)(a1 + 406) )
      goto LABEL_13;
LABEL_9:
    v8 = 0;
  }
  *(_DWORD *)(a1 + 840) = v8 | *(_DWORD *)(a1 + 840) & 0xFFFFFFFD;
  if ( v11 )
  {
    v12 = 5LL * *(unsigned int *)(a1 + 752);
    *(LARGE_INTEGER *)(a1 + 8 * v12 + 768) = KeQueryPerformanceCounter(0LL);
    *(_DWORD *)(a1 + 8 * v12 + 776) = v5;
  }
  *(_WORD *)(a1 + 405) = 0;
  BLTQUEUE::FinishCommand((BLTQUEUE *)a1, 0);
LABEL_13:
  if ( v5 == 1 )
    BLTQUEUE::SignalVSyncEvent((BLTQUEUE *)a1);
  return (unsigned int)v3;
}
