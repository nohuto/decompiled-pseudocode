/*
 * XREFs of USBType1BuildIsochUrbRequest @ 0x1C000411C
 * Callers:
 *     USBType1Build1MsecIsocRequest @ 0x1C00047CC (USBType1Build1MsecIsocRequest.c)
 *     USBType1ProcessStreamPointer @ 0x1C000497C (USBType1ProcessStreamPointer.c)
 *     USBType1LockDelay @ 0x1C0024E9C (USBType1LockDelay.c)
 * Callees:
 *     WPP_RECORDER_SF_qqd @ 0x1C000326C (WPP_RECORDER_SF_qqd.c)
 *     _guard_dispatch_icall_nop @ 0x1C0009630 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C000A240 (memmove.c)
 *     memset @ 0x1C000A580 (memset.c)
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
  ULONG Remaining; // r13d
  bool v8; // r8
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
  KSPIN_LOCK *v22; // rbx
  unsigned int v23; // edi
  __int64 v24; // r15
  ULONG v25; // r14d
  int v26; // r8d
  unsigned int v27; // ecx
  KIRQL v28; // dl
  int v29; // eax
  PSLIST_ENTRY v30; // rbx
  __int64 v31; // rcx
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
  _SLIST_ENTRY **v51; // rdx
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
  char *v69; // [rsp+78h] [rbp-1h]
  __int64 v70; // [rsp+80h] [rbp+7h]
  PKSPIN Pin; // [rsp+88h] [rbp+Fh]
  bool v74; // [rsp+F0h] [rbp+77h]
  bool v75; // [rsp+F8h] [rbp+7Fh]

  p_ListEntry = &ListEntry;
  Pin = StreamPointer->Pin;
  v3 = StreamPointer;
  v74 = 0;
  Context = (char *)Pin->Context;
  v5 = a2;
  v6 = 0;
  v69 = Context;
  Remaining = StreamPointer->OffsetIn.Remaining;
  v8 = 0;
  v75 = 0;
  v9 = (_DWORD *)*((_QWORD *)Context + 19);
  v70 = *((_QWORD *)Context + 2);
  v67 = v9;
  v10 = 0;
  v62 = 0;
  v11 = v9[2] * (v9[29] + (((v9[30] + v9[28]) & 0xFFFFC000) >= 0xFA0000));
  *((_QWORD *)&ListEntry.Next + 1) = &ListEntry;
  ListEntry.Next = &ListEntry;
  if ( Remaining < v11 )
    goto LABEL_34;
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
      v15 = *((_QWORD *)v67 + 16);
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
LABEL_28:
      v8 = v74;
      goto LABEL_29;
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
    if ( *((_BYTE *)v12 + 96) )
      *(_DWORD *)(v21 + 128) = v12[226];
    else
      *(_DWORD *)(v21 + 32) = 4;
    v22 = (KSPIN_LOCK *)(Context + 112);
    v23 = 0;
    v24 = v68;
    v25 = 0;
    do
    {
      if ( Remaining < v11 || v75 )
        break;
      Remaining -= v11;
      *(_DWORD *)(v24 + 12LL * v23 + 140) = v25;
      v25 += v11;
      v26 = v12[30];
      v27 = (v26 + v12[28]) % 0xFA0000u;
      v12[28] = v27;
      v11 = v12[2] * (v12[29] + (((v26 + v27) & 0xFFFFC000) >= 0xFA0000));
      v28 = KeAcquireSpinLockRaiseToDpc(v22);
      if ( *((_BYTE *)v12 + 96) )
      {
        v40 = v12[227] == 1;
        v29 = v12[227] - 1;
        v12[227] = v29;
        v75 = v40;
        if ( !v29 )
          v12[227] = v12[225];
        ++v12[226];
      }
      KeReleaseSpinLock(v22, v28);
      ++v23;
    }
    while ( v23 < v65 );
    v30 = v66;
    *(_DWORD *)(v24 + 132) = v23;
    *(_DWORD *)(v24 + 36) = v25;
    InUsed = v25;
    *(_WORD *)v24 = 12 * v23 + 152;
    v5 = a2;
    Context = v69;
    HIDWORD(v30[2].Next) = v25;
    v3 = StreamPointer;
    if ( a2 == USBType1MsCompleteCallback || (char *)a2 == (char *)USBType1LockDelayCompleteCallback )
    {
      v31 = InUsed;
      v8 = v74;
      *((_QWORD *)&v30[2].Next + 1) = StreamPointer;
      StreamPointer->OffsetIn.Data += v31;
      StreamPointer->OffsetIn.Remaining -= v31;
    }
    else
    {
      *((_QWORD *)&v30[2].Next + 1) = 0LL;
      v10 = KsStreamPointerClone(StreamPointer, 0LL, 0, (PKSSTREAM_POINTER *)&v30[2].Next + 1);
      v62 = v10;
      if ( v10 < 0 )
        goto LABEL_28;
      v8 = KsStreamPointerAdvanceOffsets(StreamPointer, InUsed, 0, 0) == 0;
      v74 = v8;
    }
    v10 = v62;
LABEL_29:
    v6 = v75;
    if ( Remaining < v11 )
      goto LABEL_33;
  }
  v8 = v74;
LABEL_33:
  p_ListEntry = ListEntry.Next;
LABEL_34:
  if ( (char *)v5 == (char *)USBType1LockDelayCompleteCallback )
    goto LABEL_49;
  if ( Remaining )
  {
    if ( !v6 )
    {
      v32 = *((_QWORD *)Context + 19);
      if ( v5 == USBType1MsCompleteCallback && Remaining == v3->OffsetIn.Count )
      {
        *(_DWORD *)(v32 + 124) = v11 - Remaining;
        v33 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)Context + 14);
        v34 = v3->Context;
        v35 = (__int64 *)(v32 + 136);
        v36 = *v35;
        if ( *(__int64 **)(*v35 + 8) != v35 )
          __fastfail(3u);
        *v34 = v36;
        v34[1] = v35;
        *(_QWORD *)(v36 + 8) = v34;
        *v35 = (__int64)v34;
        KeReleaseSpinLock((PKSPIN_LOCK)Context + 14, v33);
        ExFreePool(v3);
      }
      else
      {
        KeWaitForSingleObject((PVOID)(v32 + 152), Executive, 0, 0, 0LL);
        v37 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)Context + 14);
        v38 = *(_QWORD *)(v32 + 136);
        KeReleaseSpinLock((PKSPIN_LOCK)Context + 14, v37);
        v39 = *(void **)(v38 + 48);
        *(_DWORD *)(v38 + 36) = Remaining;
        memmove(v39, v3->OffsetIn.Data, Remaining);
        *(_DWORD *)(v32 + 124) = v11 - Remaining;
        if ( a2 != USBType1MsCompleteCallback )
          KsStreamPointerAdvanceOffsetsAndUnlock(v3, Remaining, 0, 0);
      }
LABEL_48:
      p_ListEntry = ListEntry.Next;
      goto LABEL_49;
    }
    v40 = v5 == USBType1MsCompleteCallback;
  }
  else
  {
    v40 = !v8;
  }
  if ( !v40 )
  {
    KsStreamPointerUnlock(v3, 0);
    goto LABEL_48;
  }
LABEL_49:
  v41 = v62;
  if ( p_ListEntry != &ListEntry )
  {
    v42 = v70;
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
      _InterlockedIncrement((volatile signed __int32 *)Context + 14);
      if ( (char *)a2 != (char *)USBType1LockDelayCompleteCallback )
      {
        v50 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)Context + 14);
        *((_QWORD *)Context + 10) += HIDWORD(p_ListEntry[2].Next);
        v51 = (_SLIST_ENTRY **)*((_QWORD *)Context + 9);
        if ( *v51 != (_SLIST_ENTRY *)(Context + 64) )
          __fastfail(3u);
        p_ListEntry->Next = (struct _SLIST_ENTRY *)(Context + 64);
        *((_QWORD *)&p_ListEntry->Next + 1) = v51;
        *v51 = p_ListEntry;
        *((_QWORD *)Context + 9) = p_ListEntry;
        KeReleaseSpinLock((PKSPIN_LOCK)Context + 14, v50);
      }
      v41 = 0;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_qqd((__int64)WPP_GLOBAL_Control->DeviceExtension, v46, v47, v48, Timeout);
      if ( IofCallDriver(*(PDEVICE_OBJECT *)(v42 + 40), (PIRP)p_ListEntry[1].Next) >= 0
        && (char *)a2 != (char *)USBType1LockDelayCompleteCallback )
      {
        v52 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)Context + 14);
        Context[45] = 1;
        KeReleaseSpinLock((PKSPIN_LOCK)Context + 14, v52);
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
        v55 = *((_QWORD *)v53 + 16);
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
  if ( v75 )
  {
    v56 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)Context + 14);
    v57 = Pin;
    v58 = v56;
    Context[44] = 1;
    for ( i = KsPinGetAndGate(v57); i && _InterlockedExchangeAdd(&i->Count, 0xFFFFFFFF) == 1; i = i->NextGate )
      ;
    KeReleaseSpinLock((PKSPIN_LOCK)Context + 14, v58);
  }
  return v41;
}
