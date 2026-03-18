/*
 * XREFs of Interrupter_PrepareHardware @ 0x1C005C6A0
 * Callers:
 *     Controller_WdfEvtDevicePrepareHardware @ 0x1C005A020 (Controller_WdfEvtDevicePrepareHardware.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001A20 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C0004510 (WPP_RECORDER_SF_d.c)
 *     _guard_dispatch_icall_nop @ 0x1C00086E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0008A40 (memset.c)
 *     Interrupter_SetSecondaryInterrupterCount @ 0x1C001EB08 (Interrupter_SetSecondaryInterrupterCount.c)
 *     WPP_RECORDER_SF_Dd @ 0x1C001ED4C (WPP_RECORDER_SF_Dd.c)
 *     Interrupter_CmResList_GetInterrupterCountAndType @ 0x1C005BA10 (Interrupter_CmResList_GetInterrupterCountAndType.c)
 *     Interrupter_CreateInterrupter @ 0x1C005BBD8 (Interrupter_CreateInterrupter.c)
 *     Interrupter_PopulateInterrupterLookupTable @ 0x1C005C5C0 (Interrupter_PopulateInterrupterLookupTable.c)
 *     Interrupter_PrepareInterrupter @ 0x1C005C93C (Interrupter_PrepareInterrupter.c)
 */

__int64 __fastcall Interrupter_PrepareHardware(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbp
  _DWORD *v4; // r14
  unsigned int v8; // esi
  int v9; // ebx
  unsigned __int16 v10; // r9
  PVOID PoolWithTag; // rax
  __int64 v12; // rdx
  int v13; // eax
  unsigned __int16 v14; // r9
  _QWORD *v15; // rcx
  __int64 v16; // rax
  unsigned int v17; // esi
  unsigned int i; // r14d
  _BYTE *v19; // rax
  __int64 v20; // rbx
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r15
  __int64 v25; // rcx
  unsigned __int16 v26; // r9
  int v28; // [rsp+20h] [rbp-48h]
  __int64 v29; // [rsp+28h] [rbp-40h]
  __int64 v30; // [rsp+70h] [rbp+8h] BYREF

  v3 = *(_QWORD *)(a1 + 8);
  v4 = (_DWORD *)(a1 + 16);
  Interrupter_CmResList_GetInterrupterCountAndType(a1, a2, &v30, (int *)(a1 + 16));
  v8 = v30;
  if ( !(_DWORD)v30 )
  {
    v9 = -1073741670;
    v10 = 14;
LABEL_3:
    WPP_RECORDER_SF_(*(_QWORD *)(v3 + 72), 2u, 9u, v10, (__int64)&WPP_60775dc5c6563f4bce38ccb49f22c6c0_Traceguids);
    return (unsigned int)v9;
  }
  PoolWithTag = ExAllocatePoolWithTag(
                  *((POOL_TYPE *)&WPP_MAIN_CB.AlignmentRequirement + 1),
                  (unsigned int)(8 * v30),
                  0x49434858u);
  *(_QWORD *)(a1 + 32) = PoolWithTag;
  if ( !PoolWithTag )
  {
    v9 = -1073741670;
    v10 = 15;
    goto LABEL_3;
  }
  memset(PoolWithTag, 0, 8 * v8);
  LOBYTE(v12) = *v4 != 0;
  v13 = Interrupter_PrepareInterrupter(*(_QWORD *)(a1 + 40), v12);
  v9 = v13;
  if ( v13 < 0 )
  {
    v14 = 16;
LABEL_29:
    LODWORD(v29) = v13;
    WPP_RECORDER_SF_d(*(_QWORD *)(v3 + 72), 2u, 9u, v14, (__int64)&WPP_60775dc5c6563f4bce38ccb49f22c6c0_Traceguids, v29);
    return (unsigned int)v9;
  }
  v15 = *(_QWORD **)(a1 + 32);
  v16 = *(_QWORD *)(a1 + 40);
  *(_DWORD *)(a1 + 24) = 1;
  *v15 = v16;
  if ( (*(_QWORD *)(v3 + 272) & 0x1000LL) != 0 )
    Interrupter_SetSecondaryInterrupterCount(a1, 0);
  if ( *(_DWORD *)(a1 + 20) && v8 > 1 && *v4 == 2 )
  {
    v17 = 0;
    for ( i = 0;
          i < (*(unsigned int (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2432))(
                WdfDriverGlobals,
                a3);
          ++i )
    {
      v19 = (_BYTE *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2440))(
                       WdfDriverGlobals,
                       a3,
                       i);
      if ( *v19 == 2 && (v19[2] & 3) == 3 )
      {
        if ( v17 )
        {
          v20 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2440))(
                  WdfDriverGlobals,
                  a3,
                  i);
          v21 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2440))(
                  WdfDriverGlobals,
                  a2,
                  i);
          v9 = Interrupter_CreateInterrupter(*(_QWORD *)a1, v3, v17, v21, v20, &v30, 0LL);
          if ( v9 < 0 )
          {
            v26 = 17;
            goto LABEL_25;
          }
          v24 = v30;
          LOBYTE(v22) = 1;
          v9 = Interrupter_PrepareInterrupter(v30, v22);
          if ( v9 < 0 )
          {
            v26 = 18;
LABEL_25:
            WPP_RECORDER_SF_Dd(*(_QWORD *)(v3 + 72), v22, v23, v26, v28);
            return (unsigned int)v9;
          }
          v25 = v17++;
          *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8 * v25) = v24;
        }
        else
        {
          v17 = 1;
        }
      }
    }
    *(_DWORD *)(a1 + 24) += *(_DWORD *)(a1 + 20);
  }
  v13 = Interrupter_PopulateInterrupterLookupTable(a1);
  v9 = v13;
  if ( v13 < 0 )
  {
    v14 = 19;
    goto LABEL_29;
  }
  return (unsigned int)v9;
}
