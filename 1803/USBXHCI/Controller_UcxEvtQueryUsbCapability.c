/*
 * XREFs of Controller_UcxEvtQueryUsbCapability @ 0x1C000AB20
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001C00 (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C00029C0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0pjqq @ 0x1C000D120 (McTemplateK0pjqq.c)
 *     WPP_RECORDER_SF_d @ 0x1C000D86C (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF__guid_ @ 0x1C000DDD4 (WPP_RECORDER_SF__guid_.c)
 */

__int64 __fastcall Controller_UcxEvtQueryUsbCapability(
        __int64 a1,
        const void *a2,
        unsigned int a3,
        _WORD *a4,
        _DWORD *a5)
{
  int v7; // esi
  unsigned int v9; // ebx
  __int64 v10; // rbp
  int v11; // edi
  __int64 v12; // rbx
  int v13; // edx
  int v14; // r8d
  int v15; // ebx
  char v16; // bl
  int v17; // r9d
  unsigned __int16 v18; // r9
  __int64 v19; // rbx
  __int64 v20; // rcx
  unsigned __int16 v21; // r9
  SIZE_T v22; // rax
  int v23; // edx
  int v24; // r8d
  int v25; // r9d
  __int64 v26; // rcx
  int v27; // ecx
  int v28; // ecx
  int v30; // [rsp+80h] [rbp+8h]

  v30 = a1;
  v7 = a1;
  v9 = 0;
  v10 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
          WdfDriverGlobals,
          a1,
          off_1C004B430);
  LOBYTE(v11) = 0;
  *a5 = 0;
  if ( RtlCompareMemory(a2, &GUID_USB_CAPABILITY_CHAINED_MDLS, 0x10uLL) == 16 )
  {
    v12 = *(_QWORD *)(v10 + 272) & 0x80LL;
    WPP_RECORDER_SF_(
      *(_QWORD *)(v10 + 72),
      4u,
      4u,
      180 - ((unsigned int)v12 != 0LL),
      (__int64)&WPP_7140d4b18c8734a335f2373eb7eb1be4_Traceguids);
    v15 = -(v12 != 0);
LABEL_5:
    v9 = v15 & 0xC00000BB;
LABEL_44:
    LOBYTE(v11) = 0;
    v7 = v30;
    goto LABEL_46;
  }
  if ( RtlCompareMemory(a2, &GUID_USB_CAPABILITY_SECURE_TRANSFERS, 0x10uLL) == 16 )
  {
    v16 = *(_BYTE *)(v10 + 441);
    WPP_RECORDER_SF_(
      *(_QWORD *)(v10 + 72),
      4u,
      4u,
      (v16 != 0) + 181,
      (__int64)&WPP_7140d4b18c8734a335f2373eb7eb1be4_Traceguids);
    v15 = -(v16 == 0);
    goto LABEL_5;
  }
  if ( RtlCompareMemory(a2, &GUID_USB_CAPABILITY_STATIC_STREAMS, 0x10uLL) == 16 )
  {
    WPP_RECORDER_SF_(*(_QWORD *)(v10 + 72), 4u, 4u, 0xB7u, (__int64)&WPP_7140d4b18c8734a335f2373eb7eb1be4_Traceguids);
    *a5 = 2;
    if ( a3 >= 2 )
    {
      v7 = v30;
      if ( a4 )
      {
        v11 = *(_DWORD *)(*(_QWORD *)(v10 + 88) + 112LL);
        *a4 = v11;
      }
      else
      {
        LOBYTE(v11) = 0;
        v9 = -1073741811;
      }
      goto LABEL_46;
    }
    v17 = 184;
    LOBYTE(v13) = 4;
    goto LABEL_42;
  }
  if ( RtlCompareMemory(a2, &GUID_USB_CAPABILITY_FUNCTION_SUSPEND, 0x10uLL) == 16 )
  {
    v18 = 185;
LABEL_18:
    WPP_RECORDER_SF_(*(_QWORD *)(v10 + 72), 4u, 4u, v18, (__int64)&WPP_7140d4b18c8734a335f2373eb7eb1be4_Traceguids);
    goto LABEL_44;
  }
  if ( RtlCompareMemory(a2, &GUID_USB_CAPABILITY_SELECTIVE_SUSPEND, 0x10uLL) == 16 )
  {
    v18 = 186;
    goto LABEL_18;
  }
  if ( RtlCompareMemory(a2, &GUID_USB_CAPABILITY_TIME_SYNC, 0x10uLL) == 16 )
  {
    v18 = 187;
    goto LABEL_18;
  }
  if ( RtlCompareMemory(a2, &GUID_USB_CAPABILITY_CLEAR_TT_BUFFER_ON_ASYNC_TRANSFER_CANCEL, 0x10uLL) == 16 )
  {
    v19 = HIDWORD(*(_QWORD *)(v10 + 272)) & 1;
    WPP_RECORDER_SF_(
      *(_QWORD *)(v10 + 72),
      4u,
      4u,
      189 - ((unsigned int)v19 != 0LL),
      (__int64)&WPP_7140d4b18c8734a335f2373eb7eb1be4_Traceguids);
    v9 = v19 == 0 ? 0xC00000BB : 0;
    goto LABEL_44;
  }
  if ( RtlCompareMemory(a2, &GUID_USB_CAPABILITY_HIGH_BANDWIDTH_ISOCH, 0x10uLL) == 16 )
  {
    *a5 = 4;
    v20 = *(_QWORD *)(v10 + 72);
    if ( a3 < 4 )
    {
      v17 = 193;
      LOBYTE(v13) = 2;
LABEL_43:
      WPP_RECORDER_SF_d(v20, v13, 4, v17, (__int64)&WPP_7140d4b18c8734a335f2373eb7eb1be4_Traceguids, a3);
      v9 = -1073741789;
      goto LABEL_44;
    }
    if ( a4 )
    {
      if ( (*(_DWORD *)(*(_QWORD *)(v10 + 88) + 108LL) & 0x10) != 0 )
      {
        WPP_RECORDER_SF_(v20, 4u, 4u, 0xBEu, (__int64)&WPP_7140d4b18c8734a335f2373eb7eb1be4_Traceguids);
        *(_DWORD *)a4 = (*(_DWORD *)(*(_QWORD *)(v10 + 88) + 108LL) & 0x40) != 0 ? 32 : 4;
        goto LABEL_44;
      }
      WPP_RECORDER_SF_(v20, 4u, 4u, 0xBFu, (__int64)&WPP_7140d4b18c8734a335f2373eb7eb1be4_Traceguids);
LABEL_27:
      v9 = -1073741637;
      goto LABEL_44;
    }
    v21 = 192;
LABEL_29:
    WPP_RECORDER_SF_(v20, 2u, 4u, v21, (__int64)&WPP_7140d4b18c8734a335f2373eb7eb1be4_Traceguids);
    v9 = -1073741811;
    goto LABEL_44;
  }
  v22 = RtlCompareMemory(a2, &GUID_USB_CAPABILITY_ENDPOINT_OFFLOAD, 0x10uLL);
  v26 = *(_QWORD *)(v10 + 72);
  if ( v22 != 16 )
  {
    WPP_RECORDER_SF__guid_(v26, v23, v24, v25);
    v9 = -1073741822;
    goto LABEL_46;
  }
  WPP_RECORDER_SF_(v26, 4u, 4u, 0xC2u, (__int64)&WPP_7140d4b18c8734a335f2373eb7eb1be4_Traceguids);
  *a5 = 4;
  if ( a3 < 4 )
  {
    v17 = 196;
    LOBYTE(v13) = 2;
LABEL_42:
    v20 = *(_QWORD *)(v10 + 72);
    goto LABEL_43;
  }
  if ( !a4 )
  {
    v20 = *(_QWORD *)(v10 + 72);
    v21 = 195;
    goto LABEL_29;
  }
  v27 = *(_DWORD *)(v10 + 532);
  if ( !v27 )
    goto LABEL_27;
  v28 = v27 - 1;
  if ( !v28 )
  {
    *(_DWORD *)a4 = 1;
    goto LABEL_44;
  }
  LOBYTE(v11) = 0;
  v7 = v30;
  if ( v28 == 1 )
    *(_DWORD *)a4 = 2;
  else
    v9 = -1073741637;
LABEL_46:
  if ( SLOBYTE(WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc) < 0 )
    McTemplateK0pjqq(WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc, v13, v14, v7, (__int64)a2, v9, v11);
  return v9;
}
