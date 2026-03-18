/*
 * XREFs of PopRequestPowerIrp @ 0x140145E60
 * Callers:
 *     PopScanIdleList @ 0x140070F24 (PopScanIdleList.c)
 *     PopFxReleasePowerIrp @ 0x140144FDC (PopFxReleasePowerIrp.c)
 *     PoRequestPowerIrp @ 0x140145E30 (PoRequestPowerIrp.c)
 * Callees:
 *     IoReleaseRemoveLockEx @ 0x140022800 (IoReleaseRemoveLockEx.c)
 *     PopMapInternalActionToIrpAction @ 0x1401380EC (PopMapInternalActionToIrpAction.c)
 *     PopPepDeviceWaitWake @ 0x1401401E4 (PopPepDeviceWaitWake.c)
 *     PopAllocateIrp @ 0x140146080 (PopAllocateIrp.c)
 *     PopQueueQuerySetIrp @ 0x140146394 (PopQueueQuerySetIrp.c)
 *     PopDiagTraceIrpStart @ 0x140146604 (PopDiagTraceIrpStart.c)
 *     IofCallDriverSpecifyReturn @ 0x140146950 (IofCallDriverSpecifyReturn.c)
 *     PopLogNotifyDevice @ 0x14022F85C (PopLogNotifyDevice.c)
 */

__int64 __fastcall PopRequestPowerIrp(__int64 a1, char a2, int a3, int a4, __int64 a5, char a6, PIRP Irp)
{
  volatile __int64 *p_Type; // rsi
  char v11; // cl
  __int64 result; // rax
  __int64 v13; // r8
  IRP *v14; // rdi
  __int64 v15; // rbp
  union _IRP::$::$::$665C8370128C04AB892B069E6FB086E8::$8B5CD6CDFBAAB114E6B0B83ED2C2A4E9 *p_CurrentStackLocation; // rcx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  struct _IO_STACK_LOCATION *v18; // rsi
  __int64 v19; // rdx
  signed __int32 v20; // eax
  signed __int32 v21; // ett
  __int64 v22; // rdx
  bool v23; // al
  __int64 v24; // rcx
  __int64 v25; // [rsp+60h] [rbp-28h] BYREF
  void *retaddr; // [rsp+88h] [rbp+0h]

  p_Type = (volatile __int64 *)&Irp->Type;
  if ( Irp )
    _InterlockedExchange64((volatile __int64 *)&Irp->Type, 0LL);
  Irp = 0LL;
  if ( !a2 )
    goto LABEL_6;
  if ( (unsigned __int8)(a2 - 2) > 1u )
    return 3221225712LL;
  if ( (_BYTE)PopCurrentBroadcast )
    v11 = 1;
  else
LABEL_6:
    v11 = 0;
  result = PopAllocateIrp(a1, a3, v11, a6, a4, a5, (__int64)&Irp, (__int64)&v25);
  if ( (int)result >= 0 && (_DWORD)result != 259 )
  {
    v14 = Irp;
    if ( Irp )
    {
      v15 = v25;
      p_CurrentStackLocation = (union _IRP::$::$::$665C8370128C04AB892B069E6FB086E8::$8B5CD6CDFBAAB114E6B0B83ED2C2A4E9 *)&Irp->Tail.Overlay.CurrentStackLocation;
      CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
      CurrentStackLocation[-1].CompletionRoutine = (PIO_COMPLETION_ROUTINE)PopRequestCompletion;
      CurrentStackLocation[-1].Context = (PVOID)v15;
      CurrentStackLocation[-1].Control = -32;
      if ( p_Type )
      {
        _InterlockedExchange64(p_Type, (__int64)v14);
        v14 = Irp;
        v15 = v25;
      }
      v18 = p_CurrentStackLocation->CurrentStackLocation;
      if ( a2 )
      {
        v18[-1].Parameters.Create.Options = 1;
        v18[-1].Parameters.Read.ByteOffset.LowPart = a3;
        v18[-1].Parameters.Read.Length = HIDWORD(PopCurrentBroadcast);
        if ( (_BYTE)PopCurrentBroadcast )
          v18[-1].Parameters.Create.EaLength = PopMapInternalActionToIrpAction(
                                                 qword_14034B108,
                                                 WORD2(PopCurrentBroadcast) >> 12,
                                                 1);
        if ( (xmmword_1403E4010 & 0x8000) != 0 )
          PopLogNotifyDevice(a1, 0LL, v14);
        PopQueueQuerySetIrp(v14);
      }
      else
      {
        v19 = *(_QWORD *)(v15 + 200);
        if ( v19 )
        {
          _m_prefetchw((const void *)(v19 + 32));
          v20 = *(_DWORD *)(v19 + 32);
          do
          {
            v21 = v20;
            v20 = _InterlockedCompareExchange((volatile signed __int32 *)(v19 + 32), v20, v20);
          }
          while ( v21 != v20 );
          v22 = v25;
          *(_BYTE *)(v25 + 208) = v20 & 1;
          v23 = (v20 & 1) == 0;
          *(_BYTE *)(v22 + 209) = v23;
          v24 = *(_QWORD *)(v15 + 200);
          if ( v23 )
          {
            PopPepDeviceWaitWake(*(_QWORD *)(v24 + 56), 0, v13);
          }
          else
          {
            IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v24 + 216), 0LL, 0x20u);
            *(_QWORD *)(v15 + 200) = 0LL;
          }
          v14 = Irp;
        }
        v18[-1].Parameters.Read.Length = a3;
        PopDiagTraceIrpStart(p_CurrentStackLocation, v14);
        IofCallDriverSpecifyReturn(v18[-1].DeviceObject, v14, retaddr);
      }
      return 259LL;
    }
    else
    {
      return 3221225626LL;
    }
  }
  return result;
}
