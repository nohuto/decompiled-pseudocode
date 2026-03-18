/*
 * XREFs of DpiFdoConnectInterrupt @ 0x1C011AB00
 * Callers:
 *     DpiFdoStartAdapter @ 0x1C0117FA8 (DpiFdoStartAdapter.c)
 * Callees:
 *     memset @ 0x1C0016A80 (memset.c)
 *     DpiFdoGetInterruptIrql @ 0x1C011AC70 (DpiFdoGetInterruptIrql.c)
 *     DpiLdaGetInterruptIrqlForChain @ 0x1C01E7BC0 (DpiLdaGetInterruptIrqlForChain.c)
 */

__int64 __fastcall DpiFdoConnectInterrupt(_QWORD *a1)
{
  __int64 v1; // rdi
  __int64 v3; // r14
  int InterruptIrqlForChain; // eax
  __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  unsigned __int8 v13; // bl
  NTSTATUS v14; // eax
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  _IO_CONNECT_INTERRUPT_PARAMETERS Parameters; // [rsp+20h] [rbp-50h] BYREF
  unsigned __int8 v20; // [rsp+90h] [rbp+20h] BYREF

  v1 = a1[8];
  ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v1 + 168));
  v3 = *(_QWORD *)(v1 + 40);
  if ( *(_DWORD *)(v1 + 504) )
    InterruptIrqlForChain = DpiLdaGetInterruptIrqlForChain(a1, &v20);
  else
    InterruptIrqlForChain = DpiFdoGetInterruptIrql(*(_QWORD *)(v1 + 1152), &v20);
  LODWORD(v6) = InterruptIrqlForChain;
  if ( InterruptIrqlForChain < 0 )
  {
    if ( !*(_BYTE *)(v1 + 480) && !*(_BYTE *)(v1 + 2559) && !*(_BYTE *)(v1 + 1143) && !*(_BYTE *)(v1 + 2560) )
    {
      v16 = WdLogNewEntry5_WdError(v5);
      *(_QWORD *)(v16 + 24) = (int)v6;
      WdLogEvent5_WdError(v16);
    }
    return (unsigned int)v6;
  }
  Parameters.Version = 0;
  memset(&Parameters.FullySpecified, 0, sizeof(Parameters.FullySpecified));
  if ( *(_QWORD *)(v3 + 184) )
  {
    v12 = WdLogNewEntry5_WdEvent(v9, v8, v10, v11);
    v13 = v20;
    *(_QWORD *)(v12 + 24) = v20;
    WdLogEvent5_WdEvent(v12);
    Parameters.FullySpecified.PhysicalDeviceObject = *(PDEVICE_OBJECT *)(v1 + 152);
    Parameters.FullySpecified.InterruptObject = (PKINTERRUPT *)(v1 + 1232);
    Parameters.FullySpecified.ServiceRoutine = (PKSERVICE_ROUTINE)DpiFdoMessageInterruptRoutine;
    Parameters.FullySpecified.SpinLock = *(PKSPIN_LOCK *)(v1 + 1320);
    Parameters.MessageBased.FallBackServiceRoutine = (PKSERVICE_ROUTINE)DpiFdoLineInterruptRoutine;
    Parameters.Version = 3;
    Parameters.FullySpecified.ServiceContext = a1;
    *(_WORD *)&Parameters.MessageBased.SynchronizeIrql = v13;
    v14 = IoConnectInterruptEx(&Parameters);
    v6 = v14;
    if ( v14 < 0 )
    {
      v18 = WdLogNewEntry5_WdError(v15);
      *(_QWORD *)(v18 + 24) = v6;
      WdLogEvent5_WdError(v18);
      if ( (_DWORD)v6 == -1073741275 )
        LODWORD(v6) = -1073741823;
    }
    else
    {
      *(_DWORD *)(v1 + 1224) = Parameters.Version;
      *(_QWORD *)(v1 + 1240) = *Parameters.FullySpecified.InterruptObject;
    }
    return (unsigned int)v6;
  }
  if ( *(_BYTE *)(v1 + 1139) )
    return 3221226021LL;
  v17 = WdLogNewEntry5_WdError(v9);
  *(_QWORD *)(v17 + 24) = (int)v6;
  WdLogEvent5_WdError(v17);
  return 3221225473LL;
}
