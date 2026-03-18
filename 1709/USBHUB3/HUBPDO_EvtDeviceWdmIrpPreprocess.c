/*
 * XREFs of HUBPDO_EvtDeviceWdmIrpPreprocess @ 0x1C00141E0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0pq @ 0x1C000136C (McTemplateK0pq.c)
 *     WPP_RECORDER_SF_d @ 0x1C00019E4 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001DD8 (WPP_RECORDER_SF_.c)
 *     McTemplateK0p @ 0x1C000639C (McTemplateK0p.c)
 *     HUBSM_AddEvent @ 0x1C0009C48 (HUBSM_AddEvent.c)
 *     McTemplateK0pqq @ 0x1C000A7EC (McTemplateK0pqq.c)
 *     McTemplateK0pjq @ 0x1C0010CB8 (McTemplateK0pjq.c)
 *     WPP_RECORDER_SF_q @ 0x1C001129C (WPP_RECORDER_SF_q.c)
 *     HUBPDO_GetHubName @ 0x1C001215C (HUBPDO_GetHubName.c)
 *     HUBPDO_RecordFailure @ 0x1C0012298 (HUBPDO_RecordFailure.c)
 *     HUBPDO_ReturnDeviceConfigInfo @ 0x1C0012410 (HUBPDO_ReturnDeviceConfigInfo.c)
 *     HUBPDO_ValidateURB @ 0x1C00132EC (HUBPDO_ValidateURB.c)
 *     EventWriteUSBHUB3_ETW_EVENT_CLIENT_INITIATED_RECOVERY_ACTION_Wrapper @ 0x1C0017240 (EventWriteUSBHUB3_ETW_EVENT_CLIENT_INITIATED_RECOVERY_ACTION_Wrapper.c)
 *     HUBUCX_GetControllerName @ 0x1C00218E8 (HUBUCX_GetControllerName.c)
 *     HUBUCX_GetDeviceBusInfo @ 0x1C0021A20 (HUBUCX_GetDeviceBusInfo.c)
 *     HUBMISC_WaitForSignal @ 0x1C002A6AC (HUBMISC_WaitForSignal.c)
 *     HUBMISC_VerifierDbgBreak @ 0x1C002A814 (HUBMISC_VerifierDbgBreak.c)
 *     HUBMISC_GenerateControllerSuffix @ 0x1C002B820 (HUBMISC_GenerateControllerSuffix.c)
 *     HUBIDLE_AddEvent @ 0x1C00341EC (HUBIDLE_AddEvent.c)
 *     __security_check_cookie @ 0x1C00389B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0038E70 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0038E80 (memmove.c)
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
  __int64 v29; // rax
  unsigned int AccessState_high; // ebx
  unsigned __int16 *v31; // rdx
  _SECURITY_QUALITY_OF_SERVICE *v32; // rcx
  PVOID v33; // rcx
  unsigned int v34; // ebx
  unsigned __int16 *v35; // rdx
  int v36; // eax
  unsigned int ControllerSuffix; // eax
  unsigned __int16 v38; // r9
  unsigned __int8 v39; // dl
  __int64 v40; // rdx
  _IO_SECURITY_CONTEXT *v41; // rax
  _NAMED_PIPE_CREATE_PARAMETERS *Parameters; // rax
  _IO_SECURITY_CONTEXT *v43; // rax
  __int64 v44; // rcx
  _IO_SECURITY_CONTEXT *v45; // rdx
  __int64 v46; // rax
  unsigned __int8 v47; // cl
  __int16 v48; // ax
  _IO_SECURITY_CONTEXT *v49; // rax
  int v50; // eax
  int v51; // ecx
  _IO_SECURITY_CONTEXT *v52; // rdx
  __int64 v53; // rax
  __int64 v54; // rcx
  __int64 v55; // rcx
  _IO_STACK_LOCATION *v56; // rax
  _IO_STACK_LOCATION *v57; // rax
  PWDF_DRIVER_GLOBALS v58; // rcx
  int v59; // eax
  unsigned __int16 v60; // r9
  unsigned __int8 v61; // dl
  _IO_STACK_LOCATION *v62; // rax
  _IO_STACK_LOCATION *v63; // rax
  PWDF_DRIVER_GLOBALS v64; // rcx
  __int64 v65; // rax
  __int64 v66; // rdx
  __int64 v67; // rcx
  _IO_SECURITY_CONTEXT *v68; // rbx
  ULONG BugCheckOnFailure[2]; // [rsp+20h] [rbp-49h]
  ULONG BugCheckOnFailurea[2]; // [rsp+20h] [rbp-49h]
  ULONG Priority[2]; // [rsp+28h] [rbp-41h]
  struct _KEVENT Event; // [rsp+38h] [rbp-31h] BYREF
  GUID v75; // [rsp+50h] [rbp-19h] BYREF
  __int128 Source1; // [rsp+60h] [rbp-9h] BYREF
  GUID v77; // [rsp+70h] [rbp+7h] BYREF

  Status = 0;
  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C005B070);
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v7 = 3;
  v8 = v4;
  *(_QWORD *)&v75.Data1 = CurrentStackLocation;
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
        (__int64)&WPP_0b66e4f802c5396ff2319e1600a602db_Traceguids,
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
      (__int64)&WPP_0b66e4f802c5396ff2319e1600a602db_Traceguids,
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
        goto LABEL_101;
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
          CurrentStackLocation = *(_IO_STACK_LOCATION **)&v75.Data1;
          goto LABEL_12;
        }
LABEL_101:
        v36 = HUBPDO_ValidateURB(v4, (unsigned __int16 *)SecurityContext, 5LL);
        Status = v36;
        if ( v36 >= 0 )
        {
          CurrentStackLocation = *(_IO_STACK_LOCATION **)&v75.Data1;
          if ( v36 != 128 )
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
          goto LABEL_101;
        if ( v21 == 11 )
        {
          v26 = *(_QWORD *)(v4 + 24);
          if ( *(_WORD *)(v26 + 1990) <= 0x200u )
          {
            SecurityContext->AccessState = *(_ACCESS_STATE **)(v26 + 24);
            goto LABEL_47;
          }
          Status = HUBPDO_ValidateURB(v8, (unsigned __int16 *)SecurityContext, 5LL);
          if ( (Status & 0x80000000) == 0 )
          {
            SecurityQos = SecurityContext[2].SecurityQos;
            v7 = 1;
            if ( SecurityQos )
            {
              if ( (*(&SecurityQos->EffectiveOnly + 1) & 5) != 0 )
                v28 = *(PVOID *)&SecurityQos[2].Length;
              else
                v28 = MmMapLockedPagesSpecifyCache(
                        (PMDL)SecurityQos,
                        0,
                        MmCached,
                        0LL,
                        0,
                        ExDefaultMdlProtection | 0x10u);
            }
            else
            {
              v28 = *(PVOID *)&SecurityContext[1].DesiredAccess;
            }
            if ( v28 )
            {
              if ( BYTE3(SecurityContext[5].AccessState) == 1 )
              {
                AccessState_high = HIDWORD(SecurityContext[1].AccessState);
                v31 = (unsigned __int16 *)(*(_QWORD *)(v8 + 24) + 1988LL);
                if ( AccessState_high > 0x12 )
                  AccessState_high = 18;
              }
              else
              {
                v29 = *(_QWORD *)(v8 + 24);
                if ( BYTE3(SecurityContext[5].AccessState) != 2 || BYTE2(SecurityContext[5].AccessState) )
                {
                  Status = 0;
                  SecurityContext->AccessState = *(_ACCESS_STATE **)(v29 + 24);
                  goto LABEL_53;
                }
                AccessState_high = HIDWORD(SecurityContext[1].AccessState);
                v31 = *(unsigned __int16 **)(v29 + 2016);
                if ( v31[1] < AccessState_high )
                  AccessState_high = v31[1];
              }
              LODWORD(SecurityContext[1].AccessState) |= 1u;
              if ( ((__int64)SecurityContext[1].AccessState & 8) != 0 )
                WORD1(SecurityContext->SecurityQos) = 8;
              memmove(v28, v31, AccessState_high);
              Status = 0;
              HIDWORD(SecurityContext[1].AccessState) = AccessState_high;
            }
            else
            {
              Status = -1073741811;
              HIDWORD(SecurityContext->SecurityQos) = -2147482880;
            }
          }
LABEL_52:
          v7 = 2;
LABEL_53:
          CurrentStackLocation = *(_IO_STACK_LOCATION **)&v75.Data1;
          goto LABEL_21;
        }
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
      if ( WORD2(SecurityContext[5].AccessState) != 7 )
      {
        v23 = *(_QWORD *)(v4 + 24);
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
          (__int64)&WPP_0b66e4f802c5396ff2319e1600a602db_Traceguids);
LABEL_51:
        Status = -1073741637;
        goto LABEL_52;
      }
      if ( (*(_DWORD *)(*(_QWORD *)(v4 + 24) + 2464LL) & 2) != 0 )
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
          v34 = HIDWORD(SecurityContext[1].AccessState);
          v35 = *(unsigned __int16 **)(*(_QWORD *)(v8 + 24) + 2488LL);
          if ( v35[4] < v34 )
            v34 = v35[4];
          memmove(v33, v35, v34);
          HIDWORD(SecurityContext[1].AccessState) = v34;
          goto LABEL_52;
        }
        goto LABEL_51;
      }
      Status = -1073741637;
      v7 = 2;
    }
    CurrentStackLocation = *(_IO_STACK_LOCATION **)&v75.Data1;
    goto LABEL_21;
  }
  if ( LowPart > 0x22043B )
  {
    if ( LowPart > 0x49000B )
    {
      switch ( LowPart )
      {
        case 0x491043u:
          v52 = CurrentStackLocation->Parameters.Create.SecurityContext;
          v52->SecurityQos = *(_SECURITY_QUALITY_OF_SERVICE **)(*(_QWORD *)(v4 + 16) + 2440LL);
          v53 = *(_QWORD *)(v4 + 24);
          *(_OWORD *)&v52->AccessState = *(_OWORD *)(v53 + 1988);
          LOWORD(v52[1].SecurityQos) = *(_WORD *)(v53 + 2004);
          WORD1(v52[1].SecurityQos) = *(_WORD *)(*(_QWORD *)(v8 + 24) + 2192LL);
          WORD2(v52[1].SecurityQos) = *(_WORD *)(*(_QWORD *)(v8 + 24) + 2194LL);
          v52[2].AccessState = *(_ACCESS_STATE **)(*(_QWORD *)(v8 + 24) + 2560LL);
          v52[2].DesiredAccess = *(_DWORD *)(*(_QWORD *)(v8 + 24) + 2568LL);
          BYTE2(v52[1].DesiredAccess) = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v8 + 24) + 8LL) + 202LL);
          HIWORD(v52[1].AccessState) = *(_WORD *)(*(_QWORD *)(v8 + 24) + 2202LL);
          LOWORD(v52[1].DesiredAccess) = *(_WORD *)(*(_QWORD *)(v8 + 24) + 2204LL);
          v9 = *(_QWORD *)(v8 + 16);
          LOWORD(v52[1].FullCreateOptions) = *(_WORD *)(v9 + 2484)
                                           + *(_WORD *)(*(_QWORD *)(v8 + 24) + 2574LL)
                                           + *(_WORD *)(v9 + 1180);
          v54 = *(_QWORD *)(v8 + 24);
          if ( (*(_DWORD *)(v54 + 2216) & 1) != 0 )
          {
            HIWORD(v52[1].SecurityQos) = *(unsigned __int8 *)(v54 + 2197);
            LOBYTE(v52[1].AccessState) = *(_BYTE *)(*(_QWORD *)(v8 + 16) + 232LL);
          }
          else
          {
            HIWORD(v52[1].SecurityQos) = *(_WORD *)(v9 + 2470);
            LOBYTE(v52[1].AccessState) = *(_BYTE *)(v9 + 2472);
          }
          v55 = *(_QWORD *)(v8 + 24);
          if ( (*(_DWORD *)(v55 + 2216) & 2) != 0 )
          {
            WORD1(v52[1].AccessState) = *(_WORD *)(v55 + 2200);
            BYTE4(v52[1].AccessState) = *(_BYTE *)(*(_QWORD *)(v8 + 16) + 232LL);
          }
          else
          {
            WORD1(v52[1].AccessState) = *(_WORD *)(v9 + 2474);
            BYTE4(v52[1].AccessState) = *(_BYTE *)(v9 + 2476);
          }
          if ( (*(_DWORD *)(v9 + 2488) & 1) != 0 )
            LODWORD(v52[2].SecurityQos) |= 1u;
          if ( (*(_DWORD *)(*(_QWORD *)(v8 + 24) + 1632LL) & 0x2000) != 0 )
            LODWORD(v52[2].SecurityQos) |= 2u;
          goto LABEL_134;
        case 0x49104Bu:
          v49 = CurrentStackLocation->Parameters.Create.SecurityContext;
          v7 = 1;
          Source1 = *(_OWORD *)&v49->DesiredAccess;
          HIDWORD(v49[1].AccessState) = 0;
          if ( RtlCompareMemory(&Source1, &GUID_USB_CAPABILITY_FUNCTION_SUSPEND, 0x10uLL) == 16 )
          {
            v50 = -((*(_DWORD *)(*(_QWORD *)(v8 + 24) + 1456LL) & 0x10000) != 0);
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
              v51 = *(_DWORD *)(*(_QWORD *)(v8 + 24) + 1456LL) & 0x800;
            }
            else if ( RtlCompareMemory(&Source1, &GUID_USB_CAPABILITY_DEVICE_CONNECTION_HIGH_SPEED_COMPATIBLE, 0x10uLL) == 16 )
            {
              v51 = *(_DWORD *)(*(_QWORD *)(v8 + 24) + 1456LL) & 0x900;
            }
            else
            {
              if ( RtlCompareMemory(&Source1, &GUID_USB_CAPABILITY_DEVICE_CONNECTION_FULL_SPEED_COMPATIBLE, 0x10uLL) != 16 )
              {
                if ( RtlCompareMemory(&Source1, &GUID_USB_CAPABILITY_DEVICE_CONNECTION_LOW_SPEED_COMPATIBLE, 0x10uLL) == 16 )
                  v7 = 2;
                goto LABEL_21;
              }
              v51 = *(_DWORD *)(*(_QWORD *)(v8 + 24) + 1456LL) & 0xB00;
            }
            v50 = -(v51 == 0);
          }
          v7 = 2;
          Status = v50 & 0xC00000BB;
          goto LABEL_21;
        case 0x49104Fu:
          goto LABEL_167;
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
          goto LABEL_167;
        case 0x22043Fu:
          v45 = CurrentStackLocation->Parameters.Create.SecurityContext;
          if ( v45 )
          {
            v46 = *(_QWORD *)(v4 + 16);
            *(_OWORD *)&v45->SecurityQos = *(_OWORD *)(v46 + 296);
            *(_OWORD *)&v45->DesiredAccess = *(_OWORD *)(v46 + 312);
            v47 = *(_BYTE *)(*(_QWORD *)(v8 + 16) + 232LL);
            v48 = *(_WORD *)(v8 + 48);
            if ( v47 )
              *((_WORD *)&v45->DesiredAccess + v47) = v48;
            else
              LOWORD(v45->DesiredAccess) = v48;
          }
          else
          {
            WPP_RECORDER_SF_(
              *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 24) + 8LL) + 1432LL),
              3u,
              5u,
              0xBu,
              (__int64)&WPP_0b66e4f802c5396ff2319e1600a602db_Traceguids);
            Status = -1073741811;
          }
          goto LABEL_35;
        case 0x220443u:
          goto LABEL_133;
        case 0x22044Fu:
          ControllerSuffix = HUBPDO_ReturnDeviceConfigInfo(v4, (__int64)a2);
          goto LABEL_117;
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
            v38 = 66;
          }
          else
          {
            Status = -1073741101;
            v7 = 2;
            v38 = 65;
          }
          goto LABEL_120;
        case 0x220FBBu:
          v44 = *(_QWORD *)(v4 + 24);
          if ( (*(_DWORD *)(v44 + 1644) & 0x1000000) == 0 )
          {
            Status = -1073741275;
            goto LABEL_35;
          }
          ControllerSuffix = HUBMISC_GenerateControllerSuffix(v44, CurrentStackLocation->Parameters.WMI.ProviderId, 5LL);
          goto LABEL_117;
        case 0x490003u:
          v43 = CurrentStackLocation->Parameters.Create.SecurityContext;
          CurrentStackLocation->Parameters.QueryDirectory.FileName = *(_UNICODE_STRING **)(*(_QWORD *)(v8 + 24) + 24LL);
          if ( (v43->DesiredAccess & 1) != 0 )
            _InterlockedOr((volatile signed __int32 *)(v8 + 32), 0x10u);
          goto LABEL_12;
        case 0x490007u:
LABEL_167:
          CurrentStackLocation->Parameters.QueryDirectory.FileName = *(_UNICODE_STRING **)(*(_QWORD *)(v4 + 24) + 24LL);
          goto LABEL_12;
      }
    }
LABEL_190:
    Status = a2->IoStatus.Status;
    goto LABEL_134;
  }
  if ( LowPart == 2229307 )
    goto LABEL_133;
  if ( LowPart > 0x220027 )
  {
    switch ( LowPart )
    {
      case 0x22002Bu:
        ControllerSuffix = HUBPDO_RecordFailure(v4, (__int64)a2);
        goto LABEL_117;
      case 0x220420u:
        ControllerSuffix = HUBUCX_GetDeviceBusInfo(
                             *(_QWORD *)(v4 + 16),
                             *(_QWORD *)(*(_QWORD *)(v4 + 24) + 24LL),
                             CurrentStackLocation->Parameters.WMI.ProviderId);
        goto LABEL_117;
      case 0x220424u:
        ControllerSuffix = HUBUCX_GetControllerName(
                             *(_QWORD *)(v4 + 16),
                             CurrentStackLocation->Parameters.WMI.ProviderId,
                             CurrentStackLocation->Parameters.Create.Options);
        goto LABEL_117;
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
        goto LABEL_190;
    }
    goto LABEL_133;
  }
  switch ( LowPart )
  {
    case 0x220027u:
      Parameters = CurrentStackLocation->Parameters.CreatePipe.Parameters;
      if ( !Parameters || !*(_QWORD *)&Parameters->NamedPipeType )
      {
        Status = -1073741224;
        v7 = 2;
        v38 = 69;
        goto LABEL_120;
      }
      *(_QWORD *)&v77.Data1 = 0LL;
      *(_QWORD *)v77.Data4 = 0LL;
      if ( *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters )
        (*(void (__fastcall **)(IRP *, GUID *, __int64))&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters)(a2, &v77, 5LL);
      if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 0x400) != 0 )
        McTemplateK0p(
          v5,
          &USBHUB3_ETW_EVENT_DEVICE_SUBMIT_IDLE_NOTIFICATION_START,
          &v77,
          *(_QWORD *)(*(_QWORD *)(v8 + 24) + 24LL));
      Status = HUBIDLE_AddEvent(v8 + 72, 6003LL, a2);
      v7 = 6;
      goto LABEL_21;
    case 0x220007u:
      if ( (*(_DWORD *)(v4 + 32) & 1) != 0 )
      {
        if ( !KeGetCurrentIrql() )
          goto LABEL_21;
        Status = -1073741811;
        v7 = 2;
        v38 = 64;
      }
      else
      {
        Status = -1073741101;
        v7 = 2;
        v38 = 63;
      }
      goto LABEL_120;
    case 0x22000Fu:
LABEL_133:
      Status = -1073741637;
LABEL_134:
      v7 = 2;
      goto LABEL_21;
  }
  v7 = 4;
  if ( LowPart == 2228243 )
  {
    if ( KeGetCurrentIrql() )
    {
      Status = -1073741811;
      v7 = 2;
      v38 = 61;
    }
    else
    {
      v41 = CurrentStackLocation->Parameters.Create.SecurityContext;
      if ( v41 )
      {
        LODWORD(v41->SecurityQos) = 0;
        CurrentStackLocation->Parameters.QueryDirectory.FileName = (_UNICODE_STRING *)v8;
        goto LABEL_21;
      }
      Status = -1073741811;
      v7 = 2;
      v38 = 62;
    }
    v39 = 2;
LABEL_121:
    WPP_RECORDER_SF_(
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v8 + 24) + 8LL) + 1432LL),
      v39,
      5u,
      v38,
      (__int64)&WPP_0b66e4f802c5396ff2319e1600a602db_Traceguids);
    goto LABEL_21;
  }
  if ( LowPart == 2228247 || LowPart == 2228251 )
    goto LABEL_134;
  if ( LowPart != 2228255 )
  {
    if ( LowPart == 2228256 )
    {
      ControllerSuffix = HUBPDO_GetHubName(v4, a2);
LABEL_117:
      Status = ControllerSuffix;
      goto LABEL_35;
    }
    goto LABEL_190;
  }
  v7 = 2;
  if ( KeGetCurrentIrql() )
  {
    Status = -1073741811;
    v38 = 67;
LABEL_120:
    v39 = 3;
    goto LABEL_121;
  }
  if ( _InterlockedCompareExchange((volatile signed __int32 *)(v4 + 4), 1, 0) )
  {
    v38 = 68;
    goto LABEL_120;
  }
  v40 = *(_QWORD *)(v4 + 24);
  if ( (*(_DWORD *)(v40 + 2436) & 0x400) != 0 )
    HUBMISC_VerifierDbgBreak("DeviceHwVerifierClientInitiatedCyclePort", v40 + 504);
  EventWriteUSBHUB3_ETW_EVENT_CLIENT_INITIATED_RECOVERY_ACTION_Wrapper(*(_QWORD *)(v8 + 24), 2228255LL, 0LL);
  HUBSM_AddEvent(*(_QWORD *)(v8 + 24) + 504LL, 4011);
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
      *(_QWORD *)&v75.Data1 = 0LL;
      *(_QWORD *)v75.Data4 = 0LL;
      if ( *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters )
        (*(void (__fastcall **)(IRP *, GUID *))&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters)(a2, &v75);
      if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 0x400) != 0 )
      {
        BugCheckOnFailure[0] = LowPart;
        McTemplateK0pq(
          v67,
          &USBHUB3_ETW_EVENT_DEVICE_INTERNAL_IOCTL_START,
          &v75,
          *(_QWORD *)(*(_QWORD *)(v8 + 24) + 24LL),
          *(_QWORD *)BugCheckOnFailure);
      }
      if ( LowPart == 2228227 )
      {
        v68 = CurrentStackLocation->Parameters.Create.SecurityContext;
        if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 0x400) == 0 )
          goto LABEL_237;
        BugCheckOnFailure[0] = WORD1(v68->SecurityQos);
        McTemplateK0pq(
          v67,
          &USBHUB3_ETW_EVENT_DEVICE_URB_START,
          &v75,
          *(_QWORD *)(*(_QWORD *)(v8 + 24) + 24LL),
          *(_QWORD *)BugCheckOnFailure);
        if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 0x400) == 0 )
          goto LABEL_237;
        Priority[0] = HIDWORD(v68->SecurityQos);
        BugCheckOnFailurea[0] = WORD1(v68->SecurityQos);
        McTemplateK0pqq(
          WORD1(v68->SecurityQos),
          &USBHUB3_ETW_EVENT_DEVICE_URB_COMPLETE,
          &v75,
          *(_QWORD *)(*(_QWORD *)(v8 + 24) + 24LL),
          *(_QWORD *)BugCheckOnFailurea,
          *(_QWORD *)Priority);
      }
      if ( LowPart != 4788299 )
        goto LABEL_235;
      if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 0x400) != 0 )
      {
        Priority[0] = Status;
        McTemplateK0pjq(v67, v66, &v75, *(_QWORD *)(*(_QWORD *)(v8 + 24) + 24LL), &Source1, *(_QWORD *)Priority);
LABEL_235:
        if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 0x400) != 0 )
        {
          Priority[0] = Status;
          BugCheckOnFailure[0] = LowPart;
          McTemplateK0pqq(
            v67,
            &USBHUB3_ETW_EVENT_DEVICE_INTERNAL_IOCTL_COMPLETE,
            &v75,
            *(_QWORD *)(*(_QWORD *)(v8 + 24) + 24LL),
            *(_QWORD *)BugCheckOnFailure,
            *(_QWORD *)Priority);
        }
      }
    }
LABEL_237:
    a2->IoStatus.Status = Status;
    goto LABEL_238;
  }
  v14 = v13 - 1;
  if ( !v14 )
  {
    v62 = a2->Tail.Overlay.CurrentStackLocation;
    *(_OWORD *)&v62[-1].MajorFunction = *(_OWORD *)&v62->MajorFunction;
    *(_OWORD *)&v62[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&v62->Parameters.NotifyDirectoryEx.CompletionFilter;
    *(_OWORD *)(&v62[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&v62->Parameters.SetQuota + 6);
    v62[-1].FileObject = v62->FileObject;
    v62[-1].Control = 0;
    KeInitializeEvent(&Event, NotificationEvent, 0);
    v63 = a2->Tail.Overlay.CurrentStackLocation;
    v63[-1].CompletionRoutine = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *))HUBPDO_SyncCompletionRoutine;
    v63[-1].Context = &Event;
    v64 = WdfDriverGlobals;
    v63[-1].Control = -32;
    v65 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 736))(v64, a1);
    v59 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, IRP *, __int64, int))(WdfFunctions_01015 + 3216))(
            WdfDriverGlobals,
            a1,
            a2,
            v65,
            2);
    if ( v59 >= 0 )
      goto LABEL_220;
    v60 = 71;
    v61 = 3;
    goto LABEL_219;
  }
  v15 = v14 - 1;
  if ( !v15 )
  {
    v56 = a2->Tail.Overlay.CurrentStackLocation;
    *(_OWORD *)&v56[-1].MajorFunction = *(_OWORD *)&v56->MajorFunction;
    *(_OWORD *)&v56[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&v56->Parameters.NotifyDirectoryEx.CompletionFilter;
    *(_OWORD *)(&v56[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&v56->Parameters.SetQuota + 6);
    v56[-1].FileObject = v56->FileObject;
    v56[-1].Control = 0;
    KeInitializeEvent(&Event, NotificationEvent, 0);
    v57 = a2->Tail.Overlay.CurrentStackLocation;
    v57[-1].CompletionRoutine = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *))HUBPDO_SyncCompletionRoutine;
    v57[-1].Context = &Event;
    v58 = WdfDriverGlobals;
    v57[-1].Control = -32;
    v59 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, IRP *, _QWORD, int))(WdfFunctions_01015 + 3216))(
            v58,
            a1,
            a2,
            *(_QWORD *)(*(_QWORD *)(v8 + 16) + 2392LL),
            2);
    if ( v59 >= 0 )
    {
LABEL_220:
      HUBMISC_WaitForSignal(&Event);
      Status = a2->IoStatus.Status;
LABEL_238:
      IofCompleteRequest(a2, 0);
      return Status;
    }
    v60 = 70;
    v61 = 2;
LABEL_219:
    Priority[0] = v59;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v8 + 24) + 8LL) + 1432LL),
      v61,
      5u,
      v60,
      (__int64)&WPP_0b66e4f802c5396ff2319e1600a602db_Traceguids,
      *(_QWORD *)Priority);
    goto LABEL_220;
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
