/*
 * XREFs of ?_DispatchInternalIOCtrl@DXGMONITOR@@QEAAJKKPEAXK0PEA_K@Z @ 0x1C00D7D88
 * Callers:
 *     DpiPdoDispatchInternalIoctl @ 0x1C00B9E40 (DpiPdoDispatchInternalIoctl.c)
 * Callees:
 *     ?EDIDV1_ObtainMonitorUserFriendlyName@@YAJPEBEPEAG@Z @ 0x1C000F774 (-EDIDV1_ObtainMonitorUserFriendlyName@@YAJPEBEPEAG@Z.c)
 *     ?EDIDV1_ObtainMonitorManufactureDate@@YAJPEBEPEAEPEAG@Z @ 0x1C000F860 (-EDIDV1_ObtainMonitorManufactureDate@@YAJPEBEPEAEPEAG@Z.c)
 *     ?EDIDV1_ObtainMonitorSerialNumber@@YAJPEBEPEAG@Z @ 0x1C000F930 (-EDIDV1_ObtainMonitorSerialNumber@@YAJPEBEPEAG@Z.c)
 *     ?EDIDV1_ObtainMonitorProductCodeID@@YAJPEBEPEAG@Z @ 0x1C000FA54 (-EDIDV1_ObtainMonitorProductCodeID@@YAJPEBEPEAG@Z.c)
 *     ?EDID_V1_GetMonitorModes@@YAJW4__WMI_MONITOR_CAPABILITY_ORIGIN_TYPE@@KPEBEPEAKPEAU_VideoModeDescriptor@@2@Z @ 0x1C000FB08 (-EDID_V1_GetMonitorModes@@YAJW4__WMI_MONITOR_CAPABILITY_ORIGIN_TYPE@@KPEBEPEAKPEAU_VideoModeDesc.c)
 *     ?EDIDV1_ObtainMonitorManufacturerName@@YAJPEBEPEAG@Z @ 0x1C000FBBC (-EDIDV1_ObtainMonitorManufacturerName@@YAJPEBEPEAG@Z.c)
 *     ?EDIDV1_ObtainMonitorAnalogVideoInputParams@@YAJPEBEPEAU_WmiMonitorAnalogVideoInputParams@@@Z @ 0x1C0011558 (-EDIDV1_ObtainMonitorAnalogVideoInputParams@@YAJPEBEPEAU_WmiMonitorAnalogVideoInputParams@@@Z.c)
 *     ?EDIDV1_ObtainMonitorDigitalVideoInputParams@@YAJPEBEPEAU_WmiMonitorDigitalVideoInputParams@@@Z @ 0x1C00115AC (-EDIDV1_ObtainMonitorDigitalVideoInputParams@@YAJPEBEPEAU_WmiMonitorDigitalVideoInputParams@@@Z.c)
 *     ?EDID_V1_GetSupportedMonitorFrequencyRanges@@YAJW4__WMI_MONITOR_CAPABILITY_ORIGIN_TYPE@@KPEBEPEAGPEAU_FrequencyRangeDescriptor@@@Z @ 0x1C0011F5C (-EDID_V1_GetSupportedMonitorFrequencyRanges@@YAJW4__WMI_MONITOR_CAPABILITY_ORIGIN_TYPE@@KPEBEPEA.c)
 *     memmove @ 0x1C0016740 (memmove.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     ?EDIDV1_ObtainMonitorBasicDisplayParams@@YAJPEBEPEAU_WmiMonitorBasicDisplayParams@@@Z @ 0x1C0036FAC (-EDIDV1_ObtainMonitorBasicDisplayParams@@YAJPEBEPEAU_WmiMonitorBasicDisplayParams@@@Z.c)
 *     ?EDIDV1_ObtainMonitorColorCharacteristics@@YAJPEBEPEAU_WmiMonitorColorCharacteristics@@@Z @ 0x1C0037048 (-EDIDV1_ObtainMonitorColorCharacteristics@@YAJPEBEPEAU_WmiMonitorColorCharacteristics@@@Z.c)
 *     ?ConvertMonitorCapablitiesOrigin@@YAJW4__WMI_MONITOR_CAPABILITY_ORIGIN_TYPE@@PEAW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@@Z @ 0x1C0108624 (-ConvertMonitorCapablitiesOrigin@@YAJW4__WMI_MONITOR_CAPABILITY_ORIGIN_TYPE@@PEAW4_D3DKMDT_MONIT.c)
 *     MonitorLogBadEDID @ 0x1C0123F58 (MonitorLogBadEDID.c)
 */

__int64 __fastcall DXGMONITOR::_DispatchInternalIOCtrl(
        DXGMONITOR *this,
        __int64 a2,
        unsigned int a3,
        unsigned int *a4,
        unsigned int a5,
        unsigned __int64 *a6,
        unsigned __int64 *a7)
{
  __int64 v8; // rbx
  __int64 v11; // rdi
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // r8
  int v15; // ebx
  int v16; // ebx
  int v17; // ebx
  int v18; // ebx
  int v19; // ebx
  int v20; // ebx
  int v21; // ebx
  int v22; // ebx
  __int64 v23; // rcx
  int v24; // eax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v29; // rax
  unsigned int v30; // edx
  __int64 v31; // rcx
  int MonitorModes; // eax
  __int64 v33; // rcx
  unsigned __int64 v34; // rbx
  __int64 v35; // rcx
  int v36; // eax
  __int64 v37; // rbx
  int v38; // eax
  int v39; // eax
  int v40; // eax
  int v41; // eax
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // rdi
  int v46; // eax
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // r15
  int v51; // eax
  _BYTE *v52; // rbx
  _WORD *v53; // rbx
  struct _WmiMonitorBasicDisplayParams *v54; // rbx
  int v55; // eax
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // r8
  __int64 v59; // rax
  struct _WmiMonitorColorCharacteristics *v60; // rbx
  int v61; // eax
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // r8
  __int64 v65; // rax
  __int64 v66; // rax
  __int64 v67; // rax
  __int64 v68; // rax
  __int64 v69; // rax
  __int64 v70; // rax
  __int64 v71; // rdx
  __int64 v72; // rdi
  unsigned __int64 *v73; // rbx
  unsigned __int64 *v74; // rax
  __int128 v75; // xmm1
  __int64 v76; // rax
  unsigned int v77; // edx
  int v78; // ecx
  int SupportedMonitorFrequencyRanges; // eax
  __int64 v80; // r9
  int v81; // eax
  __int64 v82; // rax
  __int64 v83; // rax
  __int64 v84; // rax
  __int64 v85; // rdx
  __int64 v86; // rax
  __int64 v87; // rbx
  __int64 v88; // rcx
  __int64 v89; // r13
  unsigned int v90; // r12d
  __int64 v91; // rax
  char *v92; // rdi
  char *v93; // rdi
  unsigned int v94; // ebx
  unsigned int i; // r8d
  __int64 v96; // rcx
  __int64 v97; // rdx
  __int64 v98; // [rsp+70h] [rbp+40h] BYREF
  int v99; // [rsp+78h] [rbp+48h] BYREF

  v8 = (unsigned int)a2;
  LODWORD(v11) = -1073741637;
  v12 = WdLogNewEntry5_WdTrace(this, a2);
  *(_QWORD *)(v12 + 24) = v8;
  *(_QWORD *)(v12 + 32) = this;
  v15 = v8 - 2302979;
  if ( v15 )
  {
    v16 = v15 - 12;
    if ( v16 )
    {
      v17 = v16 - 4;
      if ( v17 )
      {
        v18 = v17 - 4;
        if ( v18 )
        {
          v19 = v18 - 4;
          if ( v19 )
          {
            v20 = v19 - 4;
            if ( v20 )
            {
              v21 = v20 - 4;
              if ( v21 )
              {
                v22 = v21 - 4;
                if ( v22 )
                {
                  if ( v22 != 4 )
                    return (unsigned int)v11;
                  v23 = *((_QWORD *)this + 16);
                  if ( v23 )
                  {
                    if ( a3 >= 0x10 && a5 >= 0x10 )
                    {
                      LOBYTE(v99) = 0;
                      v24 = EDIDV1_ObtainMonitorDigitalVideoInputParams(
                              (unsigned __int8 *)(v23 + 24),
                              (struct _WmiMonitorDigitalVideoInputParams *)&v99);
                      v11 = v24;
                      if ( v24 < 0 )
                        goto LABEL_14;
                      if ( *(_QWORD *)a4 )
                      {
                        v52 = (_BYTE *)*((_QWORD *)a4 + 1);
                        memset(v52, 0, *(_QWORD *)a4);
                        *v52 = v99;
                      }
                      else
                      {
                        LODWORD(v11) = -2147483643;
                      }
                      *a6 = 1LL;
                      goto LABEL_22;
                    }
                    goto LABEL_53;
                  }
                }
                else
                {
                  v35 = *((_QWORD *)this + 16);
                  if ( v35 )
                  {
                    if ( a3 >= 0x10 && a5 >= 0x10 )
                    {
                      LODWORD(v98) = 0;
                      WORD2(v98) = 0;
                      v36 = EDIDV1_ObtainMonitorAnalogVideoInputParams(
                              (unsigned __int8 *)(v35 + 24),
                              (struct _WmiMonitorAnalogVideoInputParams *)&v98);
                      v11 = v36;
                      if ( v36 < 0 )
                      {
LABEL_14:
                        if ( (_DWORD)v11 != -1073741275 )
                          goto LABEL_76;
                        return (unsigned int)v11;
                      }
                      if ( *(_QWORD *)a4 >= 6uLL )
                      {
                        v53 = (_WORD *)*((_QWORD *)a4 + 1);
                        memset(v53, 0, *(_QWORD *)a4);
                        *(_DWORD *)v53 = v98;
                        v53[2] = WORD2(v98);
                      }
                      else
                      {
                        LODWORD(v11) = -2147483643;
                      }
                      *a6 = 6LL;
LABEL_22:
                      *a7 = 16LL;
                      return (unsigned int)v11;
                    }
LABEL_53:
                    LODWORD(v11) = -1073741789;
                    return (unsigned int)v11;
                  }
                }
              }
              else if ( *((_QWORD *)this + 16) )
              {
                if ( a3 >= 0x10 && a5 >= 0x10 )
                {
                  if ( *(_QWORD *)a4 >= 0xBuLL )
                  {
                    v54 = (struct _WmiMonitorBasicDisplayParams *)*((_QWORD *)a4 + 1);
                    memset(v54, 0, *(_QWORD *)a4);
                    v55 = EDIDV1_ObtainMonitorBasicDisplayParams(
                            (unsigned __int8 *)(*((_QWORD *)this + 16) + 24LL),
                            v54);
                    v11 = v55;
                    if ( v55 < 0 )
                    {
                      v59 = WdLogNewEntry5_WdWarning(v57, v56, v58);
                      *(_QWORD *)(v59 + 24) = *((_QWORD *)this + 16) + 24LL;
                      *(_QWORD *)(v59 + 32) = v11;
                      WdLogEvent5_WdWarning(v59);
                      MonitorLogBadEDID(*((_QWORD *)this + 16) + 24LL, (unsigned int)v11);
                    }
                  }
                  else
                  {
                    LODWORD(v11) = -2147483643;
                  }
                  *a6 = 11LL;
                  goto LABEL_22;
                }
                goto LABEL_53;
              }
            }
            else if ( *((_QWORD *)this + 16) )
            {
              if ( a3 >= 0x10 && a5 >= 0x10 )
              {
                if ( *(_QWORD *)a4 >= 0x10uLL )
                {
                  v60 = (struct _WmiMonitorColorCharacteristics *)*((_QWORD *)a4 + 1);
                  memset(v60, 0, *(_QWORD *)a4);
                  v61 = EDIDV1_ObtainMonitorColorCharacteristics(
                          (unsigned __int8 *)(*((_QWORD *)this + 16) + 24LL),
                          v60);
                  v11 = v61;
                  if ( v61 < 0 )
                  {
                    v65 = WdLogNewEntry5_WdWarning(v63, v62, v64);
                    *(_QWORD *)(v65 + 24) = *((_QWORD *)this + 16) + 24LL;
                    *(_QWORD *)(v65 + 32) = v11;
                    WdLogEvent5_WdWarning(v65);
                    MonitorLogBadEDID(*((_QWORD *)this + 16) + 24LL, (unsigned int)v11);
                  }
                }
                else
                {
                  LODWORD(v11) = -2147483643;
                }
                *a6 = 16LL;
                goto LABEL_22;
              }
              goto LABEL_53;
            }
LABEL_93:
            LODWORD(v11) = -1071841279;
            return (unsigned int)v11;
          }
          if ( !*((_QWORD *)this + 16) )
            goto LABEL_93;
          if ( a3 < 0x10 || a5 < 0x10 )
            goto LABEL_53;
          if ( *(_QWORD *)a4 < 0x82uLL )
          {
            LODWORD(v11) = -2147483643;
LABEL_21:
            *a6 = 130LL;
            goto LABEL_22;
          }
          v37 = *((_QWORD *)a4 + 1);
          memset((void *)v37, 0, *(_QWORD *)a4);
          v38 = EDIDV1_ObtainMonitorProductCodeID(
                  (unsigned __int8 *)(*((_QWORD *)this + 16) + 24LL),
                  (unsigned __int16 *)v37);
          v11 = v38;
          if ( v38 >= 0 )
          {
            v39 = EDIDV1_ObtainMonitorSerialNumber(
                    (unsigned __int8 *)(*((_QWORD *)this + 16) + 24LL),
                    (unsigned __int16 *)(v37 + 32));
            v11 = v39;
            if ( v39 == -1073741275 )
            {
              v67 = WdLogNewEntry5_WdDmmEvent(v26);
              *(_QWORD *)(v67 + 24) = *((_QWORD *)this + 16) + 24LL;
              WdLogEvent5_WdDmmEvent(v67);
            }
            else if ( v39 < 0 )
            {
              goto LABEL_76;
            }
            v40 = EDIDV1_ObtainMonitorManufacturerName(
                    (unsigned __int8 *)(*((_QWORD *)this + 16) + 24LL),
                    (unsigned __int16 *)(v37 + 64));
            v11 = v40;
            if ( v40 >= 0 )
            {
              v41 = EDIDV1_ObtainMonitorManufactureDate(
                      (unsigned __int8 *)(*((_QWORD *)this + 16) + 24LL),
                      (unsigned __int8 *)(v37 + 96),
                      (unsigned __int16 *)(v37 + 98));
              v45 = v41;
              if ( v41 < 0 )
              {
                v68 = WdLogNewEntry5_WdWarning(v43, v42, v44);
                *(_QWORD *)(v68 + 24) = *((_QWORD *)this + 16) + 24LL;
                *(_QWORD *)(v68 + 32) = v45;
                WdLogEvent5_WdWarning(v68);
                MonitorLogBadEDID(*((_QWORD *)this + 16) + 24LL, (unsigned int)v45);
              }
              v46 = EDIDV1_ObtainMonitorUserFriendlyName(
                      (unsigned __int8 *)(*((_QWORD *)this + 16) + 24LL),
                      (unsigned __int16 *)(v37 + 102));
              v11 = v46;
              if ( v46 == -1073741275 )
              {
                v69 = WdLogNewEntry5_WdDmmEvent(v48);
                *(_QWORD *)(v69 + 24) = *((_QWORD *)this + 16) + 24LL;
                WdLogEvent5_WdDmmEvent(v69);
                *(_WORD *)(v37 + 100) = 0;
                LODWORD(v11) = 0;
              }
              else
              {
                if ( v46 < 0 )
                {
                  v70 = WdLogNewEntry5_WdWarning(v48, v47, v49);
                  *(_QWORD *)(v70 + 24) = *((_QWORD *)this + 16) + 24LL;
                  *(_QWORD *)(v70 + 32) = v11;
                  WdLogEvent5_WdWarning(v70);
                  MonitorLogBadEDID(*((_QWORD *)this + 16) + 24LL, (unsigned int)v11);
                  *(_WORD *)(v37 + 100) = 0;
                  return (unsigned int)v11;
                }
                *(_WORD *)(v37 + 100) = 13;
              }
              goto LABEL_21;
            }
          }
LABEL_76:
          v66 = WdLogNewEntry5_WdWarning(v26, v25, v27);
          *(_QWORD *)(v66 + 24) = *((_QWORD *)this + 16) + 24LL;
          *(_QWORD *)(v66 + 32) = v11;
          WdLogEvent5_WdWarning(v66);
          MonitorLogBadEDID(*((_QWORD *)this + 16) + 24LL, (unsigned int)v11);
          return (unsigned int)v11;
        }
        if ( !*((_QWORD *)this + 16) )
          goto LABEL_93;
        if ( a3 < 0x88 || a5 < 0x88 )
          goto LABEL_53;
        v71 = *(unsigned __int8 *)a4;
        if ( (unsigned int)v71 >= *((_DWORD *)this + 28) )
          goto LABEL_93;
        v72 = *(_QWORD *)(*((_QWORD *)this + 15) + 8 * v71);
        if ( !v72 )
          goto LABEL_93;
        v73 = a6;
        *(_BYTE *)a6 = v71;
        *((_BYTE *)v73 + 1) = *(_BYTE *)(v72 + 12);
        ConvertMonitorCapablitiesOrigin(*(unsigned int *)(v72 + 8), (char *)v73 + 132);
        v74 = a7;
        *(_OWORD *)((char *)v73 + 2) = *(_OWORD *)(v72 + 24);
        v75 = *(_OWORD *)(v72 + 40);
        *v74 = 136LL;
        *(_OWORD *)((char *)v73 + 18) = v75;
        *(_OWORD *)((char *)v73 + 34) = *(_OWORD *)(v72 + 56);
        *(_OWORD *)((char *)v73 + 50) = *(_OWORD *)(v72 + 72);
        *(_OWORD *)((char *)v73 + 66) = *(_OWORD *)(v72 + 88);
        *(_OWORD *)((char *)v73 + 82) = *(_OWORD *)(v72 + 104);
        *(_OWORD *)((char *)v73 + 98) = *(_OWORD *)(v72 + 120);
        *(_OWORD *)((char *)v73 + 114) = *(_OWORD *)(v72 + 136);
LABEL_107:
        LODWORD(v11) = 0;
        return (unsigned int)v11;
      }
      v76 = *((_QWORD *)this + 16);
      if ( !v76 )
        goto LABEL_93;
      if ( a3 < 0x10 || a5 < 0x10 )
        goto LABEL_53;
      v77 = *(_DWORD *)(v76 + 16);
      v78 = *(_DWORD *)(v76 + 8);
      LOWORD(v99) = 0;
      SupportedMonitorFrequencyRanges = EDID_V1_GetSupportedMonitorFrequencyRanges(
                                          v78,
                                          v77,
                                          (unsigned __int8 *)(v76 + 24),
                                          (__int64)&v99,
                                          0LL);
      v11 = SupportedMonitorFrequencyRanges;
      if ( SupportedMonitorFrequencyRanges == -1073741275 )
        goto LABEL_93;
      v33 = 0x80000000LL;
      if ( (int)(SupportedMonitorFrequencyRanges + 0x80000000) < 0 || SupportedMonitorFrequencyRanges == -1073741789 )
      {
        v34 = 52LL * (unsigned __int16)v99 + 4;
        if ( *(_QWORD *)a4 >= v34 )
        {
          v80 = *((_QWORD *)a4 + 1);
          *(_WORD *)v80 = v99;
          v81 = EDID_V1_GetSupportedMonitorFrequencyRanges(
                  *(_DWORD *)(*((_QWORD *)this + 16) + 8LL),
                  *(_DWORD *)(*((_QWORD *)this + 16) + 16LL),
                  (unsigned __int8 *)(*((_QWORD *)this + 16) + 24LL),
                  v80,
                  (struct _FrequencyRangeDescriptor *)(v80 + 4));
          v11 = v81;
          if ( v81 < 0 )
            goto LABEL_92;
LABEL_31:
          *a6 = v34;
          goto LABEL_22;
        }
LABEL_30:
        LODWORD(v11) = -2147483643;
        goto LABEL_31;
      }
    }
    else
    {
      v29 = *((_QWORD *)this + 16);
      if ( !v29 )
        goto LABEL_93;
      if ( a3 < 0x10 || a5 < 0x10 )
        goto LABEL_53;
      v30 = *(_DWORD *)(v29 + 16);
      v31 = *(unsigned int *)(v29 + 8);
      v99 = 0;
      MonitorModes = EDID_V1_GetMonitorModes(
                       v31,
                       v30,
                       (unsigned __int8 *)(v29 + 24),
                       (unsigned __int16 *)&v99,
                       0LL,
                       0LL);
      v33 = 0x80000000LL;
      v11 = MonitorModes;
      if ( (int)(MonitorModes + 0x80000000) < 0 || MonitorModes == -1073741789 )
      {
        if ( !v99 )
          goto LABEL_93;
        v34 = 56LL * (unsigned int)(v99 - 1) + 60;
        if ( *(_QWORD *)a4 < v34 )
          goto LABEL_30;
        v50 = *((_QWORD *)a4 + 1);
        v51 = EDID_V1_GetMonitorModes(
                *(unsigned int *)(*((_QWORD *)this + 16) + 8LL),
                *(_DWORD *)(*((_QWORD *)this + 16) + 16LL),
                (unsigned __int8 *)(*((_QWORD *)this + 16) + 24LL),
                (unsigned __int16 *)&v99,
                (struct _VideoModeDescriptor *)(v50 + 4),
                &v98);
        v11 = v51;
        if ( v51 >= 0 )
        {
          *(_WORD *)v50 = v99;
          *(_WORD *)(v50 + 2) = v98;
          goto LABEL_31;
        }
      }
    }
LABEL_92:
    v82 = WdLogNewEntry5_WdError(v33);
    *(_QWORD *)(v82 + 24) = v11;
    WdLogEvent5_WdError(v82);
    return (unsigned int)v11;
  }
  if ( a4 )
  {
    if ( a3 >= 0x10 )
    {
      v85 = *((unsigned int *)this + 28);
      if ( (_DWORD)v85 )
      {
        v87 = *a4 >> 7;
        v88 = a4[1] + *a4;
        v89 = *a4 & 0x7F;
        v90 = (unsigned int)(v88 - 1) >> 7;
        v98 = (*((_BYTE *)a4 + 4) + *(_BYTE *)a4 - 1) & 0x7F;
        if ( v90 < (unsigned int)v85 )
        {
          v92 = (char *)*((_QWORD *)a4 + 1);
          memmove(v92, (const void *)(*(_QWORD *)(*((_QWORD *)this + 15) + 8 * v87) + v89 + 24), 128 - v89);
          v93 = &v92[128 - v89];
          v94 = v87 + 1;
          for ( i = v94 + 1; i < v90; ++i )
          {
            v96 = v94;
            v94 = i;
            v97 = *(_QWORD *)(*((_QWORD *)this + 15) + 8 * v96);
            *(_OWORD *)v93 = *(_OWORD *)(v97 + 24);
            *((_OWORD *)v93 + 1) = *(_OWORD *)(v97 + 40);
            *((_OWORD *)v93 + 2) = *(_OWORD *)(v97 + 56);
            *((_OWORD *)v93 + 3) = *(_OWORD *)(v97 + 72);
            *((_OWORD *)v93 + 4) = *(_OWORD *)(v97 + 88);
            *((_OWORD *)v93 + 5) = *(_OWORD *)(v97 + 104);
            *((_OWORD *)v93 + 6) = *(_OWORD *)(v97 + 120);
            *((_OWORD *)v93 + 7) = *(_OWORD *)(v97 + 136);
            v93 += 128;
          }
          if ( v94 < v90 )
            memmove(v93, (const void *)(*(_QWORD *)(*((_QWORD *)this + 15) + 8LL * v94) + 24LL), v98 + 1);
          goto LABEL_107;
        }
        v91 = WdLogNewEntry5_WdWarning(v88, v85, v14);
        *(_QWORD *)(v91 + 24) = *a4;
        *(_QWORD *)(v91 + 32) = a4[1];
        WdLogEvent5_WdWarning(v91);
        return 3223126024LL;
      }
      else
      {
        v86 = WdLogNewEntry5_WdWarning(v13, v85, v14);
        *(_QWORD *)(v86 + 24) = this;
        WdLogEvent5_WdWarning(v86);
        return 3223126017LL;
      }
    }
    else
    {
      v84 = WdLogNewEntry5_WdError(v13);
      WdLogEvent5_WdError(v84);
      return 3221225507LL;
    }
  }
  else
  {
    v83 = WdLogNewEntry5_WdError(v13);
    WdLogEvent5_WdError(v83);
    return 3221225485LL;
  }
}
