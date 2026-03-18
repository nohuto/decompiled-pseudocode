/*
 * XREFs of HUBACPI_GetAcpiPortAttributes @ 0x1C0073BA8
 * Callers:
 *     HUBFDO_EvtDevicePrepareHardware @ 0x1C0066B40 (HUBFDO_EvtDevicePrepareHardware.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00019D4 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001DC8 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_dD @ 0x1C0001E98 (WPP_RECORDER_SF_dD.c)
 *     McTemplateK0pqq @ 0x1C000A7AC (McTemplateK0pqq.c)
 *     _guard_dispatch_icall_nop @ 0x1C0039BA0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0039F00 (memset.c)
 *     HUBACPI_EvaluateDsmMethod @ 0x1C0072FE4 (HUBACPI_EvaluateDsmMethod.c)
 *     HUBACPI_EvalAcpiMethodEx @ 0x1C0073450 (HUBACPI_EvalAcpiMethodEx.c)
 *     HUBACPI_EnumChildren @ 0x1C0073818 (HUBACPI_EnumChildren.c)
 */

__int64 __fastcall HUBACPI_GetAcpiPortAttributes(__int64 a1)
{
  __int64 (__fastcall *v2)(PWDF_DRIVER_GLOBALS, _QWORD *, _QWORD, __int64, __int64, __int64 *, _QWORD *); // rax
  int v3; // eax
  unsigned __int16 v4; // r9
  int v5; // eax
  unsigned __int16 v6; // r9
  unsigned __int8 v7; // dl
  __int64 v8; // rbx
  _DWORD *v9; // rdx
  int v10; // ecx
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned __int16 v13; // r15
  _QWORD *i; // rax
  _QWORD *v15; // rbx
  unsigned __int16 v16; // r9
  unsigned int v17; // r8d
  unsigned __int8 v18; // dl
  int v19; // ecx
  int v20; // r12d
  int v21; // ebx
  __int64 v22; // rcx
  const EVENT_DESCRIPTOR *v23; // rdx
  __int64 v25; // rcx
  unsigned __int64 v26; // rdx
  unsigned int v27; // r8d
  __int64 v28; // rcx
  unsigned int v29; // r9d
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // [rsp+20h] [rbp-79h]
  __int64 v33; // [rsp+28h] [rbp-71h]
  __int64 *v34; // [rsp+28h] [rbp-71h]
  __int64 *v35; // [rsp+30h] [rbp-69h]
  __int64 v36; // [rsp+40h] [rbp-59h] BYREF
  __int64 v37; // [rsp+48h] [rbp-51h] BYREF
  unsigned __int16 v38[4]; // [rsp+50h] [rbp-49h] BYREF
  _DWORD *v39; // [rsp+58h] [rbp-41h]
  __int64 v40; // [rsp+60h] [rbp-39h] BYREF
  _QWORD v41[7]; // [rsp+68h] [rbp-31h] BYREF
  _QWORD v42[10]; // [rsp+A0h] [rbp+7h] BYREF
  int v43; // [rsp+100h] [rbp+67h]
  _DWORD *v44; // [rsp+108h] [rbp+6Fh]
  __int64 v45; // [rsp+110h] [rbp+77h] BYREF
  __int64 v46; // [rsp+118h] [rbp+7Fh] BYREF

  v36 = 0LL;
  v45 = 0LL;
  v37 = 0LL;
  memset(v41, 0, sizeof(v41));
  v41[4] = *(_QWORD *)(a1 + 16);
  LODWORD(v41[0]) = 56;
  v2 = *(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD *, _QWORD, __int64, __int64, __int64 *, _QWORD *))(WdfFunctions_01015 + 1536);
  v41[3] = 0x100000001LL;
  v3 = v2(WdfDriverGlobals, v41, (unsigned int)ExDefaultNonPagedPoolType, 1748191317LL, 20LL, &v37, v42);
  if ( v3 < 0 )
  {
    v4 = 32;
LABEL_3:
    LODWORD(v33) = v3;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(a1 + 2512),
      2u,
      3u,
      v4,
      (__int64)&WPP_22ffb5924eb63740e896026b857d240f_Traceguids,
      v33);
    goto LABEL_47;
  }
  v5 = HUBACPI_EnumChildren(a1, v37);
  if ( v5 == -1073741637 )
  {
    v6 = 33;
    v7 = 4;
LABEL_6:
    WPP_RECORDER_SF_(*(_QWORD *)(a1 + 2512), v7, 3u, v6, (__int64)&WPP_22ffb5924eb63740e896026b857d240f_Traceguids);
    goto LABEL_47;
  }
  if ( v5 == -2147483643 )
  {
    WPP_RECORDER_SF_(*(_QWORD *)(a1 + 2512), 4u, 3u, 0x22u, (__int64)&WPP_22ffb5924eb63740e896026b857d240f_Traceguids);
    v8 = *(unsigned int *)(v42[0] + 4LL);
    memset(v41, 0, sizeof(v41));
    v41[4] = *(_QWORD *)(a1 + 16);
    LODWORD(v41[0]) = 56;
    v41[3] = 0x100000001LL;
    if ( (*(int (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD *, _QWORD, __int64, __int64, __int64 *, __int64 *))(WdfFunctions_01015 + 1536))(
           WdfDriverGlobals,
           v41,
           (unsigned int)ExDefaultNonPagedPoolType,
           1748191317LL,
           v8,
           &v36,
           &v40) < 0 )
    {
      v6 = 35;
LABEL_10:
      v7 = 2;
      goto LABEL_6;
    }
    v3 = HUBACPI_EnumChildren(a1, v36);
    if ( v3 < 0 )
    {
      v4 = 36;
      goto LABEL_3;
    }
    memset(v41, 0, sizeof(v41));
    v35 = &v46;
    v41[4] = *(_QWORD *)(a1 + 16);
    v34 = &v45;
    LODWORD(v41[0]) = 56;
    v41[3] = 0x100000001LL;
    LODWORD(v32) = 1044;
    if ( (*(int (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD *, _QWORD, __int64))(WdfFunctions_01015 + 1536))(
           WdfDriverGlobals,
           v41,
           (unsigned int)ExDefaultNonPagedPoolType,
           1748191317LL) < 0 )
    {
      v6 = 37;
      goto LABEL_10;
    }
    v43 = 1;
    v9 = (_DWORD *)(v40 + 8);
    if ( *(_DWORD *)(v40 + 4) > 1u )
    {
      while ( 1 )
      {
        v9 = (_DWORD *)((char *)v9 + (unsigned int)v9[1] + 8);
        v44 = v9;
        if ( (*v9 & 1) == 0 )
          goto LABEL_46;
        v10 = v9[1];
        if ( !v10 )
          goto LABEL_46;
        v38[1] = v9[1];
        v39 = v9 + 2;
        v38[0] = v10 - 1;
        if ( (int)HUBACPI_EvalAcpiMethodEx(a1, v38, 1380204895, v45) < 0
          || !*(_DWORD *)(v46 + 8)
          || *(_WORD *)(v46 + 12) )
        {
          goto LABEL_45;
        }
        v13 = *(_WORD *)(v46 + 16);
        if ( !v13 || v13 > *(_WORD *)(a1 + 48) )
        {
          LODWORD(v34) = v13;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(a1 + 2512),
            2u,
            6u,
            0x26u,
            (__int64)&WPP_22ffb5924eb63740e896026b857d240f_Traceguids,
            v34);
          goto LABEL_45;
        }
        for ( i = *(_QWORD **)(a1 + 2352); ; i = (_QWORD *)*i )
        {
          v15 = i - 31;
          if ( (_QWORD *)(a1 + 2352) == i )
            goto LABEL_45;
          if ( *((_WORD *)v15 + 100) == v13 )
            break;
        }
        if ( (int)HUBACPI_EvaluateDsmMethod(a1, v38, v11, v12, v32, v45) >= 0 )
          break;
LABEL_40:
        v20 = HUBACPI_EvalAcpiMethodEx(a1, v38, 1129338207, v45);
        if ( v20 < 0 )
        {
          v21 = v13;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(a1 + 2512),
            4u,
            3u,
            0x2Bu,
            (__int64)&WPP_22ffb5924eb63740e896026b857d240f_Traceguids);
          goto LABEL_42;
        }
        v25 = v46;
        if ( *(_DWORD *)(v46 + 8) )
        {
          v26 = v46 + 12;
          v27 = 0;
          if ( v46 + 12 < v46 + (unsigned __int64)*(unsigned int *)(v46 + 4) )
          {
            while ( v27 < *(_DWORD *)(v25 + 8) )
            {
              if ( v27 >= 4 )
              {
                v20 = -1072431093;
                goto LABEL_71;
              }
              if ( *(_WORD *)v26 )
              {
                v20 = -1072431096;
                goto LABEL_71;
              }
              v28 = acpiUpcPackageFields[2 * v27];
              v29 = acpiUpcPackageFields[2 * v27 + 1];
              if ( v29 == 1 )
              {
                *((_BYTE *)v15 + v28 + 1340) = *(_BYTE *)(v26 + 4);
              }
              else
              {
                if ( v29 != 4 )
                {
                  v20 = -1072431089;
                  break;
                }
                *(_DWORD *)((char *)v15 + v28 + 1340) = *(_DWORD *)(v26 + 4);
              }
              LOWORD(v30) = *(_WORD *)(v26 + 2);
              if ( (unsigned __int16)v30 >= 4u )
                v30 = (unsigned __int16)v30;
              else
                v30 = 4LL;
              v25 = v46;
              v26 += v30 + 4;
              ++v27;
              if ( v26 >= v46 + (unsigned __int64)*(unsigned int *)(v46 + 4) )
                break;
            }
          }
          if ( v20 < 0 )
          {
LABEL_71:
            LODWORD(v35) = v20;
            v21 = v13;
            LODWORD(v34) = v13;
            WPP_RECORDER_SF_dD(
              *(_QWORD *)(a1 + 2512),
              2u,
              6u,
              0x2Du,
              (__int64)&WPP_22ffb5924eb63740e896026b857d240f_Traceguids,
              v34,
              v35);
LABEL_42:
            if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 0x4000) == 0 )
              goto LABEL_45;
            v23 = &USBHUB3_ETW_EVENT_HUB_PORT_ACPI_UPC_FAILURE;
LABEL_44:
            LODWORD(v34) = v20;
            LODWORD(v32) = v21;
            McTemplateK0pqq(v22, v23, 0LL, *(_QWORD *)(a1 + 16), v32, v34);
            goto LABEL_45;
          }
          _InterlockedOr((volatile signed __int32 *)v15 + 51, 2u);
          if ( *((_BYTE *)v15 + 1340) )
            _InterlockedOr((volatile signed __int32 *)v15 + 51, 1u);
          else
            _InterlockedAnd((volatile signed __int32 *)v15 + 51, 0xFFFFFFFE);
          if ( *((_BYTE *)v15 + 1341) == 10 )
            _InterlockedOr((volatile signed __int32 *)v15 + 51, 0x200u);
          v20 = HUBACPI_EvalAcpiMethodEx(a1, v38, 1145851999, v45);
          if ( v20 < 0 )
          {
            v21 = v13;
            WPP_RECORDER_SF_dD(
              *(_QWORD *)(a1 + 2512),
              4u,
              3u,
              0x2Eu,
              (__int64)&WPP_22ffb5924eb63740e896026b857d240f_Traceguids);
            goto LABEL_82;
          }
          v31 = v46;
          if ( !*(_DWORD *)(v46 + 8) || *(_WORD *)(v46 + 12) != 2 || *(_WORD *)(v46 + 14) < 0x10u )
          {
            v21 = v13;
            LODWORD(v34) = v13;
            WPP_RECORDER_SF_d(
              *(_QWORD *)(a1 + 2512),
              2u,
              6u,
              0x2Fu,
              (__int64)&WPP_22ffb5924eb63740e896026b857d240f_Traceguids,
              v34);
LABEL_82:
            if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 0x4000) != 0 )
            {
              v23 = (const EVENT_DESCRIPTOR *)&USBHUB3_ETW_EVENT_HUB_PORT_ACPI_PLD_FAILURE;
              goto LABEL_44;
            }
            goto LABEL_45;
          }
          *(_OWORD *)(v15 + 169) = *(_OWORD *)(v46 + 16);
          _InterlockedOr((volatile signed __int32 *)v15 + 51, 4u);
          if ( (*(_BYTE *)(v31 + 24) & 1) == 0 )
            _InterlockedAnd((volatile signed __int32 *)v15 + 51, 0xFFFFFFFE);
          _InterlockedOr((volatile signed __int32 *)(a1 + 40), 0x40000u);
        }
        else
        {
          if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 0x4000) != 0 )
          {
            LODWORD(v34) = -1072431093;
            LODWORD(v32) = v13;
            McTemplateK0pqq(v46, &USBHUB3_ETW_EVENT_HUB_PORT_ACPI_UPC_FAILURE, 0LL, *(_QWORD *)(a1 + 16), v32, v34);
          }
          LODWORD(v34) = v13;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(a1 + 2512),
            2u,
            6u,
            0x2Cu,
            (__int64)&WPP_22ffb5924eb63740e896026b857d240f_Traceguids,
            v34);
        }
LABEL_45:
        v9 = v44;
LABEL_46:
        if ( (unsigned int)++v43 >= *(_DWORD *)(v40 + 4) )
          goto LABEL_47;
      }
      if ( *(_WORD *)(v46 + 12) )
      {
        v16 = 39;
        v17 = 6;
        v18 = 2;
      }
      else
      {
        v19 = *(unsigned __int16 *)(v46 + 16);
        *((_DWORD *)v15 + 54) = v19;
        switch ( v19 )
        {
          case 0:
            goto LABEL_40;
          case 1:
            v16 = 40;
            break;
          case 2:
            v16 = 41;
            break;
          default:
            v16 = 42;
            LODWORD(v34) = v19;
            v18 = 2;
            v17 = 6;
LABEL_39:
            WPP_RECORDER_SF_d(
              *(_QWORD *)(a1 + 2512),
              v18,
              v17,
              v16,
              (__int64)&WPP_22ffb5924eb63740e896026b857d240f_Traceguids,
              v34);
            goto LABEL_40;
        }
        v18 = 4;
        v17 = 3;
      }
      LODWORD(v34) = v13;
      goto LABEL_39;
    }
  }
LABEL_47:
  if ( v36 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1664))(WdfDriverGlobals);
  if ( v45 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1664))(WdfDriverGlobals);
  if ( v37 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1664))(WdfDriverGlobals);
  return 0LL;
}
