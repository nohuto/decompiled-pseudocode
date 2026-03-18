/*
 * XREFs of Controller_WdfEvtDeviceD0EntryPostInterruptsEnabled @ 0x1C0006190
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001A20 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C0004510 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_qd @ 0x1C0005F70 (WPP_RECORDER_SF_qd.c)
 *     RootHub_DetectAndAcknowledgePortResume @ 0x1C0006330 (RootHub_DetectAndAcknowledgePortResume.c)
 *     Controller_Start @ 0x1C0006440 (Controller_Start.c)
 *     WPP_RECORDER_SF_qLL @ 0x1C0006A60 (WPP_RECORDER_SF_qLL.c)
 *     McTemplateK0pqqh @ 0x1C0007870 (McTemplateK0pqqh.c)
 *     McTemplateK0pqqq @ 0x1C0007904 (McTemplateK0pqqq.c)
 *     _guard_dispatch_icall_nop @ 0x1C00086E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0008A40 (memset.c)
 *     Command_SendCommand @ 0x1C000D784 (Command_SendCommand.c)
 *     Debug_FreAssertMsg @ 0x1C00160A4 (Debug_FreAssertMsg.c)
 *     Register_GetAllExtendedCapability @ 0x1C001F3A4 (Register_GetAllExtendedCapability.c)
 *     Register_GetExtendedCapabilityTotalSize @ 0x1C001F4A4 (Register_GetExtendedCapabilityTotalSize.c)
 *     XilRegister_ReadUlong @ 0x1C001F6D0 (XilRegister_ReadUlong.c)
 *     Etw_ControllerFirmareVersionUpdate @ 0x1C0038500 (Etw_ControllerFirmareVersionUpdate.c)
 */

__int64 __fastcall Controller_WdfEvtDeviceD0EntryPostInterruptsEnabled(__int64 a1, unsigned int a2)
{
  __int64 v4; // rsi
  unsigned int v5; // eax
  int v6; // r8d
  unsigned int v7; // r14d
  int v8; // eax
  __int64 v9; // rcx
  _BOOL8 v10; // r8
  unsigned int v11; // edi
  __int64 v12; // rdi
  int v13; // r15d
  unsigned int i; // ebx
  __int64 v15; // r14
  __int64 *v16; // r14
  __int64 v18; // rcx
  __int16 v19; // ax
  _QWORD *PoolWithTag; // r12
  __int16 v21; // cx
  unsigned int v22; // eax
  unsigned int v23; // eax
  __int64 (__fastcall *v24)(); // rax
  __int64 v25; // r13
  int ExtendedCapabilityTotalSize; // r12d
  PVOID v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rdx
  __int64 v34; // rax
  unsigned int Ulong; // eax
  unsigned __int8 v36; // bl
  unsigned int v37; // eax
  unsigned int v38; // eax
  unsigned int v39; // eax
  unsigned int v40; // eax
  unsigned int v41; // eax
  __int64 v42; // r8
  unsigned int v43; // edx
  unsigned int Arg2[2]; // [rsp+28h] [rbp-50h]
  __int64 Arg3; // [rsp+30h] [rbp-48h]
  unsigned int v46; // [rsp+90h] [rbp+18h]
  __int64 v47; // [rsp+98h] [rbp+20h]

  v4 = *(_QWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                     WdfDriverGlobals,
                     a1,
                     off_1C004E408)
                 + 8);
  v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 3104))(WdfDriverGlobals, a1);
  v7 = v5;
  v46 = v5;
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc & 8) != 0 )
    McTemplateK0pqqh(
      *(unsigned __int8 *)(v4 + 396),
      (unsigned int)&USBXHCI_ETW_EVENT_CONTROLLER_D0_ENTRY_POST_INTERRUPTS_START,
      v6,
      *(_QWORD *)(v4 + 8),
      a2,
      v5,
      *(_BYTE *)(v4 + 396));
  WPP_RECORDER_SF_qLL(
    *(_QWORD *)(v4 + 72),
    4,
    4,
    71,
    (__int64)&WPP_4b19db8c36bc33e5c568879992fcbff3_Traceguids,
    a1,
    a2,
    *(_DWORD *)(v4 + 348));
  LODWORD(Arg3) = a2;
  WPP_RECORDER_SF_qd(
    *(_QWORD *)(v4 + 72),
    4u,
    4u,
    0x74u,
    (__int64)&WPP_4b19db8c36bc33e5c568879992fcbff3_Traceguids,
    v4,
    Arg3);
  v8 = Controller_Start(v4);
  v11 = v8;
  if ( v8 < 0 )
  {
    Arg2[0] = v8;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(v4 + 72),
      2u,
      4u,
      0x48u,
      (__int64)&WPP_4b19db8c36bc33e5c568879992fcbff3_Traceguids,
      *(_QWORD *)Arg2);
    goto LABEL_10;
  }
  v12 = *(_QWORD *)(v4 + 152);
  v13 = 1;
  for ( i = 1; i <= *(_DWORD *)(v12 + 16); ++i )
    RootHub_DetectAndAcknowledgePortResume(v12, i, 1LL);
  v15 = *(_QWORD *)(v4 + 144);
  v11 = 0;
  if ( a2 == 5 )
  {
    v18 = *(_QWORD *)(v15 + 8);
    v19 = *(_WORD *)(v18 + 184);
    if ( v19 == 4147 || v19 == 6418 || v19 == 6945 || !_stricmp((const char *)(v18 + 240), "NVDA") )
    {
      *(_QWORD *)(*(_QWORD *)(v15 + 8) + 264LL) = -1LL;
      PoolWithTag = ExAllocatePoolWithTag(*((POOL_TYPE *)&WPP_MAIN_CB.AlignmentRequirement + 1), 0x80uLL, 0x49434858u);
      if ( !PoolWithTag )
      {
        WPP_RECORDER_SF_(
          *(_QWORD *)(v15 + 16),
          3u,
          7u,
          0x19u,
          (__int64)&WPP_4a3e8e10b96b3f34321a03f5c4659816_Traceguids);
        goto LABEL_7;
      }
      v21 = *(_WORD *)(*(_QWORD *)(v15 + 8) + 184LL);
      if ( v21 == 4147 || v21 == 6418 )
      {
        memset(PoolWithTag, 0, 0x80uLL);
        *PoolWithTag = v15;
        KeInitializeEvent((PRKEVENT)(PoolWithTag + 13), SynchronizationEvent, 0);
        v24 = Command_RenesasGetFirmwareVersionCommandCompletion;
      }
      else
      {
        if ( v21 == 6945 )
        {
          memset(PoolWithTag, 0, 0x80uLL);
          *PoolWithTag = v15;
          KeInitializeEvent((PRKEVENT)(PoolWithTag + 13), SynchronizationEvent, 0);
          PoolWithTag[7] = PoolWithTag;
          PoolWithTag[6] = Command_ASMediaGetFirmwareVersionLowCommandCompletion;
          v22 = *((_DWORD *)PoolWithTag + 11) & 0xFFFFD3FF;
          *((_WORD *)PoolWithTag + 35) = 3;
          *((_DWORD *)PoolWithTag + 11) = v22 | 0xD000;
          Command_SendCommand(v15, PoolWithTag + 1);
          KeWaitForSingleObject(PoolWithTag + 13, Executive, 0, 0, 0LL);
          if ( *(_QWORD *)(*(_QWORD *)(v15 + 8) + 264LL) == -1LL )
          {
LABEL_30:
            ExFreePoolWithTag(PoolWithTag, 0x49434858u);
            goto LABEL_7;
          }
          memset(PoolWithTag, 0, 0x80uLL);
          *PoolWithTag = v15;
          KeInitializeEvent((PRKEVENT)(PoolWithTag + 13), SynchronizationEvent, 0);
          PoolWithTag[6] = Command_ASMediaGetFirmwareVersionHighCommandCompletion;
          v23 = *((_DWORD *)PoolWithTag + 11) & 0xFFFF03FF | 0xCC00;
LABEL_28:
          PoolWithTag[7] = PoolWithTag;
          *((_DWORD *)PoolWithTag + 11) = v23;
          *((_WORD *)PoolWithTag + 35) = 3;
          Command_SendCommand(v15, PoolWithTag + 1);
          KeWaitForSingleObject(PoolWithTag + 13, Executive, 0, 0, 0LL);
          if ( *(_QWORD *)(*(_QWORD *)(v15 + 8) + 264LL) != -1LL )
            Etw_ControllerFirmareVersionUpdate();
          goto LABEL_30;
        }
        memset(PoolWithTag, 0, 0x80uLL);
        *PoolWithTag = v15;
        KeInitializeEvent((PRKEVENT)(PoolWithTag + 13), SynchronizationEvent, 0);
        v24 = Command_NvidiaGetFirmwareVersionCommandCompletion;
      }
      PoolWithTag[6] = v24;
      v23 = *((_DWORD *)PoolWithTag + 11) & 0xFFFF03FF | 0xC400;
      goto LABEL_28;
    }
  }
LABEL_7:
  if ( (*(_BYTE *)(v4 + 272) & 0x10) != 0 )
  {
    v11 = -1073741637;
    WPP_RECORDER_SF_(*(_QWORD *)(v4 + 72), 2u, 4u, 0x4Bu, (__int64)&WPP_4b19db8c36bc33e5c568879992fcbff3_Traceguids);
  }
  else
  {
    v16 = *(__int64 **)(v4 + 160);
    if ( !v16[2] )
    {
      v25 = *(_QWORD *)(*v16 + 88);
      if ( *(_BYTE *)(*v16 + 441) && KeGetCurrentIrql() )
        Debug_FreAssertMsg(
          "Code Path Requires Passive Level",
          0LL,
          "onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\wmi.c",
          154LL);
      ExtendedCapabilityTotalSize = Register_GetExtendedCapabilityTotalSize(v25);
      *((_DWORD *)v16 + 2) = ExtendedCapabilityTotalSize + 184;
      v27 = ExAllocatePoolWithTag(
              *((POOL_TYPE *)&WPP_MAIN_CB.AlignmentRequirement + 1),
              (unsigned int)(ExtendedCapabilityTotalSize + 184),
              0x49434858u);
      v16[2] = (__int64)v27;
      if ( v27 )
      {
        memset(v27, 0, *((unsigned int *)v16 + 2));
        *(_DWORD *)v16[2] = *(_DWORD *)(*v16 + 180);
        *(_DWORD *)(v16[2] + 4) = *(unsigned __int16 *)(*v16 + 184);
        *(_DWORD *)(v16[2] + 8) = *(unsigned __int16 *)(*v16 + 188);
        *(_DWORD *)(v16[2] + 12) = *(unsigned __int8 *)(*v16 + 192);
        v28 = *v16;
        v29 = v16[2];
        *(_DWORD *)(v29 + 16) = *(_DWORD *)(*v16 + 240);
        *(_BYTE *)(v29 + 20) = *(_BYTE *)(v28 + 244);
        v30 = *v16;
        v31 = v16[2];
        *(_DWORD *)(v31 + 21) = *(_DWORD *)(*v16 + 245);
        *(_BYTE *)(v31 + 25) = *(_BYTE *)(v30 + 249);
        v32 = *v16;
        v33 = v16[2];
        *(_DWORD *)(v33 + 26) = *(_DWORD *)(*v16 + 250);
        *(_BYTE *)(v33 + 30) = *(_BYTE *)(v32 + 254);
        v9 = v16[2];
        *(_QWORD *)(v9 + 40) = *(_QWORD *)(*v16 + 264);
        v34 = *(_QWORD *)(v25 + 24);
        v47 = v34;
        if ( v34 )
        {
          Ulong = XilRegister_ReadUlong(v25, v34);
          v36 = Ulong;
          *(_DWORD *)(v16[2] + 48) = HIBYTE(Ulong);
          *(_DWORD *)(v16[2] + 52) = BYTE2(Ulong);
          v37 = XilRegister_ReadUlong(v25, v47 + 4);
          *(_DWORD *)(v16[2] + 56) = (unsigned __int8)v37;
          *(_DWORD *)(v16[2] + 60) = (v37 >> 8) & 0x7FF;
          *(_DWORD *)(v16[2] + 64) = HIBYTE(v37);
          v38 = XilRegister_ReadUlong(v25, v47 + 8);
          *(_DWORD *)(v16[2] + 68) = v38 & 0xF;
          *(_DWORD *)(v16[2] + 72) = (unsigned __int8)v38 >> 4;
          *(_DWORD *)(v16[2] + 76) = (v38 >> 26) & 1;
          *(_DWORD *)(v16[2] + 80) = ((v38 >> 11) | v38 & 0x3E00000) >> 16;
          v39 = XilRegister_ReadUlong(v25, v47 + 12);
          *(_DWORD *)(v16[2] + 84) = (unsigned __int8)v39;
          *(_DWORD *)(v16[2] + 88) = HIWORD(v39);
          v40 = XilRegister_ReadUlong(v25, v47 + 16);
          *(_DWORD *)(v16[2] + 92) = v40 & 1;
          *(_DWORD *)(v16[2] + 96) = (v40 >> 1) & 1;
          *(_DWORD *)(v16[2] + 100) = (v40 >> 2) & 1;
          *(_DWORD *)(v16[2] + 104) = (v40 >> 3) & 1;
          *(_DWORD *)(v16[2] + 108) = (v40 >> 4) & 1;
          *(_DWORD *)(v16[2] + 112) = (v40 >> 5) & 1;
          *(_DWORD *)(v16[2] + 116) = (v40 >> 6) & 1;
          *(_DWORD *)(v16[2] + 120) = (v40 >> 7) & 1;
          *(_DWORD *)(v16[2] + 124) = (v40 >> 8) & 1;
          *(_DWORD *)(v16[2] + 128) = (v40 >> 9) & 1;
          *(_DWORD *)(v16[2] + 132) = (v40 >> 10) & 1;
          *(_DWORD *)(v16[2] + 136) = (v40 >> 11) & 1;
          v9 = v16[2];
          *(_DWORD *)(v9 + 140) = (unsigned __int16)v40 >> 12;
          if ( v36 >= 0x20u )
          {
            v41 = XilRegister_ReadUlong(v25, v47 + 28);
            v42 = 148LL;
            *(_DWORD *)(v16[2] + 144) = v41 & 1;
            do
            {
              v43 = v41 >> v13++;
              v9 = v16[2];
              *(_DWORD *)(v42 + v9) = v43 & 1;
              v42 += 4LL;
            }
            while ( v42 < 172 );
          }
        }
        v10 = *(_DWORD *)(*(_QWORD *)(*v16 + 128) + 16LL) != 0;
        *(_DWORD *)(v16[2] + 172) = v10;
        if ( ExtendedCapabilityTotalSize )
          Register_GetAllExtendedCapability(v25, v16[2] + 176);
      }
      else
      {
        WPP_RECORDER_SF_(
          *(_QWORD *)(*v16 + 72),
          2u,
          0xFu,
          0xBu,
          (__int64)&WPP_44833d0f59ba33c5d467df1125fc6236_Traceguids);
        *((_DWORD *)v16 + 2) = 0;
      }
    }
  }
  v7 = v46;
LABEL_10:
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc & 8) != 0 )
    McTemplateK0pqqq(
      (PMCGEN_TRACE_CONTEXT)v9,
      &USBXHCI_ETW_EVENT_CONTROLLER_D0_ENTRY_POST_INTERRUPTS_COMPLETE,
      (const GUID *)v10,
      *(const void **)(v4 + 8),
      a2,
      v7,
      v11);
  return v11;
}
