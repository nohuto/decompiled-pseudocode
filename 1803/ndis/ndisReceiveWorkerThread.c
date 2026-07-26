/*
 * XREFs of ndisReceiveWorkerThread @ 0x1C001F4E0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0025590 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0025E10 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0026180 (memset.c)
 *     WPP_SF_d @ 0x1C00419DC (WPP_SF_d.c)
 *     ?ndisInsertInWorkQueue@@YAXPEAU_NDIS_WORK_QUEUE@@PEAU_WORK_QUEUE_ITEM@@E@Z @ 0x1C004EE40 (-ndisInsertInWorkQueue@@YAXPEAU_NDIS_WORK_QUEUE@@PEAU_WORK_QUEUE_ITEM@@E@Z.c)
 */

void __fastcall ndisReceiveWorkerThread(ULONG a1)
{
  KSPIN_LOCK *v2; // rbx
  KSPIN_LOCK v3; // rdi
  KIRQL v4; // si
  KSPIN_LOCK *v5; // rax
  KSPIN_LOCK v6; // rax
  struct _WORK_QUEUE_ITEM *v7; // rdx
  LARGE_INTEGER v8; // rdx
  _PROCESSOR_NUMBER ProcNumber; // [rsp+38h] [rbp-39h] BYREF
  __int16 WnodeEventItem; // [rsp+40h] [rbp-31h] BYREF
  _WORD v11[27]; // [rsp+42h] [rbp-2Fh] BYREF
  _GROUP_AFFINITY Affinity; // [rsp+78h] [rbp+7h] BYREF
  _GROUP_AFFINITY PreviousAffinity; // [rsp+88h] [rbp+17h] BYREF

  ProcNumber = 0;
  Affinity.Mask = 0LL;
  *(_QWORD *)&Affinity.Group = 0LL;
  KeGetProcessorNumberFromIndex(a1, &ProcNumber);
  if ( (unsigned __int8)byte_1C0099613 >= 4u )
    WPP_SF_d(11LL, &WPP_e8cf7f9943953a778cb80ba8345e40cb_Traceguids, a1);
  Affinity.Mask = 1LL << ProcNumber.Number;
  v2 = (KSPIN_LOCK *)((char *)qword_1C0098E00 + 64 * (unsigned __int64)a1);
  Affinity.Group = ProcNumber.Group;
  KeSetSystemGroupAffinityThread(&Affinity, &PreviousAffinity);
  while ( 1 )
  {
    KeWaitForSingleObject(v2 + 4, Executive, 0, 0, 0LL);
    v3 = 0LL;
    v4 = KfRaiseIrql(2u);
    KeAcquireSpinLockAtDpcLevel(v2 + 2);
    v5 = (KSPIN_LOCK *)*v2;
    if ( (KSPIN_LOCK *)*v2 == v2 )
      goto LABEL_8;
    v3 = *v2;
    if ( (KSPIN_LOCK *)v5[1] != v2 || (v6 = *v5, *(_QWORD *)(v6 + 8) != v3) )
      __fastfail(3u);
    *v2 = v6;
    *(_QWORD *)(v6 + 8) = v2;
    *(_QWORD *)(v3 + 8) = 0LL;
    *(_QWORD *)v3 = 0LL;
    --*((_DWORD *)v2 + 6);
    if ( (KSPIN_LOCK *)*v2 == v2 )
    {
LABEL_8:
      *((_DWORD *)qword_1C0098DF8 + a1) = 0;
      KeCancelTimer((PKTIMER)qword_1C0098DF0 + 2 * (unsigned __int64)a1);
    }
    else
    {
      v8 = DueTime;
      if ( !DueTime.QuadPart )
        v8.QuadPart = -1LL;
      KeSetTimer(
        (PKTIMER)qword_1C0098DF0 + 2 * (unsigned __int64)a1,
        v8,
        (PKDPC)qword_1C0098DF0 + 2 * (unsigned __int64)a1 + 1);
    }
    KeReleaseSpinLockFromDpcLevel(v2 + 2);
    if ( v3 )
      break;
LABEL_15:
    if ( v4 != 2 )
      KeLowerIrql(v4);
  }
  v7 = (struct _WORK_QUEUE_ITEM *)((char *)WPP_MAIN_CB.Queue.Wcb.DeviceObject + 32 * a1);
  if ( (struct _WORK_QUEUE_ITEM *)v3 != v7 )
  {
    if ( (_BYTE)word_1C009AF1C )
    {
      memset(v11, 0, sizeof(v11));
      *(_DWORD *)&v11[21] = 0x20000;
      WnodeEventItem = 56;
      *(_QWORD *)&v11[3] = qword_1C009AF10;
      *(GUID *)&v11[11] = EtwGuidNdisReceive;
      LOBYTE(v11[1]) = 22;
      LOBYTE(v11[23]) = 0;
      IoWMIWriteEvent(&WnodeEventItem);
    }
    (*(void (__fastcall **)(_QWORD))(v3 + 16))(*(_QWORD *)(v3 + 24));
    if ( (_BYTE)word_1C009AF1C )
    {
      memset(v11, 0, 0x2EuLL);
      *(_DWORD *)&v11[21] = 0x20000;
      WnodeEventItem = 48;
      *(_QWORD *)&v11[3] = qword_1C009AF10;
      *(GUID *)&v11[11] = EtwGuidNdisReceive;
      LOBYTE(v11[1]) = 23;
      IoWMIWriteEvent(&WnodeEventItem);
    }
    goto LABEL_15;
  }
  if ( (KSPIN_LOCK *)*v2 != v2 )
  {
    ndisInsertInWorkQueue((struct _NDIS_WORK_QUEUE *)v2, v7, 1u);
    goto LABEL_15;
  }
  if ( v4 != 2 )
    KeLowerIrql(v4);
  if ( (unsigned __int8)byte_1C0099613 >= 4u )
    WPP_SF_d(12LL, &WPP_e8cf7f9943953a778cb80ba8345e40cb_Traceguids, a1);
}
