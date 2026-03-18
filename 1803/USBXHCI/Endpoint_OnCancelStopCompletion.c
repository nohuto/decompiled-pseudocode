/*
 * XREFs of Endpoint_OnCancelStopCompletion @ 0x1C0012870
 * Callers:
 *     <none>
 * Callees:
 *     Controller_HwVerifierBreakIfEnabled @ 0x1C0008150 (Controller_HwVerifierBreakIfEnabled.c)
 *     Controller_ReportFatalError @ 0x1C00095DC (Controller_ReportFatalError.c)
 *     WPP_RECORDER_SF_dd @ 0x1C000DAE4 (WPP_RECORDER_SF_dd.c)
 *     WPP_RECORDER_SF_ddLLx @ 0x1C0015F54 (WPP_RECORDER_SF_ddLLx.c)
 *     WPP_RECORDER_SF_ddL @ 0x1C0019530 (WPP_RECORDER_SF_ddL.c)
 *     UsbDevice_GetEndpointState @ 0x1C0032668 (UsbDevice_GetEndpointState.c)
 *     UsbDevice_GetXhciEndpointDequeuePointer @ 0x1C00326DC (UsbDevice_GetXhciEndpointDequeuePointer.c)
 *     ESM_AddEvent @ 0x1C003C210 (ESM_AddEvent.c)
 */

__int64 __fastcall Endpoint_OnCancelStopCompletion(__int64 a1, int a2, _QWORD *a3)
{
  __m128i **v3; // rbx
  __int64 result; // rax
  int EndpointState; // edi
  int v8; // r9d
  __m128i *v9; // r10
  int v10; // edx
  int v11; // edi
  int v12; // edi

  v3 = *(__m128i ***)(a1 + 48);
  if ( a2 == 3 )
  {
    WPP_RECORDER_SF_dd(
      (__int64)v3[10],
      4u,
      0xDu,
      0x4Bu,
      (__int64)&WPP_d84a1c460e69300738f36914e2bb57da_Traceguids,
      v3[2][8].m128i_u8[7],
      *((_DWORD *)v3 + 36));
    _m_prefetchw(v3 + 4);
    result = (unsigned int)_InterlockedOr((volatile signed __int32 *)v3 + 8, 2u);
    goto LABEL_3;
  }
  EndpointState = UsbDevice_GetEndpointState(v3[2], *((unsigned int *)v3 + 36));
  UsbDevice_GetXhciEndpointDequeuePointer(v3[2], *((unsigned int *)v3 + 36));
  WPP_RECORDER_SF_ddLLx((unsigned int)v3[10], *(unsigned __int8 *)(a1 + 60), v3[2][8].m128i_u8[7], v8);
  v9 = *v3;
  v10 = 32;
  if ( (_mm_srli_si128((*v3)[17], 8).m128i_u8[0] & 0x20) != 0 && *(_BYTE *)(a1 + 60) == 19 && EndpointState == 4 )
    return ESM_AddEvent(v3 + 36);
  if ( *(_BYTE *)(a1 + 60) == 1 )
  {
    if ( EndpointState == 3 )
      return ESM_AddEvent(v3 + 36);
    LOBYTE(v10) = 2;
    WPP_RECORDER_SF_ddL(
      (unsigned int)v3[10],
      v10,
      13,
      77,
      (__int64)&WPP_d84a1c460e69300738f36914e2bb57da_Traceguids,
      v3[2][8].m128i_i8[7],
      *((_DWORD *)v3 + 36),
      EndpointState);
    Controller_ReportFatalError((__int64)*v3, 2, 4131, (__int64)v3[2], (__int64)v3, 0LL);
    _m_prefetchw(v3 + 4);
    result = (unsigned int)_InterlockedOr((volatile signed __int32 *)v3 + 8, 2u);
    goto LABEL_3;
  }
  if ( *(_BYTE *)(a1 + 60) != 19 )
  {
    LOBYTE(v10) = 2;
    WPP_RECORDER_SF_ddL(
      (unsigned int)v3[10],
      v10,
      13,
      78,
      (__int64)&WPP_d84a1c460e69300738f36914e2bb57da_Traceguids,
      v3[2][8].m128i_i8[7],
      *((_DWORD *)v3 + 36),
      *(_BYTE *)(a1 + 60));
    Controller_HwVerifierBreakIfEnabled(
      *v3,
      (int)v3[1],
      (int)v3[3],
      0x800000LL,
      "Stop Endpoint Command failed",
      (_QWORD *)(a1 + 24),
      a3);
    Controller_ReportFatalError((__int64)*v3, 2, 4099, (__int64)v3[2], (__int64)v3, 0LL);
    _m_prefetchw(v3 + 4);
    result = (unsigned int)_InterlockedOr((volatile signed __int32 *)v3 + 8, 2u);
    goto LABEL_3;
  }
  v11 = EndpointState - 1;
  if ( !v11 )
    return ESM_AddEvent(v3 + 36);
  v12 = v11 - 1;
  if ( !v12 )
  {
    if ( (*((_BYTE *)v3 + 99) & 3) != 1 )
      return ESM_AddEvent(v3 + 36);
    Controller_ReportFatalError((__int64)v9, 2, 4099, (__int64)v3[2], (__int64)v3, 0LL);
    _m_prefetchw(v3 + 4);
    result = (unsigned int)_InterlockedOr((volatile signed __int32 *)v3 + 8, 2u);
LABEL_3:
    if ( (result & 2) != 0 )
      return result;
    return ESM_AddEvent(v3 + 36);
  }
  if ( v12 != 1 )
  {
    Controller_ReportFatalError((__int64)v9, 2, 4100, (__int64)v3[2], (__int64)v3, 0LL);
    _m_prefetchw(v3 + 4);
    result = (unsigned int)_InterlockedOr((volatile signed __int32 *)v3 + 8, 2u);
    goto LABEL_3;
  }
  return ESM_AddEvent(v3 + 36);
}
