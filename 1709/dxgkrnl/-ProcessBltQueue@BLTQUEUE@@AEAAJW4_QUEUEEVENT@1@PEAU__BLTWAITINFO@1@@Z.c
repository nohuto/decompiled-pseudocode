/*
 * XREFs of ?ProcessBltQueue@BLTQUEUE@@AEAAJW4_QUEUEEVENT@1@PEAU__BLTWAITINFO@1@@Z @ 0x1C007EDD8
 * Callers:
 *     ?BltQueueWorker@BLTQUEUE@@QEAAXXZ @ 0x1C0105A38 (-BltQueueWorker@BLTQUEUE@@QEAAXXZ.c)
 * Callees:
 *     ?GetAdapter@DXGDODPRESENT@@QEAAPEAVDXGADAPTER@@XZ @ 0x1C00011F4 (-GetAdapter@DXGDODPRESENT@@QEAAPEAVDXGADAPTER@@XZ.c)
 *     McTemplateK0dt @ 0x1C002BED8 (McTemplateK0dt.c)
 *     ?Blt@BLTENTRY@@QEAAJXZ @ 0x1C007E158 (-Blt@BLTENTRY@@QEAAJXZ.c)
 *     ?DiscardPendingPresent@BLTQUEUE@@AEAAXXZ @ 0x1C007EB84 (-DiscardPendingPresent@BLTQUEUE@@AEAAXXZ.c)
 *     ?UpdatePresentStats@BLTQUEUE@@AEAAXPEAVBLTENTRY@@PEAU__BLTWAITINFO@1@@Z @ 0x1C007EC3C (-UpdatePresentStats@BLTQUEUE@@AEAAXPEAVBLTENTRY@@PEAU__BLTWAITINFO@1@@Z.c)
 *     ?SignalVSyncEvent@BLTQUEUE@@AEAAXXZ @ 0x1C007F1C0 (-SignalVSyncEvent@BLTQUEUE@@AEAAXXZ.c)
 *     ?FinishCommand@BLTQUEUE@@AEAAXJ@Z @ 0x1C007F5B0 (-FinishCommand@BLTQUEUE@@AEAAXJ@Z.c)
 *     ?InsertQueueTail@BLTQUEUE@@AEAAXPEAU_LIST_ENTRY@@PEAVBLTENTRY@@@Z @ 0x1C007F81C (-InsertQueueTail@BLTQUEUE@@AEAAXPEAU_LIST_ENTRY@@PEAVBLTENTRY@@@Z.c)
 *     ?InsertQueueHead@BLTQUEUE@@AEAAXPEAU_LIST_ENTRY@@PEAVBLTENTRY@@@Z @ 0x1C016FA20 (-InsertQueueHead@BLTQUEUE@@AEAAXPEAU_LIST_ENTRY@@PEAVBLTENTRY@@@Z.c)
 *     ?IndirectBlt@BLTENTRY@@QEAAJXZ @ 0x1C01CE204 (-IndirectBlt@BLTENTRY@@QEAAJXZ.c)
 */

__int64 __fastcall BLTQUEUE::ProcessBltQueue(__int64 a1, int a2, __int64 a3)
{
  int v3; // ebx
  int v5; // edi
  struct _KMUTANT *v7; // rsi
  struct _LIST_ENTRY *v8; // r12
  __int64 v9; // rcx
  __int64 v10; // r8
  struct _LIST_ENTRY *Flink; // rbp
  struct _LIST_ENTRY *v12; // rax
  struct _LIST_ENTRY **p_Blink; // rbp
  __int64 v14; // rcx
  __int64 v15; // r8
  struct _LIST_ENTRY *v16; // rax
  struct _LIST_ENTRY *v17; // rbp
  char v19; // cl
  int v20; // eax
  __int64 v21; // rcx
  int v22; // eax
  struct _KEVENT *v23; // rcx
  bool v24; // zf
  int v25; // eax
  struct _LIST_ENTRY *v26; // rcx
  __int64 v27; // rbx
  __int64 v28; // rax
  __int64 v29; // [rsp+20h] [rbp-48h]
  __int64 v30; // [rsp+20h] [rbp-48h]
  int v31; // [rsp+70h] [rbp+8h]
  struct _KEVENT *v32; // [rsp+70h] [rbp+8h]
  int v33; // [rsp+78h] [rbp+10h]
  int v34; // [rsp+88h] [rbp+20h]

  v33 = a2;
  v3 = 0;
  v5 = a2;
  v31 = 0;
  if ( *(int *)(a1 + 852) < 0 )
  {
    if ( a2 == 1 )
      BLTQUEUE::SignalVSyncEvent((BLTQUEUE *)a1);
    BLTQUEUE::DiscardPendingPresent((BLTQUEUE *)a1);
    return *(unsigned int *)(a1 + 852);
  }
  if ( a2 == 1 )
  {
    v20 = *(_DWORD *)(a1 + 324);
    if ( v20 )
      *(_DWORD *)(a1 + 324) = v20 - 1;
  }
  v7 = (struct _KMUTANT *)(a1 + 8);
  v34 = 2;
  v8 = (struct _LIST_ENTRY *)(a1 + 64);
  while ( 1 )
  {
    if ( *(_DWORD *)(a1 + 324) )
      *(_DWORD *)a3 |= 2u;
    KeWaitForSingleObject(v7, Executive, 0, 0, 0LL);
    Flink = v8->Flink;
    if ( v8->Flink == v8 )
    {
      p_Blink = 0LL;
    }
    else
    {
      if ( Flink->Blink != v8 || (v12 = Flink->Flink, Flink->Flink->Blink != Flink) )
        __fastfail(3u);
      v8->Flink = v12;
      v12->Blink = v8;
      p_Blink = &Flink[-1].Blink;
      if ( p_Blink && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      {
        LODWORD(v29) = 1;
        McTemplateK0dt(v9, &EventBltQueueRemoveEntry, v10, *((_DWORD *)p_Blink + 15), v29);
      }
    }
    KeReleaseMutex(v7, 0);
    if ( !p_Blink )
      break;
    if ( v5 == 2 )
    {
      v26 = p_Blink[5];
      *((_DWORD *)p_Blink + 130) |= 1u;
      ObfDereferenceObject(v26);
      p_Blink[5] = 0LL;
    }
    if ( ((_DWORD)p_Blink[65] & 1) == 0 )
    {
      v32 = (struct _KEVENT *)p_Blink[5];
      if ( KeReadStateEvent(v32) )
      {
        *((_DWORD *)p_Blink + 130) |= 1u;
        goto LABEL_61;
      }
      *(_DWORD *)a3 |= 1u;
      *(_QWORD *)(a3 + 8) = v32;
      if ( ++*((_DWORD *)p_Blink + 131) > (unsigned int)(5 * *(_DWORD *)(a1 + 208)) / *(_DWORD *)(a1 + 212) )
      {
        *((_DWORD *)p_Blink + 130) |= 3u;
        *(_DWORD *)(a1 + 848) |= 4u;
        v28 = WdLogNewEntry5_WdError(v21);
        *(_QWORD *)(v28 + 24) = a1;
        WdLogEvent5_WdError(v28);
        *(_DWORD *)a3 &= ~1u;
LABEL_61:
        ObfDereferenceObject(p_Blink[5]);
        p_Blink[5] = 0LL;
      }
    }
    if ( v5 != 1
      && ((_DWORD)p_Blink[65] & 1) != 0
      && !*(_DWORD *)(a1 + 324)
      && *((_DWORD *)p_Blink + 14)
      && !*(_BYTE *)(a1 + 192) )
    {
      *(_DWORD *)a3 |= 2u;
    }
    if ( (*(_DWORD *)a3 & 2) != 0 || (*(_DWORD *)a3 & 1) != 0 )
    {
      KeWaitForSingleObject(v7, Executive, 0, 0, 0LL);
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      {
        LODWORD(v30) = 1;
        McTemplateK0dt(v14, &EventBltQueueAddEntry, v15, *((_DWORD *)p_Blink + 15), v30);
      }
      v16 = v8->Flink;
      v17 = (struct _LIST_ENTRY *)(p_Blink + 1);
      if ( v8->Flink->Blink != v8 )
        __fastfail(3u);
      v17->Flink = v16;
      v17->Blink = v8;
      v16->Blink = v17;
      v8->Flink = v17;
      KeReleaseMutex(v7, 0);
      goto LABEL_24;
    }
    KeWaitForSingleObject((PVOID)(a1 + 104), Executive, 0, 0, 0LL);
    BLTQUEUE::UpdatePresentStats((BLTQUEUE *)a1, (struct BLTENTRY *)p_Blink, (struct BLTQUEUE::__BLTWAITINFO *)a3);
    if ( v33 == 1 )
      BLTQUEUE::SignalVSyncEvent((BLTQUEUE *)a1);
    if ( (*(_DWORD *)a3 & 2) != 0 )
    {
      BLTQUEUE::InsertQueueHead((BLTQUEUE *)a1, v8, (struct BLTENTRY *)p_Blink);
      KeReleaseMutex((PRKMUTEX)(a1 + 104), 0);
      v5 = v33;
      goto LABEL_24;
    }
    v33 = -1;
    if ( (*((_DWORD *)DXGDODPRESENT::GetAdapter(*(DXGDODPRESENT **)a1) + 75) & 0x100) != 0 )
    {
      KeWaitForSingleObject((PVOID)(a1 + 2568), Executive, 0, 0, 0LL);
      v31 = BLTENTRY::IndirectBlt((BLTENTRY *)p_Blink);
      KeReleaseMutex((PRKMUTEX)(a1 + 2568), 0);
      v3 = v31;
    }
    else
    {
      v22 = BLTENTRY::Blt((BLTENTRY *)p_Blink);
      v23 = (struct _KEVENT *)p_Blink[6];
      v3 = v22;
      v31 = v22;
      if ( v23 )
      {
        KeSetEvent(v23, 0, 0);
        ObfDereferenceObject(p_Blink[6]);
        p_Blink[6] = 0LL;
      }
    }
    if ( v3 >= 0 )
    {
      v24 = *(_BYTE *)(a1 + 192) == 0;
      *(_DWORD *)(a1 + 320) = *((_DWORD *)p_Blink + 14);
      if ( v24 )
        v25 = *((_DWORD *)p_Blink + 14);
      else
        v25 = 0;
      *(_DWORD *)(a1 + 324) = v25;
    }
    BLTQUEUE::InsertQueueTail((BLTQUEUE *)a1, (struct _LIST_ENTRY *)(a1 + 80), (struct BLTENTRY *)p_Blink);
    if ( *(_BYTE *)(a1 + 406) )
    {
      *(_BYTE *)(a1 + 406) = 0;
      BLTQUEUE::FinishCommand((BLTQUEUE *)a1, v3);
    }
    KeReleaseMutex((PRKMUTEX)(a1 + 104), 0);
    if ( v3 < 0 )
      goto LABEL_69;
    v5 = -1;
  }
  v19 = *(_BYTE *)(a1 + 405);
  if ( v19 )
  {
    if ( !*(_BYTE *)(a1 + 406) )
      goto LABEL_56;
  }
  else
  {
    if ( !*(_BYTE *)(a1 + 406) )
      goto LABEL_24;
LABEL_56:
    v34 = 0;
  }
  *(_DWORD *)(a1 + 840) = v34 | *(_DWORD *)(a1 + 840) & 0xFFFFFFFD;
  if ( v19 )
  {
    v27 = 5LL * *(unsigned int *)(a1 + 752);
    *(LARGE_INTEGER *)(a1 + 8 * v27 + 768) = KeQueryPerformanceCounter(0LL);
    *(_DWORD *)(a1 + 8 * v27 + 776) = v5;
    v3 = v31;
  }
  *(_WORD *)(a1 + 405) = 0;
  BLTQUEUE::FinishCommand((BLTQUEUE *)a1, 0);
LABEL_24:
  if ( v5 == 1 )
    BLTQUEUE::SignalVSyncEvent((BLTQUEUE *)a1);
  if ( v3 < 0 )
  {
LABEL_69:
    BLTQUEUE::DiscardPendingPresent((BLTQUEUE *)a1);
    *(_DWORD *)(a1 + 852) = v3;
  }
  return (unsigned int)v3;
}
