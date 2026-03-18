/*
 * XREFs of Endpoint_OnCancelStopCompletion @ 0x1C0019B40
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_dd @ 0x1C00055AC (WPP_RECORDER_SF_dd.c)
 *     WPP_RECORDER_SF_ddL @ 0x1C000E154 (WPP_RECORDER_SF_ddL.c)
 *     Controller_HwVerifierBreakIfEnabled @ 0x1C0010EF0 (Controller_HwVerifierBreakIfEnabled.c)
 *     Controller_ReportFatalError @ 0x1C0012264 (Controller_ReportFatalError.c)
 *     WPP_RECORDER_SF_ddLLx @ 0x1C001D1A4 (WPP_RECORDER_SF_ddLLx.c)
 *     UsbDevice_GetEndpointState @ 0x1C0034B64 (UsbDevice_GetEndpointState.c)
 *     UsbDevice_GetXhciEndpointDequeuePointer @ 0x1C0034BB8 (UsbDevice_GetXhciEndpointDequeuePointer.c)
 *     ESM_AddEsmEvent @ 0x1C003DBD0 (ESM_AddEsmEvent.c)
 *     ESM_AddEvent @ 0x1C003DBEC (ESM_AddEvent.c)
 */

__int64 __fastcall Endpoint_OnCancelStopCompletion(__int64 a1, int a2, __int64 *a3)
{
  __m128i **v3; // rbx
  __int64 result; // rax
  int EndpointState; // edi
  int v8; // r9d
  __m128i *v9; // r10
  int v10; // edi
  int v11; // edi
  __int64 v12; // rdx
  __int64 XhciEndpointDequeuePointer; // [rsp+48h] [rbp-20h]

  v3 = *(__m128i ***)(a1 + 48);
  if ( a2 == 3 )
  {
    WPP_RECORDER_SF_dd(
      (__int64)v3[10],
      4u,
      0xDu,
      0x4Bu,
      (__int64)&WPP_70dcbfe646ea320c9194bc4b71c40f15_Traceguids,
      v3[2][8].m128i_u8[7],
      *((_DWORD *)v3 + 36));
    _m_prefetchw(v3 + 4);
    result = (unsigned int)_InterlockedOr((volatile signed __int32 *)v3 + 8, 2u);
    goto LABEL_3;
  }
  EndpointState = UsbDevice_GetEndpointState(v3[2], *((unsigned int *)v3 + 36));
  XhciEndpointDequeuePointer = UsbDevice_GetXhciEndpointDequeuePointer(v3[2], *((unsigned int *)v3 + 36));
  WPP_RECORDER_SF_ddLLx((unsigned int)v3[10], *(unsigned __int8 *)(a1 + 60), v3[2][8].m128i_u8[7], v8);
  v9 = *v3;
  if ( (_mm_srli_si128((*v3)[17], 8).m128i_u8[0] & 0x20) != 0 && *(_BYTE *)(a1 + 60) == 19 && EndpointState == 4 )
    goto LABEL_22;
  if ( *(_BYTE *)(a1 + 60) == 1 )
  {
    if ( EndpointState != 3 )
    {
      WPP_RECORDER_SF_ddL(
        (__int64)v3[10],
        2u,
        0xDu,
        0x4Du,
        (__int64)&WPP_70dcbfe646ea320c9194bc4b71c40f15_Traceguids,
        v3[2][8].m128i_u8[7],
        *((_DWORD *)v3 + 36),
        EndpointState,
        EndpointState,
        XhciEndpointDequeuePointer);
      Controller_ReportFatalError((__int64)*v3, 2, 4131, (__int64)v3[2], (__int64)v3, 0LL);
      _m_prefetchw(v3 + 4);
      result = (unsigned int)_InterlockedOr((volatile signed __int32 *)v3 + 8, 2u);
      goto LABEL_3;
    }
LABEL_22:
    v12 = 16LL;
    return ESM_AddEsmEvent(v3, v12);
  }
  if ( *(_BYTE *)(a1 + 60) != 19 )
  {
    WPP_RECORDER_SF_ddL(
      (__int64)v3[10],
      2u,
      0xDu,
      0x4Eu,
      (__int64)&WPP_70dcbfe646ea320c9194bc4b71c40f15_Traceguids,
      v3[2][8].m128i_u8[7],
      *((_DWORD *)v3 + 36),
      *(unsigned __int8 *)(a1 + 60),
      EndpointState,
      XhciEndpointDequeuePointer);
    Controller_HwVerifierBreakIfEnabled(
      *v3,
      (__int64)v3[1],
      (__int64)v3[3],
      0x800000LL,
      "Stop Endpoint Command failed",
      (__int64 *)(a1 + 24),
      a3);
    Controller_ReportFatalError((__int64)*v3, 2, 4099, (__int64)v3[2], (__int64)v3, 0LL);
    _m_prefetchw(v3 + 4);
    result = (unsigned int)_InterlockedOr((volatile signed __int32 *)v3 + 8, 2u);
    goto LABEL_3;
  }
  v10 = EndpointState - 1;
  if ( !v10 )
  {
    v12 = 32LL;
    return ESM_AddEsmEvent(v3, v12);
  }
  v11 = v10 - 1;
  if ( v11 )
  {
    if ( v11 != 1 )
    {
      Controller_ReportFatalError((__int64)v9, 2, 4100, (__int64)v3[2], (__int64)v3, 0LL);
      _m_prefetchw(v3 + 4);
      result = (unsigned int)_InterlockedOr((volatile signed __int32 *)v3 + 8, 2u);
      goto LABEL_3;
    }
    v12 = 36LL;
    return ESM_AddEsmEvent(v3, v12);
  }
  if ( (*((_BYTE *)v3 + 99) & 3) != 1 )
  {
    v12 = 28LL;
    return ESM_AddEsmEvent(v3, v12);
  }
  Controller_ReportFatalError((__int64)v9, 2, 4099, (__int64)v3[2], (__int64)v3, 0LL);
  _m_prefetchw(v3 + 4);
  result = (unsigned int)_InterlockedOr((volatile signed __int32 *)v3 + 8, 2u);
LABEL_3:
  if ( (result & 2) == 0 )
    return ESM_AddEvent(v3 + 36);
  return result;
}
