/*
 * XREFs of ndisPnPIrpStartDevice @ 0x1C00C6D5C
 * Callers:
 *     ndisPnPDispatch @ 0x1C00C6470 (ndisPnPDispatch.c)
 * Callees:
 *     ndisLogMiniportEvent @ 0x1C001A1D4 (ndisLogMiniportEvent.c)
 *     ?NdisTraceLoggingDeviceStarted@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_TRACEFORMAT_FAILURE_REASON@@J@Z @ 0x1C001E1A8 (-NdisTraceLoggingDeviceStarted@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_TRACEFORMAT_FAILURE_REASON@.c)
 *     _guard_dispatch_icall_nop @ 0x1C0025E10 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1C003A83C (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003A870 (WPP_SF_qD.c)
 *     WPP_SF_qZ @ 0x1C00499F4 (WPP_SF_qZ.c)
 *     ndisStartDeviceSynchronous @ 0x1C00C6274 (ndisStartDeviceSynchronous.c)
 *     ndisScheduleStartDeviceWorkItem @ 0x1C00C6ECC (ndisScheduleStartDeviceWorkItem.c)
 */

__int64 __fastcall ndisPnPIrpStartDevice(__int64 a1, __int64 a2, _IRP *a3, _BYTE *a4, _BYTE *a5)
{
  int v8; // ebp
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  __int64 v10; // rax
  int v11; // eax
  int v12; // edi
  int started; // edi
  unsigned __int8 v14; // al
  _IO_STACK_LOCATION *v15; // rax
  int v16; // eax

  if ( (unsigned __int8)byte_1C0099610 >= 4u )
    WPP_SF_qZ(0x21u, &WPP_0af21d7125ac337aa6d359ed8b88fbb1_Traceguids, a2, *(const wchar_t **)(a2 + 3880));
  ndisLogMiniportEvent(a2, 0x20u);
  v8 = 4;
  *(_DWORD *)(a2 + 124) = *(_DWORD *)(a2 + 124) & 0xFFFEFFEF | 0x10000;
  CurrentStackLocation = a3->Tail.Overlay.CurrentStackLocation;
  *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = *(_OWORD *)&CurrentStackLocation->MajorFunction;
  *(_OWORD *)&CurrentStackLocation[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&CurrentStackLocation->Parameters.NotifyDirectoryEx.CompletionFilter;
  *(_OWORD *)&CurrentStackLocation[-1].Parameters.ReadWriteConfig.Length = *(_OWORD *)&CurrentStackLocation->Parameters.ReadWriteConfig.Length;
  CurrentStackLocation[-1].FileObject = CurrentStackLocation->FileObject;
  CurrentStackLocation[-1].Control = 0;
  v10 = *(_QWORD *)(a2 + 3784);
  if ( *(_QWORD *)(v10 + 808) )
  {
    if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    {
      WPP_SF_q(0xD5u, &WPP_3541b357d8fa39ee5aefec47eeb5df8d_Traceguids, a2);
      v10 = *(_QWORD *)(a2 + 3784);
    }
    v11 = (*(__int64 (__fastcall **)(_QWORD, _IRP *))(v10 + 808))(*(_QWORD *)(a2 + 4136), a3);
    v12 = v11;
    if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
      WPP_SF_qD(0xD6u, &WPP_3541b357d8fa39ee5aefec47eeb5df8d_Traceguids, a2, v11);
  }
  else
  {
    if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
      WPP_SF_q(0xD7u, &WPP_3541b357d8fa39ee5aefec47eeb5df8d_Traceguids, a2);
    v12 = 0;
  }
  if ( v12 )
  {
    started = -1073741823;
  }
  else
  {
    v8 = 9;
    started = IoSynchronousCallDriver(*(_QWORD *)(a2 + 3864), a3);
  }
  if ( started >= 0 )
  {
    v14 = *(_BYTE *)(a2 + 32);
    if ( v14 <= 6u && (v14 != 6 || *(_BYTE *)(a2 + 33) < 0x1Eu) || ndisStartDeviceSync )
    {
      v8 = 4;
      started = ndisStartDeviceSynchronous((int *)a2);
    }
    else
    {
      v15 = a3->Tail.Overlay.CurrentStackLocation;
      *a4 = 0;
      started = 259;
      v8 = 4;
      v15->Control |= 1u;
      v16 = ndisScheduleStartDeviceWorkItem(a2, a3);
      if ( !v16 )
        goto LABEL_16;
      if ( (unsigned __int8)byte_1C0099614 >= 2u )
        WPP_SF_qD(0x22u, &WPP_0af21d7125ac337aa6d359ed8b88fbb1_Traceguids, a2, v16);
      a3->IoStatus.Status = -1073741823;
      IofCompleteRequest(a3, 0);
    }
  }
  if ( started != 259 )
    a3->IoStatus.Status = started;
LABEL_16:
  NdisTraceLoggingDeviceStarted(a2, v8, started);
  *a5 = 0;
  return (unsigned int)started;
}
