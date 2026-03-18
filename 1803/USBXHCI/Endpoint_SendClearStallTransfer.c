/*
 * XREFs of Endpoint_SendClearStallTransfer @ 0x1C0013D2C
 * Callers:
 *     Endpoint_OnCancelEndpointConfigureCompletion @ 0x1C0012270 (Endpoint_OnCancelEndpointConfigureCompletion.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00029C0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0002D40 (memset.c)
 *     WPP_RECORDER_SF_ddq @ 0x1C00162AC (WPP_RECORDER_SF_ddq.c)
 */

__int64 __fastcall Endpoint_SendClearStallTransfer(_QWORD *Context)
{
  PIRP *v1; // rax
  PIRP v3; // rbp
  PIRP *v4; // rdi
  char v5; // al
  _IO_STACK_LOCATION *CurrentStackLocation; // rbx
  PWDF_DRIVER_GLOBALS v7; // rcx
  __int64 v8; // rax
  struct _DEVICE_OBJECT *v9; // rax
  int v10; // edx
  _IO_STACK_LOCATION *v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 result; // rax
  __int64 v15; // rdx
  __int64 v16; // rbx
  int v17; // edx
  int v18; // [rsp+40h] [rbp-28h] BYREF
  __int64 v19; // [rsp+44h] [rbp-24h]
  int v20; // [rsp+4Ch] [rbp-1Ch]
  PIRP v21; // [rsp+50h] [rbp-18h]

  v1 = (PIRP *)Context[33];
  v3 = *v1;
  v4 = v1 + 1;
  IoReuseIrp(*v1, 0);
  v5 = *((_BYTE *)v4 + 128);
  *((_BYTE *)v4 + 129) = 1;
  *((_WORD *)v4 + 65) = 0;
  *((_BYTE *)v4 + 128) = v5 & 0x1C | 2;
  *((_DWORD *)v4 + 33) = *((unsigned __int8 *)Context + 98);
  *(_DWORD *)v4 = 3276936;
  v4[4] = (PIRP)24;
  v4[5] = 0LL;
  v4[6] = 0LL;
  *((_DWORD *)v4 + 14) = 5000;
  CurrentStackLocation = v3->Tail.Overlay.CurrentStackLocation;
  memset(&CurrentStackLocation[-1], 0, sizeof(_IO_STACK_LOCATION));
  v7 = WdfDriverGlobals;
  CurrentStackLocation[-1].MajorFunction = 15;
  CurrentStackLocation[-1].Parameters.Read.ByteOffset.LowPart = 2228227;
  CurrentStackLocation[-1].Parameters.WMI.ProviderId = (unsigned __int64)v4;
  --v3->CurrentLocation;
  v8 = (__int64)&v3->Tail.Overlay.CurrentStackLocation[-1];
  v3->Tail.Overlay.CurrentStackLocation = (_IO_STACK_LOCATION *)v8;
  *(_OWORD *)(v8 - 72) = *(_OWORD *)v8;
  *(_OWORD *)(v8 - 56) = *(_OWORD *)(v8 + 16);
  *(_OWORD *)(v8 - 40) = *(_OWORD *)(v8 + 32);
  *(_QWORD *)(v8 - 24) = *(_QWORD *)(v8 + 48);
  *(_BYTE *)(v8 - 69) = 0;
  v9 = (struct _DEVICE_OBJECT *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01023 + 248))(
                                  v7,
                                  *(_QWORD *)*Context);
  if ( IoSetCompletionRoutineEx(
         v9,
         v3,
         (PIO_COMPLETION_ROUTINE)Endpoint_ClearStallTransferCompletion,
         Context,
         1u,
         1u,
         1u) < 0 )
  {
    v11 = v3->Tail.Overlay.CurrentStackLocation;
    v11[-1].CompletionRoutine = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *))Endpoint_ClearStallTransferCompletion;
    v11[-1].Context = Context;
    v11[-1].Control = -32;
  }
  --v3->CurrentLocation;
  --v3->Tail.Overlay.CurrentStackLocation;
  v12 = Context[2];
  v13 = *(_QWORD *)(v12 + 176);
  if ( v13 )
  {
    v15 = Context[33];
    v16 = *(_QWORD *)(*(_QWORD *)(v13 + 88) + 72LL);
    v20 = 0;
    v18 = 24;
    v19 = 3LL;
    v21 = v3;
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, int *))(WdfFunctions_01023 + 1992))(
      WdfDriverGlobals,
      *(_QWORD *)(v15 + 144),
      &v18);
    v17 = *(unsigned __int8 *)(Context[2] + 135LL);
    LOBYTE(v17) = 4;
    WPP_RECORDER_SF_ddq(
      Context[10],
      v17,
      13,
      66,
      (__int64)&WPP_d84a1c460e69300738f36914e2bb57da_Traceguids,
      *(_BYTE *)(Context[2] + 135LL),
      *((_DWORD *)Context + 36),
      *(_QWORD *)(Context[33] + 144LL));
    result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64))(WdfFunctions_01023 + 2248))(
               WdfDriverGlobals,
               *(_QWORD *)(Context[33] + 144LL),
               v16);
    if ( (int)result < 0 )
      return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01023 + 2104))(
               WdfDriverGlobals,
               *(_QWORD *)(Context[33] + 144LL),
               (unsigned int)result);
  }
  else
  {
    LOBYTE(v10) = 2;
    return WPP_RECORDER_SF_ddq(
             Context[10],
             v10,
             13,
             65,
             (__int64)&WPP_d84a1c460e69300738f36914e2bb57da_Traceguids,
             *(_BYTE *)(v12 + 135),
             *((_DWORD *)Context + 36),
             *(_QWORD *)(Context[33] + 144LL));
  }
  return result;
}
