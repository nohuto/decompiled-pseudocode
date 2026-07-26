/*
 * XREFs of ndisPnPPortActivation @ 0x1C003C5AC
 * Callers:
 *     NdisMNetPnPEvent @ 0x1C00EAF10 (NdisMNetPnPEvent.c)
 * Callees:
 *     ndisIfSetInterfaceState @ 0x1C0008250 (ndisIfSetInterfaceState.c)
 *     __security_check_cookie @ 0x1C00245E0 (__security_check_cookie.c)
 *     WPP_SF_q @ 0x1C0039450 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C0039484 (WPP_SF_qD.c)
 *     McTemplateK0jqxq @ 0x1C003BDB8 (McTemplateK0jqxq.c)
 *     McTemplateK0jqxqq @ 0x1C003BE48 (McTemplateK0jqxqq.c)
 *     ndisFindPortByPortNumber @ 0x1C003C57C (ndisFindPortByPortNumber.c)
 *     ndisRollbackPortActivation @ 0x1C003D00C (ndisRollbackPortActivation.c)
 *     ndisMSetMiniportReadyForBinding @ 0x1C00C103C (ndisMSetMiniportReadyForBinding.c)
 *     ndisDevicePnPEventNotifyFiltersAndAllTransports @ 0x1C00C4168 (ndisDevicePnPEventNotifyFiltersAndAllTransports.c)
 *     ndisInitializeNetPnPEvent @ 0x1C00C44BC (ndisInitializeNetPnPEvent.c)
 */

__int64 __fastcall ndisPnPPortActivation(struct _NDIS_MINIPORT_BLOCK *a1, __int64 a2)
{
  unsigned int v3; // esi
  int v4; // r14d
  KIRQL v6; // r15
  __int64 *v7; // rdi
  __int64 v8; // rcx
  __int64 v9; // rcx
  unsigned int Flags; // eax
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  unsigned int v14; // edx
  __int64 *PortByPortNumber; // rax
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rcx
  _BYTE v20[4]; // [rsp+40h] [rbp-F8h] BYREF
  int v21; // [rsp+44h] [rbp-F4h]
  int v22; // [rsp+48h] [rbp-F0h]
  __int64 v23; // [rsp+50h] [rbp-E8h]
  int v24; // [rsp+58h] [rbp-E0h]

  v3 = 0;
  v4 = 0;
  if ( (unsigned __int8)byte_1C009875E >= 4u )
    WPP_SF_q(0xEu, &WPP_496de192e5de378341c8fe36eb970aad_Traceguids, (__int64)a1);
  v6 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
  a1->MiniportThread = KeGetCurrentThread();
  a1->LockDbg = 2359724;
  v7 = *(__int64 **)(a2 + 16);
  if ( v7 )
  {
    if ( (a1->PnPFlags & 0x80u) == 0 || *((_DWORD *)v7 + 9) )
    {
      while ( 1 )
      {
        v14 = *((_DWORD *)v7 + 9);
        if ( !v14 )
          break;
        PortByPortNumber = ndisFindPortByPortNumber((__int64)a1, v14);
        if ( !PortByPortNumber )
        {
          if ( (unsigned __int8)byte_1C009875E >= 2u )
            WPP_SF_qD(0x14u, &WPP_496de192e5de378341c8fe36eb970aad_Traceguids, (__int64)a1, *((_DWORD *)v7 + 9));
          if ( (Microsoft_Windows_NDISEnableBits & 0x20000000) != 0 )
            McTemplateK0jqxqq(
              v16,
              &PnPPortActivationFailed,
              &a1->InterfaceGuid,
              (__int64)&a1->InterfaceGuid,
              a1->IfIndex,
              a1->NetLuid.Value,
              3,
              *((_DWORD *)v7 + 9));
          v3 = -1071448019;
          ndisRollbackPortActivation(a1, *(_QWORD *)(a2 + 16), v7);
          v4 = 0;
          goto LABEL_49;
        }
        if ( *((_DWORD *)PortByPortNumber + 4) != 2 )
        {
          v3 = -1071448018;
          ndisRollbackPortActivation(a1, *(_QWORD *)(a2 + 16), v7);
          v4 = 0;
          if ( (unsigned __int8)byte_1C009875E >= 2u )
            WPP_SF_qD(0x15u, &WPP_496de192e5de378341c8fe36eb970aad_Traceguids, (__int64)a1, *((_DWORD *)v7 + 9));
          if ( (Microsoft_Windows_NDISEnableBits & 0x20000000) != 0 )
            McTemplateK0jqxqq(
              v17,
              &PnPPortActivationFailed,
              &a1->InterfaceGuid,
              (__int64)&a1->InterfaceGuid,
              a1->IfIndex,
              a1->NetLuid.Value,
              4,
              *((_DWORD *)v7 + 9));
          goto LABEL_49;
        }
        ++a1->NumberOfActivePorts;
        *((_DWORD *)PortByPortNumber + 5) = *((_DWORD *)PortByPortNumber + 4);
        v7[1] = (__int64)PortByPortNumber;
        *((_DWORD *)PortByPortNumber + 4) = 4;
        *(_OWORD *)(PortByPortNumber + 3) = *((_OWORD *)v7 + 2);
        *(_OWORD *)(PortByPortNumber + 5) = *((_OWORD *)v7 + 3);
        *(_OWORD *)(PortByPortNumber + 7) = *((_OWORD *)v7 + 4);
        *(_OWORD *)(PortByPortNumber + 9) = *((_OWORD *)v7 + 5);
        if ( (v7[5] & 1) != 0 )
        {
          *((_DWORD *)PortByPortNumber + 17) = a1->DefaultSendControlState;
          *((_DWORD *)PortByPortNumber + 18) = a1->DefaultRcvControlState;
          *((_DWORD *)PortByPortNumber + 19) = a1->DefaultSendAuthorizationState;
          *((_DWORD *)PortByPortNumber + 20) = a1->DefaultRcvAuthorizationState;
        }
        ++v4;
        if ( (unsigned __int8)byte_1C009875E >= 5u )
          WPP_SF_qD(0x16u, &WPP_496de192e5de378341c8fe36eb970aad_Traceguids, (__int64)a1, *((_DWORD *)v7 + 9));
        v7 = (__int64 *)*v7;
        if ( !v7 )
          goto LABEL_49;
      }
      v3 = -1071448019;
      ndisRollbackPortActivation(a1, *(_QWORD *)(a2 + 16), v7);
      v4 = 0;
      if ( (unsigned __int8)byte_1C009875E >= 2u )
        WPP_SF_q(0x13u, &WPP_496de192e5de378341c8fe36eb970aad_Traceguids, (__int64)a1);
      if ( (Microsoft_Windows_NDISEnableBits & 0x20000000) != 0 )
        McTemplateK0jqxqq(
          v18,
          &PnPPortActivationFailed,
          &a1->InterfaceGuid,
          (__int64)&a1->InterfaceGuid,
          a1->IfIndex,
          a1->NetLuid.Value,
          1,
          0);
LABEL_49:
      a1->MiniportThread = 0LL;
      a1->LockDbg = 0;
      KeReleaseSpinLock(&a1->Lock, v6);
      if ( v4 )
      {
        ndisInitializeNetPnPEvent(v20, 0LL);
        v21 = *(_DWORD *)(a2 + 4);
        v23 = *(_QWORD *)(a2 + 16);
        v24 = *(_DWORD *)(a2 + 24);
        v22 = 10;
        ndisDevicePnPEventNotifyFiltersAndAllTransports(a1);
      }
    }
    else if ( *v7 )
    {
      a1->MiniportThread = 0LL;
      a1->LockDbg = 0;
      KeReleaseSpinLock(&a1->Lock, v6);
      v3 = -1071448019;
      if ( (unsigned __int8)byte_1C009875E >= 2u )
        WPP_SF_q(0x10u, &WPP_496de192e5de378341c8fe36eb970aad_Traceguids, (__int64)a1);
      if ( (Microsoft_Windows_NDISEnableBits & 0x20000000) != 0 )
        McTemplateK0jqxqq(
          v9,
          &PnPPortActivationFailed,
          &a1->InterfaceGuid,
          (__int64)&a1->InterfaceGuid,
          a1->IfIndex,
          a1->NetLuid.Value,
          1,
          0);
    }
    else
    {
      Flags = a1->Flags;
      if ( (Flags & 0x10000) != 0 )
      {
        a1->MiniportThread = 0LL;
        a1->LockDbg = 0;
        KeReleaseSpinLock(&a1->Lock, v6);
        v3 = -1071448018;
        if ( (unsigned __int8)byte_1C009875E >= 2u )
          WPP_SF_q(0x11u, &WPP_496de192e5de378341c8fe36eb970aad_Traceguids, (__int64)a1);
        if ( (Microsoft_Windows_NDISEnableBits & 0x20000000) != 0 )
          McTemplateK0jqxqq(
            v11,
            &PnPPortActivationFailed,
            &a1->InterfaceGuid,
            (__int64)&a1->InterfaceGuid,
            a1->IfIndex,
            a1->NetLuid.Value,
            2,
            0);
      }
      else
      {
        a1->Flags = Flags | 0x10000;
        if ( (v7[5] & 1) == 0 )
        {
          a1->DefaultPortSendControlState = *((_DWORD *)v7 + 19);
          a1->DefaultPortRcvControlState = *((_DWORD *)v7 + 20);
          a1->DefaultPortSendAuthorizationState = *((_DWORD *)v7 + 21);
          a1->DefaultPortRcvAuthorizationState = *((_DWORD *)v7 + 22);
        }
        ndisIfSetInterfaceState(a1, 1, v6);
        a1->MiniportThread = 0LL;
        a1->LockDbg = 0;
        KeReleaseSpinLock(&a1->Lock, v6);
        if ( (unsigned __int8)byte_1C009875E >= 4u )
          WPP_SF_q(0x12u, &WPP_496de192e5de378341c8fe36eb970aad_Traceguids, (__int64)a1);
        if ( (Microsoft_Windows_NDISEnableBits & 0x8000) != 0 )
          McTemplateK0jqxq(
            v13,
            &DefaultPortActivated,
            &a1->InterfaceGuid,
            (__int64)&a1->InterfaceGuid,
            a1->IfIndex,
            a1->NetLuid.Value,
            23);
        LOBYTE(v12) = 1;
        ndisMSetMiniportReadyForBinding(a1, v12, 0x8000LL, 1LL);
      }
    }
  }
  else
  {
    a1->MiniportThread = 0LL;
    a1->LockDbg = 0;
    KeReleaseSpinLock(&a1->Lock, v6);
    v3 = -1073741811;
    if ( (unsigned __int8)byte_1C009875E >= 2u )
      WPP_SF_q(0xFu, &WPP_496de192e5de378341c8fe36eb970aad_Traceguids, (__int64)a1);
    if ( (Microsoft_Windows_NDISEnableBits & 0x20000000) != 0 )
      McTemplateK0jqxqq(
        v8,
        &PnPPortActivationFailed,
        &a1->InterfaceGuid,
        (__int64)&a1->InterfaceGuid,
        a1->IfIndex,
        a1->NetLuid.Value,
        0,
        0);
  }
  if ( (unsigned __int8)byte_1C009875E >= 4u )
    WPP_SF_qD(0x17u, &WPP_496de192e5de378341c8fe36eb970aad_Traceguids, (__int64)a1, v3);
  return v3;
}
