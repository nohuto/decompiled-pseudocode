/*
 * XREFs of IoRemoveIoCompletion @ 0x1400F4CD0
 * Callers:
 *     NtWaitForWorkViaWorkerFactory @ 0x1400F4000 (NtWaitForWorkViaWorkerFactory.c)
 *     NtRemoveIoCompletion @ 0x140552400 (NtRemoveIoCompletion.c)
 *     NtRemoveIoCompletionEx @ 0x14059C4D0 (NtRemoveIoCompletionEx.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x1400083C0 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140009050 (KiStackAttachProcess.c)
 *     KxWaitForSpinLockAndAcquire @ 0x140069440 (KxWaitForSpinLockAndAcquire.c)
 *     IopInterlockedAdd @ 0x1400C6EDC (IopInterlockedAdd.c)
 *     KeRemoveQueueEx @ 0x1400F5070 (KeRemoveQueueEx.c)
 *     IopCompleteRequest @ 0x1400F9010 (IopCompleteRequest.c)
 *     KiSetVpThreadSpinLockCount @ 0x1400FDCF0 (KiSetVpThreadSpinLockCount.c)
 *     ObfDereferenceObjectWithTag @ 0x1400FEDA0 (ObfDereferenceObjectWithTag.c)
 *     ExReleaseRundownProtection @ 0x140105490 (ExReleaseRundownProtection.c)
 *     ExAcquireRundownProtection @ 0x1401054C0 (ExAcquireRundownProtection.c)
 *     IoFreeIrp @ 0x140106E30 (IoFreeIrp.c)
 *     IopDropIrp @ 0x14013FD64 (IopDropIrp.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     KiAcquireSpinLockInstrumented @ 0x140242718 (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402427F0 (KiReleaseSpinLockInstrumented.c)
 *     KiPerformUnboostKick @ 0x140248638 (KiPerformUnboostKick.c)
 *     IopFreeMiniCompletionPacket @ 0x14059C710 (IopFreeMiniCompletionPacket.c)
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
  struct _LIST_ENTRY *v14; // r15
  struct _LIST_ENTRY *Blink; // r12
  __int64 v16; // r14
  __int64 result; // rax
  struct _LIST_ENTRY **p_Blink; // rbx
  int v19; // eax
  unsigned __int64 v20; // r13
  struct _LIST_ENTRY *v21; // r11
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // rcx
  struct _KPRCB *v24; // rcx
  _DWORD *v25; // rdx
  __int64 v26; // rdx
  int v27; // eax
  int v28; // eax
  struct _LIST_ENTRY *v30; // [rsp+40h] [rbp-D8h]
  __int128 v31; // [rsp+48h] [rbp-D0h]
  __int64 v32; // [rsp+58h] [rbp-C0h] BYREF
  ULONG v33; // [rsp+60h] [rbp-B8h]
  PLIST_ENTRY *v34; // [rsp+68h] [rbp-B0h]
  struct _LIST_ENTRY **CurrentIrql; // [rsp+70h] [rbp-A8h]
  PVOID Object; // [rsp+78h] [rbp-A0h]
  char v37; // [rsp+80h] [rbp-98h] BYREF
  struct _KQUEUE *v38; // [rsp+88h] [rbp-90h]
  __int64 v39; // [rsp+90h] [rbp-88h]
  PLIST_ENTRY *v40; // [rsp+98h] [rbp-80h]
  ULONG *v41; // [rsp+A0h] [rbp-78h]
  _BYTE v42[48]; // [rsp+A8h] [rbp-70h] BYREF
  void *retaddr; // [rsp+118h] [rbp+0h]

  v8 = EntryArray;
  v34 = EntryArray;
  v9 = a2;
  Object = a1;
  v38 = a1;
  v39 = a2;
  v40 = EntryArray;
  v41 = a5;
  DWORD1(v31) = 0;
  v10 = KeRemoveQueueEx(a1, a6, a8, Timeout, EntryArray, Count);
  v33 = v10;
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
      if ( Flink != 2 )
      {
        v14 = v12[2].Flink;
        Blink = v12[1].Blink;
        LODWORD(v31) = v12[2].Blink;
        *((_QWORD *)&v31 + 1) = v12[3].Flink;
        IopFreeMiniCompletionPacket(v12);
        goto LABEL_9;
      }
      v14 = v12[3].Blink;
      Blink = v12[3].Flink;
      LODWORD(v31) = v12[4].Blink;
      *((_QWORD *)&v31 + 1) = v12[4].Flink;
      v21 = v12[5].Flink;
      v30 = v21;
      CurrentIrql = (struct _LIST_ENTRY **)KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        KiAcquireSpinLockInstrumented(&v12[6]);
      }
      else
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        if ( SchedulerAssist )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v27 = SchedulerAssist[5];
            SchedulerAssist[5] = v27 + 1;
            if ( v27 == -1 && !*((_BYTE *)SchedulerAssist + 25) && !*((_BYTE *)SchedulerAssist + 27) )
              KiPerformUnboostKick(CurrentPrcb);
          }
        }
        if ( !_interlockedbittestandset64((volatile signed __int32 *)&v12[6], 0LL) )
          goto LABEL_18;
        KiSetVpThreadSpinLockCount(CurrentPrcb, 0LL);
        KxWaitForSpinLockAndAcquire((volatile signed __int32 *)&v12[6], v26);
      }
      v21 = v30;
LABEL_18:
      LOBYTE(v12[6].Blink) = 0;
      v12[5].Blink = 0LL;
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      {
        KiReleaseSpinLockInstrumented(&v12[6], retaddr);
        v21 = v30;
      }
      else
      {
        _InterlockedAnd64((volatile signed __int64 *)&v12[6], 0LL);
      }
      v24 = KeGetCurrentPrcb();
      v25 = v24->SchedulerAssist;
      if ( v25 )
      {
        if ( v24->NestingLevel <= 1u )
        {
          v28 = v25[5] - 1;
          v25[5] = v28;
          if ( !v28 && !*((_BYTE *)v25 + 25) && !*((_BYTE *)v25 + 27) )
            KiPerformUnboostKick(v24);
        }
      }
      __writecr8((unsigned __int8)CurrentIrql);
      ObfDereferenceObjectWithTag(v21, 0x746C6644u);
      ObfDereferenceObjectWithTag(Object, 0x746C6644u);
      ObfDereferenceObjectWithTag(v12, 0x746C6644u);
      v9 = a2;
      goto LABEL_9;
    }
    p_Blink = &v12[-11].Blink;
    v14 = p_Blink[12];
    CurrentIrql = p_Blink + 15;
    Blink = p_Blink[15];
    v31 = *((_OWORD *)p_Blink + 3);
    v19 = *((_DWORD *)p_Blink + 4);
    if ( (v19 & 0x2000) != 0 )
    {
      v32 = 0LL;
      v20 = (unsigned __int64)p_Blink[11] & 0xFFFFFFFFFFFFFFF9uLL;
      p_Blink[12] = 0LL;
      if ( (_KPROCESS *)v20 == KeGetCurrentThread()->ApcState.Process )
      {
        IopCompleteRequest(
          (_DWORD)p_Blink + 120,
          (unsigned int)&v37,
          (unsigned int)&v32,
          (_DWORD)p_Blink + 192,
          (__int64)&v32);
        v9 = a2;
      }
      else
      {
        if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)(v20 + 760)) )
        {
          KiStackAttachProcess((_KPROCESS *)v20, 0, (__int64)v42);
          IopCompleteRequest(
            (_DWORD)CurrentIrql,
            (unsigned int)&v37,
            (unsigned int)&v32,
            (_DWORD)p_Blink + 192,
            (__int64)&v32);
          KiUnstackDetachProcess((__int64)v42, 0LL);
          ExReleaseRundownProtection((PEX_RUNDOWN_REF)(v20 + 760));
        }
        else
        {
          IopDropIrp((PIRP)p_Blink, (ULONG_PTR)p_Blink[24]);
          LODWORD(v31) = -1073741536;
          *((_QWORD *)&v31 + 1) = 0LL;
        }
        v9 = a2;
      }
    }
    else if ( (v19 & 0x8000) == 0 || !(unsigned int)IopInterlockedAdd((volatile signed __int64 *)p_Blink + 11, -1) )
    {
      IoFreeIrp((PIRP)p_Blink);
    }
LABEL_9:
    v16 = 32LL * (unsigned int)i;
    *(_QWORD *)(v16 + v9) = Blink;
    *(_QWORD *)(v16 + v9 + 8) = v14;
    *(_OWORD *)(v16 + v9 + 16) = v31;
    v8 = v34;
  }
  result = (unsigned int)v12;
LABEL_11:
  *v41 = v10;
  return result;
}
