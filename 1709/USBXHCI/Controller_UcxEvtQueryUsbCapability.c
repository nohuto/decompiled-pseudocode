/*
 * XREFs of Controller_UcxEvtQueryUsbCapability @ 0x1C0013430
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001A20 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C0004510 (WPP_RECORDER_SF_d.c)
 *     McTemplateK0pjqq @ 0x1C00075B8 (McTemplateK0pjqq.c)
 *     _guard_dispatch_icall_nop @ 0x1C00086E0 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF__guid_ @ 0x1C0015134 (WPP_RECORDER_SF__guid_.c)
 */

__int64 __fastcall Controller_UcxEvtQueryUsbCapability(
        __int64 a1,
        const void *a2,
        unsigned int a3,
        _WORD *a4,
        _DWORD *a5)
{
  __int64 v7; // rsi
  unsigned int v9; // ebx
  __int64 v10; // rbp
  int v11; // edi
  unsigned __int16 v12; // r9
  unsigned __int16 v13; // r9
  __int64 v14; // rdx
  __int64 v15; // r8
  unsigned __int16 v16; // r9
  unsigned __int8 v17; // dl
  unsigned __int16 v18; // r9
  int v19; // edx
  int v20; // r8d
  int v21; // r9d
  int v22; // ecx
  int v23; // ecx
  __int64 v25; // [rsp+28h] [rbp-50h]

  v7 = a1;
  v9 = 0;
  v10 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
          WdfDriverGlobals,
          a1,
          off_1C004E430);
  v11 = 0;
  *a5 = 0;
  if ( RtlCompareMemory(a2, &GUID_USB_CAPABILITY_CHAINED_MDLS, 0x10uLL) == 16 )
  {
    if ( (*(_QWORD *)(v10 + 272) & 0x80u) != 0LL )
    {
      v12 = 178;
LABEL_26:
      WPP_RECORDER_SF_(*(_QWORD *)(v10 + 72), 4u, 4u, v12, (__int64)&WPP_4b19db8c36bc33e5c568879992fcbff3_Traceguids);
LABEL_27:
      v9 = -1073741637;
      goto LABEL_50;
    }
    v13 = 179;
    goto LABEL_21;
  }
  if ( RtlCompareMemory(a2, &GUID_USB_CAPABILITY_SECURE_TRANSFERS, 0x10uLL) == 16 )
  {
    if ( !*(_BYTE *)(v10 + 441) )
    {
      v12 = 180;
      goto LABEL_26;
    }
    v13 = 181;
LABEL_21:
    WPP_RECORDER_SF_(*(_QWORD *)(v10 + 72), 4u, 4u, v13, (__int64)&WPP_4b19db8c36bc33e5c568879992fcbff3_Traceguids);
LABEL_50:
    v11 = 0;
    v7 = a1;
    goto LABEL_52;
  }
  if ( RtlCompareMemory(a2, &GUID_USB_CAPABILITY_STATIC_STREAMS, 0x10uLL) == 16 )
  {
    WPP_RECORDER_SF_(*(_QWORD *)(v10 + 72), 4u, 4u, 0xB6u, (__int64)&WPP_4b19db8c36bc33e5c568879992fcbff3_Traceguids);
    *a5 = 2;
    if ( a3 >= 2 )
    {
      v7 = a1;
      if ( a4 )
      {
        v11 = *(_DWORD *)(*(_QWORD *)(v10 + 88) + 112LL);
        *a4 = v11;
      }
      else
      {
        v11 = 0;
        v9 = -1073741811;
      }
      goto LABEL_52;
    }
    v16 = 183;
    v17 = 4;
LABEL_49:
    WPP_RECORDER_SF_d(
      *(_QWORD *)(v10 + 72),
      v17,
      4u,
      v16,
      (__int64)&WPP_4b19db8c36bc33e5c568879992fcbff3_Traceguids,
      a3);
    v9 = -1073741789;
    goto LABEL_50;
  }
  if ( RtlCompareMemory(a2, &GUID_USB_CAPABILITY_FUNCTION_SUSPEND, 0x10uLL) == 16 )
  {
    v13 = 184;
    goto LABEL_21;
  }
  if ( RtlCompareMemory(a2, &GUID_USB_CAPABILITY_SELECTIVE_SUSPEND, 0x10uLL) == 16 )
  {
    v13 = 185;
    goto LABEL_21;
  }
  if ( RtlCompareMemory(a2, &GUID_USB_CAPABILITY_TIME_SYNC, 0x10uLL) == 16 )
  {
    v13 = 186;
    goto LABEL_21;
  }
  if ( RtlCompareMemory(a2, &GUID_USB_CAPABILITY_CLEAR_TT_BUFFER_ON_ASYNC_TRANSFER_CANCEL, 0x10uLL) == 16 )
  {
    if ( (*(_QWORD *)(v10 + 272) & 0x100000000LL) == 0 )
    {
      v12 = 188;
      goto LABEL_26;
    }
    v13 = 187;
    goto LABEL_21;
  }
  if ( RtlCompareMemory(a2, &GUID_USB_CAPABILITY_HIGH_BANDWIDTH_ISOCH, 0x10uLL) == 16 )
  {
    *a5 = 4;
    if ( a3 >= 4 )
    {
      if ( a4 )
      {
        if ( (*(_DWORD *)(*(_QWORD *)(v10 + 88) + 108LL) & 0x10) != 0 )
        {
          WPP_RECORDER_SF_(
            *(_QWORD *)(v10 + 72),
            4u,
            4u,
            0xBDu,
            (__int64)&WPP_4b19db8c36bc33e5c568879992fcbff3_Traceguids);
          *(_DWORD *)a4 = (*(_DWORD *)(*(_QWORD *)(v10 + 88) + 108LL) & 0x40) != 0 ? 32 : 4;
          goto LABEL_50;
        }
        v12 = 190;
        goto LABEL_26;
      }
      v18 = 191;
LABEL_35:
      WPP_RECORDER_SF_(*(_QWORD *)(v10 + 72), 2u, 4u, v18, (__int64)&WPP_4b19db8c36bc33e5c568879992fcbff3_Traceguids);
      v9 = -1073741811;
      goto LABEL_50;
    }
    v16 = 192;
LABEL_48:
    v17 = 2;
    goto LABEL_49;
  }
  if ( RtlCompareMemory(a2, &GUID_USB_CAPABILITY_ENDPOINT_OFFLOAD, 0x10uLL) != 16 )
  {
    HIDWORD(v25) = HIDWORD(a2);
    WPP_RECORDER_SF__guid_(*(_QWORD *)(v10 + 72), v19, v20, v21);
    v9 = -1073741822;
    goto LABEL_52;
  }
  WPP_RECORDER_SF_(*(_QWORD *)(v10 + 72), 4u, 4u, 0xC1u, (__int64)&WPP_4b19db8c36bc33e5c568879992fcbff3_Traceguids);
  *a5 = 4;
  if ( a3 < 4 )
  {
    v16 = 195;
    goto LABEL_48;
  }
  if ( !a4 )
  {
    v18 = 194;
    goto LABEL_35;
  }
  v22 = *(_DWORD *)(v10 + 524);
  if ( !v22 )
    goto LABEL_27;
  v23 = v22 - 1;
  if ( !v23 )
  {
    *(_DWORD *)a4 = 1;
    goto LABEL_50;
  }
  v11 = 0;
  v7 = a1;
  if ( v23 == 1 )
    *(_DWORD *)a4 = 2;
  else
    v9 = -1073741637;
LABEL_52:
  if ( SLOBYTE(WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc) < 0 )
  {
    LODWORD(v25) = v9;
    McTemplateK0pjqq(LODWORD(WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc), v14, v15, v7, a2, v25, v11);
  }
  return v9;
}
