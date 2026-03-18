/*
 * XREFs of PopRequestPowerIrp @ 0x1400B3BA0
 * Callers:
 *     PopScanIdleList @ 0x1400B1278 (PopScanIdleList.c)
 *     PoRequestPowerIrp @ 0x1400B3B70 (PoRequestPowerIrp.c)
 *     PopFxReleasePowerIrp @ 0x1401233B0 (PopFxReleasePowerIrp.c)
 * Callees:
 *     PopQueueQuerySetIrp @ 0x1400B38D4 (PopQueueQuerySetIrp.c)
 *     PopDiagTraceIrpStart @ 0x1400B3A64 (PopDiagTraceIrpStart.c)
 *     PopAllocateIrp @ 0x1400B3D54 (PopAllocateIrp.c)
 *     IoReleaseRemoveLockEx @ 0x14011AF40 (IoReleaseRemoveLockEx.c)
 *     IofCallDriverSpecifyReturn @ 0x140131020 (IofCallDriverSpecifyReturn.c)
 *     PopMapInternalActionToIrpAction @ 0x14023D3B4 (PopMapInternalActionToIrpAction.c)
 *     PopPepDeviceWaitWake @ 0x14024265C (PopPepDeviceWaitWake.c)
 *     PopLogNotifyDevice @ 0x140244000 (PopLogNotifyDevice.c)
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
  char v23; // al
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
      CurrentStackLocation[-1].CompletionRoutine = (PIO_COMPLETION_ROUTINE)&PopRequestCompletion;
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
        {
          LOBYTE(v13) = 1;
          v18[-1].Parameters.Create.EaLength = PopMapInternalActionToIrpAction(
                                                 (unsigned int)qword_140365768,
                                                 WORD2(PopCurrentBroadcast) >> 12,
                                                 v13);
        }
        if ( (xmmword_140401150 & 0x8000) != 0 )
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
          v23 = v20 & 1;
          *(_BYTE *)(v25 + 208) = v23;
          *(_BYTE *)(v22 + 209) = v23 == 0;
          v24 = *(_QWORD *)(v15 + 200);
          if ( v23 )
          {
            IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v24 + 216), 0LL, 0x20u);
            *(_QWORD *)(v15 + 200) = 0LL;
          }
          else
          {
            PopPepDeviceWaitWake(*(_QWORD *)(v24 + 56), 0LL);
          }
          v14 = Irp;
        }
        v18[-1].Parameters.Read.Length = a3;
        PopDiagTraceIrpStart((__int64)p_CurrentStackLocation, (__int64)v14);
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
