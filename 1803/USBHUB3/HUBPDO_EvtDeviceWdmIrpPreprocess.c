/*
 * XREFs of HUBPDO_EvtDeviceWdmIrpPreprocess @ 0x1C0014A80
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0pq @ 0x1C000135C (McTemplateK0pq.c)
 *     WPP_RECORDER_SF_d @ 0x1C00019D4 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001DC8 (WPP_RECORDER_SF_.c)
 *     McTemplateK0p @ 0x1C0006374 (McTemplateK0p.c)
 *     HUBSM_AddEvent @ 0x1C0009C18 (HUBSM_AddEvent.c)
 *     McTemplateK0pqq @ 0x1C000A7AC (McTemplateK0pqq.c)
 *     McTemplateK0pjq @ 0x1C0010C48 (McTemplateK0pjq.c)
 *     WPP_RECORDER_SF_q @ 0x1C0011564 (WPP_RECORDER_SF_q.c)
 *     HUBPDO_GetHubName @ 0x1C00129E0 (HUBPDO_GetHubName.c)
 *     HUBPDO_RecordFailure @ 0x1C0012B14 (HUBPDO_RecordFailure.c)
 *     HUBPDO_ReturnDeviceConfigInfo @ 0x1C0012C8C (HUBPDO_ReturnDeviceConfigInfo.c)
 *     HUBPDO_ValidateURB @ 0x1C0013B70 (HUBPDO_ValidateURB.c)
 *     EventWriteUSBHUB3_ETW_EVENT_CLIENT_INITIATED_RECOVERY_ACTION_Wrapper @ 0x1C0017D60 (EventWriteUSBHUB3_ETW_EVENT_CLIENT_INITIATED_RECOVERY_ACTION_Wrapper.c)
 *     HUBUCX_GetControllerName @ 0x1C00223E8 (HUBUCX_GetControllerName.c)
 *     HUBUCX_GetDeviceBusInfo @ 0x1C0022520 (HUBUCX_GetDeviceBusInfo.c)
 *     HUBMISC_WaitForSignal @ 0x1C002B484 (HUBMISC_WaitForSignal.c)
 *     HUBMISC_VerifierDbgBreak @ 0x1C002B5EC (HUBMISC_VerifierDbgBreak.c)
 *     HUBMISC_GenerateControllerSuffix @ 0x1C002C7B0 (HUBMISC_GenerateControllerSuffix.c)
 *     HUBIDLE_AddEvent @ 0x1C00354EC (HUBIDLE_AddEvent.c)
 *     __security_check_cookie @ 0x1C00396C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0039BA0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0039BC0 (memmove.c)
 */

__int64 __fastcall HUBPDO_EvtDeviceWdmIrpPreprocess(__int64 a1, IRP *a2)
{
  unsigned int Status; // edi
  __int64 v4; // rax
  __int64 v5; // rcx
  _IO_STACK_LOCATION *CurrentStackLocation; // r14
  int v7; // ebx
  __int64 v8; // rsi
  __int64 v9; // r8
  unsigned int LowPart; // r12d
  char v11; // dl
  int v12; // ebx
  int v13; // ebx
  int v14; // ebx
  int v15; // ebx
  _IO_STACK_LOCATION *v16; // rax
  PWDF_DRIVER_GLOBALS v17; // rcx
  __int64 v18; // rax
  _IO_SECURITY_CONTEXT *SecurityContext; // r14
  unsigned __int16 v21; // cx
  bool v22; // zf
  __int64 v23; // rcx
  unsigned __int16 v24; // r9
  unsigned __int8 v25; // dl
  __int64 v26; // rax
  _SECURITY_QUALITY_OF_SERVICE *SecurityQos; // rcx
  PVOID v28; // r9
  __int64 v29; // rdx
  unsigned __int16 *v30; // rdx
  unsigned int AccessState_high; // ebx
  _SECURITY_QUALITY_OF_SERVICE *v32; // rcx
  PVOID v33; // r9
  unsigned __int16 *v34; // rdx
  unsigned int v35; // ecx
  unsigned int v36; // ebx
  int v37; // eax
  unsigned int ControllerSuffix; // eax
  unsigned __int16 v39; // r9
  __int64 v40; // rcx
  unsigned __int8 v41; // dl
  signed __int32 v42; // eax
  __int64 v43; // rcx
  _IO_SECURITY_CONTEXT *v44; // rax
  _NAMED_PIPE_CREATE_PARAMETERS *Parameters; // rax
  _IO_SECURITY_CONTEXT *v46; // rax
  __int64 v47; // rcx
  _IO_SECURITY_CONTEXT *v48; // rcx
  __int64 v49; // rax
  __int16 v50; // dx
  _IO_SECURITY_CONTEXT *v51; // rax
  int v52; // eax
  int v53; // ecx
  _IO_SECURITY_CONTEXT *v54; // rdx
  __int64 v55; // rax
  __int64 v56; // rcx
  char v57; // cl
  __int64 v58; // rcx
  char v59; // cl
  int v60; // eax
  _IO_STACK_LOCATION *v61; // rax
  _IO_STACK_LOCATION *v62; // rax
  PWDF_DRIVER_GLOBALS v63; // rcx
  int v64; // eax
  unsigned __int16 v65; // r9
  unsigned __int8 v66; // dl
  _IO_STACK_LOCATION *v67; // rax
  _IO_STACK_LOCATION *v68; // rax
  PWDF_DRIVER_GLOBALS v69; // rcx
  __int64 v70; // rax
  __int64 v71; // rdx
  __int64 v72; // rcx
  _IO_SECURITY_CONTEXT *v73; // rbx
  ULONG BugCheckOnFailure[2]; // [rsp+20h] [rbp-49h]
  ULONG BugCheckOnFailurea[2]; // [rsp+20h] [rbp-49h]
  ULONG Priority[2]; // [rsp+28h] [rbp-41h]
  _IO_STACK_LOCATION *v78; // [rsp+30h] [rbp-39h]
  struct _KEVENT Event; // [rsp+40h] [rbp-29h] BYREF
  __int128 Source1; // [rsp+58h] [rbp-11h] BYREF
  GUID v82; // [rsp+68h] [rbp-1h] BYREF
  GUID v83; // [rsp+78h] [rbp+Fh] BYREF

  Status = 0;
  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C005B070);
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v7 = 3;
  v8 = v4;
  v78 = CurrentStackLocation;
  v9 = 5LL;
  LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  if ( CurrentStackLocation->MajorFunction == 14 )
  {
    if ( LowPart != 2229348 )
    {
      if ( LowPart != 2229352 )
      {
        if ( LowPart == 2229356 || LowPart == 2229360 || LowPart == 2229364 || LowPart == 2229368 || LowPart == 2229372 )
          goto LABEL_12;
        if ( LowPart != 2229376 )
        {
          v7 = 3;
          goto LABEL_21;
        }
      }
      *(_QWORD *)(&a2->AssociatedIrp.MasterIrp->Size + 1) = *(_QWORD *)(*(_QWORD *)(v4 + 24) + 24LL);
    }
    goto LABEL_12;
  }
  v11 = 0;
  switch ( LowPart )
  {
    case 0x220003u:
      v5 = *(unsigned __int16 *)(CurrentStackLocation->Parameters.WMI.ProviderId + 2);
      LOWORD(v5) = v5 - 53;
      if ( (unsigned __int16)v5 <= 1u )
LABEL_16:
        v11 = 1;
      break;
    case 0x490007u:
    case 0x49104Bu:
      v11 = 1;
      break;
    case 0x220FB3u:
      if ( (*(_DWORD *)(v4 + 32) & 0x20) == 0 )
        break;
      goto LABEL_16;
    case 0x220463u:
      WPP_RECORDER_SF_q(
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 24) + 8LL) + 1432LL),
        4u,
        5u,
        0x39u,
        (__int64)&WPP_0e6bdc1f81e733846865473e2191b11e_Traceguids,
        a2);
      *(_DWORD *)(*(_QWORD *)(v8 + 24) + 1632LL) |= 0x80000u;
      goto LABEL_35;
  }
  if ( *(_BYTE *)v4 && !v11 )
  {
    WPP_RECORDER_SF_q(
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 24) + 8LL) + 1432LL),
      3u,
      5u,
      0x3Au,
      (__int64)&WPP_0e6bdc1f81e733846865473e2191b11e_Traceguids,
      a2);
    Status = -1073741810;
    v7 = 2;
    if ( LowPart == 2228227 )
      *(_DWORD *)(CurrentStackLocation->Parameters.WMI.ProviderId + 4) = -2147482880;
    goto LABEL_21;
  }
  if ( LowPart == 2228227 )
  {
    SecurityContext = CurrentStackLocation->Parameters.Create.SecurityContext;
    v21 = WORD1(SecurityContext->SecurityQos);
    if ( (unsigned __int16)(v21 - 9) <= 1u || (unsigned __int16)(v21 - 57) <= 1u )
      goto LABEL_46;
    if ( v21 > 0x2Au )
    {
      if ( v21 < 0x30u )
        goto LABEL_46;
      if ( v21 <= 0x31u )
        goto LABEL_103;
      if ( v21 <= 0x34u )
        goto LABEL_46;
      if ( v21 > 0x36u )
      {
        v22 = v21 == 59;
LABEL_45:
        if ( !v22 )
        {
LABEL_46:
          SecurityContext->AccessState = *(_ACCESS_STATE **)(*(_QWORD *)(v4 + 24) + 24LL);
LABEL_47:
          CurrentStackLocation = v78;
          goto LABEL_12;
        }
LABEL_103:
        v37 = HUBPDO_ValidateURB(v4, (unsigned __int16 *)SecurityContext, 5LL);
        Status = v37;
        if ( v37 >= 0 )
        {
          CurrentStackLocation = v78;
          if ( v37 != 128 )
          {
            v7 = (*(_DWORD *)(*(_QWORD *)(v8 + 24) + 1632LL) & 2) != 0 ? 5 : 3;
            goto LABEL_21;
          }
          Status = 0;
LABEL_35:
          v7 = 2;
          goto LABEL_21;
        }
        goto LABEL_52;
      }
      SecurityContext->AccessState = *(_ACCESS_STATE **)(*(_QWORD *)(v4 + 24) + 24LL);
    }
    else
    {
      if ( v21 != 42 )
      {
        if ( v21 <= 1u )
          goto LABEL_103;
        if ( v21 != 11 )
        {
          if ( v21 != 19 )
          {
            v22 = v21 == 30;
            goto LABEL_45;
          }
          v23 = *(_QWORD *)(v4 + 24);
          if ( (*(_DWORD *)(v23 + 1632) & 0x80000) == 0 )
            goto LABEL_46;
          v24 = 60;
          v25 = 4;
          goto LABEL_50;
        }
        v26 = *(_QWORD *)(v4 + 24);
        if ( *(_WORD *)(v26 + 1990) <= 0x200u )
        {
          SecurityContext->AccessState = *(_ACCESS_STATE **)(v26 + 24);
          goto LABEL_47;
        }
        Status = HUBPDO_ValidateURB(v8, (unsigned __int16 *)SecurityContext, 5LL);
        if ( (Status & 0x80000000) != 0 )
          goto LABEL_52;
        SecurityQos = SecurityContext[2].SecurityQos;
        v7 = 1;
        if ( SecurityQos )
        {
          if ( (*(&SecurityQos->EffectiveOnly + 1) & 5) != 0 )
            v28 = *(PVOID *)&SecurityQos[2].Length;
          else
            v28 = MmMapLockedPagesSpecifyCache((PMDL)SecurityQos, 0, MmCached, 0LL, 0, ExDefaultMdlProtection | 0x10u);
        }
        else
        {
          v28 = *(PVOID *)&SecurityContext[1].DesiredAccess;
        }
        if ( !v28 )
        {
          Status = -1073741811;
          HIDWORD(SecurityContext->SecurityQos) = -2147482880;
          goto LABEL_52;
        }
        if ( BYTE3(SecurityContext[5].AccessState) == 1 )
        {
          AccessState_high = HIDWORD(SecurityContext[1].AccessState);
          v30 = (unsigned __int16 *)(*(_QWORD *)(v8 + 24) + 1988LL);
          if ( AccessState_high > 0x12 )
            AccessState_high = 18;
        }
        else
        {
          if ( BYTE3(SecurityContext[5].AccessState) != 2 )
          {
            SecurityContext->AccessState = *(_ACCESS_STATE **)(*(_QWORD *)(v8 + 24) + 24LL);
LABEL_67:
            Status = 0;
            goto LABEL_53;
          }
          v29 = *(_QWORD *)(v8 + 24);
          if ( BYTE2(SecurityContext[5].AccessState) )
          {
            SecurityContext->AccessState = *(_ACCESS_STATE **)(v29 + 24);
            goto LABEL_67;
          }
          v30 = *(unsigned __int16 **)(v29 + 2016);
          AccessState_high = v30[1];
          if ( AccessState_high >= HIDWORD(SecurityContext[1].AccessState) )
            AccessState_high = HIDWORD(SecurityContext[1].AccessState);
        }
        LODWORD(SecurityContext[1].AccessState) |= 1u;
        if ( ((__int64)SecurityContext[1].AccessState & 8) != 0 )
          WORD1(SecurityContext->SecurityQos) = 8;
        memmove(v28, v30, AccessState_high);
        Status = 0;
        HIDWORD(SecurityContext[1].AccessState) = AccessState_high;
        goto LABEL_52;
      }
      v23 = *(_QWORD *)(v4 + 24);
      if ( WORD2(SecurityContext[5].AccessState) != 7 )
      {
        if ( (unsigned __int16)(*(_WORD *)(v23 + 1990) - 256) > 0xFFu && (*(_DWORD *)(v23 + 1632) & 0x80u) == 0
          || (*(_DWORD *)(v23 + 1644) & 2) != 0 )
        {
          BYTE1(SecurityContext[5].AccessState) = *(_BYTE *)(v23 + 2052);
          goto LABEL_46;
        }
        v24 = 59;
        v25 = 3;
LABEL_50:
        WPP_RECORDER_SF_(
          *(_QWORD *)(*(_QWORD *)(v23 + 8) + 1432LL),
          v25,
          5u,
          v24,
          (__int64)&WPP_0e6bdc1f81e733846865473e2191b11e_Traceguids);
LABEL_51:
        Status = -1073741637;
LABEL_52:
        v7 = 2;
LABEL_53:
        CurrentStackLocation = v78;
        goto LABEL_21;
      }
      if ( (*(_DWORD *)(v23 + 2464) & 2) != 0 )
      {
        v32 = SecurityContext[2].SecurityQos;
        if ( v32 )
        {
          if ( (*(&v32->EffectiveOnly + 1) & 5) != 0 )
            v33 = *(PVOID *)&v32[2].Length;
          else
            v33 = MmMapLockedPagesSpecifyCache((PMDL)v32, 0, MmCached, 0LL, 0, ExDefaultMdlProtection | 0x10u);
        }
        else
        {
          v33 = *(PVOID *)&SecurityContext[1].DesiredAccess;
        }
        if ( v33 )
        {
          v34 = *(unsigned __int16 **)(*(_QWORD *)(v8 + 24) + 2488LL);
          v35 = v34[4];
          if ( v35 >= HIDWORD(SecurityContext[1].AccessState) )
            v35 = HIDWORD(SecurityContext[1].AccessState);
          v36 = v35;
          memmove(v33, v34, v35);
          HIDWORD(SecurityContext[1].AccessState) = v36;
          goto LABEL_52;
        }
        goto LABEL_51;
      }
      Status = -1073741637;
      v7 = 2;
    }
    CurrentStackLocation = v78;
    goto LABEL_21;
  }
  if ( LowPart > 0x22043B )
  {
    if ( LowPart > 0x49000B )
    {
      switch ( LowPart )
      {
        case 0x491043u:
          v54 = CurrentStackLocation->Parameters.Create.SecurityContext;
          v54->SecurityQos = *(_SECURITY_QUALITY_OF_SERVICE **)(*(_QWORD *)(v4 + 16) + 2440LL);
          v55 = *(_QWORD *)(v4 + 24);
          *(_OWORD *)&v54->AccessState = *(_OWORD *)(v55 + 1988);
          LOWORD(v54[1].SecurityQos) = *(_WORD *)(v55 + 2004);
          WORD1(v54[1].SecurityQos) = *(_WORD *)(*(_QWORD *)(v8 + 24) + 2192LL);
          WORD2(v54[1].SecurityQos) = *(_WORD *)(*(_QWORD *)(v8 + 24) + 2194LL);
          v54[2].AccessState = *(_ACCESS_STATE **)(*(_QWORD *)(v8 + 24) + 2568LL);
          v54[2].DesiredAccess = *(_DWORD *)(*(_QWORD *)(v8 + 24) + 2576LL);
          BYTE2(v54[1].DesiredAccess) = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v8 + 24) + 8LL) + 202LL);
          HIWORD(v54[1].AccessState) = *(_WORD *)(*(_QWORD *)(v8 + 24) + 2202LL);
          LOWORD(v54[1].DesiredAccess) = *(_WORD *)(*(_QWORD *)(v8 + 24) + 2204LL);
          v9 = *(_QWORD *)(v8 + 16);
          LOWORD(v54[1].FullCreateOptions) = *(_WORD *)(v9 + 2484)
                                           + *(_WORD *)(*(_QWORD *)(v8 + 24) + 2582LL)
                                           + *(_WORD *)(v9 + 1180);
          v56 = *(_QWORD *)(v8 + 24);
          if ( (*(_DWORD *)(v56 + 2216) & 1) != 0 )
          {
            HIWORD(v54[1].SecurityQos) = *(unsigned __int8 *)(v56 + 2197);
            v57 = *(_BYTE *)(*(_QWORD *)(v8 + 16) + 232LL);
          }
          else
          {
            HIWORD(v54[1].SecurityQos) = *(_WORD *)(v9 + 2470);
            v57 = *(_BYTE *)(v9 + 2472);
          }
          LOBYTE(v54[1].AccessState) = v57;
          v58 = *(_QWORD *)(v8 + 24);
          if ( (*(_DWORD *)(v58 + 2216) & 2) != 0 )
          {
            WORD1(v54[1].AccessState) = *(_WORD *)(v58 + 2200);
            v59 = *(_BYTE *)(*(_QWORD *)(v8 + 16) + 232LL);
          }
          else
          {
            WORD1(v54[1].AccessState) = *(_WORD *)(v9 + 2474);
            v59 = *(_BYTE *)(v9 + 2476);
          }
          BYTE4(v54[1].AccessState) = v59;
          v60 = *(_DWORD *)(v9 + 2488);
          if ( (v60 & 1) != 0 )
          {
            LODWORD(v54[2].SecurityQos) |= 1u;
            v60 = *(_DWORD *)(v9 + 2488);
          }
          if ( (v60 & 4) != 0 )
            LODWORD(v54[2].SecurityQos) |= 4u;
          if ( (*(_DWORD *)(*(_QWORD *)(v8 + 24) + 1632LL) & 0x2000) != 0 )
            LODWORD(v54[2].SecurityQos) |= 2u;
          goto LABEL_137;
        case 0x49104Bu:
          v51 = CurrentStackLocation->Parameters.Create.SecurityContext;
          v7 = 1;
          Source1 = *(_OWORD *)&v51->DesiredAccess;
          HIDWORD(v51[1].AccessState) = 0;
          if ( RtlCompareMemory(&Source1, &GUID_USB_CAPABILITY_FUNCTION_SUSPEND, 0x10uLL) == 16 )
          {
            v52 = -((*(_DWORD *)(*(_QWORD *)(v8 + 24) + 1456LL) & 0x10000) != 0);
          }
          else
          {
            if ( RtlCompareMemory(&Source1, &GUID_USB_CAPABILITY_STATIC_STREAMS, 0x10uLL) == 16 )
            {
              Status = (*(_DWORD *)(*(_QWORD *)(v8 + 24) + 1456LL) & 0x10000) != 0 ? 0xC00000BB : 0;
              v7 = ((*(_DWORD *)(*(_QWORD *)(v8 + 24) + 1456LL) & 0x10000) != 0) + 1;
              goto LABEL_21;
            }
            if ( RtlCompareMemory(&Source1, &GUID_USB_CAPABILITY_DEVICE_CONNECTION_SUPER_SPEED_COMPATIBLE, 0x10uLL) == 16 )
            {
              v53 = *(_DWORD *)(*(_QWORD *)(v8 + 24) + 1456LL) & 0x800;
            }
            else if ( RtlCompareMemory(&Source1, &GUID_USB_CAPABILITY_DEVICE_CONNECTION_HIGH_SPEED_COMPATIBLE, 0x10uLL) == 16 )
            {
              v53 = *(_DWORD *)(*(_QWORD *)(v8 + 24) + 1456LL) & 0x900;
            }
            else
            {
              if ( RtlCompareMemory(&Source1, &GUID_USB_CAPABILITY_DEVICE_CONNECTION_FULL_SPEED_COMPATIBLE, 0x10uLL) != 16 )
              {
                if ( RtlCompareMemory(&Source1, &GUID_USB_CAPABILITY_DEVICE_CONNECTION_LOW_SPEED_COMPATIBLE, 0x10uLL) == 16 )
                  v7 = 2;
                goto LABEL_21;
              }
              v53 = *(_DWORD *)(*(_QWORD *)(v8 + 24) + 1456LL) & 0xB00;
            }
            v52 = -(v53 == 0);
          }
          v7 = 2;
          Status = v52 & 0xC00000BB;
          goto LABEL_21;
        case 0x49104Fu:
          goto LABEL_170;
        case 0x491404u:
          a2->AssociatedIrp.MasterIrp->AssociatedIrp.MasterIrp = *(_IRP **)(*(_QWORD *)(v4 + 24) + 24LL);
          goto LABEL_12;
        case 0x491408u:
LABEL_12:
          v7 = 1;
          goto LABEL_21;
        case 0x49140Fu:
          *(_QWORD *)(CurrentStackLocation->Parameters.WMI.ProviderId + 8) = *(_QWORD *)(*(_QWORD *)(v4 + 24) + 24LL);
          goto LABEL_12;
      }
    }
    else
    {
      switch ( LowPart )
      {
        case 0x49000Bu:
          goto LABEL_170;
        case 0x22043Fu:
          v48 = CurrentStackLocation->Parameters.Create.SecurityContext;
          if ( v48 )
          {
            v49 = *(_QWORD *)(v4 + 16);
            *(_OWORD *)&v48->SecurityQos = *(_OWORD *)(v49 + 296);
            *(_OWORD *)&v48->DesiredAccess = *(_OWORD *)(v49 + 312);
            v50 = *(_WORD *)(v8 + 48);
            LOBYTE(v9) = *(_BYTE *)(*(_QWORD *)(v8 + 16) + 232LL);
            if ( (_BYTE)v9 )
              *((_WORD *)&v48->DesiredAccess + (unsigned __int8)v9) = v50;
            else
              LOWORD(v48->DesiredAccess) = v50;
          }
          else
          {
            WPP_RECORDER_SF_(
              *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 24) + 8LL) + 1432LL),
              3u,
              5u,
              0xBu,
              (__int64)&WPP_0e6bdc1f81e733846865473e2191b11e_Traceguids);
            Status = -1073741811;
          }
          goto LABEL_35;
        case 0x220443u:
          goto LABEL_136;
        case 0x22044Fu:
          ControllerSuffix = HUBPDO_ReturnDeviceConfigInfo(v4, (__int64)a2);
          goto LABEL_119;
        case 0x220FB3u:
          if ( (*(_DWORD *)(v4 + 32) & 1) != 0 )
          {
            if ( KeGetCurrentIrql() <= 2u )
            {
              v7 = 5;
              goto LABEL_21;
            }
            Status = -1073741811;
            v7 = 2;
            v39 = 66;
          }
          else
          {
            Status = -1073741101;
            v7 = 2;
            v39 = 65;
          }
          goto LABEL_122;
        case 0x220FBBu:
          v47 = *(_QWORD *)(v4 + 24);
          if ( (*(_DWORD *)(v47 + 1644) & 0x1000000) == 0 )
          {
            Status = -1073741275;
            goto LABEL_35;
          }
          ControllerSuffix = HUBMISC_GenerateControllerSuffix(v47, CurrentStackLocation->Parameters.WMI.ProviderId, 5LL);
          goto LABEL_119;
        case 0x490003u:
          v46 = CurrentStackLocation->Parameters.Create.SecurityContext;
          CurrentStackLocation->Parameters.QueryDirectory.FileName = *(_UNICODE_STRING **)(*(_QWORD *)(v8 + 24) + 24LL);
          if ( (v46->DesiredAccess & 1) != 0 )
            _InterlockedOr((volatile signed __int32 *)(v8 + 32), 0x10u);
          goto LABEL_12;
        case 0x490007u:
LABEL_170:
          CurrentStackLocation->Parameters.QueryDirectory.FileName = *(_UNICODE_STRING **)(*(_QWORD *)(v4 + 24) + 24LL);
          goto LABEL_12;
      }
    }
LABEL_193:
    Status = a2->IoStatus.Status;
    goto LABEL_137;
  }
  if ( LowPart == 2229307 )
    goto LABEL_136;
  if ( LowPart > 0x220027 )
  {
    switch ( LowPart )
    {
      case 0x22002Bu:
        ControllerSuffix = HUBPDO_RecordFailure(v4, (__int64)a2);
        goto LABEL_119;
      case 0x220420u:
        ControllerSuffix = HUBUCX_GetDeviceBusInfo(
                             *(_QWORD *)(v4 + 16),
                             *(_QWORD *)(*(_QWORD *)(v4 + 24) + 24LL),
                             CurrentStackLocation->Parameters.WMI.ProviderId);
        goto LABEL_119;
      case 0x220424u:
        ControllerSuffix = HUBUCX_GetControllerName(
                             *(_QWORD *)(v4 + 16),
                             CurrentStackLocation->Parameters.WMI.ProviderId,
                             CurrentStackLocation->Parameters.Create.Options);
        goto LABEL_119;
    }
    if ( LowPart != 2229292 )
    {
      if ( LowPart == 2229299 )
      {
        v7 = 2;
        Status = CurrentStackLocation->Parameters.WMI.ProviderId == 0 ? 0xC000000D : 0;
        goto LABEL_21;
      }
      if ( LowPart != 2229303 )
        goto LABEL_193;
    }
    goto LABEL_136;
  }
  if ( LowPart != 2228263 )
  {
    if ( LowPart == 2228231 )
    {
      if ( (*(_DWORD *)(v4 + 32) & 1) != 0 )
      {
        if ( !KeGetCurrentIrql() )
          goto LABEL_21;
        Status = -1073741811;
        v7 = 2;
        v39 = 64;
      }
      else
      {
        Status = -1073741101;
        v7 = 2;
        v39 = 63;
      }
      goto LABEL_122;
    }
    if ( LowPart != 2228239 )
    {
      v7 = 4;
      if ( LowPart == 2228243 )
      {
        if ( KeGetCurrentIrql() )
        {
          Status = -1073741811;
          v7 = 2;
          v39 = 61;
        }
        else
        {
          v44 = CurrentStackLocation->Parameters.Create.SecurityContext;
          if ( v44 )
          {
            LODWORD(v44->SecurityQos) = 0;
            CurrentStackLocation->Parameters.QueryDirectory.FileName = (_UNICODE_STRING *)v8;
            goto LABEL_21;
          }
          Status = -1073741811;
          v7 = 2;
          v39 = 62;
        }
        v41 = 2;
        v40 = *(_QWORD *)(*(_QWORD *)(v8 + 24) + 8LL);
LABEL_124:
        WPP_RECORDER_SF_(
          *(_QWORD *)(v40 + 1432),
          v41,
          5u,
          v39,
          (__int64)&WPP_0e6bdc1f81e733846865473e2191b11e_Traceguids);
        goto LABEL_21;
      }
      if ( LowPart == 2228247 || LowPart == 2228251 )
        goto LABEL_137;
      if ( LowPart != 2228255 )
      {
        if ( LowPart == 2228256 )
        {
          ControllerSuffix = HUBPDO_GetHubName(v4, a2);
LABEL_119:
          Status = ControllerSuffix;
          goto LABEL_35;
        }
        goto LABEL_193;
      }
      v7 = 2;
      if ( KeGetCurrentIrql() )
      {
        Status = -1073741811;
        v39 = 67;
LABEL_122:
        v40 = *(_QWORD *)(*(_QWORD *)(v8 + 24) + 8LL);
LABEL_123:
        v41 = 3;
        goto LABEL_124;
      }
      v42 = _InterlockedCompareExchange((volatile signed __int32 *)(v4 + 4), 1, 0);
      v43 = *(_QWORD *)(v8 + 24);
      if ( v42 )
      {
        v40 = *(_QWORD *)(v43 + 8);
        v39 = 68;
        goto LABEL_123;
      }
      if ( (*(_DWORD *)(v43 + 2436) & 0x400) != 0 )
      {
        HUBMISC_VerifierDbgBreak("DeviceHwVerifierClientInitiatedCyclePort", v43 + 504);
        v43 = *(_QWORD *)(v8 + 24);
      }
      EventWriteUSBHUB3_ETW_EVENT_CLIENT_INITIATED_RECOVERY_ACTION_Wrapper(v43, 2228255LL, 0LL);
      HUBSM_AddEvent(*(_QWORD *)(v8 + 24) + 504LL, 4011);
      goto LABEL_21;
    }
LABEL_136:
    Status = -1073741637;
LABEL_137:
    v7 = 2;
    goto LABEL_21;
  }
  Parameters = CurrentStackLocation->Parameters.CreatePipe.Parameters;
  if ( !Parameters || !*(_QWORD *)&Parameters->NamedPipeType )
  {
    Status = -1073741224;
    v7 = 2;
    v39 = 69;
    goto LABEL_122;
  }
  *(_QWORD *)&v83.Data1 = 0LL;
  *(_QWORD *)v83.Data4 = 0LL;
  if ( *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters )
    (*(void (__fastcall **)(IRP *, GUID *, __int64))&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters)(a2, &v83, 5LL);
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 0x400) != 0 )
    McTemplateK0p(
      v5,
      &USBHUB3_ETW_EVENT_DEVICE_SUBMIT_IDLE_NOTIFICATION_START,
      &v83,
      *(_QWORD *)(*(_QWORD *)(v8 + 24) + 24LL));
  Status = HUBIDLE_AddEvent(v8 + 72, 6003LL, a2);
  v7 = 6;
LABEL_21:
  v12 = v7 - 1;
  if ( !v12 )
  {
    ++a2->CurrentLocation;
    ++a2->Tail.Overlay.CurrentStackLocation;
    return (unsigned int)IofCallDriver(*(PDEVICE_OBJECT *)(v8 + 8), a2);
  }
  v13 = v12 - 1;
  if ( !v13 )
  {
    if ( (*(_DWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
                        WdfDriverGlobals,
                        WdfDriverGlobals->Driver,
                        off_1C005B110)
                    + 4) & 0x1000) != 0 )
    {
      *(_QWORD *)&v82.Data1 = 0LL;
      *(_QWORD *)v82.Data4 = 0LL;
      if ( *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters )
        (*(void (__fastcall **)(IRP *, GUID *))&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters)(a2, &v82);
      if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 0x400) != 0 )
      {
        BugCheckOnFailure[0] = LowPart;
        McTemplateK0pq(
          v72,
          &USBHUB3_ETW_EVENT_DEVICE_INTERNAL_IOCTL_START,
          &v82,
          *(_QWORD *)(*(_QWORD *)(v8 + 24) + 24LL),
          *(_QWORD *)BugCheckOnFailure);
      }
      if ( LowPart == 2228227 )
      {
        v73 = CurrentStackLocation->Parameters.Create.SecurityContext;
        if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 0x400) == 0 )
          goto LABEL_242;
        BugCheckOnFailure[0] = WORD1(v73->SecurityQos);
        McTemplateK0pq(
          v72,
          &USBHUB3_ETW_EVENT_DEVICE_URB_START,
          &v82,
          *(_QWORD *)(*(_QWORD *)(v8 + 24) + 24LL),
          *(_QWORD *)BugCheckOnFailure);
        if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 0x400) == 0 )
          goto LABEL_242;
        Priority[0] = HIDWORD(v73->SecurityQos);
        BugCheckOnFailurea[0] = WORD1(v73->SecurityQos);
        McTemplateK0pqq(
          WORD1(v73->SecurityQos),
          &USBHUB3_ETW_EVENT_DEVICE_URB_COMPLETE,
          &v82,
          *(_QWORD *)(*(_QWORD *)(v8 + 24) + 24LL),
          *(_QWORD *)BugCheckOnFailurea,
          *(_QWORD *)Priority);
      }
      if ( LowPart != 4788299 )
        goto LABEL_240;
      if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 0x400) != 0 )
      {
        Priority[0] = Status;
        McTemplateK0pjq(v72, v71, &v82, *(_QWORD *)(*(_QWORD *)(v8 + 24) + 24LL), &Source1, *(_QWORD *)Priority);
LABEL_240:
        if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 0x400) != 0 )
        {
          Priority[0] = Status;
          BugCheckOnFailure[0] = LowPart;
          McTemplateK0pqq(
            v72,
            &USBHUB3_ETW_EVENT_DEVICE_INTERNAL_IOCTL_COMPLETE,
            &v82,
            *(_QWORD *)(*(_QWORD *)(v8 + 24) + 24LL),
            *(_QWORD *)BugCheckOnFailure,
            *(_QWORD *)Priority);
        }
      }
    }
LABEL_242:
    a2->IoStatus.Status = Status;
    goto LABEL_243;
  }
  v14 = v13 - 1;
  if ( !v14 )
  {
    v67 = a2->Tail.Overlay.CurrentStackLocation;
    *(_OWORD *)&v67[-1].MajorFunction = *(_OWORD *)&v67->MajorFunction;
    *(_OWORD *)&v67[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&v67->Parameters.NotifyDirectoryEx.CompletionFilter;
    *(_OWORD *)(&v67[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&v67->Parameters.SetQuota + 6);
    v67[-1].FileObject = v67->FileObject;
    v67[-1].Control = 0;
    KeInitializeEvent(&Event, NotificationEvent, 0);
    v68 = a2->Tail.Overlay.CurrentStackLocation;
    v68[-1].CompletionRoutine = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *))HUBPDO_SyncCompletionRoutine;
    v68[-1].Context = &Event;
    v69 = WdfDriverGlobals;
    v68[-1].Control = -32;
    v70 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 736))(v69, a1);
    v64 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, IRP *, __int64, int))(WdfFunctions_01015 + 3216))(
            WdfDriverGlobals,
            a1,
            a2,
            v70,
            2);
    if ( v64 >= 0 )
      goto LABEL_225;
    v65 = 71;
    v66 = 3;
    goto LABEL_224;
  }
  v15 = v14 - 1;
  if ( !v15 )
  {
    v61 = a2->Tail.Overlay.CurrentStackLocation;
    *(_OWORD *)&v61[-1].MajorFunction = *(_OWORD *)&v61->MajorFunction;
    *(_OWORD *)&v61[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&v61->Parameters.NotifyDirectoryEx.CompletionFilter;
    *(_OWORD *)(&v61[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&v61->Parameters.SetQuota + 6);
    v61[-1].FileObject = v61->FileObject;
    v61[-1].Control = 0;
    KeInitializeEvent(&Event, NotificationEvent, 0);
    v62 = a2->Tail.Overlay.CurrentStackLocation;
    v62[-1].CompletionRoutine = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *))HUBPDO_SyncCompletionRoutine;
    v62[-1].Context = &Event;
    v63 = WdfDriverGlobals;
    v62[-1].Control = -32;
    v64 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, IRP *, _QWORD, int))(WdfFunctions_01015 + 3216))(
            v63,
            a1,
            a2,
            *(_QWORD *)(*(_QWORD *)(v8 + 16) + 2392LL),
            2);
    if ( v64 >= 0 )
    {
LABEL_225:
      HUBMISC_WaitForSignal(&Event);
      Status = a2->IoStatus.Status;
LABEL_243:
      IofCompleteRequest(a2, 0);
      return Status;
    }
    v65 = 70;
    v66 = 2;
LABEL_224:
    Priority[0] = v64;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v8 + 24) + 8LL) + 1432LL),
      v66,
      5u,
      v65,
      (__int64)&WPP_0e6bdc1f81e733846865473e2191b11e_Traceguids,
      *(_QWORD *)Priority);
    goto LABEL_225;
  }
  if ( v15 == 1 )
  {
    v16 = a2->Tail.Overlay.CurrentStackLocation;
    v17 = WdfDriverGlobals;
    *(_OWORD *)&v16[-1].MajorFunction = *(_OWORD *)&v16->MajorFunction;
    *(_OWORD *)&v16[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&v16->Parameters.NotifyDirectoryEx.CompletionFilter;
    *(_OWORD *)(&v16[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&v16->Parameters.SetQuota + 6);
    v16[-1].FileObject = v16->FileObject;
    v16[-1].Control = 0;
    v18 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01015 + 736))(v17, a1, v9);
    return (unsigned int)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, IRP *, __int64, int))(WdfFunctions_01015 + 3216))(
                           WdfDriverGlobals,
                           a1,
                           a2,
                           v18,
                           2);
  }
  return Status;
}
