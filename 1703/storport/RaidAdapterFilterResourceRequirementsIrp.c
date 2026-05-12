/*
 * XREFs of RaidAdapterFilterResourceRequirementsIrp @ 0x1C005DD1C
 * Callers:
 *     RaidAdapterPnpIrp @ 0x1C0012708 (RaidAdapterPnpIrp.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C0009A90 (RaidCompleteRequestEx.c)
 *     RaCallMiniportAdapterControl @ 0x1C00124FC (RaCallMiniportAdapterControl.c)
 *     RaForwardIrpSynchronous @ 0x1C0012A24 (RaForwardIrpSynchronous.c)
 *     RaidIsAdapterControlSupported @ 0x1C0012E88 (RaidIsAdapterControlSupported.c)
 *     RaidMachineRequireIoPortResource @ 0x1C001E1E0 (RaidMachineRequireIoPortResource.c)
 *     __security_check_cookie @ 0x1C001EB90 (__security_check_cookie.c)
 *     Template_pq @ 0x1C002FB54 (Template_pq.c)
 *     WPP_SF_qD @ 0x1C003040C (WPP_SF_qD.c)
 *     WPP_SF_qqD @ 0x1C0030584 (WPP_SF_qqD.c)
 */

__int64 __fastcall RaidAdapterFilterResourceRequirementsIrp(__int64 a1, IRP *a2)
{
  signed int v4; // ebp
  _DWORD *Information; // rdi
  __int64 v6; // rax
  PDEVICE_OBJECT v7; // rcx
  __int64 v8; // rcx
  unsigned int v10; // r14d
  _DWORD *v11; // rdx
  _DWORD *v12; // r8
  unsigned int v13; // r9d
  unsigned int v14; // r10d
  _DWORD *v15; // rcx
  __int64 v16; // r11
  __int64 v17; // rax
  _DWORD *v18; // rcx
  _DWORD *v19; // rcx
  __int64 v20; // [rsp+20h] [rbp-68h]
  __int64 v21; // [rsp+30h] [rbp-58h]
  _DWORD *v22; // [rsp+38h] [rbp-50h]
  GUID v23; // [rsp+40h] [rbp-48h] BYREF

  v21 = 0LL;
  v22 = 0LL;
  v4 = RaForwardIrpSynchronous(*(struct _DEVICE_OBJECT **)(a1 + 24), a2);
  if ( v4 < 0 )
    goto LABEL_5;
  Information = (_DWORD *)a2->IoStatus.Information;
  if ( !Information )
    goto LABEL_5;
  v6 = *(_QWORD *)(a1 + 528);
  *(_DWORD *)(a1 + 752) = Information[2];
  *(_DWORD *)(a1 + 756) = Information[3];
  if ( (*(_DWORD *)(v6 + 184) & 0x200) != 0 && !RaidMachineRequireIoPortResource() )
  {
    v10 = 0;
    v11 = Information + 8;
    v12 = Information + 8;
    if ( Information[7] )
    {
      while ( 1 )
      {
        v13 = 0;
        v14 = v11[1];
        *(_WORD *)v12 = *(_WORD *)v11;
        *((_WORD *)v12 + 1) = *((_WORD *)v11 + 1);
        if ( v14 )
          break;
LABEL_22:
        v12[1] = v13;
        if ( v14 )
          v18 = &v11[8 * v14 - 8];
        else
          v18 = v11;
        v11 = v18 + 10;
        if ( v13 )
          v19 = &v12[8 * v13 - 8];
        else
          v19 = v12;
        ++v10;
        v12 = v19 + 10;
        if ( v10 >= Information[7] )
          goto LABEL_4;
      }
      v15 = v11 + 2;
      v16 = v14;
      while ( 1 )
      {
        if ( *((_BYTE *)v15 + 1) != 1 )
          goto LABEL_20;
        if ( (*(_BYTE *)v15 & 8) == 0 )
          break;
LABEL_21:
        v15 += 8;
        if ( !--v16 )
          goto LABEL_22;
      }
      *((_BYTE *)v15 + 1) = 0;
LABEL_20:
      v17 = 8LL * v13++;
      *(_OWORD *)&v12[v17 + 2] = *(_OWORD *)v15;
      *(_OWORD *)&v12[v17 + 6] = *((_OWORD *)v15 + 1);
      goto LABEL_21;
    }
  }
LABEL_4:
  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 528) + 184LL) & 0x100) != 0
    && (unsigned int)RaidIsAdapterControlSupported(a1, 13)
    && (v21 = 0x1000000001LL, v22 = Information, v4 = RaCallMiniportAdapterControl(a1 + 296), v4 < 0) )
  {
    v7 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u )
    {
      WPP_SF_qD(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        0x1Du,
        (__int64)&WPP_43677b6b8a68310e2fabd5fd066069ea_Traceguids,
        a1,
        v4);
      v7 = WPP_GLOBAL_Control;
    }
    v4 = 0;
  }
  else
  {
LABEL_5:
    v7 = WPP_GLOBAL_Control;
  }
  if ( StorEtwLoggingEnabled )
  {
    *(_QWORD *)&v23.Data1 = 0LL;
    *(_QWORD *)v23.Data4 = 0LL;
    IoGetActivityIdIrp(a2, &v23);
    if ( ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x200000) != 0 )
    {
      LODWORD(v20) = a2->IoStatus.Status;
      Template_pq(v8, &EventPnpRequestComplete, &v23, a2, v20);
    }
    v7 = WPP_GLOBAL_Control;
  }
  if ( v7 != (PDEVICE_OBJECT)&WPP_GLOBAL_Control && (HIDWORD(v7->Timer) & 2) != 0 && BYTE1(v7->Timer) >= 4u )
    WPP_SF_qqD(
      (__int64)v7->AttachedDevice,
      0x1Eu,
      (__int64)&WPP_43677b6b8a68310e2fabd5fd066069ea_Traceguids,
      a1,
      a2,
      v4,
      v21,
      v22);
  return RaidCompleteRequestEx(a2, 0, v4);
}
