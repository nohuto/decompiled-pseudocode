/*
 * XREFs of PopRequestPowerIrp @ 0x1401671C0
 * Callers:
 *     PopScanIdleList @ 0x140073E84 (PopScanIdleList.c)
 *     PopFxReleasePowerIrp @ 0x1401665F4 (PopFxReleasePowerIrp.c)
 *     PoRequestPowerIrp @ 0x140167190 (PoRequestPowerIrp.c)
 * Callees:
 *     IoReleaseRemoveLockEx @ 0x1400BA4B0 (IoReleaseRemoveLockEx.c)
 *     PopMapInternalActionToIrpAction @ 0x14014E894 (PopMapInternalActionToIrpAction.c)
 *     PopAllocateIrp @ 0x1401673F8 (PopAllocateIrp.c)
 *     PopQueueQuerySetIrp @ 0x140167738 (PopQueueQuerySetIrp.c)
 *     PopDiagTraceIrpStart @ 0x1401679AC (PopDiagTraceIrpStart.c)
 *     IofCallDriverSpecifyReturn @ 0x140167E50 (IofCallDriverSpecifyReturn.c)
 *     PopPepDeviceWaitWake @ 0x1402794F0 (PopPepDeviceWaitWake.c)
 *     PopLogNotifyDevice @ 0x14027A7EC (PopLogNotifyDevice.c)
 */

__int64 __fastcall PopRequestPowerIrp(__int64 a1, char a2, int a3, int a4, __int64 a5, char a6, PIRP Irp)
{
  volatile __int64 *p_Type; // rsi
  char v11; // cl
  __int64 result; // rax
  IRP *v13; // rdi
  __int64 v14; // rbp
  union _IRP::$::$::$665C8370128C04AB892B069E6FB086E8::$8B5CD6CDFBAAB114E6B0B83ED2C2A4E9 *p_CurrentStackLocation; // rcx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  struct _IO_STACK_LOCATION *v17; // rsi
  __int64 v18; // rdx
  PDEVICE_OBJECT DeviceObject; // rcx
  signed __int32 v20; // eax
  signed __int32 v21; // ett
  __int64 v22; // rdx
  char v23; // al
  __int64 v24; // rcx
  __int64 v25; // [rsp+60h] [rbp-28h] BYREF
  void *retaddr; // [rsp+88h] [rbp+0h]

  p_Type = (volatile __int64 *)&Irp->Type;
  if ( Irp )
    _InterlockedExchange64((volatile __int64 *)&Irp->Type, 0LL);
  Irp = 0LL;
  if ( !a2 )
    goto LABEL_20;
  if ( (unsigned __int8)(a2 - 2) > 1u )
    return 3221225712LL;
  if ( (_BYTE)PopCurrentBroadcast )
    v11 = 1;
  else
LABEL_20:
    v11 = 0;
  result = PopAllocateIrp(a1, a3, v11, a6, a4, a5, (__int64)&Irp, (__int64)&v25);
  if ( (int)result >= 0 && (_DWORD)result != 259 )
  {
    v13 = Irp;
    if ( Irp )
    {
      v14 = v25;
      p_CurrentStackLocation = (union _IRP::$::$::$665C8370128C04AB892B069E6FB086E8::$8B5CD6CDFBAAB114E6B0B83ED2C2A4E9 *)&Irp->Tail.Overlay.CurrentStackLocation;
      CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
      CurrentStackLocation[-1].CompletionRoutine = (PIO_COMPLETION_ROUTINE)PopRequestCompletion;
      CurrentStackLocation[-1].Context = (PVOID)v14;
      CurrentStackLocation[-1].Control = -32;
      if ( p_Type )
      {
        _InterlockedExchange64(p_Type, (__int64)v13);
        v13 = Irp;
        v14 = v25;
      }
      v17 = p_CurrentStackLocation->CurrentStackLocation;
      if ( a2 )
      {
        v17[-1].Parameters.Create.Options = 1;
        v17[-1].Parameters.Read.ByteOffset.LowPart = a3;
        v17[-1].Parameters.Read.Length = HIDWORD(PopCurrentBroadcast);
        if ( (_BYTE)PopCurrentBroadcast )
          v17[-1].Parameters.Create.EaLength = PopMapInternalActionToIrpAction(
                                                 qword_1403A9FE8,
                                                 WORD2(PopCurrentBroadcast) >> 12,
                                                 1);
        if ( (xmmword_14044C2D0 & 0x8000) != 0 )
          PopLogNotifyDevice(a1, 0LL, v13);
        PopQueueQuerySetIrp(v13);
      }
      else
      {
        v18 = *(_QWORD *)(v14 + 200);
        if ( v18 )
        {
          _m_prefetchw((const void *)(v18 + 32));
          v20 = *(_DWORD *)(v18 + 32);
          do
          {
            v21 = v20;
            v20 = _InterlockedCompareExchange((volatile signed __int32 *)(v18 + 32), v20, v20);
          }
          while ( v21 != v20 );
          v22 = v25;
          v23 = v20 & 1;
          *(_BYTE *)(v25 + 208) = v23;
          *(_BYTE *)(v22 + 209) = v23 == 0;
          v24 = *(_QWORD *)(v14 + 200);
          if ( v23 )
          {
            IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v24 + 216), 0LL, 0x20u);
            *(_QWORD *)(v14 + 200) = 0LL;
          }
          else
          {
            PopPepDeviceWaitWake(*(_QWORD *)(v24 + 56), 0LL);
          }
          v13 = Irp;
        }
        DeviceObject = v17[-1].DeviceObject;
        v17[-1].Parameters.Read.Length = a3;
        PopDiagTraceIrpStart(DeviceObject, v13);
        IofCallDriverSpecifyReturn(v17[-1].DeviceObject, v13, retaddr);
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
