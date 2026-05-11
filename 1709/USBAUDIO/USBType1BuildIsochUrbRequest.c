/*
 * XREFs of USBType1BuildIsochUrbRequest @ 0x1C0003EF8
 * Callers:
 *     USBType1Build1MsecIsocRequest @ 0x1C0004598 (USBType1Build1MsecIsocRequest.c)
 *     USBType1ProcessStreamPointer @ 0x1C0004740 (USBType1ProcessStreamPointer.c)
 *     USBType1LockDelay @ 0x1C002033C (USBType1LockDelay.c)
 * Callees:
 *     WPP_RECORDER_SF_qqd @ 0x1C000303C (WPP_RECORDER_SF_qqd.c)
 *     _guard_dispatch_icall_nop @ 0x1C00074E0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0008100 (memmove.c)
 *     memset @ 0x1C0008440 (memset.c)
 */

__int64 __fastcall USBType1BuildIsochUrbRequest(
        PKSSTREAM_POINTER StreamPointer,
        __int64 (__fastcall *a2)(__int64 a1, __int64 a2, __int64 *a3))
{
  _SLIST_ENTRY *p_ListEntry; // rsi
  PKSSTREAM_POINTER v3; // r14
  char *Context; // r15
  __int64 (__fastcall *v5)(__int64, __int64, __int64 *); // rdi
  bool v6; // dl
  bool v7; // r8
  ULONG Remaining; // r13d
  _DWORD *v9; // rcx
  NTSTATUS v10; // eax
  unsigned int v11; // r12d
  _DWORD *v12; // rsi
  struct _SLIST_ENTRY *v13; // rbx
  unsigned int v14; // ecx
  __int64 v15; // rdi
  __int64 v16; // rdx
  __int64 (__fastcall *v17)(__int64, __int64, __int64); // rax
  __int64 v18; // r8
  __int64 v19; // rcx
  struct _SLIST_ENTRY **v20; // rax
  __int64 v21; // rdi
  __int64 v22; // r14
  ULONG v23; // ebx
  unsigned int v24; // edi
  int v25; // r8d
  unsigned int v26; // ecx
  KIRQL v27; // dl
  int v28; // eax
  __int64 v29; // rcx
  ULONG v30; // edx
  PSLIST_ENTRY v31; // rbx
  __int64 v32; // rsi
  KIRQL v33; // al
  _QWORD *v34; // rcx
  __int64 *v35; // rsi
  __int64 v36; // rdx
  KIRQL v37; // al
  __int64 v38; // rdi
  void *v39; // rcx
  bool v40; // zf
  unsigned int v41; // r12d
  __int64 v42; // r13
  struct _SLIST_ENTRY *Next; // rax
  IRP *v44; // rdi
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rbx
  __int64 v46; // rdx
  __int64 v47; // r8
  __int64 v48; // r9
  struct _IO_STACK_LOCATION *v49; // rax
  KIRQL v50; // al
  _SLIST_ENTRY **v51; // r8
  KIRQL v52; // al
  _DWORD *v53; // rdi
  struct _SLIST_ENTRY *v54; // rax
  __int64 v55; // rbx
  KIRQL v56; // al
  struct _KSPIN *v57; // rcx
  KIRQL v58; // di
  PKSGATE i; // rax
  int Timeout; // [rsp+20h] [rbp-59h]
  NTSTATUS v62; // [rsp+40h] [rbp-39h]
  _SLIST_ENTRY ListEntry; // [rsp+48h] [rbp-31h] BYREF
  ULONG InUsed; // [rsp+58h] [rbp-21h]
  unsigned int v65; // [rsp+5Ch] [rbp-1Dh]
  PSLIST_ENTRY v66; // [rsp+60h] [rbp-19h]
  _DWORD *v67; // [rsp+68h] [rbp-11h]
  __int64 v68; // [rsp+70h] [rbp-9h]
  __int64 v69; // [rsp+78h] [rbp-1h]
  PKSPIN Pin; // [rsp+80h] [rbp+7h]
  bool v73; // [rsp+F0h] [rbp+77h]
  bool v74; // [rsp+F8h] [rbp+7Fh]

  p_ListEntry = &ListEntry;
  Pin = StreamPointer->Pin;
  v3 = StreamPointer;
  v73 = 0;
  Context = (char *)Pin->Context;
  v5 = a2;
  v6 = 0;
  v7 = 0;
  Remaining = StreamPointer->OffsetIn.Remaining;
  v74 = 0;
  v9 = (_DWORD *)*((_QWORD *)Context + 17);
  v69 = *((_QWORD *)Context + 2);
  v67 = v9;
  v10 = 0;
  v62 = 0;
  v11 = v9[2] * (v9[25] + (((v9[26] + v9[24]) & 0xFFFFC000) >= 0xFA0000));
  *((_QWORD *)&ListEntry.Next + 1) = &ListEntry;
  ListEntry.Next = &ListEntry;
  if ( Remaining < v11 )
    goto LABEL_33;
  while ( v10 >= 0 && !v6 )
  {
    v12 = v67;
    if ( v5 == USBType1MsCompleteCallback )
    {
      v13 = (struct _SLIST_ENTRY *)v3->Context;
      v14 = 1;
      v66 = (PSLIST_ENTRY)v3->Context;
    }
    else
    {
      v15 = *((_QWORD *)v67 + 14);
      ++*(_DWORD *)(v15 + 20);
      v66 = ExpInterlockedPopEntrySList((PSLIST_HEADER)v15);
      v13 = v66;
      if ( !v66 )
      {
        v16 = *(unsigned int *)(v15 + 44);
        v17 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(v15 + 48);
        v18 = *(unsigned int *)(v15 + 40);
        v19 = *(unsigned int *)(v15 + 36);
        ++*(_DWORD *)(v15 + 24);
        v13 = (struct _SLIST_ENTRY *)v17(v19, v16, v18);
        v66 = v13;
      }
      v5 = a2;
      v14 = 32;
      v10 = v62;
    }
    v65 = v14;
    if ( !v13 )
    {
LABEL_27:
      v7 = v73;
      goto LABEL_28;
    }
    v20 = (struct _SLIST_ENTRY **)*((_QWORD *)&ListEntry.Next + 1);
    v21 = *((_QWORD *)&v13[1].Next + 1);
    v68 = v21;
    if ( **((_SLIST_ENTRY ***)&ListEntry.Next + 1) != &ListEntry )
      __fastfail(3u);
    *((_QWORD *)&v13->Next + 1) = *((_QWORD *)&ListEntry.Next + 1);
    v13->Next = &ListEntry;
    *v20 = v13;
    *((_QWORD *)&ListEntry.Next + 1) = v13;
    memset((void *)v21, 0, 12LL * v14 + 152);
    *(_WORD *)(v21 + 2) = 10;
    *(_QWORD *)(v21 + 24) = *((_QWORD *)v12 + 8);
    *(_QWORD *)(v21 + 40) = v3->OffsetIn.Data;
    if ( *((_BYTE *)v12 + 80) )
      *(_DWORD *)(v21 + 128) = v12[222];
    else
      *(_DWORD *)(v21 + 32) = 4;
    v22 = v68;
    v23 = 0;
    v24 = 0;
    do
    {
      if ( Remaining < v11 || v74 )
        break;
      Remaining -= v11;
      *(_DWORD *)(v22 + 12LL * v24 + 140) = v23;
      v23 += v11;
      v25 = v12[26];
      v26 = (v25 + v12[24]) % 0xFA0000u;
      v12[24] = v26;
      v11 = v12[2] * (v12[25] + (((v25 + v26) & 0xFFFFC000) >= 0xFA0000));
      v27 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)Context + 12);
      if ( *((_BYTE *)v12 + 80) )
      {
        v40 = v12[223] == 1;
        v28 = v12[223] - 1;
        v12[223] = v28;
        v74 = v40;
        if ( !v28 )
          v12[223] = v12[221];
        ++v12[222];
      }
      KeReleaseSpinLock((PKSPIN_LOCK)Context + 12, v27);
      ++v24;
    }
    while ( v24 < v65 );
    v29 = v68;
    v3 = StreamPointer;
    InUsed = v23;
    v30 = v23;
    v31 = v66;
    *(_DWORD *)(v68 + 132) = v24;
    *(_DWORD *)(v29 + 36) = v30;
    *(_WORD *)v29 = 12 * v24 + 152;
    v5 = a2;
    HIDWORD(v31[2].Next) = v30;
    if ( a2 == USBType1MsCompleteCallback || (char *)a2 == (char *)USBType1LockDelayCompleteCallback )
    {
      v7 = v73;
      *((_QWORD *)&v31[2].Next + 1) = StreamPointer;
      StreamPointer->OffsetIn.Data += v30;
      StreamPointer->OffsetIn.Remaining -= v30;
      v10 = v62;
    }
    else
    {
      *((_QWORD *)&v31[2].Next + 1) = 0LL;
      v10 = KsStreamPointerClone(StreamPointer, 0LL, 0, (PKSSTREAM_POINTER *)&v31[2].Next + 1);
      v62 = v10;
      if ( v10 < 0 )
        goto LABEL_27;
      v40 = KsStreamPointerAdvanceOffsets(StreamPointer, InUsed, 0, 0) == 0;
      v10 = v62;
      v7 = v40;
      v73 = v40;
    }
LABEL_28:
    v6 = v74;
    if ( Remaining < v11 )
      goto LABEL_32;
  }
  v7 = v73;
LABEL_32:
  p_ListEntry = ListEntry.Next;
LABEL_33:
  if ( (char *)v5 == (char *)USBType1LockDelayCompleteCallback )
    goto LABEL_48;
  if ( Remaining )
  {
    if ( !v6 )
    {
      v32 = *((_QWORD *)Context + 17);
      if ( v5 == USBType1MsCompleteCallback && Remaining == v3->OffsetIn.Count )
      {
        *(_DWORD *)(v32 + 108) = v11 - Remaining;
        v33 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)Context + 12);
        v34 = v3->Context;
        v35 = (__int64 *)(v32 + 120);
        v36 = *v35;
        if ( *(__int64 **)(*v35 + 8) != v35 )
          __fastfail(3u);
        *v34 = v36;
        v34[1] = v35;
        *(_QWORD *)(v36 + 8) = v34;
        *v35 = (__int64)v34;
        KeReleaseSpinLock((PKSPIN_LOCK)Context + 12, v33);
        ExFreePool(v3);
      }
      else
      {
        KeWaitForSingleObject((PVOID)(v32 + 136), Executive, 0, 0, 0LL);
        v37 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)Context + 12);
        v38 = *(_QWORD *)(v32 + 120);
        KeReleaseSpinLock((PKSPIN_LOCK)Context + 12, v37);
        v39 = *(void **)(v38 + 48);
        *(_DWORD *)(v38 + 36) = Remaining;
        memmove(v39, v3->OffsetIn.Data, Remaining);
        *(_DWORD *)(v32 + 108) = v11 - Remaining;
        if ( a2 != USBType1MsCompleteCallback )
          KsStreamPointerAdvanceOffsetsAndUnlock(v3, Remaining, 0, 0);
      }
LABEL_47:
      p_ListEntry = ListEntry.Next;
      goto LABEL_48;
    }
    v40 = v5 == USBType1MsCompleteCallback;
  }
  else
  {
    v40 = !v7;
  }
  if ( !v40 )
  {
    KsStreamPointerUnlock(v3, 0);
    goto LABEL_47;
  }
LABEL_48:
  v41 = v62;
  if ( p_ListEntry != &ListEntry )
  {
    v42 = v69;
    do
    {
      if ( !*((_QWORD *)&p_ListEntry[2].Next + 1) )
        break;
      if ( *(&p_ListEntry->Next + 1) == &ListEntry )
      {
        Next = p_ListEntry->Next;
        if ( *(&p_ListEntry->Next->Next + 1) == p_ListEntry )
          continue;
      }
      __fastfail(3u);
      ListEntry.Next = p_ListEntry->Next;
      *((_QWORD *)&Next->Next + 1) = &ListEntry;
      v44 = (IRP *)p_ListEntry[1].Next;
      CurrentStackLocation = v44->Tail.Overlay.CurrentStackLocation;
      IoInitializeIrp(v44, 72 * *(char *)(*(_QWORD *)(v42 + 40) + 76LL) + 208, *(_BYTE *)(*(_QWORD *)(v42 + 40) + 76LL));
      CurrentStackLocation[-1].MajorFunction = 15;
      CurrentStackLocation[-1].Parameters.WMI.ProviderId = *((_QWORD *)&p_ListEntry[1].Next + 1);
      CurrentStackLocation[-1].Parameters.Read.ByteOffset.LowPart = 2228227;
      v49 = v44->Tail.Overlay.CurrentStackLocation;
      v49[-1].CompletionRoutine = (PIO_COMPLETION_ROUTINE)a2;
      v49[-1].Context = p_ListEntry;
      v49[-1].Control = -32;
      _InterlockedIncrement((volatile signed __int32 *)Context + 10);
      if ( (char *)a2 != (char *)USBType1LockDelayCompleteCallback )
      {
        v50 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)Context + 12);
        *((_QWORD *)Context + 8) += HIDWORD(p_ListEntry[2].Next);
        v51 = (_SLIST_ENTRY **)*((_QWORD *)Context + 7);
        if ( *v51 != (_SLIST_ENTRY *)(Context + 48) )
          __fastfail(3u);
        p_ListEntry->Next = (struct _SLIST_ENTRY *)(Context + 48);
        *((_QWORD *)&p_ListEntry->Next + 1) = v51;
        *v51 = p_ListEntry;
        *((_QWORD *)Context + 7) = p_ListEntry;
        KeReleaseSpinLock((PKSPIN_LOCK)Context + 12, v50);
      }
      v41 = 0;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_qqd((__int64)WPP_GLOBAL_Control->DeviceExtension, v46, v47, v48, Timeout);
      if ( IofCallDriver(*(PDEVICE_OBJECT *)(v42 + 40), (PIRP)p_ListEntry[1].Next) >= 0
        && (char *)a2 != (char *)USBType1LockDelayCompleteCallback )
      {
        v52 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)Context + 12);
        Context[37] = 1;
        KeReleaseSpinLock((PKSPIN_LOCK)Context + 12, v52);
      }
      p_ListEntry = ListEntry.Next;
    }
    while ( ListEntry.Next != &ListEntry );
    if ( p_ListEntry != &ListEntry )
    {
      v53 = v67;
      do
      {
        if ( *(&p_ListEntry->Next + 1) != &ListEntry
          || (v54 = p_ListEntry->Next, *(&p_ListEntry->Next->Next + 1) != p_ListEntry) )
        {
          __fastfail(3u);
        }
        ListEntry.Next = p_ListEntry->Next;
        *((_QWORD *)&v54->Next + 1) = &ListEntry;
        v55 = *((_QWORD *)v53 + 14);
        ++*(_DWORD *)(v55 + 28);
        if ( ExQueryDepthSList((PSLIST_HEADER)v55) < *(_WORD *)(v55 + 16) )
        {
          ExpInterlockedPushEntrySList((PSLIST_HEADER)v55, p_ListEntry);
        }
        else
        {
          ++*(_DWORD *)(v55 + 32);
          (*(void (__fastcall **)(_SLIST_ENTRY *))(v55 + 56))(p_ListEntry);
        }
        p_ListEntry = ListEntry.Next;
      }
      while ( ListEntry.Next != &ListEntry );
    }
  }
  if ( v74 )
  {
    v56 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)Context + 12);
    v57 = Pin;
    v58 = v56;
    Context[36] = 1;
    for ( i = KsPinGetAndGate(v57); i && _InterlockedExchangeAdd(&i->Count, 0xFFFFFFFF) == 1; i = i->NextGate )
      ;
    KeReleaseSpinLock((PKSPIN_LOCK)Context + 12, v58);
  }
  return v41;
}
