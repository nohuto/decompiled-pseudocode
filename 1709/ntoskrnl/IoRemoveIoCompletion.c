/*
 * XREFs of IoRemoveIoCompletion @ 0x14006C5D0
 * Callers:
 *     NtWaitForWorkViaWorkerFactory @ 0x14006BEF0 (NtWaitForWorkViaWorkerFactory.c)
 *     NtRemoveIoCompletionEx @ 0x1404A2FA0 (NtRemoveIoCompletionEx.c)
 *     NtRemoveIoCompletion @ 0x1404A3170 (NtRemoveIoCompletion.c)
 * Callees:
 *     KeRemoveQueueEx @ 0x14006C920 (KeRemoveQueueEx.c)
 *     IopCompleteRequest @ 0x140070200 (IopCompleteRequest.c)
 *     ExAcquireRundownProtection_0 @ 0x140081770 (ExAcquireRundownProtection_0.c)
 *     ExReleaseRundownProtection_0 @ 0x1400817A0 (ExReleaseRundownProtection_0.c)
 *     ObfDereferenceObjectWithTag @ 0x140082F70 (ObfDereferenceObjectWithTag.c)
 *     IoFreeIrp @ 0x1400853A0 (IoFreeIrp.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1400931F0 (KxWaitForSpinLockAndAcquire.c)
 *     KiStackAttachProcess @ 0x1400A0410 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400BF430 (KiUnstackDetachProcess.c)
 *     IopDropIrp @ 0x1400DD9D0 (IopDropIrp.c)
 *     IopInterlockedAdd @ 0x140127694 (IopInterlockedAdd.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     KiAcquireSpinLockInstrumented @ 0x140204F88 (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x14020503C (KiReleaseSpinLockInstrumented.c)
 *     IopFreeMiniCompletionPacket @ 0x1404A39C0 (IopFreeMiniCompletionPacket.c)
 */

__int64 __fastcall IoRemoveIoCompletion(
        struct _KQUEUE *a1,
        __int64 a2,
        PLIST_ENTRY *EntryArray,
        ULONG Count,
        ULONG *a5,
        KPROCESSOR_MODE a6,
        LARGE_INTEGER *Timeout,
        BOOLEAN a8)
{
  PLIST_ENTRY *v8; // rbx
  __int64 v9; // r13
  ULONG v10; // esi
  __int64 i; // rdi
  PLIST_ENTRY v12; // rbx
  char Flink; // al
  struct _LIST_ENTRY *Blink; // r15
  struct _LIST_ENTRY *v15; // r12
  __int64 v16; // r14
  __int64 result; // rax
  struct _LIST_ENTRY **p_Blink; // rbx
  int v19; // eax
  ULONG_PTR v20; // r13
  __int128 v22; // [rsp+40h] [rbp-D8h]
  __int64 v23; // [rsp+50h] [rbp-C8h] BYREF
  ULONG v24; // [rsp+58h] [rbp-C0h]
  PLIST_ENTRY *v25; // [rsp+60h] [rbp-B8h]
  PVOID v26; // [rsp+68h] [rbp-B0h]
  char v27; // [rsp+70h] [rbp-A8h] BYREF
  __int64 CurrentIrql; // [rsp+78h] [rbp-A0h]
  PVOID Object; // [rsp+80h] [rbp-98h]
  struct _KQUEUE *v30; // [rsp+88h] [rbp-90h]
  __int64 v31; // [rsp+90h] [rbp-88h]
  PLIST_ENTRY *v32; // [rsp+98h] [rbp-80h]
  ULONG *v33; // [rsp+A0h] [rbp-78h]
  char v34[48]; // [rsp+A8h] [rbp-70h] BYREF
  void *retaddr; // [rsp+118h] [rbp+0h]

  v8 = EntryArray;
  v25 = EntryArray;
  v9 = a2;
  v26 = a1;
  v30 = a1;
  v31 = a2;
  v32 = EntryArray;
  v33 = a5;
  DWORD1(v22) = 0;
  v10 = KeRemoveQueueEx(a1, a6, a8, Timeout, EntryArray, Count);
  v24 = v10;
  for ( i = 0LL; ; i = (unsigned int)(i + 1) )
  {
    if ( (unsigned int)i >= v10 )
    {
      result = 0LL;
      goto LABEL_11;
    }
    v12 = v8[i];
    if ( (unsigned __int64)&v12[-17].Blink + 7 <= 1 || v12 == (PLIST_ENTRY)192 || v12 == (PLIST_ENTRY)128 )
      break;
    Flink = (char)v12[1].Flink;
    if ( Flink )
    {
      if ( Flink == 2 )
      {
        Blink = v12[3].Blink;
        v15 = v12[3].Flink;
        LODWORD(v22) = v12[4].Blink;
        *((_QWORD *)&v22 + 1) = v12[4].Flink;
        Object = v12[5].Flink;
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
        {
          KiAcquireSpinLockInstrumented(&v12[6]);
        }
        else if ( _interlockedbittestandset64((volatile signed __int32 *)&v12[6], 0LL) )
        {
          KxWaitForSpinLockAndAcquire(&v12[6]);
        }
        LOBYTE(v12[6].Blink) = 0;
        v12[5].Blink = 0LL;
        if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
          KiReleaseSpinLockInstrumented(&v12[6], retaddr);
        else
          _InterlockedAnd64((volatile signed __int64 *)&v12[6], 0LL);
        __writecr8((unsigned __int8)CurrentIrql);
        ObfDereferenceObjectWithTag(Object, 0x746C6644u);
        ObfDereferenceObjectWithTag(v26, 0x746C6644u);
        ObfDereferenceObjectWithTag(v12, 0x746C6644u);
        v9 = a2;
      }
      else
      {
        Blink = v12[2].Flink;
        v15 = v12[1].Blink;
        LODWORD(v22) = v12[2].Blink;
        *((_QWORD *)&v22 + 1) = v12[3].Flink;
        IopFreeMiniCompletionPacket(v12);
      }
    }
    else
    {
      p_Blink = &v12[-11].Blink;
      Blink = p_Blink[12];
      v15 = p_Blink[15];
      v22 = *((_OWORD *)p_Blink + 3);
      v19 = *((_DWORD *)p_Blink + 4);
      if ( (v19 & 0x2000) != 0 )
      {
        v23 = 0LL;
        v20 = (unsigned __int64)p_Blink[11] & 0xFFFFFFFFFFFFFFF9uLL;
        p_Blink[12] = 0LL;
        if ( (_KPROCESS *)v20 == KeGetCurrentThread()->ApcState.Process )
        {
          IopCompleteRequest(
            (_DWORD)p_Blink + 120,
            (unsigned int)&v27,
            (unsigned int)&v23,
            (_DWORD)p_Blink + 192,
            (__int64)&v23);
          v9 = a2;
        }
        else
        {
          if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(v20 + 760)) )
          {
            KiStackAttachProcess(v20);
            IopCompleteRequest(
              (_DWORD)p_Blink + 120,
              (unsigned int)&v27,
              (unsigned int)&v23,
              (_DWORD)p_Blink + 192,
              (__int64)&v23);
            KiUnstackDetachProcess(v34, 0LL);
            ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(v20 + 760));
          }
          else
          {
            IopDropIrp((PIRP)p_Blink, (ULONG_PTR)p_Blink[24]);
            LODWORD(v22) = -1073741536;
            *((_QWORD *)&v22 + 1) = 0LL;
          }
          v9 = a2;
        }
      }
      else if ( (v19 & 0x8000) == 0 || !(unsigned int)IopInterlockedAdd(p_Blink + 11, 0xFFFFFFFFLL) )
      {
        IoFreeIrp((PIRP)p_Blink);
      }
    }
    v16 = 32LL * (unsigned int)i;
    *(_QWORD *)(v16 + v9) = v15;
    *(_QWORD *)(v16 + v9 + 8) = Blink;
    *(_OWORD *)(v16 + v9 + 16) = v22;
    v8 = v25;
  }
  result = (unsigned int)v12;
LABEL_11:
  *v33 = v10;
  return result;
}
