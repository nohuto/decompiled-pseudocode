/*
 * XREFs of RaidAdapterFilterResourceRequirementsIrp @ 0x1C006006C
 * Callers:
 *     RaidAdapterPnpIrp @ 0x1C0012070 (RaidAdapterPnpIrp.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C000B4A0 (RaidCompleteRequestEx.c)
 *     RaCallMiniportAdapterControl @ 0x1C0011DF0 (RaCallMiniportAdapterControl.c)
 *     RaForwardIrpSynchronous @ 0x1C0012394 (RaForwardIrpSynchronous.c)
 *     RaidIsAdapterControlSupported @ 0x1C00127FC (RaidIsAdapterControlSupported.c)
 *     RaidMachineRequireIoPortResource @ 0x1C001ED6C (RaidMachineRequireIoPortResource.c)
 *     __security_check_cookie @ 0x1C001EEB0 (__security_check_cookie.c)
 *     McTemplateK0pq @ 0x1C002B808 (McTemplateK0pq.c)
 *     WPP_SF_qD @ 0x1C0030A88 (WPP_SF_qD.c)
 *     WPP_SF_qqD @ 0x1C0030BFC (WPP_SF_qqD.c)
 */

__int64 __fastcall RaidAdapterFilterResourceRequirementsIrp(__int64 a1, IRP *a2)
{
  signed int v4; // ebp
  _DWORD *Information; // rsi
  __int64 v6; // rax
  __int64 v7; // rcx
  unsigned int v9; // r14d
  _DWORD *v10; // rdx
  _DWORD *v11; // r8
  unsigned int v12; // r9d
  unsigned int v13; // r10d
  _DWORD *v14; // rcx
  __int64 v15; // r11
  __int64 v16; // rax
  _DWORD *v17; // rcx
  _DWORD *v18; // rcx
  __int64 v19; // [rsp+20h] [rbp-68h]
  __int64 v20; // [rsp+30h] [rbp-58h]
  _DWORD *v21; // [rsp+38h] [rbp-50h]
  GUID v22; // [rsp+40h] [rbp-48h] BYREF

  v20 = 0LL;
  v21 = 0LL;
  v4 = RaForwardIrpSynchronous(*(struct _DEVICE_OBJECT **)(a1 + 24), a2);
  if ( v4 >= 0 )
  {
    Information = (_DWORD *)a2->IoStatus.Information;
    if ( Information )
    {
      v6 = *(_QWORD *)(a1 + 528);
      *(_DWORD *)(a1 + 752) = Information[2];
      *(_DWORD *)(a1 + 756) = Information[3];
      if ( (*(_DWORD *)(v6 + 184) & 0x200) != 0 && !RaidMachineRequireIoPortResource() )
      {
        v9 = 0;
        v10 = Information + 8;
        v11 = Information + 8;
        if ( Information[7] )
        {
          while ( 1 )
          {
            v12 = 0;
            v13 = v10[1];
            *(_WORD *)v11 = *(_WORD *)v10;
            *((_WORD *)v11 + 1) = *((_WORD *)v10 + 1);
            if ( v13 )
              break;
LABEL_20:
            v11[1] = v12;
            if ( v13 )
              v17 = &v10[8 * v13 - 8];
            else
              v17 = v10;
            v10 = v17 + 10;
            if ( v12 )
              v18 = &v11[8 * v12 - 8];
            else
              v18 = v11;
            ++v9;
            v11 = v18 + 10;
            if ( v9 >= Information[7] )
              goto LABEL_4;
          }
          v14 = v10 + 2;
          v15 = v13;
          while ( 1 )
          {
            if ( *((_BYTE *)v14 + 1) != 1 )
              goto LABEL_18;
            if ( (*(_BYTE *)v14 & 8) == 0 )
              break;
LABEL_19:
            v14 += 8;
            if ( !--v15 )
              goto LABEL_20;
          }
          *((_BYTE *)v14 + 1) = 0;
LABEL_18:
          v16 = 8LL * v12++;
          *(_OWORD *)&v11[v16 + 2] = *(_OWORD *)v14;
          *(_OWORD *)&v11[v16 + 6] = *((_OWORD *)v14 + 1);
          goto LABEL_19;
        }
      }
LABEL_4:
      if ( (*(_DWORD *)(*(_QWORD *)(a1 + 528) + 184LL) & 0x100) != 0 )
      {
        if ( (unsigned int)RaidIsAdapterControlSupported(a1, 13) )
        {
          v20 = 0x1000000001LL;
          v21 = Information;
          v4 = RaCallMiniportAdapterControl(a1 + 296);
          if ( v4 < 0 )
          {
            if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u )
            {
              WPP_SF_qD(
                (__int64)WPP_GLOBAL_Control->AttachedDevice,
                0x1Du,
                (__int64)&WPP_d17971f34b7c3fdc440c591ea55cafdf_Traceguids,
                a1,
                v4);
            }
            v4 = 0;
          }
        }
      }
    }
  }
  if ( StorEtwLoggingEnabled )
  {
    *(_QWORD *)&v22.Data1 = 0LL;
    *(_QWORD *)v22.Data4 = 0LL;
    IoGetActivityIdIrp(a2, &v22);
    if ( ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x200000) != 0 )
    {
      LODWORD(v19) = a2->IoStatus.Status;
      McTemplateK0pq(v7, &EventPnpRequestComplete, &v22, a2, v19);
    }
  }
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qqD(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      0x1Eu,
      (__int64)&WPP_d17971f34b7c3fdc440c591ea55cafdf_Traceguids,
      a1,
      a2,
      v4,
      v20,
      v21);
  }
  return RaidCompleteRequestEx(a2, 0, v4);
}
