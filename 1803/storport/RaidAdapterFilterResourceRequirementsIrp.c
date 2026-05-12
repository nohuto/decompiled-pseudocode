/*
 * XREFs of RaidAdapterFilterResourceRequirementsIrp @ 0x1C0063900
 * Callers:
 *     RaidAdapterPnpIrp @ 0x1C00125A4 (RaidAdapterPnpIrp.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C000C410 (RaidCompleteRequestEx.c)
 *     RaCallMiniportAdapterControl @ 0x1C000EDD4 (RaCallMiniportAdapterControl.c)
 *     RaForwardIrpSynchronous @ 0x1C00107A4 (RaForwardIrpSynchronous.c)
 *     RaidIsAdapterControlSupported @ 0x1C0014F3C (RaidIsAdapterControlSupported.c)
 *     __security_check_cookie @ 0x1C0017BC0 (__security_check_cookie.c)
 *     McTemplateK0pq @ 0x1C0023FBC (McTemplateK0pq.c)
 *     WPP_SF_qD @ 0x1C002C15C (WPP_SF_qD.c)
 *     WPP_SF_qqD @ 0x1C002C2D0 (WPP_SF_qqD.c)
 *     RaidMachineRequireIoPortResource @ 0x1C004793C (RaidMachineRequireIoPortResource.c)
 */

__int64 __fastcall RaidAdapterFilterResourceRequirementsIrp(__int64 a1, IRP *a2)
{
  signed int v4; // ebp
  _DWORD *Information; // rsi
  __int64 v6; // rax
  unsigned int v7; // r14d
  _DWORD *v8; // rdx
  _DWORD *v9; // r8
  unsigned int v10; // r9d
  unsigned int v11; // r10d
  _DWORD *v12; // rcx
  __int64 v13; // r11
  __int64 v14; // rax
  _DWORD *v15; // rcx
  _DWORD *v16; // rcx
  __int64 v17; // rcx
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
        v7 = 0;
        v8 = Information + 8;
        v9 = Information + 8;
        if ( Information[7] )
        {
          while ( 1 )
          {
            v10 = 0;
            v11 = v8[1];
            *(_WORD *)v9 = *(_WORD *)v8;
            *((_WORD *)v9 + 1) = *((_WORD *)v8 + 1);
            if ( v11 )
              break;
LABEL_13:
            v9[1] = v10;
            if ( v11 )
              v15 = &v8[8 * v11 - 8];
            else
              v15 = v8;
            v8 = v15 + 10;
            if ( v10 )
              v16 = &v9[8 * v10 - 8];
            else
              v16 = v9;
            ++v7;
            v9 = v16 + 10;
            if ( v7 >= Information[7] )
              goto LABEL_20;
          }
          v12 = v8 + 2;
          v13 = v11;
          while ( 1 )
          {
            if ( *((_BYTE *)v12 + 1) != 1 )
              goto LABEL_11;
            if ( (*(_BYTE *)v12 & 8) == 0 )
              break;
LABEL_12:
            v12 += 8;
            if ( !--v13 )
              goto LABEL_13;
          }
          *((_BYTE *)v12 + 1) = 0;
LABEL_11:
          v14 = 8LL * v10++;
          *(_OWORD *)&v9[v14 + 2] = *(_OWORD *)v12;
          *(_OWORD *)&v9[v14 + 6] = *((_OWORD *)v12 + 1);
          goto LABEL_12;
        }
      }
LABEL_20:
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
                (__int64)&WPP_0e2a19f4a3e138dc01b4b18bc88c5901_Traceguids,
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
      McTemplateK0pq(v17, &EventPnpRequestComplete, &v22, a2, v19);
    }
  }
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qqD(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      0x1Eu,
      (__int64)&WPP_0e2a19f4a3e138dc01b4b18bc88c5901_Traceguids,
      a1,
      a2,
      v4,
      v20,
      v21);
  }
  return RaidCompleteRequestEx(a2, 0, v4);
}
