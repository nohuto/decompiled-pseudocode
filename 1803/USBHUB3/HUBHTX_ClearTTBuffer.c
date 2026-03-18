/*
 * XREFs of HUBHTX_ClearTTBuffer @ 0x1C0005E10
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00019D4 (WPP_RECORDER_SF_d.c)
 *     HUBHTX_GetClearTtBufferInfoForEndpoint @ 0x1C0005C00 (HUBHTX_GetClearTtBufferInfoForEndpoint.c)
 *     HUBMISC_ControlTransfer @ 0x1C002AF70 (HUBMISC_ControlTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C0039BA0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0039F00 (memset.c)
 */

__int64 __fastcall HUBHTX_ClearTTBuffer(__int64 a1, __int64 a2, __int64 a3, char a4, __int16 a5)
{
  _QWORD *v5; // rdi
  int v6; // r15d
  __int16 v11; // r14
  __int64 v12; // rax
  int ClearTtBufferInfoForEndpoint; // ebx
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rax
  int v17; // ebx
  unsigned __int16 v18; // r9
  __int64 result; // rax
  _QWORD *PoolWithTag; // rax
  char v21; // al
  _QWORD v22[14]; // [rsp+50h] [rbp-21h] BYREF
  __int16 v23; // [rsp+D0h] [rbp+5Fh] BYREF
  __int64 v24; // [rsp+D8h] [rbp+67h] BYREF

  v24 = 0LL;
  v5 = 0LL;
  v6 = *(_DWORD *)(a1 + 40);
  v11 = 1;
  if ( (v6 & 1) != 0 && a2 && (v6 & 0x1000) == 0 )
  {
    v12 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1632))(WdfDriverGlobals);
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const char *, __int64, const char *))(WdfFunctions_01015 + 1640))(
      WdfDriverGlobals,
      v12,
      "ClearTTBuffer Tag",
      5350LL,
      "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\hubxfer.c");
    ClearTtBufferInfoForEndpoint = HUBHTX_GetClearTtBufferInfoForEndpoint(a2, a3, a4, &v23);
    v14 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, a2);
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const char *, __int64, const char *))(WdfFunctions_01015 + 1648))(
      WdfDriverGlobals,
      v14,
      "ClearTTBuffer Tag",
      5358LL,
      "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\hubxfer.c");
    if ( ClearTtBufferInfoForEndpoint < 0 )
    {
LABEL_17:
      if ( v24 )
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1664))(WdfDriverGlobals);
      if ( v5 )
        ExFreePoolWithTag(v5, 0x68334855u);
      return (*(__int64 (__fastcall **)(_QWORD, __int64))(a1 + 520))(*(_QWORD *)(a1 + 368), a3);
    }
    memset(v22, 0, 0x38uLL);
    v15 = *(_QWORD *)(a1 + 16);
    LODWORD(v22[0]) = 56;
    v22[3] = 0x100000001LL;
    v22[4] = v15;
    v16 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 336))(WdfDriverGlobals);
    v17 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD *, __int64, __int64 *))(WdfFunctions_01015 + 1976))(
            WdfDriverGlobals,
            v22,
            v16,
            &v24);
    if ( v17 >= 0 )
    {
      PoolWithTag = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 0xB8uLL, 0x68334855u);
      v5 = PoolWithTag;
      if ( PoolWithTag )
      {
        memset(PoolWithTag, 0, 0xB8uLL);
        v5[22] = a3;
        v5[21] = a1;
        *v5 = v24;
        *((_BYTE *)v5 + 152) = v5[19] & 0x1C | 0x23;
        if ( (v6 & 0x800) != 0 )
        {
          *((_WORD *)v5 + 77) = 0;
          v21 = 9;
        }
        else
        {
          *((_WORD *)v5 + 77) = v23;
          v21 = 8;
        }
        *((_BYTE *)v5 + 153) = v21;
        if ( (*(_DWORD *)(a1 + 40) & 2) != 0 )
          v11 = a5;
        *((_WORD *)v5 + 78) = v11;
        *((_WORD *)v5 + 79) = 0;
        result = HUBMISC_ControlTransfer(
                   a1,
                   *(_QWORD *)(a1 + 240),
                   (_DWORD)v5,
                   (_DWORD)v5,
                   (__int64)HUBHTX_ClearTtBufferControlTransferComplete,
                   0LL,
                   0,
                   0,
                   *(_BYTE *)(a1 + 2264));
        v17 = result;
LABEL_16:
        if ( v17 >= 0 )
          return result;
        goto LABEL_17;
      }
      v18 = 118;
    }
    else
    {
      v18 = 117;
    }
    result = WPP_RECORDER_SF_d(
               *(_QWORD *)(a1 + 2512),
               2u,
               3u,
               v18,
               (__int64)&WPP_657f02cd6e64326733be7ab9e49a31de_Traceguids,
               v17);
    goto LABEL_16;
  }
  return (*(__int64 (__fastcall **)(_QWORD, __int64))(a1 + 520))(*(_QWORD *)(a1 + 368), a3);
}
