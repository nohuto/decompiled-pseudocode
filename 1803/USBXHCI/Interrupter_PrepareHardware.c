/*
 * XREFs of Interrupter_PrepareHardware @ 0x1C00597B8
 * Callers:
 *     Controller_WdfEvtDevicePrepareHardware @ 0x1C0057010 (Controller_WdfEvtDevicePrepareHardware.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001C00 (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C00029C0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0002D40 (memset.c)
 *     WPP_RECORDER_SF_d @ 0x1C000D86C (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dd @ 0x1C000DAE4 (WPP_RECORDER_SF_dd.c)
 *     Debug_FreAssertMsg @ 0x1C000EC48 (Debug_FreAssertMsg.c)
 *     Interrupter_SetSecondaryInterrupterCount @ 0x1C0017C48 (Interrupter_SetSecondaryInterrupterCount.c)
 *     WPP_RECORDER_SF_Dd @ 0x1C001804C (WPP_RECORDER_SF_Dd.c)
 *     Interrupter_CmResList_GetInterrupterCountAndType @ 0x1C0058A90 (Interrupter_CmResList_GetInterrupterCountAndType.c)
 *     Interrupter_CreateInterrupter @ 0x1C0058C58 (Interrupter_CreateInterrupter.c)
 *     Interrupter_PopulateInterrupterLookupTable @ 0x1C00596B0 (Interrupter_PopulateInterrupterLookupTable.c)
 *     Interrupter_PrepareInterrupter @ 0x1C0059BF0 (Interrupter_PrepareInterrupter.c)
 */

__int64 __fastcall Interrupter_PrepareHardware(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rsi
  _DWORD *v4; // r15
  unsigned int v7; // r14d
  int v8; // ebx
  unsigned __int16 v9; // r9
  __int64 v10; // rcx
  unsigned int v11; // edx
  unsigned int v12; // eax
  int v13; // ebx
  int v14; // r13d
  bool v15; // cc
  PVOID PoolWithTag; // rax
  __int64 v17; // rdx
  int v18; // eax
  unsigned __int16 v19; // r9
  _QWORD *v20; // rcx
  unsigned int v21; // ebp
  unsigned int i; // r14d
  _BYTE *v23; // rax
  __int64 v24; // rbx
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r15
  unsigned __int16 v29; // r9
  __int64 v30; // rbp
  __int64 v31; // r14
  int v33; // [rsp+20h] [rbp-68h]
  __int64 v34; // [rsp+28h] [rbp-60h]
  unsigned int v35; // [rsp+90h] [rbp+8h] BYREF
  __int64 v36; // [rsp+98h] [rbp+10h]
  __int64 v37; // [rsp+A8h] [rbp+20h] BYREF

  v36 = a2;
  v3 = *(_QWORD *)(a1 + 8);
  v4 = (_DWORD *)(a1 + 16);
  Interrupter_CmResList_GetInterrupterCountAndType(a1, a2, &v35, (int *)(a1 + 16));
  v7 = v35;
  if ( v35 )
  {
    if ( *(_DWORD *)(v3 + 532) == 1 )
    {
      v10 = *(_QWORD *)(v3 + 88);
      v11 = *(_DWORD *)(v10 + 84);
      if ( v11 < 2 )
      {
        v8 = -1073741670;
        v9 = 17;
        goto LABEL_3;
      }
      if ( (*(_QWORD *)(v3 + 272) & 0x1000LL) != 0 )
      {
        v8 = -1073741670;
        v9 = 18;
        goto LABEL_3;
      }
      v12 = *(_DWORD *)(a1 + 64);
      if ( v12 == -1 )
      {
        if ( g_ReservedMessageForOffloadMode == -1 )
          g_ReservedMessageForOffloadMode = *(_DWORD *)(*(_QWORD *)(v3 + 88) + 84LL) - 1;
        v10 = *(_QWORD *)(v3 + 88);
      }
      else if ( v12 >= v11 )
      {
        WPP_RECORDER_SF_dd(
          *(_QWORD *)(v3 + 72),
          2u,
          9u,
          0x13u,
          (__int64)&WPP_e3ff60b53c4034148ad8b37c0aef3b5d_Traceguids,
          *(_DWORD *)(a1 + 64),
          *(_DWORD *)(v10 + 84));
        *(_DWORD *)(v3 + 532) = 0;
        return (unsigned int)-1073741823;
      }
      if ( (unsigned int)g_ReservedMessageForOffloadMode >= *(_DWORD *)(v10 + 84) )
        g_ReservedMessageForOffloadMode = *(_DWORD *)(*(_QWORD *)(v3 + 88) + 84LL) - 1;
      v13 = g_ReservedMessageForOffloadMode;
      v14 = 1;
      v7 = v35;
      v15 = v35 <= g_ReservedMessageForOffloadMode;
      *(_DWORD *)(a1 + 64) = g_ReservedMessageForOffloadMode;
      if ( !v15 )
        v13 = v7;
    }
    else
    {
      v13 = v35 - 1;
      v14 = 0;
    }
    PoolWithTag = ExAllocatePoolWithTag(
                    *((POOL_TYPE *)&WPP_MAIN_CB.AlignmentRequirement + 1),
                    (unsigned int)(8 * v13 + 8),
                    0x49434858u);
    *(_QWORD *)(a1 + 32) = PoolWithTag;
    if ( !PoolWithTag )
    {
      v8 = -1073741670;
      v9 = 20;
      goto LABEL_3;
    }
    *(_DWORD *)(a1 + 80) = v13 + 1;
    memset(PoolWithTag, 0, (unsigned int)(8 * v13 + 8));
    LOBYTE(v17) = *v4 != 0;
    v18 = Interrupter_PrepareInterrupter(*(_QWORD *)(a1 + 40), v17);
    v8 = v18;
    if ( v18 < 0 )
    {
      v19 = 21;
      goto LABEL_55;
    }
    v20 = *(_QWORD **)(a1 + 32);
    *(_DWORD *)(a1 + 24) = v14 + 1;
    *v20 = *(_QWORD *)(a1 + 40);
    if ( (*(_QWORD *)(v3 + 272) & 0x1000LL) != 0 )
      Interrupter_SetSecondaryInterrupterCount(a1, 0);
    v21 = 0;
    if ( *(_DWORD *)(a1 + 20) && v7 > 1 && *v4 == 2 )
    {
      for ( i = 0;
            i < (*(unsigned int (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01023 + 2432))(
                  WdfDriverGlobals,
                  a3);
            ++i )
      {
        v23 = (_BYTE *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01023 + 2440))(
                         WdfDriverGlobals,
                         a3,
                         i);
        if ( *v23 == 2 && (v23[2] & 3) == 3 )
        {
          if ( v21 )
          {
            if ( v21 == *(_DWORD *)(a1 + 64) )
            {
              Debug_FreAssertMsg(
                (__int64)"Message number reserved for software offload mode is visible to Windows",
                0,
                (int)"onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\interrupter.c",
                490);
            }
            else
            {
              v24 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01023 + 2440))(
                      WdfDriverGlobals,
                      a3,
                      i);
              v25 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01023 + 2440))(
                      WdfDriverGlobals,
                      v36,
                      i);
              v8 = Interrupter_CreateInterrupter(*(_QWORD *)a1, v3, v21, v25, v24, &v37, 0LL);
              if ( v8 < 0 )
              {
                v29 = 22;
                goto LABEL_45;
              }
              v28 = v37;
              LOBYTE(v26) = 1;
              v8 = Interrupter_PrepareInterrupter(v37, v26);
              if ( v8 < 0 )
              {
                v29 = 23;
                goto LABEL_45;
              }
              *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL * v21) = v28;
            }
            ++v21;
          }
          else
          {
            v21 = 1;
          }
        }
      }
      *(_DWORD *)(a1 + 24) += *(_DWORD *)(a1 + 20);
    }
    if ( v14 == 1 )
    {
      v30 = *(unsigned int *)(a1 + 64);
      v8 = Interrupter_CreateInterrupter(*(_QWORD *)a1, v3, *(_DWORD *)(a1 + 64), 0LL, 0LL, &v37, 0LL);
      if ( v8 < 0 )
      {
        v29 = 24;
LABEL_45:
        WPP_RECORDER_SF_Dd(*(_QWORD *)(v3 + 72), v26, v27, v29, v33);
        return (unsigned int)v8;
      }
      v31 = v37;
      LOBYTE(v26) = 1;
      v8 = Interrupter_PrepareInterrupter(v37, v26);
      if ( v8 < 0 )
      {
        v29 = 25;
        goto LABEL_45;
      }
      *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8 * v30) = v31;
      *(_QWORD *)(a1 + 72) = v31;
    }
    v18 = Interrupter_PopulateInterrupterLookupTable(a1);
    v8 = v18;
    if ( v18 >= 0 )
      return (unsigned int)v8;
    v19 = 26;
LABEL_55:
    LODWORD(v34) = v18;
    WPP_RECORDER_SF_d(*(_QWORD *)(v3 + 72), 2u, 9u, v19, (__int64)&WPP_e3ff60b53c4034148ad8b37c0aef3b5d_Traceguids, v34);
    return (unsigned int)v8;
  }
  v8 = -1073741670;
  v9 = 16;
LABEL_3:
  WPP_RECORDER_SF_(*(_QWORD *)(v3 + 72), 2u, 9u, v9, (__int64)&WPP_e3ff60b53c4034148ad8b37c0aef3b5d_Traceguids);
  return (unsigned int)v8;
}
