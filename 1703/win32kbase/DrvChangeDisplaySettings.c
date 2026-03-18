/*
 * XREFs of DrvChangeDisplaySettings @ 0x1C00563A0
 * Callers:
 *     ?xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@@KPEAXW4_MODE@@HPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0056058 (-xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C003F7F8 (PALLOCMEM2.c)
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 *     ?DrvGetPruneFlag@@YAHPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C0044514 (-DrvGetPruneFlag@@YAHPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     _DrvChangeDisplaySettings_::_2_::_AUTO_KM::__AUTO_KM @ 0x1C0056A68 (_DrvChangeDisplaySettings_--_2_--_AUTO_KM--__AUTO_KM.c)
 *     _DrvChangeDisplaySettings_::_2_::_AUTO_KM::_AUTO_KM @ 0x1C0056AAC (_DrvChangeDisplaySettings_--_2_--_AUTO_KM--_AUTO_KM.c)
 *     ?LogDiagCDS@@YAXPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagGRAPHICS_DEVICE@@PEAXW4_MODE@@HHKHH_KJJW4_DXGK_DIAG_CDS_STAGE@@I1@Z @ 0x1C0056AE0 (-LogDiagCDS@@YAXPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagGRAPHICS_DEVICE@@PEAXW4_MODE@@HHKH.c)
 *     DrvSetDisplayConfig @ 0x1C0056E00 (DrvSetDisplayConfig.c)
 *     ?DrvIsTemporarySettingChangeDisabled@@YAHXZ @ 0x1C0057C6C (-DrvIsTemporarySettingChangeDisabled@@YAHXZ.c)
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAU_D3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@@Z @ 0x1C005C288 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAU_D3DKMT_GETP.c)
 *     DrvGetDeviceFromName @ 0x1C00620F0 (DrvGetDeviceFromName.c)
 *     ?NotifyStatusChange@?$AUTO_STATUS_CHANGE_NOTIFY@$01$02@@AEAAXW4D3DKMT_STATE_NOTIFICATION_TYPE@@@Z @ 0x1C008D4B4 (-NotifyStatusChange@-$AUTO_STATUS_CHANGE_NOTIFY@$01$02@@AEAAXW4D3DKMT_STATE_NOTIFICATION_TYPE@@@.c)
 *     ?DrvIsPermanentSettingChangesDisabled@@YAHXZ @ 0x1C008DF5C (-DrvIsPermanentSettingChangesDisabled@@YAHXZ.c)
 *     memmove @ 0x1C00A21C0 (memmove.c)
 *     memset @ 0x1C00A2500 (memset.c)
 */

__int64 __fastcall DrvChangeDisplaySettings(
        _OWORD *a1,
        __int64 a2,
        _WORD *a3,
        __int64 a4,
        int a5,
        unsigned int a6,
        int a7,
        struct _MDEV *a8,
        struct _MDEV **a9,
        int a10,
        int a11,
        int a12,
        unsigned int a13,
        __int64 a14,
        __int64 a15)
{
  __int64 v16; // rsi
  bool v18; // r13
  unsigned __int64 v19; // rdx
  __int64 i; // rcx
  int v21; // r14d
  __int64 v22; // rcx
  __int64 DeviceFromName; // rbx
  __int64 v24; // rdx
  __int64 v25; // rcx
  int PruneFlag; // eax
  unsigned int v27; // edx
  int v28; // r9d
  __int64 v29; // rdx
  unsigned int v30; // esi
  __int64 v31; // r13
  unsigned __int16 v33; // bx
  _QWORD *v34; // rax
  __int64 v35; // rdx
  __int64 v36; // r8
  const void *v37; // rdx
  char *v38; // rax
  unsigned __int16 v39; // bx
  unsigned __int16 v40; // si
  __int64 v41; // rdx
  void *v42; // rcx
  __int64 v43; // r9
  unsigned __int64 v44; // rdx
  __int64 v45; // rax
  unsigned int v46; // ebx
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // rax
  __int64 v54; // rax
  __int64 v55; // rax
  _BYTE v56[8]; // [rsp+80h] [rbp-E8h] BYREF
  void *v57; // [rsp+88h] [rbp-E0h] BYREF
  int v58; // [rsp+90h] [rbp-D8h] BYREF
  int v59; // [rsp+94h] [rbp-D4h]
  unsigned __int16 v60; // [rsp+98h] [rbp-D0h]
  unsigned __int16 v61; // [rsp+9Ch] [rbp-CCh]
  _BYTE v62[48]; // [rsp+A0h] [rbp-C8h] BYREF
  _QWORD *v63; // [rsp+D0h] [rbp-98h]
  void *v64; // [rsp+D8h] [rbp-90h]
  __int64 v65; // [rsp+E0h] [rbp-88h]
  __int64 v66; // [rsp+F0h] [rbp-78h]
  _QWORD v67[7]; // [rsp+F8h] [rbp-70h] BYREF
  void *Src[2]; // [rsp+130h] [rbp-38h]
  void *retaddr; // [rsp+168h] [rbp+0h]

  v16 = a2;
  v59 = 0;
  v18 = 0;
  v65 = MEMORY[0xFFFFF78000000320];
  v66 = v65 * KeQueryTimeIncrement();
  *a9 = 0LL;
  v57 = retaddr;
  AUTO_STATUS_CHANGE_NOTIFY<2,3>::NotifyStatusChange(&v57, 2LL);
  DrvChangeDisplaySettings_::_2_::_AUTO_KM::_AUTO_KM(v62);
  v21 = a5;
  if ( !a5 )
    goto LABEL_11;
  if ( a5 == 1 )
  {
    if ( a6 && a3 && (unsigned int)DrvIsPermanentSettingChangesDisabled() )
    {
      v45 = WdLogNewEntry5_WdTrace(v22);
      WdLogEvent5_WdTrace(v45);
      v46 = -3;
LABEL_68:
      DrvChangeDisplaySettings_::_2_::_AUTO_KM::__AUTO_KM((AUTO_TGO *)v62);
      AUTO_STATUS_CHANGE_NOTIFY<2,3>::NotifyStatusChange(&v57, 3LL);
      return v46;
    }
    if ( (unsigned int)DrvIsTemporarySettingChangeDisabled() )
    {
      v47 = WdLogNewEntry5_WdTrace(i);
      WdLogEvent5_WdTrace(v47);
LABEL_66:
      v46 = -1;
      goto LABEL_68;
    }
  }
  if ( a1 )
  {
    *(_OWORD *)Src = *a1;
    v33 = (unsigned __int16)Src[0];
    v34 = PALLOCMEM2((unsigned int)LOWORD(Src[0]) + 18, 1936876615LL, 0);
    v63 = v34;
    if ( !v34 )
    {
      v49 = WdLogNewEntry5_WdLowResource(0LL, v35, v36, 0LL);
      *(_QWORD *)(v49 + 24) = a1;
      *(_QWORD *)(v49 + 32) = v33;
      WdLogEvent5_WdLowResource(v49);
      DrvChangeDisplaySettings_::_2_::_AUTO_KM::__AUTO_KM((AUTO_TGO *)v62);
      AUTO_STATUS_CHANGE_NOTIFY<2,3>::NotifyStatusChange(&v57, 3LL);
      return 0xFFFFFFFFLL;
    }
    v34[1] = v34 + 2;
    *(_WORD *)v63 = v33;
    *((_WORD *)v63 + 1) = v33 + 2;
    if ( v33 )
    {
      v37 = Src[1];
      v38 = (char *)Src[1] + v33;
      if ( v38 > (char *)W32UserProbeAddress || v38 < Src[1] )
        *(_BYTE *)W32UserProbeAddress = 0;
      memmove((void *)v63[1], v37, v33);
    }
    v19 = (unsigned __int64)v33 >> 1;
    i = v63[1];
    *(_WORD *)(i + 2 * v19) = 0;
    a1 = v63;
  }
  else
  {
    a1 = 0LL;
  }
  if ( !a3 )
  {
    a3 = 0LL;
    goto LABEL_11;
  }
  if ( ((unsigned __int8)a3 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  v60 = a3[34];
  v39 = v60;
  v40 = a3[35];
  v61 = v40;
  if ( v60 < 0xBCu )
  {
    DrvChangeDisplaySettings_::_2_::_AUTO_KM::__AUTO_KM((AUTO_TGO *)v62);
    AUTO_STATUS_CHANGE_NOTIFY<2,3>::NotifyStatusChange(&v57, 3LL);
    return 4294967294LL;
  }
  if ( v60 > 0xDCu )
  {
    v46 = -2;
    goto LABEL_68;
  }
  v42 = PALLOCMEM2((unsigned int)v40 + 220, 1936876615LL, 1);
  v64 = v42;
  if ( !v42 )
  {
    v48 = WdLogNewEntry5_WdLowResource(0LL, v41, 0LL, v43);
    *(_QWORD *)(v48 + 24) = a3;
    *(_QWORD *)(v48 + 32) = v40;
    WdLogEvent5_WdLowResource(v48);
    goto LABEL_66;
  }
  if ( v40 + v39 )
  {
    v44 = (unsigned __int64)a3 + v40 + (unsigned int)v39;
    if ( v44 > (unsigned __int64)W32UserProbeAddress || v44 < (unsigned __int64)a3 )
    {
      *(_BYTE *)W32UserProbeAddress = 0;
      v42 = v64;
    }
  }
  memmove(v42, a3, v39);
  memmove((char *)v64 + 220, (char *)a3 + v39, v40);
  i = 220LL;
  *((_WORD *)v64 + 34) = 220;
  *((_WORD *)v64 + 35) = v40;
  a3 = v64;
  v16 = a2;
  v21 = a5;
LABEL_11:
  if ( a1 )
  {
    DeviceFromName = DrvGetDeviceFromName(a1, 0LL);
    if ( DeviceFromName )
      goto LABEL_13;
    v50 = WdLogNewEntry5_WdTrace(i);
    *(_QWORD *)(v50 + 24) = 0LL;
LABEL_72:
    WdLogEvent5_WdTrace(v50);
    DrvChangeDisplaySettings_::_2_::_AUTO_KM::__AUTO_KM((AUTO_TGO *)v62);
    AUTO_STATUS_CHANGE_NOTIFY<2,3>::NotifyStatusChange(&v57, 3LL);
    return 4294967291LL;
  }
  if ( a3 )
  {
    if ( v16 )
      DeviceFromName = *(_QWORD *)(v16 + 2592);
    else
      DeviceFromName = 0LL;
    if ( !DeviceFromName )
    {
      v50 = WdLogNewEntry5_WdTrace(i);
      *(_QWORD *)(v50 + 24) = 1LL;
      goto LABEL_72;
    }
  }
  else
  {
    DeviceFromName = 0LL;
  }
LABEL_13:
  if ( !gProtocolType )
  {
    if ( DeviceFromName )
    {
      v18 = (*(_DWORD *)(DeviceFromName + 160) & 0x800000) != 0;
    }
    else
    {
      for ( i = (__int64)gpGraphicsDeviceList; i; i = *(_QWORD *)(i + 128) )
      {
        if ( (*(_DWORD *)(i + 160) & 0x800000) != 0 )
        {
          v18 = 1;
          break;
        }
      }
    }
  }
  if ( v21
    && DeviceFromName
    && !*(_QWORD *)(DeviceFromName + 136)
    && (*(_DWORD *)(DeviceFromName + 160) & 0x6000008) == 0 )
  {
    v50 = WdLogNewEntry5_WdTrace(i);
    *(_QWORD *)(v50 + 24) = 2LL;
    goto LABEL_72;
  }
  if ( v18 )
  {
    v56[0] = 0;
    memset(v67, 0, sizeof(v67));
    if ( a3 )
    {
      if ( ((DeviceFromName + 4) & 0xFFFFFFFFFFFFFFFBuLL) == 0 || (*(_DWORD *)(DeviceFromName + 160) & 0x800000) == 0 )
      {
        v52 = WdLogNewEntry5_WdAssertion(v25, v24);
        WdLogEvent5_WdAssertion(v52);
      }
      v67[0] = DeviceFromName;
      LODWORD(v67[1]) = a11;
      v67[2] = __PAIR64__(a6, a13);
      v67[4] = a3;
      LODWORD(v67[3]) = a7;
      if ( a10 == -1 )
        PruneFlag = DrvGetPruneFlag((struct tagGRAPHICS_DEVICE *)DeviceFromName);
      else
        PruneFlag = a10 != 0;
      HIDWORD(v67[1]) = PruneFlag;
    }
    v27 = (a7 != 0 ? 128 : 64) | (a12 != 0 ? 0x100 : 0) | 0xF;
    v28 = 32;
    if ( !a3 && a7 )
    {
      v27 = (a7 != 0 ? 128 : 64) | (a12 != 0 ? 0x100 : 0) | 0x80F;
      v28 = 34;
    }
    v59 = DrvSetDisplayConfig(
            0,
            0,
            0,
            0,
            v27,
            v28,
            a4,
            a5 != 0,
            (__int64)v67,
            a8,
            a9,
            (__int64)&v58,
            0LL,
            (__int64)v56,
            a14,
            a15);
    v30 = v67[6];
    v31 = v67[5];
    if ( v59 < 0 )
    {
      if ( SLODWORD(v67[6]) >= 0 )
      {
        v55 = WdLogNewEntry5_WdAssertion(0LL, v29);
        WdLogEvent5_WdAssertion(v55);
      }
    }
    else
    {
      if ( SLODWORD(v67[6]) < 0 )
      {
        v53 = WdLogNewEntry5_WdAssertion(0LL, v29);
        WdLogEvent5_WdAssertion(v53);
      }
      if ( v56[0] )
      {
        if ( a12 )
        {
          v54 = WdLogNewEntry5_WdAssertion(0LL, v29);
          WdLogEvent5_WdAssertion(v54);
        }
        v30 = 2;
      }
    }
  }
  else
  {
    if ( gOldModeChange )
    {
      v51 = WdLogNewEntry5_WdAssertion(i, v19);
      WdLogEvent5_WdAssertion(v51);
    }
    gOldModeChange = 1;
    v30 = DrvChangeDisplaySettingsInternal(DeviceFromName, a3, 0LL, a4, a6, a7, a8, a9, a10, a11, a12, 0, 0);
    gOldModeChange = 0;
    v58 = 1;
    v31 = 0LL;
  }
  LogDiagCDS(a1, a3, DeviceFromName);
  if ( v31 )
    Win32FreePool(v31);
  DrvChangeDisplaySettings_::_2_::_AUTO_KM::__AUTO_KM((AUTO_TGO *)v62);
  AUTO_STATUS_CHANGE_NOTIFY<2,3>::NotifyStatusChange(&v57, 3LL);
  return v30;
}
