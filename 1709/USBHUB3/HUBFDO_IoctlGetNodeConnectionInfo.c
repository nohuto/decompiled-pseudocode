/*
 * XREFs of HUBFDO_IoctlGetNodeConnectionInfo @ 0x1C000B9B4
 * Callers:
 *     HUBFDO_EvtIoDeviceControl @ 0x1C0069D90 (HUBFDO_EvtIoDeviceControl.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00019E4 (WPP_RECORDER_SF_d.c)
 *     McTemplateK0pqq @ 0x1C000A7EC (McTemplateK0pqq.c)
 *     HUBFDO_GetPortStatusForDebugging @ 0x1C000B75C (HUBFDO_GetPortStatusForDebugging.c)
 *     __security_check_cookie @ 0x1C00389B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0038E70 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00391C0 (memset.c)
 *     HUBFDO_IoctlValidateParameters @ 0x1C0067564 (HUBFDO_IoctlValidateParameters.c)
 */

__int64 __fastcall HUBFDO_IoctlGetNodeConnectionInfo(__int64 a1, __int64 a2, size_t a3, int a4, char a5)
{
  __int64 v5; // r12
  int v8; // r14d
  __int64 v9; // rax
  __int64 v10; // rdi
  int v11; // eax
  unsigned int v12; // esi
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 i; // rcx
  __int64 v16; // rcx
  __int64 v17; // rbx
  __int64 v18; // rbx
  _WORD *v19; // rcx
  char v20; // cl
  KIRQL v21; // al
  KIRQL v22; // r11
  __int64 v23; // rcx
  char v24; // dl
  unsigned __int64 v25; // r15
  __int64 v26; // rcx
  __int64 v27; // r9
  unsigned int v28; // r12d
  unsigned int j; // r10d
  _BYTE *v30; // rdx
  __int64 v31; // rax
  __int64 v32; // r8
  __int64 v33; // rax
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // rcx
  int v37; // edx
  bool v38; // sf
  PKSPIN_LOCK *v39; // r8
  const EVENT_DESCRIPTOR *v40; // rdx
  int v41; // edx
  __int64 v43; // [rsp+20h] [rbp-58h]
  __int64 v44; // [rsp+28h] [rbp-50h]
  void *v45; // [rsp+30h] [rbp-48h] BYREF
  unsigned int v46; // [rsp+38h] [rbp-40h]
  _QWORD v47[2]; // [rsp+40h] [rbp-38h] BYREF
  PKSPIN_LOCK SpinLock[2]; // [rsp+50h] [rbp-28h] BYREF

  v5 = a2;
  v47[0] = a2;
  v8 = 0;
  v9 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1256))(WdfDriverGlobals, a1);
  v10 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
          WdfDriverGlobals,
          v9,
          off_1C005B0C0);
  v11 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, size_t, void **, _QWORD))(WdfFunctions_01015 + 2160))(
          WdfDriverGlobals,
          v5,
          a3,
          &v45,
          0LL);
  v12 = v11;
  if ( v11 < 0 )
  {
    WPP_RECORDER_SF_d(
      *(_QWORD *)(v10 + 2512),
      2u,
      3u,
      0x24u,
      (__int64)&WPP_ae437379bf4e39bc88b98c8aab0da7f7_Traceguids,
      v11);
    goto LABEL_39;
  }
  v12 = HUBFDO_IoctlValidateParameters(v10, 4, a4, (_DWORD)v45, 35LL, a3);
  if ( (v12 & 0x80000000) == 0 )
  {
    v8 = *(unsigned __int16 *)v45;
    memset(v45, 0, a3);
    v13 = v10 + 2352;
    v14 = 248LL;
    for ( i = *(_QWORD *)(v10 + 2352); ; i = *(_QWORD *)(v16 + 248) )
    {
      v16 = i - 248;
      if ( v13 == v16 + 248 )
        goto LABEL_8;
      if ( *(unsigned __int16 *)(v16 + 200) == v8 )
        break;
    }
    if ( !v16 )
    {
LABEL_8:
      *(_DWORD *)((char *)v45 + 31) = 3;
      goto LABEL_9;
    }
    *(_DWORD *)((char *)v45 + 31) = *(_DWORD *)(v16 + 1424);
LABEL_9:
    if ( *(_BYTE *)(v10 + 12) )
      HUBFDO_GetPortStatusForDebugging((_QWORD *)v10, v8);
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64, __int64))(WdfFunctions_01015 + 1072))(
      WdfDriverGlobals,
      *(_QWORD *)(v10 + 16),
      v13,
      v14);
    v17 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD, __int64))(WdfFunctions_01015 + 1080))(
            WdfDriverGlobals,
            *(_QWORD *)(v10 + 16),
            0LL,
            1LL);
    if ( !v17 )
      goto LABEL_38;
    do
    {
      if ( *(unsigned __int16 *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015
                                                                                                 + 1616))(
                                   WdfDriverGlobals,
                                   v17,
                                   off_1C005B070)
                               + 48) == v8 )
        break;
      v17 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64, __int64))(WdfFunctions_01015 + 1080))(
              WdfDriverGlobals,
              *(_QWORD *)(v10 + 16),
              v17,
              1LL);
    }
    while ( v17 );
    if ( !v17 )
    {
LABEL_38:
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1088))(
        WdfDriverGlobals,
        *(_QWORD *)(v10 + 16));
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01015 + 2200))(
        WdfDriverGlobals,
        v5,
        35LL);
      v12 = 0;
      goto LABEL_39;
    }
    v18 = *(_QWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                        WdfDriverGlobals,
                        v17,
                        off_1C005B070)
                    + 24);
    *(_DWORD *)v45 = v8;
    v19 = v45;
    *(_OWORD *)((char *)v45 + 4) = *(_OWORD *)(v18 + 1988);
    v19[10] = *(_WORD *)(v18 + 2004);
    *(_DWORD *)((char *)v45 + 27) = 0;
    if ( a5 )
    {
      if ( *(_DWORD *)(v18 + 172) == 3 )
      {
        *((_BYTE *)v45 + 23) = 2;
LABEL_23:
        *(_WORD *)((char *)v45 + 25) = *(_WORD *)(v18 + 1648);
        if ( (*(_DWORD *)(v18 + 1632) & 2) != 0 )
          *((_BYTE *)v45 + 24) = 1;
        SpinLock[0] = (PKSPIN_LOCK)(v18 + 40);
        v21 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v18 + 40));
        v22 = v21;
        if ( (*(_DWORD *)(v18 + 1636) & 0x10) != 0 && (v23 = *(_QWORD *)(v18 + 48)) != 0 )
        {
          v24 = *(_BYTE *)(v23 + 37);
          v25 = a3 - 35;
          v46 = 0;
          *((_BYTE *)v45 + 22) = v24;
          *(_DWORD *)((char *)v45 + 27) = *(_DWORD *)(*(_QWORD *)(v18 + 48) + 8LL);
          v26 = *(_QWORD *)(v18 + 48);
          v27 = *(_QWORD *)(v26 + 16) - 8LL;
          if ( v26 != *(_QWORD *)(v26 + 16) - 16LL )
          {
            v28 = v46;
            do
            {
              if ( v25 < 0xB )
                break;
              for ( j = 0; j < *(_DWORD *)(v27 + 24); *(_DWORD *)((char *)v45 + v32 + 42) = 0 )
              {
                if ( v25 < 0xB )
                  break;
                v30 = v45;
                v25 -= 11LL;
                v31 = v28++;
                v32 = 11 * v31;
                v33 = j++;
                v34 = *(_QWORD *)(v27 + 72 * (v33 + 1));
                *(_DWORD *)((char *)v45 + v32 + 35) = *(_DWORD *)v34;
                *(_WORD *)&v30[v32 + 39] = *(_WORD *)(v34 + 4);
                v30[v32 + 41] = *(_BYTE *)(v34 + 6);
              }
              v27 = *(_QWORD *)(v27 + 8) - 8LL;
            }
            while ( *(_QWORD *)(v18 + 48) != v27 - 8 );
            v5 = v47[0];
          }
          KeReleaseSpinLock(SpinLock[0], v22);
          v35 = a3 - v25;
        }
        else
        {
          KeReleaseSpinLock((PKSPIN_LOCK)(v18 + 40), v21);
          v35 = 35LL;
        }
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01015 + 2200))(
          WdfDriverGlobals,
          v5,
          v35);
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1088))(
          WdfDriverGlobals,
          *(_QWORD *)(v10 + 16));
        goto LABEL_39;
      }
      v20 = *(_BYTE *)(v18 + 172);
    }
    else
    {
      v20 = *(_DWORD *)(v18 + 172) == 0;
    }
    *((_BYTE *)v45 + 23) = v20;
    goto LABEL_23;
  }
LABEL_39:
  if ( a5 == 1 )
  {
    if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 0x400) == 0 )
      return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2104))(
               WdfDriverGlobals,
               v5,
               v12);
    v36 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2280))(WdfDriverGlobals, v5);
    v37 = *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters
        ? (*(__int64 (__fastcall **)(__int64, PKSPIN_LOCK *))&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters)(v36, SpinLock)
        : -1073741275;
    if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 0x400) == 0 )
      return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2104))(
               WdfDriverGlobals,
               v5,
               v12);
    v38 = v37 < 0;
    v39 = SpinLock;
    v40 = (const EVENT_DESCRIPTOR *)&USBHUB3_ETW_EVENT_HUB_IOCTL_USB_GET_NODE_CONNECTION_INFORMATION_EX_COMPLETE;
  }
  else
  {
    if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 0x400) == 0 )
      return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2104))(
               WdfDriverGlobals,
               v5,
               v12);
    v36 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2280))(WdfDriverGlobals, v5);
    v41 = *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters
        ? (*(__int64 (__fastcall **)(__int64, _QWORD *))&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters)(v36, v47)
        : -1073741275;
    if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 0x400) == 0 )
      return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2104))(
               WdfDriverGlobals,
               v5,
               v12);
    v38 = v41 < 0;
    v39 = (PKSPIN_LOCK *)v47;
    v40 = (const EVENT_DESCRIPTOR *)&USBHUB3_ETW_EVENT_HUB_IOCTL_USB_GET_NODE_CONNECTION_INFORMATION_COMPLETE;
  }
  if ( v38 )
    v39 = 0LL;
  LODWORD(v44) = v12;
  LODWORD(v43) = v8;
  McTemplateK0pqq(v36, v40, (const GUID *)v39, *(_QWORD *)(v10 + 240), v43, v44);
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2104))(
           WdfDriverGlobals,
           v5,
           v12);
}
