/*
 * XREFs of ndisReceiveWorkerThread @ 0x1C0022500
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C00245E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024F10 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0025280 (memset.c)
 *     WPP_SF_d @ 0x1C0040950 (WPP_SF_d.c)
 *     ?ndisInsertInWorkQueue@@YAXPEAU_NDIS_WORK_QUEUE@@PEAU_WORK_QUEUE_ITEM@@E@Z @ 0x1C004E4D8 (-ndisInsertInWorkQueue@@YAXPEAU_NDIS_WORK_QUEUE@@PEAU_WORK_QUEUE_ITEM@@E@Z.c)
 */

void __fastcall ndisReceiveWorkerThread(ULONG a1)
{
  KSPIN_LOCK *v2; // rdi
  KSPIN_LOCK v3; // rbx
  KIRQL v4; // si
  KSPIN_LOCK *v5; // rcx
  KSPIN_LOCK v6; // rcx
  struct _WORK_QUEUE_ITEM *v7; // rdx
  LARGE_INTEGER v8; // rdx
  _PROCESSOR_NUMBER ProcNumber; // [rsp+30h] [rbp-39h] BYREF
  __int16 WnodeEventItem; // [rsp+38h] [rbp-31h] BYREF
  _WORD v11[27]; // [rsp+3Ah] [rbp-2Fh] BYREF
  _GROUP_AFFINITY Affinity; // [rsp+70h] [rbp+7h] BYREF
  _GROUP_AFFINITY PreviousAffinity; // [rsp+80h] [rbp+17h] BYREF

  ProcNumber = 0;
  Affinity.Mask = 0LL;
  *(_QWORD *)&Affinity.Group = 0LL;
  KeGetProcessorNumberFromIndex(a1, &ProcNumber);
  if ( (unsigned __int8)byte_1C0098753 >= 4u )
    WPP_SF_d(11LL, &WPP_78f76d0749fa341705457319fed97831_Traceguids, a1);
  Affinity.Mask = 1LL << ProcNumber.Number;
  v2 = (KSPIN_LOCK *)((char *)qword_1C0097F40 + 64 * (unsigned __int64)a1);
  Affinity.Group = ProcNumber.Group;
  KeSetSystemGroupAffinityThread(&Affinity, &PreviousAffinity);
  while ( 1 )
  {
    KeWaitForSingleObject(v2 + 4, Executive, 0, 0, 0LL);
    v3 = 0LL;
    v4 = KfRaiseIrql(2u);
    KeAcquireSpinLockAtDpcLevel(v2 + 2);
    v5 = (KSPIN_LOCK *)*v2;
    if ( (KSPIN_LOCK *)*v2 != v2 )
    {
      v3 = *v2;
      if ( (KSPIN_LOCK *)v5[1] != v2 || (v6 = *v5, *(_QWORD *)(v6 + 8) != v3) )
        __fastfail(3u);
      *v2 = v6;
      *(_QWORD *)(v6 + 8) = v2;
      *(_QWORD *)(v3 + 8) = 0LL;
      *(_QWORD *)v3 = 0LL;
      --*((_DWORD *)v2 + 6);
    }
    if ( (KSPIN_LOCK *)*v2 == v2 )
    {
      *((_DWORD *)qword_1C0097F38 + a1) = 0;
      KeCancelTimer((PKTIMER)qword_1C0097F30 + 2 * (unsigned __int64)a1);
    }
    else
    {
      v8.QuadPart = -1LL;
      if ( DueTime.QuadPart )
        v8 = DueTime;
      KeSetTimer(
        (PKTIMER)qword_1C0097F30 + 2 * (unsigned __int64)a1,
        v8,
        (PKDPC)qword_1C0097F30 + 2 * (unsigned __int64)a1 + 1);
    }
    KeReleaseSpinLockFromDpcLevel(v2 + 2);
    if ( v3 )
      break;
LABEL_16:
    if ( v4 != 2 )
      KeLowerIrql(v4);
  }
  v7 = (struct _WORK_QUEUE_ITEM *)(*(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters + 32LL * a1);
  if ( (struct _WORK_QUEUE_ITEM *)v3 != v7 )
  {
    if ( (_BYTE)word_1C0099FDC )
    {
      memset(v11, 0, sizeof(v11));
      *(_DWORD *)&v11[21] = 0x20000;
      WnodeEventItem = 56;
      *(_QWORD *)&v11[3] = qword_1C0099FD0;
      *(GUID *)&v11[11] = EtwGuidNdisReceive;
      LOBYTE(v11[1]) = 22;
      LOBYTE(v11[23]) = 0;
      IoWMIWriteEvent(&WnodeEventItem);
    }
    (*(void (__fastcall **)(_QWORD))(v3 + 16))(*(_QWORD *)(v3 + 24));
    if ( (_BYTE)word_1C0099FDC )
    {
      memset(v11, 0, 0x2EuLL);
      *(_DWORD *)&v11[21] = 0x20000;
      WnodeEventItem = 48;
      *(_QWORD *)&v11[3] = qword_1C0099FD0;
      *(GUID *)&v11[11] = EtwGuidNdisReceive;
      LOBYTE(v11[1]) = 23;
      IoWMIWriteEvent(&WnodeEventItem);
    }
    goto LABEL_16;
  }
  if ( (KSPIN_LOCK *)*v2 != v2 )
  {
    ndisInsertInWorkQueue((struct _NDIS_WORK_QUEUE *)v2, v7, 1u);
    goto LABEL_16;
  }
  if ( v4 != 2 )
    KeLowerIrql(v4);
  if ( (unsigned __int8)byte_1C0098753 >= 4u )
    WPP_SF_d(12LL, &WPP_78f76d0749fa341705457319fed97831_Traceguids, a1);
}
