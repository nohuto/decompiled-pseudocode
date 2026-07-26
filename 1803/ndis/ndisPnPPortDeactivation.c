/*
 * XREFs of ndisPnPPortDeactivation @ 0x1C003DE80
 * Callers:
 *     NdisMNetPnPEvent @ 0x1C00EDAB0 (NdisMNetPnPEvent.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0025590 (__security_check_cookie.c)
 *     WPP_SF_q @ 0x1C003A83C (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003A870 (WPP_SF_qD.c)
 *     McTemplateK0jqxq @ 0x1C003D100 (McTemplateK0jqxq.c)
 *     McTemplateK0jqxqq @ 0x1C003D190 (McTemplateK0jqxqq.c)
 *     ndisFindPortByPortNumber @ 0x1C003D8CC (ndisFindPortByPortNumber.c)
 *     ndisRollbackPortDeactivation @ 0x1C003E3F0 (ndisRollbackPortDeactivation.c)
 *     ndisDevicePnPEventNotifyFiltersAndAllTransports @ 0x1C00B0E0C (ndisDevicePnPEventNotifyFiltersAndAllTransports.c)
 *     ndisInitializeNetPnPEvent @ 0x1C00C261C (ndisInitializeNetPnPEvent.c)
 *     ndisMSetMiniportReadyForBinding @ 0x1C00C67C8 (ndisMSetMiniportReadyForBinding.c)
 */

__int64 __fastcall ndisPnPPortDeactivation(struct _NDIS_MINIPORT_BLOCK *a1, __int64 a2)
{
  unsigned int v2; // edi
  unsigned int *v5; // r15
  unsigned int v6; // esi
  KIRQL v7; // r14
  unsigned int PnPFlags; // eax
  unsigned __int64 *p_Lock; // rcx
  __int64 v10; // rcx
  unsigned int Flags; // eax
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // r14
  unsigned int *v15; // r12
  __int64 *PortByPortNumber; // rax
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rcx
  int v21; // [rsp+40h] [rbp-108h]
  KIRQL NewIrql; // [rsp+44h] [rbp-104h]
  _BYTE v23[4]; // [rsp+50h] [rbp-F8h] BYREF
  int v24; // [rsp+54h] [rbp-F4h]
  int v25; // [rsp+58h] [rbp-F0h]
  __int64 v26; // [rsp+60h] [rbp-E8h]
  int v27; // [rsp+68h] [rbp-E0h]

  v2 = 0;
  v21 = 0;
  if ( (unsigned __int8)byte_1C009961E >= 4u )
    WPP_SF_q(0x18u, &WPP_0b808382ed603acc29a2d994791a3522_Traceguids, (__int64)a1);
  v5 = *(unsigned int **)(a2 + 16);
  v6 = *(_DWORD *)(a2 + 24) >> 2;
  if ( v5 && v6 )
  {
    v7 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
    NewIrql = v7;
    a1->MiniportThread = KeGetCurrentThread();
    PnPFlags = a1->PnPFlags;
    a1->LockDbg = 2360062;
    if ( (PnPFlags & 0x80u) == 0 || *v5 )
    {
      v14 = 0LL;
      v15 = v5;
      while ( *v15 )
      {
        PortByPortNumber = ndisFindPortByPortNumber((__int64)a1, *v15);
        if ( !PortByPortNumber )
        {
          v2 = -1071448019;
          ndisRollbackPortDeactivation(a1, *(_QWORD *)(a2 + 16), (unsigned int)v14);
          v21 = 0;
          if ( (unsigned __int8)byte_1C009961E >= 2u )
            WPP_SF_qD(0x1Eu, &WPP_0b808382ed603acc29a2d994791a3522_Traceguids, (__int64)a1, v5[v14]);
          if ( (dword_1C009AF04 & 0x40) != 0 )
            McTemplateK0jqxqq(
              v18,
              &PnPPortDeactivationFailed,
              &a1->InterfaceGuid,
              (__int64)&a1->InterfaceGuid,
              a1->IfIndex,
              a1->NetLuid.Value,
              3,
              v5[v14]);
          goto LABEL_42;
        }
        if ( *((_DWORD *)PortByPortNumber + 4) != 4 )
        {
          v2 = -1071448018;
          ndisRollbackPortDeactivation(a1, *(_QWORD *)(a2 + 16), (unsigned int)v14);
          v21 = 0;
          if ( (unsigned __int8)byte_1C009961E >= 2u )
            WPP_SF_qD(0x1Fu, &WPP_0b808382ed603acc29a2d994791a3522_Traceguids, (__int64)a1, v5[v14]);
          if ( (dword_1C009AF04 & 0x40) != 0 )
            McTemplateK0jqxqq(
              v17,
              &PnPPortDeactivationFailed,
              &a1->InterfaceGuid,
              (__int64)&a1->InterfaceGuid,
              a1->IfIndex,
              a1->NetLuid.Value,
              7,
              v5[v14]);
          goto LABEL_42;
        }
        ++v21;
        --a1->NumberOfActivePorts;
        *((_DWORD *)PortByPortNumber + 5) = *((_DWORD *)PortByPortNumber + 4);
        *((_DWORD *)PortByPortNumber + 4) = 2;
        if ( (unsigned __int8)byte_1C009961E >= 5u )
          WPP_SF_qD(0x20u, &WPP_0b808382ed603acc29a2d994791a3522_Traceguids, (__int64)a1, *v15);
        v14 = (unsigned int)(v14 + 1);
        ++v15;
        if ( (unsigned int)v14 >= v6 )
          goto LABEL_42;
      }
      v2 = -1071448019;
      ndisRollbackPortDeactivation(a1, *(_QWORD *)(a2 + 16), (unsigned int)v14);
      v21 = 0;
      if ( (unsigned __int8)byte_1C009961E >= 2u )
        WPP_SF_q(0x1Du, &WPP_0b808382ed603acc29a2d994791a3522_Traceguids, (__int64)a1);
      if ( (dword_1C009AF04 & 0x40) != 0 )
        McTemplateK0jqxqq(
          v19,
          &PnPPortDeactivationFailed,
          &a1->InterfaceGuid,
          (__int64)&a1->InterfaceGuid,
          a1->IfIndex,
          a1->NetLuid.Value,
          5,
          0);
LABEL_42:
      a1->MiniportThread = 0LL;
      a1->LockDbg = 0;
      KeReleaseSpinLock(&a1->Lock, NewIrql);
      if ( v21 )
      {
        ndisInitializeNetPnPEvent(v23, 0LL);
        v24 = *(_DWORD *)(a2 + 4);
        v26 = *(_QWORD *)(a2 + 16);
        v27 = *(_DWORD *)(a2 + 24);
        v25 = 11;
        ndisDevicePnPEventNotifyFiltersAndAllTransports(a1);
      }
    }
    else
    {
      p_Lock = &a1->Lock;
      if ( v6 <= 1 )
      {
        Flags = a1->Flags;
        a1->MiniportThread = 0LL;
        a1->LockDbg = 0;
        if ( (Flags & 0x10000) != 0 )
        {
          a1->Flags &= ~0x10000u;
          KeReleaseSpinLock(p_Lock, v7);
          ndisMSetMiniportReadyForBinding(a1, 0LL, 0x8000LL, 0LL);
          if ( (unsigned __int8)byte_1C009961E >= 4u )
            WPP_SF_q(0x1Cu, &WPP_0b808382ed603acc29a2d994791a3522_Traceguids, (__int64)a1);
          if ( (Microsoft_Windows_NDISEnableBits & 0x8000) != 0 )
            McTemplateK0jqxq(
              v13,
              &DefaultPortDeactivated,
              &a1->InterfaceGuid,
              (__int64)&a1->InterfaceGuid,
              a1->IfIndex,
              a1->NetLuid.Value,
              66);
        }
        else
        {
          KeReleaseSpinLock(p_Lock, v7);
          v2 = -1071448018;
          if ( (unsigned __int8)byte_1C009961E >= 2u )
            WPP_SF_q(0x1Bu, &WPP_0b808382ed603acc29a2d994791a3522_Traceguids, (__int64)a1);
          if ( (dword_1C009AF04 & 0x40) != 0 )
            McTemplateK0jqxqq(
              v12,
              &PnPPortDeactivationFailed,
              &a1->InterfaceGuid,
              (__int64)&a1->InterfaceGuid,
              a1->IfIndex,
              a1->NetLuid.Value,
              6,
              0);
        }
      }
      else
      {
        a1->MiniportThread = 0LL;
        a1->LockDbg = 0;
        KeReleaseSpinLock(p_Lock, v7);
        if ( (unsigned __int8)byte_1C009961E >= 2u )
          WPP_SF_q(0x1Au, &WPP_0b808382ed603acc29a2d994791a3522_Traceguids, (__int64)a1);
        if ( (dword_1C009AF04 & 0x40) != 0 )
          McTemplateK0jqxqq(
            v10,
            &PnPPortDeactivationFailed,
            &a1->InterfaceGuid,
            (__int64)&a1->InterfaceGuid,
            a1->IfIndex,
            a1->NetLuid.Value,
            5,
            0);
        v2 = -1071448019;
      }
    }
  }
  else
  {
    v2 = -1073741811;
    if ( (unsigned __int8)byte_1C009961E >= 2u )
      WPP_SF_q(0x19u, &WPP_0b808382ed603acc29a2d994791a3522_Traceguids, (__int64)a1);
    if ( (dword_1C009AF04 & 0x40) != 0 )
      McTemplateK0jqxqq(
        (__int64)a1,
        &PnPPortDeactivationFailed,
        &a1->InterfaceGuid,
        (__int64)&a1->InterfaceGuid,
        a1->IfIndex,
        a1->NetLuid.Value,
        0,
        0);
  }
  if ( (unsigned __int8)byte_1C009961E >= 4u )
    WPP_SF_q(0x21u, &WPP_0b808382ed603acc29a2d994791a3522_Traceguids, (__int64)a1);
  return v2;
}
