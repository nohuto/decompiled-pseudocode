/*
 * XREFs of ?ndisSendPmOidsForSuspend@@YAHPEAU_NDIS_MINIPORT_BLOCK@@W4_DEVICE_POWER_STATE@@@Z @ 0x1C006CFDC
 * Callers:
 *     ndisSetPowerSuspend @ 0x1C00E9AA4 (ndisSetPowerSuspend.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0028150 (__security_check_cookie.c)
 *     memset @ 0x1C0028B80 (memset.c)
 *     WPP_SF_dq @ 0x1C004D4F4 (WPP_SF_dq.c)
 *     ?NdisTraceLoggingUnexpectedSelectiveSuspendError@@YAXPEAU_NDIS_MINIPORT_BLOCK@@GJ@Z @ 0x1C0077B00 (-NdisTraceLoggingUnexpectedSelectiveSuspendError@@YAXPEAU_NDIS_MINIPORT_BLOCK@@GJ@Z.c)
 *     ndisMInvokeOidRequest @ 0x1C00A5080 (ndisMInvokeOidRequest.c)
 *     ndisAddWoLDirectedMAC @ 0x1C00D4714 (ndisAddWoLDirectedMAC.c)
 *     ndisSkipWoLDirectedMAC @ 0x1C00D79C0 (ndisSkipWoLDirectedMAC.c)
 */

__int64 __fastcall ndisSendPmOidsForSuspend(struct _NDIS_MINIPORT_BLOCK *a1, enum _DEVICE_POWER_STATE a2)
{
  _NDIS_MINIPORT_AOAC *AoAc; // rsi
  __m128i v4; // xmm1
  KIRQL v5; // al
  int v6; // ebx
  unsigned int v7; // esi
  _NDIS_SELECTIVE_SUSPEND *SelectiveSuspend; // rbx
  unsigned __int16 v9; // cx
  _NDIS_SELECTIVE_SUSPEND *v10; // rbx
  enum _DEVICE_POWER_STATE v12; // [rsp+30h] [rbp-D0h] BYREF
  _OWORD v13[16]; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v14[20]; // [rsp+140h] [rbp+40h] BYREF

  v12 = a2;
  memset(v13, 0, 0xF8uLL);
  AoAc = a1->AoAc;
  memset(&v14[1], 0, 19);
  if ( AoAc
    && (a1->PnPFlags & 0x60) == 0x60
    && (unsigned int)(a1->DeviceCaps.DeviceWake - 2) <= 2
    && (a1->PMHardwareCapabilities.Flags & 4) != 0 )
  {
    v4 = *(__m128i *)&a1->PMCurrentParameters.Header.Type;
    *(_DWORD *)&v14[16] = a1->PMCurrentParameters.MediaSpecificWakeUpEvents;
    *(__m128i *)v14 = v4;
    *(_DWORD *)&v14[12] = _mm_srli_si128(v4, 8).m128i_i32[1] | 0x20;
    v5 = KeAcquireSpinLockRaiseToDpc(&AoAc->Lock);
    v6 = AoAc->ComponentRefCounts[15];
    KeReleaseSpinLock(&AoAc->Lock, v5);
    if ( v6 > 0 && !(unsigned __int8)ndisSkipWoLDirectedMAC(a1) )
      ndisAddWoLDirectedMAC(a1);
  }
  else
  {
    *(_DWORD *)v14 = 1311360;
    *(_DWORD *)&v14[12] = 16;
  }
  memset(v13, 0, 0xF8uLL);
  *((_QWORD *)&v13[2] + 1) = v14;
  LODWORD(v13[0]) = 15466902;
  DWORD2(v13[5]) |= 0x408u;
  *((_QWORD *)&v13[6] + 1) = &ndisIntReqGeneric;
  LODWORD(v13[2]) = -50265847;
  *(_QWORD *)((char *)v13 + 4) = 1LL;
  LODWORD(v13[3]) = 20;
  KeInitializeEvent((PRKEVENT)&v13[7], NotificationEvent, 0);
  v7 = ndisMInvokeOidRequest(a1, v13);
  if ( v7 == 259 )
  {
    KeWaitForSingleObject(&v13[7], Executive, 0, 0, 0LL);
    v7 = v13[5];
  }
  if ( v7 )
  {
    SelectiveSuspend = a1->SelectiveSuspend;
    NdisTraceLoggingUnexpectedSelectiveSuspendError(a1, 0x39Au, v7);
    SelectiveSuspend->LastUnexpectedFailureLine[1] = SelectiveSuspend->LastUnexpectedFailureLine[0];
    SelectiveSuspend->LastUnexpectedFailureLine[0] = 922;
    if ( (unsigned __int8)byte_1C0092616 >= 2u )
    {
      v9 = 19;
LABEL_19:
      WPP_SF_dq(v9, &WPP_3059abd58ba5345e836db04510415190_Traceguids, v7, a1);
    }
  }
  else
  {
    memset(v13, 0, 0xF8uLL);
    *((_QWORD *)&v13[2] + 1) = &v12;
    *((_QWORD *)&v13[6] + 1) = &ndisIntReqGeneric;
    DWORD2(v13[5]) |= 0x408u;
    LODWORD(v13[0]) = 15466902;
    LODWORD(v13[2]) = -50265855;
    *(_QWORD *)((char *)v13 + 4) = 1LL;
    LODWORD(v13[3]) = 4;
    KeInitializeEvent((PRKEVENT)&v13[7], NotificationEvent, 0);
    v7 = ndisMInvokeOidRequest(a1, v13);
    if ( v7 == 259 )
    {
      KeWaitForSingleObject(&v13[7], Executive, 0, 0, 0LL);
      v7 = v13[5];
    }
    if ( v7 )
    {
      v10 = a1->SelectiveSuspend;
      NdisTraceLoggingUnexpectedSelectiveSuspendError(a1, 0x3BBu, v7);
      v10->LastUnexpectedFailureLine[1] = v10->LastUnexpectedFailureLine[0];
      v10->LastUnexpectedFailureLine[0] = 955;
      if ( (unsigned __int8)byte_1C0092616 >= 2u )
      {
        v9 = 20;
        goto LABEL_19;
      }
    }
  }
  return v7;
}
