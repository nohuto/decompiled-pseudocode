/*
 * XREFs of ndisPnPIrpStartDevice @ 0x1C00C12A4
 * Callers:
 *     ndisPnPDispatch @ 0x1C00C0CB0 (ndisPnPDispatch.c)
 * Callees:
 *     ndisLogMiniportEvent @ 0x1C00111C8 (ndisLogMiniportEvent.c)
 *     ?NdisTraceLoggingDeviceStarted@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_TRACEFORMAT_FAILURE_REASON@@J@Z @ 0x1C0011E74 (-NdisTraceLoggingDeviceStarted@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_TRACEFORMAT_FAILURE_REASON@.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024F10 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1C0039450 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C0039484 (WPP_SF_qD.c)
 *     WPP_SF_qZ @ 0x1C00485F8 (WPP_SF_qZ.c)
 *     ndisStartDeviceSynchronous @ 0x1C00C0AB8 (ndisStartDeviceSynchronous.c)
 *     ndisScheduleStartDeviceWorkItem @ 0x1C00C141C (ndisScheduleStartDeviceWorkItem.c)
 */

__int64 __fastcall ndisPnPIrpStartDevice(__int64 a1, __int64 a2, _IRP *a3, _BYTE *a4, _BYTE *a5)
{
  __int64 v8; // r8
  unsigned int v9; // ebp
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  int v11; // eax
  int v12; // edi
  int started; // edi
  unsigned __int8 v14; // al
  _IO_STACK_LOCATION *v15; // rax
  int v16; // eax

  if ( (unsigned __int8)byte_1C0098750 >= 4u )
    WPP_SF_qZ(0x21u, &WPP_c43bece8f9e83cce6c35b7786f97099d_Traceguids, a2, *(const wchar_t **)(a2 + 3880));
  ndisLogMiniportEvent(a2, 0x20u);
  v9 = 4;
  *(_DWORD *)(a2 + 124) = *(_DWORD *)(a2 + 124) & 0xFFFEFFEF | 0x10000;
  CurrentStackLocation = a3->Tail.Overlay.CurrentStackLocation;
  *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = *(_OWORD *)&CurrentStackLocation->MajorFunction;
  *(_OWORD *)&CurrentStackLocation[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&CurrentStackLocation->Parameters.NotifyDirectoryEx.CompletionFilter;
  *(_OWORD *)&CurrentStackLocation[-1].Parameters.ReadWriteConfig.Length = *(_OWORD *)&CurrentStackLocation->Parameters.ReadWriteConfig.Length;
  CurrentStackLocation[-1].FileObject = CurrentStackLocation->FileObject;
  CurrentStackLocation[-1].Control = 0;
  if ( *(_QWORD *)(*(_QWORD *)(a2 + 3784) + 808LL) )
  {
    if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
      WPP_SF_q(0xD2u, &WPP_89f39f5878d93d725c4978a535989123_Traceguids, a2);
    v11 = (*(__int64 (__fastcall **)(_QWORD, _IRP *))(*(_QWORD *)(a2 + 3784) + 808LL))(*(_QWORD *)(a2 + 4136), a3);
    v12 = v11;
    if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
      WPP_SF_qD(0xD3u, &WPP_89f39f5878d93d725c4978a535989123_Traceguids, a2, v11);
  }
  else
  {
    if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
      WPP_SF_q(0xD4u, &WPP_89f39f5878d93d725c4978a535989123_Traceguids, a2);
    v12 = 0;
  }
  if ( v12 )
  {
    started = -1073741823;
  }
  else
  {
    v9 = 9;
    started = IoSynchronousCallDriver(*(_QWORD *)(a2 + 3864), a3);
  }
  if ( started >= 0 )
  {
    v14 = *(_BYTE *)(a2 + 32);
    if ( v14 <= 6u && (v14 != 6 || *(_BYTE *)(a2 + 33) < 0x1Eu) || ndisStartDeviceSync )
    {
      v9 = 4;
      started = ndisStartDeviceSynchronous((int *)a2, (__int64)a3, v8);
    }
    else
    {
      v15 = a3->Tail.Overlay.CurrentStackLocation;
      *a4 = 0;
      started = 259;
      v9 = 4;
      v15->Control |= 1u;
      v16 = ndisScheduleStartDeviceWorkItem(a2, a3);
      if ( !v16 )
        goto LABEL_16;
      if ( (unsigned __int8)byte_1C0098754 >= 2u )
        WPP_SF_qD(0x22u, &WPP_c43bece8f9e83cce6c35b7786f97099d_Traceguids, a2, v16);
      a3->IoStatus.Status = -1073741823;
      IofCompleteRequest(a3, 0);
    }
  }
  if ( started != 259 )
    a3->IoStatus.Status = started;
LABEL_16:
  NdisTraceLoggingDeviceStarted(a2, v9, started);
  *a5 = 0;
  return (unsigned int)started;
}
