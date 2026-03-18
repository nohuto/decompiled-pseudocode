/*
 * XREFs of ?_DispatchInternalIOCtrl@DXGMONITOR@@QEAAJKKPEAXK0PEA_K@Z @ 0x1C00F9BF8
 * Callers:
 *     MonitorHandleInternalIOCtrl @ 0x1C00A85BC (MonitorHandleInternalIOCtrl.c)
 * Callees:
 *     ?EDIDV1_ObtainMonitorUserFriendlyName@@YAJPEBEPEAG@Z @ 0x1C000E22C (-EDIDV1_ObtainMonitorUserFriendlyName@@YAJPEBEPEAG@Z.c)
 *     ?EDIDV1_ObtainMonitorSerialNumber@@YAJPEBEPEAG@Z @ 0x1C000F2BC (-EDIDV1_ObtainMonitorSerialNumber@@YAJPEBEPEAG@Z.c)
 *     ?EDIDV1_ObtainMonitorProductCodeID@@YAJPEBEPEAG@Z @ 0x1C000F3B0 (-EDIDV1_ObtainMonitorProductCodeID@@YAJPEBEPEAG@Z.c)
 *     ?EDIDV1_ObtainMonitorManufacturerName@@YAJPEBEPEAG@Z @ 0x1C000F460 (-EDIDV1_ObtainMonitorManufacturerName@@YAJPEBEPEAG@Z.c)
 *     ?EDID_V1_GetMonitorModes@@YAJW4__WMI_MONITOR_CAPABILITY_ORIGIN_TYPE@@KPEBEPEAKPEAU_VideoModeDescriptor@@2@Z @ 0x1C000F52C (-EDID_V1_GetMonitorModes@@YAJW4__WMI_MONITOR_CAPABILITY_ORIGIN_TYPE@@KPEBEPEAKPEAU_VideoModeDesc.c)
 *     ?EDIDV1_ObtainMonitorManufactureDate@@YAJPEBEPEAEPEAG@Z @ 0x1C000F628 (-EDIDV1_ObtainMonitorManufactureDate@@YAJPEBEPEAEPEAG@Z.c)
 *     ?EDIDV1_ObtainMonitorAnalogVideoInputParams@@YAJPEBEPEAU_WmiMonitorAnalogVideoInputParams@@@Z @ 0x1C000FEA4 (-EDIDV1_ObtainMonitorAnalogVideoInputParams@@YAJPEBEPEAU_WmiMonitorAnalogVideoInputParams@@@Z.c)
 *     ?EDIDV1_ObtainMonitorDigitalVideoInputParams@@YAJPEBEPEAU_WmiMonitorDigitalVideoInputParams@@@Z @ 0x1C000FEF8 (-EDIDV1_ObtainMonitorDigitalVideoInputParams@@YAJPEBEPEAU_WmiMonitorDigitalVideoInputParams@@@Z.c)
 *     ?EDID_V1_GetSupportedMonitorFrequencyRanges@@YAJW4__WMI_MONITOR_CAPABILITY_ORIGIN_TYPE@@KPEBEPEAGPEAU_FrequencyRangeDescriptor@@@Z @ 0x1C00100A8 (-EDID_V1_GetSupportedMonitorFrequencyRanges@@YAJW4__WMI_MONITOR_CAPABILITY_ORIGIN_TYPE@@KPEBEPEA.c)
 *     memmove @ 0x1C00153C0 (memmove.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     ?EDIDV1_ObtainMonitorBasicDisplayParams@@YAJPEBEPEAU_WmiMonitorBasicDisplayParams@@@Z @ 0x1C0045E14 (-EDIDV1_ObtainMonitorBasicDisplayParams@@YAJPEBEPEAU_WmiMonitorBasicDisplayParams@@@Z.c)
 *     ?EDIDV1_ObtainMonitorColorCharacteristics@@YAJPEBEPEAU_WmiMonitorColorCharacteristics@@@Z @ 0x1C0045EAC (-EDIDV1_ObtainMonitorColorCharacteristics@@YAJPEBEPEAU_WmiMonitorColorCharacteristics@@@Z.c)
 *     ?ConvertMonitorCapablitiesOrigin@@YAJW4__WMI_MONITOR_CAPABILITY_ORIGIN_TYPE@@PEAW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@@Z @ 0x1C0109DE8 (-ConvertMonitorCapablitiesOrigin@@YAJW4__WMI_MONITOR_CAPABILITY_ORIGIN_TYPE@@PEAW4_D3DKMDT_MONIT.c)
 *     MonitorLogBadEDID @ 0x1C01E4118 (MonitorLogBadEDID.c)
 */

__int64 __fastcall DXGMONITOR::_DispatchInternalIOCtrl(
        DXGMONITOR *this,
        __int64 a2,
        __int64 a3,
        unsigned int *a4,
        unsigned int a5,
        unsigned __int64 *a6,
        unsigned __int64 *a7)
{
  __int64 v8; // rbx
  unsigned int v9; // r12d
  __int64 v11; // rdi
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  int v17; // ebx
  int v18; // ebx
  int v19; // ebx
  int v20; // ebx
  int v21; // ebx
  int v22; // ebx
  int v23; // ebx
  int v24; // ebx
  __int64 v25; // rcx
  int v26; // eax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v32; // rax
  unsigned int v33; // edx
  __int64 v34; // rcx
  int MonitorModes; // eax
  __int64 v36; // rdx
  __int64 v37; // rcx
  unsigned __int64 v38; // rbx
  __int64 v39; // rcx
  int v40; // eax
  __int64 v41; // rbx
  int v42; // eax
  int v43; // eax
  int v44; // eax
  int v45; // eax
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // r9
  __int64 v50; // rdi
  int v51; // eax
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // r8
  __int64 v55; // r9
  __int64 v56; // r15
  int v57; // eax
  _BYTE *v58; // rbx
  _WORD *v59; // rbx
  struct _WmiMonitorBasicDisplayParams *v60; // rbx
  int v61; // eax
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // r8
  __int64 v65; // r9
  __int64 v66; // rax
  struct _WmiMonitorColorCharacteristics *v67; // rbx
  int v68; // eax
  __int64 v69; // rdx
  __int64 v70; // rcx
  __int64 v71; // r8
  __int64 v72; // r9
  __int64 v73; // rax
  __int64 v74; // rax
  __int64 v75; // rax
  __int64 v76; // rax
  __int64 v77; // rax
  __int64 v78; // rax
  __int64 v79; // rdx
  __int64 v80; // rdi
  unsigned __int64 *v81; // rbx
  unsigned __int64 *v82; // rax
  __int128 v83; // xmm1
  __int64 v84; // rax
  unsigned int v85; // edx
  int v86; // ecx
  int SupportedMonitorFrequencyRanges; // eax
  __int64 v88; // r9
  int v89; // eax
  __int64 v90; // rax
  __int64 v91; // rax
  __int64 v92; // rax
  __int64 v93; // rdx
  __int64 v94; // rax
  __int64 v95; // rbx
  __int64 v96; // rcx
  __int64 v97; // r13
  unsigned int v98; // r12d
  __int64 v99; // rax
  char *v100; // rdi
  char *v101; // rdi
  unsigned int v102; // ebx
  unsigned int i; // r8d
  __int64 v104; // rcx
  __int64 v105; // rdx
  __int64 v106; // [rsp+70h] [rbp+40h] BYREF
  int v107; // [rsp+78h] [rbp+48h] BYREF

  v8 = (unsigned int)a2;
  v9 = a3;
  LODWORD(v11) = -1073741637;
  v12 = WdLogNewEntry5_WdTrace(this, a2, a3, a4);
  *(_QWORD *)(v12 + 24) = v8;
  *(_QWORD *)(v12 + 32) = this;
  v17 = v8 - 2302979;
  if ( v17 )
  {
    v18 = v17 - 12;
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
              v23 = v22 - 4;
              if ( v23 )
              {
                v24 = v23 - 4;
                if ( v24 )
                {
                  if ( v24 != 4 )
                    return (unsigned int)v11;
                  v25 = *((_QWORD *)this + 16);
                  if ( v25 )
                  {
                    if ( v9 >= 0x10 && a5 >= 0x10 )
                    {
                      LOBYTE(v107) = 0;
                      v26 = EDIDV1_ObtainMonitorDigitalVideoInputParams(
                              (unsigned __int8 *)(v25 + 24),
                              (struct _WmiMonitorDigitalVideoInputParams *)&v107);
                      v11 = v26;
                      if ( v26 < 0 )
                        goto LABEL_14;
                      if ( *(_QWORD *)a4 )
                      {
                        v58 = (_BYTE *)*((_QWORD *)a4 + 1);
                        memset(v58, 0, *(_QWORD *)a4);
                        *v58 = v107;
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
                  v39 = *((_QWORD *)this + 16);
                  if ( v39 )
                  {
                    if ( v9 >= 0x10 && a5 >= 0x10 )
                    {
                      LODWORD(v106) = 0;
                      WORD2(v106) = 0;
                      v40 = EDIDV1_ObtainMonitorAnalogVideoInputParams(
                              (unsigned __int8 *)(v39 + 24),
                              (struct _WmiMonitorAnalogVideoInputParams *)&v106);
                      v11 = v40;
                      if ( v40 < 0 )
                      {
LABEL_14:
                        if ( (_DWORD)v11 != -1073741275 )
                          goto LABEL_76;
                        return (unsigned int)v11;
                      }
                      if ( *(_QWORD *)a4 >= 6uLL )
                      {
                        v59 = (_WORD *)*((_QWORD *)a4 + 1);
                        memset(v59, 0, *(_QWORD *)a4);
                        *(_DWORD *)v59 = v106;
                        v59[2] = WORD2(v106);
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
                if ( v9 >= 0x10 && a5 >= 0x10 )
                {
                  if ( *(_QWORD *)a4 >= 0xBuLL )
                  {
                    v60 = (struct _WmiMonitorBasicDisplayParams *)*((_QWORD *)a4 + 1);
                    memset(v60, 0, *(_QWORD *)a4);
                    v61 = EDIDV1_ObtainMonitorBasicDisplayParams(
                            (unsigned __int8 *)(*((_QWORD *)this + 16) + 24LL),
                            v60);
                    v11 = v61;
                    if ( v61 < 0 )
                    {
                      v66 = WdLogNewEntry5_WdWarning(v63, v62, v64, v65);
                      *(_QWORD *)(v66 + 24) = *((_QWORD *)this + 16) + 24LL;
                      *(_QWORD *)(v66 + 32) = v11;
                      WdLogEvent5_WdWarning(v66);
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
              if ( v9 >= 0x10 && a5 >= 0x10 )
              {
                if ( *(_QWORD *)a4 >= 0x10uLL )
                {
                  v67 = (struct _WmiMonitorColorCharacteristics *)*((_QWORD *)a4 + 1);
                  memset(v67, 0, *(_QWORD *)a4);
                  v68 = EDIDV1_ObtainMonitorColorCharacteristics(
                          (unsigned __int8 *)(*((_QWORD *)this + 16) + 24LL),
                          v67);
                  v11 = v68;
                  if ( v68 < 0 )
                  {
                    v73 = WdLogNewEntry5_WdWarning(v70, v69, v71, v72);
                    *(_QWORD *)(v73 + 24) = *((_QWORD *)this + 16) + 24LL;
                    *(_QWORD *)(v73 + 32) = v11;
                    WdLogEvent5_WdWarning(v73);
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
          if ( v9 < 0x10 || a5 < 0x10 )
            goto LABEL_53;
          if ( *(_QWORD *)a4 < 0x82uLL )
          {
            LODWORD(v11) = -2147483643;
LABEL_21:
            *a6 = 130LL;
            goto LABEL_22;
          }
          v41 = *((_QWORD *)a4 + 1);
          memset((void *)v41, 0, *(_QWORD *)a4);
          v42 = EDIDV1_ObtainMonitorProductCodeID(
                  (unsigned __int8 *)(*((_QWORD *)this + 16) + 24LL),
                  (unsigned __int16 *)v41);
          v11 = v42;
          if ( v42 >= 0 )
          {
            v43 = EDIDV1_ObtainMonitorSerialNumber(
                    (unsigned __int8 *)(*((_QWORD *)this + 16) + 24LL),
                    (unsigned __int16 *)(v41 + 32));
            v11 = v43;
            if ( v43 == -1073741275 )
            {
              v75 = WdLogNewEntry5_WdDmmEvent(v28, v27, v29, v30);
              *(_QWORD *)(v75 + 24) = *((_QWORD *)this + 16) + 24LL;
              WdLogEvent5_WdDmmEvent(v75);
            }
            else if ( v43 < 0 )
            {
              goto LABEL_76;
            }
            v44 = EDIDV1_ObtainMonitorManufacturerName(
                    (unsigned __int8 *)(*((_QWORD *)this + 16) + 24LL),
                    (unsigned __int16 *)(v41 + 64));
            v11 = v44;
            if ( v44 >= 0 )
            {
              v45 = EDIDV1_ObtainMonitorManufactureDate(
                      (unsigned __int8 *)(*((_QWORD *)this + 16) + 24LL),
                      (unsigned __int8 *)(v41 + 96),
                      (unsigned __int16 *)(v41 + 98));
              v50 = v45;
              if ( v45 < 0 )
              {
                v76 = WdLogNewEntry5_WdWarning(v47, v46, v48, v49);
                *(_QWORD *)(v76 + 24) = *((_QWORD *)this + 16) + 24LL;
                *(_QWORD *)(v76 + 32) = v50;
                WdLogEvent5_WdWarning(v76);
                MonitorLogBadEDID(*((_QWORD *)this + 16) + 24LL, (unsigned int)v50);
              }
              v51 = EDIDV1_ObtainMonitorUserFriendlyName(
                      (unsigned __int8 *)(*((_QWORD *)this + 16) + 24LL),
                      (unsigned __int16 *)(v41 + 102));
              v11 = v51;
              if ( v51 == -1073741275 )
              {
                v77 = WdLogNewEntry5_WdDmmEvent(v53, v52, v54, v55);
                *(_QWORD *)(v77 + 24) = *((_QWORD *)this + 16) + 24LL;
                WdLogEvent5_WdDmmEvent(v77);
                *(_WORD *)(v41 + 100) = 0;
                LODWORD(v11) = 0;
              }
              else
              {
                if ( v51 < 0 )
                {
                  v78 = WdLogNewEntry5_WdWarning(v53, v52, v54, v55);
                  *(_QWORD *)(v78 + 24) = *((_QWORD *)this + 16) + 24LL;
                  *(_QWORD *)(v78 + 32) = v11;
                  WdLogEvent5_WdWarning(v78);
                  MonitorLogBadEDID(*((_QWORD *)this + 16) + 24LL, (unsigned int)v11);
                  *(_WORD *)(v41 + 100) = 0;
                  return (unsigned int)v11;
                }
                *(_WORD *)(v41 + 100) = 13;
              }
              goto LABEL_21;
            }
          }
LABEL_76:
          v74 = WdLogNewEntry5_WdWarning(v28, v27, v29, v30);
          *(_QWORD *)(v74 + 24) = *((_QWORD *)this + 16) + 24LL;
          *(_QWORD *)(v74 + 32) = v11;
          WdLogEvent5_WdWarning(v74);
          MonitorLogBadEDID(*((_QWORD *)this + 16) + 24LL, (unsigned int)v11);
          return (unsigned int)v11;
        }
        if ( !*((_QWORD *)this + 16) )
          goto LABEL_93;
        if ( v9 < 0x88 || a5 < 0x88 )
          goto LABEL_53;
        v79 = *(unsigned __int8 *)a4;
        if ( (unsigned int)v79 >= *((_DWORD *)this + 28) )
          goto LABEL_93;
        v80 = *(_QWORD *)(*((_QWORD *)this + 15) + 8 * v79);
        if ( !v80 )
          goto LABEL_93;
        v81 = a6;
        *(_BYTE *)a6 = v79;
        *((_BYTE *)v81 + 1) = *(_BYTE *)(v80 + 12);
        ConvertMonitorCapablitiesOrigin(*(unsigned int *)(v80 + 8), (char *)v81 + 132);
        v82 = a7;
        *(_OWORD *)((char *)v81 + 2) = *(_OWORD *)(v80 + 24);
        v83 = *(_OWORD *)(v80 + 40);
        *v82 = 136LL;
        *(_OWORD *)((char *)v81 + 18) = v83;
        *(_OWORD *)((char *)v81 + 34) = *(_OWORD *)(v80 + 56);
        *(_OWORD *)((char *)v81 + 50) = *(_OWORD *)(v80 + 72);
        *(_OWORD *)((char *)v81 + 66) = *(_OWORD *)(v80 + 88);
        *(_OWORD *)((char *)v81 + 82) = *(_OWORD *)(v80 + 104);
        *(_OWORD *)((char *)v81 + 98) = *(_OWORD *)(v80 + 120);
        *(_OWORD *)((char *)v81 + 114) = *(_OWORD *)(v80 + 136);
LABEL_107:
        LODWORD(v11) = 0;
        return (unsigned int)v11;
      }
      v84 = *((_QWORD *)this + 16);
      if ( !v84 )
        goto LABEL_93;
      if ( v9 < 0x10 || a5 < 0x10 )
        goto LABEL_53;
      v85 = *(_DWORD *)(v84 + 16);
      v86 = *(_DWORD *)(v84 + 8);
      LOWORD(v107) = 0;
      SupportedMonitorFrequencyRanges = EDID_V1_GetSupportedMonitorFrequencyRanges(
                                          v86,
                                          v85,
                                          (unsigned __int8 *)(v84 + 24),
                                          (__int64)&v107,
                                          0LL);
      v11 = SupportedMonitorFrequencyRanges;
      if ( SupportedMonitorFrequencyRanges == -1073741275 )
        goto LABEL_93;
      v37 = 0x80000000LL;
      if ( (int)(SupportedMonitorFrequencyRanges + 0x80000000) < 0 || SupportedMonitorFrequencyRanges == -1073741789 )
      {
        v38 = 52LL * ((unsigned __int16)v107 - 1) + 56;
        if ( *(_QWORD *)a4 >= v38 )
        {
          v88 = *((_QWORD *)a4 + 1);
          *(_WORD *)v88 = v107;
          v89 = EDID_V1_GetSupportedMonitorFrequencyRanges(
                  *(_DWORD *)(*((_QWORD *)this + 16) + 8LL),
                  *(_DWORD *)(*((_QWORD *)this + 16) + 16LL),
                  (unsigned __int8 *)(*((_QWORD *)this + 16) + 24LL),
                  v88,
                  (struct _FrequencyRangeDescriptor *)(v88 + 4));
          v11 = v89;
          if ( v89 < 0 )
            goto LABEL_92;
LABEL_31:
          *a6 = v38;
          goto LABEL_22;
        }
LABEL_30:
        LODWORD(v11) = -2147483643;
        goto LABEL_31;
      }
    }
    else
    {
      v32 = *((_QWORD *)this + 16);
      if ( !v32 )
        goto LABEL_93;
      if ( v9 < 0x10 || a5 < 0x10 )
        goto LABEL_53;
      v33 = *(_DWORD *)(v32 + 16);
      v34 = *(unsigned int *)(v32 + 8);
      v107 = 0;
      MonitorModes = EDID_V1_GetMonitorModes(
                       v34,
                       v33,
                       (unsigned __int8 *)(v32 + 24),
                       (unsigned __int16 *)&v107,
                       0LL,
                       0LL);
      v37 = 0x80000000LL;
      v11 = MonitorModes;
      if ( (int)(MonitorModes + 0x80000000) < 0 || MonitorModes == -1073741789 )
      {
        if ( !v107 )
          goto LABEL_93;
        v38 = 56LL * (unsigned int)(v107 - 1) + 60;
        if ( *(_QWORD *)a4 < v38 )
          goto LABEL_30;
        v56 = *((_QWORD *)a4 + 1);
        v57 = EDID_V1_GetMonitorModes(
                *(unsigned int *)(*((_QWORD *)this + 16) + 8LL),
                *(_DWORD *)(*((_QWORD *)this + 16) + 16LL),
                (unsigned __int8 *)(*((_QWORD *)this + 16) + 24LL),
                (unsigned __int16 *)&v107,
                (struct _VideoModeDescriptor *)(v56 + 4),
                &v106);
        v11 = v57;
        if ( v57 >= 0 )
        {
          *(_WORD *)v56 = v107;
          *(_WORD *)(v56 + 2) = v106;
          goto LABEL_31;
        }
      }
    }
LABEL_92:
    v90 = WdLogNewEntry5_WdError(v37, v36);
    *(_QWORD *)(v90 + 24) = v11;
    WdLogEvent5_WdError(v90);
    return (unsigned int)v11;
  }
  if ( a4 )
  {
    if ( v9 >= 0x10 )
    {
      v93 = *((unsigned int *)this + 28);
      if ( (_DWORD)v93 )
      {
        v95 = *a4 >> 7;
        v96 = a4[1] + *a4;
        v97 = *a4 & 0x7F;
        v98 = (unsigned int)(v96 - 1) >> 7;
        v106 = (*((_BYTE *)a4 + 4) + *(_BYTE *)a4 - 1) & 0x7F;
        if ( v98 < (unsigned int)v93 )
        {
          v100 = (char *)*((_QWORD *)a4 + 1);
          memmove(v100, (const void *)(*(_QWORD *)(*((_QWORD *)this + 15) + 8 * v95) + v97 + 24), 128 - v97);
          v101 = &v100[128 - v97];
          v102 = v95 + 1;
          for ( i = v102 + 1; i < v98; ++i )
          {
            v104 = v102;
            v102 = i;
            v105 = *(_QWORD *)(*((_QWORD *)this + 15) + 8 * v104);
            *(_OWORD *)v101 = *(_OWORD *)(v105 + 24);
            *((_OWORD *)v101 + 1) = *(_OWORD *)(v105 + 40);
            *((_OWORD *)v101 + 2) = *(_OWORD *)(v105 + 56);
            *((_OWORD *)v101 + 3) = *(_OWORD *)(v105 + 72);
            *((_OWORD *)v101 + 4) = *(_OWORD *)(v105 + 88);
            *((_OWORD *)v101 + 5) = *(_OWORD *)(v105 + 104);
            *((_OWORD *)v101 + 6) = *(_OWORD *)(v105 + 120);
            *((_OWORD *)v101 + 7) = *(_OWORD *)(v105 + 136);
            v101 += 128;
          }
          if ( v102 < v98 )
            memmove(v101, (const void *)(*(_QWORD *)(*((_QWORD *)this + 15) + 8LL * v102) + 24LL), v106 + 1);
          goto LABEL_107;
        }
        v99 = WdLogNewEntry5_WdWarning(v96, v93, v15, v16);
        *(_QWORD *)(v99 + 24) = *a4;
        *(_QWORD *)(v99 + 32) = a4[1];
        WdLogEvent5_WdWarning(v99);
        return 3223126024LL;
      }
      else
      {
        v94 = WdLogNewEntry5_WdWarning(v14, v93, v15, v16);
        *(_QWORD *)(v94 + 24) = this;
        WdLogEvent5_WdWarning(v94);
        return 3223126017LL;
      }
    }
    else
    {
      v92 = WdLogNewEntry5_WdError(v14, v13);
      WdLogEvent5_WdError(v92);
      return 3221225507LL;
    }
  }
  else
  {
    v91 = WdLogNewEntry5_WdError(v14, v13);
    WdLogEvent5_WdError(v91);
    return 3221225485LL;
  }
}
