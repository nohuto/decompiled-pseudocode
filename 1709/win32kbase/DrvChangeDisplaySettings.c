/*
 * XREFs of DrvChangeDisplaySettings @ 0x1C006586C
 * Callers:
 *     ?xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@@KPEAXW4_MODE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0065520 (-xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C0040604 (PALLOCMEM2.c)
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 *     DrvGetDeviceFromName @ 0x1C005A6D0 (DrvGetDeviceFromName.c)
 *     ?DrvIsPermanentSettingChangesDisabled@@YAHXZ @ 0x1C0063EAC (-DrvIsPermanentSettingChangesDisabled@@YAHXZ.c)
 *     ?DrvGetPruneFlag@@YAHPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C0063F4C (-DrvGetPruneFlag@@YAHPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     _DrvChangeDisplaySettings_::_2_::_AUTO_KM::__AUTO_KM @ 0x1C0065F44 (_DrvChangeDisplaySettings_--_2_--_AUTO_KM--__AUTO_KM.c)
 *     _DrvChangeDisplaySettings_::_2_::_AUTO_KM::_AUTO_KM @ 0x1C0065F88 (_DrvChangeDisplaySettings_--_2_--_AUTO_KM--_AUTO_KM.c)
 *     ?LogDiagCDS@@YAXPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagGRAPHICS_DEVICE@@PEAXW4_MODE@@HHKHH_KJJW4_DXGK_DIAG_CDS_STAGE@@I1@Z @ 0x1C0065FBC (-LogDiagCDS@@YAXPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagGRAPHICS_DEVICE@@PEAXW4_MODE@@HHKH.c)
 *     DrvSetDisplayConfig @ 0x1C00662E0 (DrvSetDisplayConfig.c)
 *     ?DrvIsTemporarySettingChangeDisabled@@YAHXZ @ 0x1C006745C (-DrvIsTemporarySettingChangeDisabled@@YAHXZ.c)
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@@Z @ 0x1C00686F4 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 *     ?NotifyStatusChange@?$AUTO_STATUS_CHANGE_NOTIFY@$01$02@@AEAAXW4D3DKMT_STATE_NOTIFICATION_TYPE@@@Z @ 0x1C009478C (-NotifyStatusChange@-$AUTO_STATUS_CHANGE_NOTIFY@$01$02@@AEAAXW4D3DKMT_STATE_NOTIFICATION_TYPE@@@.c)
 *     memmove @ 0x1C00AB840 (memmove.c)
 *     memset @ 0x1C00ABB80 (memset.c)
 */

__int64 __fastcall DrvChangeDisplaySettings(
        UNICODE_STRING *a1,
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
  __int64 v19; // r14
  unsigned __int64 v20; // rdx
  __int64 Buffer; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rcx
  wchar_t *DeviceFromName; // rbx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  int PruneFlag; // eax
  int v31; // r8d
  int v32; // r9d
  __int64 v33; // rdx
  __int64 v34; // r8
  __int64 v35; // r9
  unsigned int v36; // esi
  USHORT v38; // bx
  UNICODE_STRING *v39; // rax
  const void *v40; // rdx
  char *v41; // rcx
  unsigned __int16 v42; // bx
  unsigned __int16 v43; // si
  __int64 v44; // rdx
  __int64 v45; // rcx
  _WORD *v46; // r9
  ULONG64 v47; // rcx
  __int64 v48; // rax
  unsigned int v49; // ebx
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // rax
  __int64 v54; // rax
  __int64 v55; // rax
  __int64 v56; // rax
  __int64 v57; // rax
  __int64 v58; // rax
  char v59[8]; // [rsp+80h] [rbp-E8h] BYREF
  void *v60; // [rsp+88h] [rbp-E0h] BYREF
  int v61; // [rsp+90h] [rbp-D8h] BYREF
  int v62; // [rsp+94h] [rbp-D4h]
  unsigned __int16 v63; // [rsp+98h] [rbp-D0h]
  unsigned __int16 v64; // [rsp+9Ch] [rbp-CCh]
  _BYTE v65[48]; // [rsp+A0h] [rbp-C8h] BYREF
  UNICODE_STRING *v66; // [rsp+D0h] [rbp-98h]
  _WORD *v67; // [rsp+D8h] [rbp-90h]
  __int64 v68; // [rsp+E0h] [rbp-88h]
  __int64 v69; // [rsp+E8h] [rbp-80h]
  __int64 v70; // [rsp+F0h] [rbp-78h]
  _QWORD v71[7]; // [rsp+F8h] [rbp-70h] BYREF
  void *Src[2]; // [rsp+130h] [rbp-38h]
  void *retaddr; // [rsp+168h] [rbp+0h]

  v16 = a2;
  v62 = 0;
  v18 = 0;
  v19 = 0LL;
  v69 = 0LL;
  v68 = MEMORY[0xFFFFF78000000320];
  v70 = v68 * KeQueryTimeIncrement();
  *a9 = 0LL;
  v60 = retaddr;
  AUTO_STATUS_CHANGE_NOTIFY<2,3>::NotifyStatusChange(&v60, 2LL);
  DrvChangeDisplaySettings_::_2_::_AUTO_KM::_AUTO_KM(v65);
  if ( !a5 )
    goto LABEL_11;
  if ( a5 == 1 )
  {
    if ( a6 && a3 && DrvIsPermanentSettingChangesDisabled() )
    {
      v48 = WdLogNewEntry5_WdTrace(v24);
      WdLogEvent5_WdTrace(v48);
      v49 = -3;
LABEL_68:
      DrvChangeDisplaySettings_::_2_::_AUTO_KM::__AUTO_KM((AUTO_TGO *)v65);
      AUTO_STATUS_CHANGE_NOTIFY<2,3>::NotifyStatusChange(&v60, 3LL);
      return v49;
    }
    if ( (unsigned int)DrvIsTemporarySettingChangeDisabled() )
    {
      v50 = WdLogNewEntry5_WdTrace(Buffer);
      WdLogEvent5_WdTrace(v50);
LABEL_66:
      v49 = -1;
      goto LABEL_68;
    }
  }
  if ( a1 )
  {
    *(UNICODE_STRING *)Src = *a1;
    v38 = (USHORT)Src[0];
    v39 = (UNICODE_STRING *)PALLOCMEM2((unsigned int)LOWORD(Src[0]) + 18, 1936876615LL, 0);
    v66 = v39;
    if ( !v39 )
    {
      v52 = ((__int64 (*)(void))WdLogNewEntry5_WdLowResource)();
      *(_QWORD *)(v52 + 24) = a1;
      *(_QWORD *)(v52 + 32) = v38;
      WdLogEvent5_WdLowResource(v52);
      DrvChangeDisplaySettings_::_2_::_AUTO_KM::__AUTO_KM((AUTO_TGO *)v65);
      AUTO_STATUS_CHANGE_NOTIFY<2,3>::NotifyStatusChange(&v60, 3LL);
      return 0xFFFFFFFFLL;
    }
    v39->Buffer = &v39[1].Length;
    v66->Length = v38;
    v66->MaximumLength = v38 + 2;
    if ( v38 )
    {
      v40 = Src[1];
      v41 = (char *)Src[1] + v38;
      if ( (unsigned __int64)v41 > MmUserProbeAddress || v41 < Src[1] )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(v66->Buffer, v40, v38);
    }
    v20 = (unsigned __int64)v38 >> 1;
    Buffer = (__int64)v66->Buffer;
    *(_WORD *)(Buffer + 2 * v20) = 0;
    a1 = v66;
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
  v63 = a3[34];
  v42 = v63;
  v43 = a3[35];
  v64 = v43;
  if ( v63 < 0xBCu )
  {
    DrvChangeDisplaySettings_::_2_::_AUTO_KM::__AUTO_KM((AUTO_TGO *)v65);
    AUTO_STATUS_CHANGE_NOTIFY<2,3>::NotifyStatusChange(&v60, 3LL);
    return 4294967294LL;
  }
  if ( v63 > 0xDCu )
  {
    v49 = -2;
    goto LABEL_68;
  }
  v46 = PALLOCMEM2((unsigned int)v43 + 220, 1936876615LL, 1);
  v67 = v46;
  if ( !v46 )
  {
    v51 = WdLogNewEntry5_WdLowResource(v45, v44, 0LL);
    *(_QWORD *)(v51 + 24) = a3;
    *(_QWORD *)(v51 + 32) = v43;
    WdLogEvent5_WdLowResource(v51);
    goto LABEL_66;
  }
  if ( v43 + v42 )
  {
    v47 = (ULONG64)a3 + v43 + (unsigned int)v42;
    if ( v47 > MmUserProbeAddress || v47 < (unsigned __int64)a3 )
    {
      *(_BYTE *)MmUserProbeAddress = 0;
      v46 = v67;
    }
  }
  memmove(v46, a3, v42);
  memmove(v67 + 110, (char *)a3 + v42, v43);
  Buffer = 220LL;
  v67[34] = 220;
  v67[35] = v43;
  a3 = v67;
  v16 = a2;
  v19 = v69;
LABEL_11:
  if ( a1 )
  {
    DeviceFromName = DrvGetDeviceFromName(a1, 0);
    if ( DeviceFromName )
      goto LABEL_13;
    v53 = WdLogNewEntry5_WdTrace(Buffer);
    *(_QWORD *)(v53 + 24) = 0LL;
LABEL_72:
    WdLogEvent5_WdTrace(v53);
    DrvChangeDisplaySettings_::_2_::_AUTO_KM::__AUTO_KM((AUTO_TGO *)v65);
    AUTO_STATUS_CHANGE_NOTIFY<2,3>::NotifyStatusChange(&v60, 3LL);
    return 4294967291LL;
  }
  if ( a3 )
  {
    if ( v16 )
      DeviceFromName = *(wchar_t **)(v16 + 2592);
    else
      DeviceFromName = 0LL;
    if ( !DeviceFromName )
    {
      v53 = WdLogNewEntry5_WdTrace(Buffer);
      *(_QWORD *)(v53 + 24) = 1LL;
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
      v18 = (*((_DWORD *)DeviceFromName + 40) & 0x800000) != 0;
    }
    else
    {
      for ( Buffer = (__int64)gpGraphicsDeviceList; Buffer; Buffer = *(_QWORD *)(Buffer + 128) )
      {
        if ( (*(_DWORD *)(Buffer + 160) & 0x800000) != 0 )
        {
          v18 = 1;
          break;
        }
      }
    }
  }
  if ( a5 && DeviceFromName && !*((_QWORD *)DeviceFromName + 17) && (*((_DWORD *)DeviceFromName + 40) & 0x6000008) == 0 )
  {
    v53 = WdLogNewEntry5_WdTrace(Buffer);
    *(_QWORD *)(v53 + 24) = 2LL;
    goto LABEL_72;
  }
  if ( v18 )
  {
    v59[0] = 0;
    memset(v71, 0, sizeof(v71));
    if ( a3 )
    {
      if ( ((unsigned __int64)(DeviceFromName + 2) & 0xFFFFFFFFFFFFFFFBuLL) == 0
        || (*((_DWORD *)DeviceFromName + 40) & 0x800000) == 0 )
      {
        v55 = WdLogNewEntry5_WdAssertion(v27, v26, v28, v29);
        WdLogEvent5_WdAssertion(v55);
      }
      v71[0] = DeviceFromName;
      LODWORD(v71[1]) = a11;
      v71[2] = __PAIR64__(a6, a13);
      v71[4] = a3;
      LODWORD(v71[3]) = a7;
      if ( a10 == -1 )
        PruneFlag = DrvGetPruneFlag((struct tagGRAPHICS_DEVICE *)DeviceFromName);
      else
        PruneFlag = a10 != 0;
      HIDWORD(v71[1]) = PruneFlag;
    }
    v31 = (a7 != 0 ? 128 : 64) | (a12 != 0 ? 271 : 15);
    v32 = 32;
    if ( !a3 && a7 )
    {
      v31 |= 0x800u;
      v32 = 34;
    }
    v62 = DrvSetDisplayConfig(
            0,
            0,
            v31,
            v32,
            a4,
            a5 != 0,
            (__int64)v71,
            a8,
            a9,
            (__int64)&v61,
            0LL,
            (__int64)v59,
            a14,
            a15);
    v36 = v71[6];
    v19 = v71[5];
    if ( v62 < 0 )
    {
      if ( SLODWORD(v71[6]) >= 0 )
      {
        v58 = WdLogNewEntry5_WdAssertion(0LL, v33, v34, v35);
        WdLogEvent5_WdAssertion(v58);
      }
    }
    else
    {
      if ( SLODWORD(v71[6]) < 0 )
      {
        v56 = WdLogNewEntry5_WdAssertion(0LL, v33, v34, v35);
        WdLogEvent5_WdAssertion(v56);
      }
      if ( v59[0] )
      {
        if ( a12 )
        {
          v57 = WdLogNewEntry5_WdAssertion(0LL, v33, v34, v35);
          WdLogEvent5_WdAssertion(v57);
        }
        v36 = 2;
      }
    }
  }
  else
  {
    if ( gOldModeChange )
    {
      v54 = WdLogNewEntry5_WdAssertion(Buffer, v20, v22, v23);
      WdLogEvent5_WdAssertion(v54);
    }
    gOldModeChange = 1;
    v36 = DrvChangeDisplaySettingsInternal(DeviceFromName, a3, 0LL, a4, a6, a7, a8, a9, a10, a11, a12, 0, 0);
    gOldModeChange = 0;
    v61 = 1;
  }
  LogDiagCDS(a1, a3, DeviceFromName);
  if ( v19 )
    Win32FreePool(v19);
  DrvChangeDisplaySettings_::_2_::_AUTO_KM::__AUTO_KM((AUTO_TGO *)v65);
  AUTO_STATUS_CHANGE_NOTIFY<2,3>::NotifyStatusChange(&v60, 3LL);
  return v36;
}
