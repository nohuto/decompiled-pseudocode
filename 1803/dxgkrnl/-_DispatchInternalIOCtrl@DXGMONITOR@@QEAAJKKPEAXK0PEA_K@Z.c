/*
 * XREFs of ?_DispatchInternalIOCtrl@DXGMONITOR@@QEAAJKKPEAXK0PEA_K@Z @ 0x1C0108D84
 * Callers:
 *     DpiPdoDispatchInternalIoctl @ 0x1C0109360 (DpiPdoDispatchInternalIoctl.c)
 * Callees:
 *     ?EDIDV1_ObtainMonitorUserFriendlyName@@YAJPEBEPEAG@Z @ 0x1C001847C (-EDIDV1_ObtainMonitorUserFriendlyName@@YAJPEBEPEAG@Z.c)
 *     ?EDIDV1_ObtainMonitorSerialNumber@@YAJPEBEPEAG@Z @ 0x1C0018520 (-EDIDV1_ObtainMonitorSerialNumber@@YAJPEBEPEAG@Z.c)
 *     ?EDIDV1_ObtainMonitorProductCodeID@@YAJPEBEPEAG@Z @ 0x1C0018614 (-EDIDV1_ObtainMonitorProductCodeID@@YAJPEBEPEAG@Z.c)
 *     ?EDIDV1_ObtainMonitorManufacturerName@@YAJPEBEPEAG@Z @ 0x1C00186C8 (-EDIDV1_ObtainMonitorManufacturerName@@YAJPEBEPEAG@Z.c)
 *     ?EDIDV1_ObtainMonitorManufactureDate@@YAJPEBEPEAEPEAG@Z @ 0x1C0018768 (-EDIDV1_ObtainMonitorManufactureDate@@YAJPEBEPEAEPEAG@Z.c)
 *     ?EDID_V1_GetMonitorModes@@YAJW4__WMI_MONITOR_CAPABILITY_ORIGIN_TYPE@@KPEBEPEAKPEAU_VideoModeDescriptor@@2@Z @ 0x1C0018938 (-EDID_V1_GetMonitorModes@@YAJW4__WMI_MONITOR_CAPABILITY_ORIGIN_TYPE@@KPEBEPEAKPEAU_VideoModeDesc.c)
 *     memmove @ 0x1C001C600 (memmove.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     ?EDIDV1_ObtainMonitorAnalogVideoInputParams@@YAJPEBEPEAU_WmiMonitorAnalogVideoInputParams@@@Z @ 0x1C00475C4 (-EDIDV1_ObtainMonitorAnalogVideoInputParams@@YAJPEBEPEAU_WmiMonitorAnalogVideoInputParams@@@Z.c)
 *     ?EDIDV1_ObtainMonitorBasicDisplayParams@@YAJPEBEPEAU_WmiMonitorBasicDisplayParams@@@Z @ 0x1C0047618 (-EDIDV1_ObtainMonitorBasicDisplayParams@@YAJPEBEPEAU_WmiMonitorBasicDisplayParams@@@Z.c)
 *     ?EDIDV1_ObtainMonitorColorCharacteristics@@YAJPEBEPEAU_WmiMonitorColorCharacteristics@@@Z @ 0x1C00476B4 (-EDIDV1_ObtainMonitorColorCharacteristics@@YAJPEBEPEAU_WmiMonitorColorCharacteristics@@@Z.c)
 *     ?EDIDV1_ObtainMonitorDigitalVideoInputParams@@YAJPEBEPEAU_WmiMonitorDigitalVideoInputParams@@@Z @ 0x1C0047708 (-EDIDV1_ObtainMonitorDigitalVideoInputParams@@YAJPEBEPEAU_WmiMonitorDigitalVideoInputParams@@@Z.c)
 *     ?EDID_V1_GetSupportedMonitorFrequencyRanges@@YAJW4__WMI_MONITOR_CAPABILITY_ORIGIN_TYPE@@KPEBEPEAGPEAU_FrequencyRangeDescriptor@@@Z @ 0x1C0047E4C (-EDID_V1_GetSupportedMonitorFrequencyRanges@@YAJW4__WMI_MONITOR_CAPABILITY_ORIGIN_TYPE@@KPEBEPEA.c)
 *     MonitorLogBadEDID @ 0x1C022E99C (MonitorLogBadEDID.c)
 *     ?ConvertMonitorCapablitiesOrigin@@YAJW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@PEAW4__WMI_MONITOR_CAPABILITY_ORIGIN_TYPE@@@Z @ 0x1C02388DC (-ConvertMonitorCapablitiesOrigin@@YAJW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@PEAW4__WMI_MONITOR_.c)
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
  __int64 v13; // rcx
  __int64 v14; // r8
  int v15; // ebx
  int v16; // ebx
  int v17; // ebx
  int v18; // ebx
  int v19; // ebx
  __int16 v20; // si
  __int64 v21; // rbx
  int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  int v26; // eax
  int v27; // eax
  int v28; // eax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // rdi
  int v33; // eax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v38; // rax
  unsigned int v39; // edx
  __int64 v40; // rcx
  int MonitorModes; // eax
  __int64 v42; // rcx
  unsigned __int64 v43; // rbx
  __int64 v44; // r15
  int v45; // eax
  int v46; // ebx
  int v47; // ebx
  int v48; // ebx
  __int64 v49; // rcx
  int v50; // eax
  _BYTE *v51; // rbx
  __int64 v52; // rcx
  int v53; // eax
  _WORD *v54; // rbx
  __int64 v55; // rax
  struct _WmiMonitorBasicDisplayParams *v56; // rbx
  int v57; // eax
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // r8
  __int64 v61; // rax
  struct _WmiMonitorColorCharacteristics *v62; // rbx
  int v63; // eax
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // r8
  __int64 v67; // rax
  __int64 v68; // rax
  __int64 v69; // rax
  __int64 v70; // rax
  __int64 v71; // rax
  __int64 v72; // rdx
  __int64 v73; // rdi
  unsigned __int64 *v74; // rbx
  unsigned __int64 *v75; // rax
  __int128 v76; // xmm1
  __int64 v77; // rax
  unsigned int v78; // edx
  int v79; // ecx
  int SupportedMonitorFrequencyRanges; // eax
  __int64 v81; // r9
  int v82; // eax
  __int64 v83; // rax
  __int64 v84; // rax
  __int64 v85; // rax
  __int64 v86; // rdx
  __int64 v87; // rax
  __int64 v88; // rbx
  __int64 v89; // rcx
  __int64 v90; // r13
  unsigned int v91; // r12d
  __int64 v92; // rax
  char *v93; // rdi
  char *v94; // rdi
  unsigned int v95; // ebx
  unsigned int i; // r8d
  __int64 v97; // rcx
  __int64 v98; // rdx
  __int64 v99; // [rsp+70h] [rbp+40h] BYREF
  int v100; // [rsp+78h] [rbp+48h] BYREF

  v8 = (unsigned int)a2;
  v9 = a3;
  LODWORD(v11) = -1073741637;
  v12 = WdLogNewEntry5_WdTrace(this, a2, a3, a4);
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
            v46 = v19 - 4;
            if ( v46 )
            {
              v47 = v46 - 4;
              if ( v47 )
              {
                v48 = v47 - 4;
                if ( v48 )
                {
                  if ( v48 != 4 )
                    return (unsigned int)v11;
                  v49 = *((_QWORD *)this + 18);
                  if ( !v49 )
                    goto LABEL_90;
                  if ( v9 < 0x10 || a5 < 0x10 )
                    goto LABEL_93;
                  LOBYTE(v100) = 0;
                  v50 = EDIDV1_ObtainMonitorDigitalVideoInputParams(
                          (unsigned __int8 *)(v49 + 24),
                          (struct _WmiMonitorDigitalVideoInputParams *)&v100);
                  v11 = v50;
                  if ( v50 >= 0 )
                  {
                    if ( *(_QWORD *)a4 )
                    {
                      v51 = (_BYTE *)*((_QWORD *)a4 + 1);
                      memset(v51, 0, *(_QWORD *)a4);
                      *v51 = v100;
                    }
                    else
                    {
                      LODWORD(v11) = -2147483643;
                    }
                    *a6 = 1LL;
                    goto LABEL_21;
                  }
                }
                else
                {
                  v52 = *((_QWORD *)this + 18);
                  if ( !v52 )
                    goto LABEL_90;
                  if ( v9 < 0x10 || a5 < 0x10 )
                    goto LABEL_93;
                  LODWORD(v99) = 0;
                  WORD2(v99) = 0;
                  v53 = EDIDV1_ObtainMonitorAnalogVideoInputParams(
                          (unsigned __int8 *)(v52 + 24),
                          (struct _WmiMonitorAnalogVideoInputParams *)&v99);
                  v11 = v53;
                  if ( v53 >= 0 )
                  {
                    if ( *(_QWORD *)a4 < 6uLL )
                    {
                      LODWORD(v11) = -2147483643;
                    }
                    else
                    {
                      v54 = (_WORD *)*((_QWORD *)a4 + 1);
                      memset(v54, 0, *(_QWORD *)a4);
                      *(_DWORD *)v54 = v99;
                      v54[2] = WORD2(v99);
                    }
                    *a6 = 6LL;
                    goto LABEL_21;
                  }
                }
                if ( (_DWORD)v11 == -1073741275 )
                  return (unsigned int)v11;
                goto LABEL_52;
              }
              if ( *((_QWORD *)this + 18) )
              {
                if ( v9 >= 0x10 && a5 >= 0x10 )
                {
                  if ( *(_QWORD *)a4 < 0xBuLL )
                  {
                    LODWORD(v11) = -2147483643;
                  }
                  else
                  {
                    v56 = (struct _WmiMonitorBasicDisplayParams *)*((_QWORD *)a4 + 1);
                    memset(v56, 0, *(_QWORD *)a4);
                    v57 = EDIDV1_ObtainMonitorBasicDisplayParams(
                            (unsigned __int8 *)(*((_QWORD *)this + 18) + 24LL),
                            v56);
                    v11 = v57;
                    if ( v57 < 0 )
                    {
                      v61 = WdLogNewEntry5_WdWarning(v59, v58, v60);
                      *(_QWORD *)(v61 + 24) = *((_QWORD *)this + 18) + 24LL;
                      *(_QWORD *)(v61 + 32) = v11;
                      WdLogEvent5_WdWarning(v61);
                      MonitorLogBadEDID(*((_QWORD *)this + 18) + 24LL, (unsigned int)v11);
                    }
                  }
                  *a6 = 11LL;
                  goto LABEL_21;
                }
                goto LABEL_93;
              }
            }
            else if ( *((_QWORD *)this + 18) )
            {
              if ( v9 >= 0x10 && a5 >= 0x10 )
              {
                if ( *(_QWORD *)a4 < 0x10uLL )
                {
                  LODWORD(v11) = -2147483643;
                }
                else
                {
                  v62 = (struct _WmiMonitorColorCharacteristics *)*((_QWORD *)a4 + 1);
                  memset(v62, 0, *(_QWORD *)a4);
                  v63 = EDIDV1_ObtainMonitorColorCharacteristics(
                          (unsigned __int8 *)(*((_QWORD *)this + 18) + 24LL),
                          v62);
                  v11 = v63;
                  if ( v63 < 0 )
                  {
                    v67 = WdLogNewEntry5_WdWarning(v65, v64, v66);
                    *(_QWORD *)(v67 + 24) = *((_QWORD *)this + 18) + 24LL;
                    *(_QWORD *)(v67 + 32) = v11;
                    WdLogEvent5_WdWarning(v67);
                    MonitorLogBadEDID(*((_QWORD *)this + 18) + 24LL, (unsigned int)v11);
                  }
                }
                *a6 = 16LL;
                goto LABEL_21;
              }
              goto LABEL_93;
            }
          }
          else
          {
            v20 = 0;
            if ( *((_QWORD *)this + 18) )
            {
              if ( v9 >= 0x10 && a5 >= 0x10 )
              {
                if ( *(_QWORD *)a4 < 0x82uLL )
                {
                  LODWORD(v11) = -2147483643;
LABEL_20:
                  *a6 = 130LL;
LABEL_21:
                  *a7 = 16LL;
                  return (unsigned int)v11;
                }
                v21 = *((_QWORD *)a4 + 1);
                memset((void *)v21, 0, *(_QWORD *)a4);
                v22 = EDIDV1_ObtainMonitorProductCodeID(
                        (unsigned __int8 *)(*((_QWORD *)this + 18) + 24LL),
                        (unsigned __int16 *)v21);
                v11 = v22;
                if ( v22 >= 0 )
                {
                  v26 = EDIDV1_ObtainMonitorSerialNumber(
                          (unsigned __int8 *)(*((_QWORD *)this + 18) + 24LL),
                          (unsigned __int16 *)(v21 + 32));
                  v11 = v26;
                  if ( v26 == -1073741275 )
                  {
                    v68 = WdLogNewEntry5_WdDmmEvent(v24);
                    *(_QWORD *)(v68 + 24) = *((_QWORD *)this + 18) + 24LL;
                    WdLogEvent5_WdDmmEvent(v68);
                  }
                  else if ( v26 < 0 )
                  {
                    goto LABEL_52;
                  }
                  v27 = EDIDV1_ObtainMonitorManufacturerName(
                          (unsigned __int8 *)(*((_QWORD *)this + 18) + 24LL),
                          (unsigned __int16 *)(v21 + 64));
                  v11 = v27;
                  if ( v27 >= 0 )
                  {
                    v28 = EDIDV1_ObtainMonitorManufactureDate(
                            (unsigned __int8 *)(*((_QWORD *)this + 18) + 24LL),
                            (unsigned __int8 *)(v21 + 96),
                            (unsigned __int16 *)(v21 + 98));
                    v32 = v28;
                    if ( v28 < 0 )
                    {
                      v69 = WdLogNewEntry5_WdWarning(v30, v29, v31);
                      *(_QWORD *)(v69 + 24) = *((_QWORD *)this + 18) + 24LL;
                      *(_QWORD *)(v69 + 32) = v32;
                      WdLogEvent5_WdWarning(v69);
                      MonitorLogBadEDID(*((_QWORD *)this + 18) + 24LL, (unsigned int)v32);
                    }
                    v33 = EDIDV1_ObtainMonitorUserFriendlyName(
                            (unsigned __int8 *)(*((_QWORD *)this + 18) + 24LL),
                            (unsigned __int16 *)(v21 + 102));
                    v11 = v33;
                    if ( v33 == -1073741275 )
                    {
                      v70 = WdLogNewEntry5_WdDmmEvent(v35);
                      *(_QWORD *)(v70 + 24) = *((_QWORD *)this + 18) + 24LL;
                      WdLogEvent5_WdDmmEvent(v70);
                      LODWORD(v11) = 0;
                    }
                    else
                    {
                      if ( v33 < 0 )
                      {
                        v71 = WdLogNewEntry5_WdWarning(v35, v34, v36);
                        *(_QWORD *)(v71 + 24) = *((_QWORD *)this + 18) + 24LL;
                        *(_QWORD *)(v71 + 32) = v11;
                        WdLogEvent5_WdWarning(v71);
                        MonitorLogBadEDID(*((_QWORD *)this + 18) + 24LL, (unsigned int)v11);
                        *(_WORD *)(v21 + 100) = 0;
                        return (unsigned int)v11;
                      }
                      v20 = 13;
                    }
                    *(_WORD *)(v21 + 100) = v20;
                    goto LABEL_20;
                  }
                }
LABEL_52:
                v55 = WdLogNewEntry5_WdWarning(v24, v23, v25);
                *(_QWORD *)(v55 + 24) = *((_QWORD *)this + 18) + 24LL;
                *(_QWORD *)(v55 + 32) = v11;
                WdLogEvent5_WdWarning(v55);
                MonitorLogBadEDID(*((_QWORD *)this + 18) + 24LL, (unsigned int)v11);
                return (unsigned int)v11;
              }
LABEL_93:
              LODWORD(v11) = -1073741789;
              return (unsigned int)v11;
            }
          }
LABEL_90:
          LODWORD(v11) = -1071841279;
          return (unsigned int)v11;
        }
        if ( !*((_QWORD *)this + 18) )
          goto LABEL_90;
        if ( v9 < 0x88 || a5 < 0x88 )
          goto LABEL_93;
        v72 = *(unsigned __int8 *)a4;
        if ( (unsigned int)v72 >= *((_DWORD *)this + 32) )
          goto LABEL_90;
        v73 = *(_QWORD *)(*((_QWORD *)this + 17) + 8 * v72);
        if ( !v73 )
          goto LABEL_90;
        v74 = a6;
        *(_BYTE *)a6 = v72;
        *((_BYTE *)v74 + 1) = *(_BYTE *)(v73 + 12);
        ConvertMonitorCapablitiesOrigin(
          *(enum _D3DKMDT_MONITOR_CAPABILITIES_ORIGIN *)(v73 + 8),
          (enum __WMI_MONITOR_CAPABILITY_ORIGIN_TYPE *)((char *)v74 + 132));
        v75 = a7;
        *(_OWORD *)((char *)v74 + 2) = *(_OWORD *)(v73 + 24);
        v76 = *(_OWORD *)(v73 + 40);
        *v75 = 136LL;
        *(_OWORD *)((char *)v74 + 18) = v76;
        *(_OWORD *)((char *)v74 + 34) = *(_OWORD *)(v73 + 56);
        *(_OWORD *)((char *)v74 + 50) = *(_OWORD *)(v73 + 72);
        *(_OWORD *)((char *)v74 + 66) = *(_OWORD *)(v73 + 88);
        *(_OWORD *)((char *)v74 + 82) = *(_OWORD *)(v73 + 104);
        *(_OWORD *)((char *)v74 + 98) = *(_OWORD *)(v73 + 120);
        *(_OWORD *)((char *)v74 + 114) = *(_OWORD *)(v73 + 136);
LABEL_107:
        LODWORD(v11) = 0;
        return (unsigned int)v11;
      }
      v77 = *((_QWORD *)this + 18);
      if ( !v77 )
        goto LABEL_90;
      if ( v9 < 0x10 || a5 < 0x10 )
        goto LABEL_93;
      v78 = *(_DWORD *)(v77 + 16);
      v79 = *(_DWORD *)(v77 + 8);
      LOWORD(v100) = 0;
      SupportedMonitorFrequencyRanges = EDID_V1_GetSupportedMonitorFrequencyRanges(
                                          v79,
                                          v78,
                                          (unsigned __int8 *)(v77 + 24),
                                          (__int64)&v100,
                                          0LL);
      v11 = SupportedMonitorFrequencyRanges;
      if ( SupportedMonitorFrequencyRanges == -1073741275 )
        goto LABEL_90;
      v42 = 0x80000000LL;
      if ( (int)(SupportedMonitorFrequencyRanges + 0x80000000) < 0 || SupportedMonitorFrequencyRanges == -1073741789 )
      {
        v43 = 52LL * (unsigned __int16)v100 + 4;
        if ( *(_QWORD *)a4 >= v43 )
        {
          v81 = *((_QWORD *)a4 + 1);
          *(_WORD *)v81 = v100;
          v82 = EDID_V1_GetSupportedMonitorFrequencyRanges(
                  *(_DWORD *)(*((_QWORD *)this + 18) + 8LL),
                  *(_DWORD *)(*((_QWORD *)this + 18) + 16LL),
                  (unsigned __int8 *)(*((_QWORD *)this + 18) + 24LL),
                  v81,
                  (struct _FrequencyRangeDescriptor *)(v81 + 4));
          v11 = v82;
          if ( v82 < 0 )
            goto LABEL_92;
LABEL_31:
          *a6 = v43;
          goto LABEL_21;
        }
LABEL_32:
        LODWORD(v11) = -2147483643;
        goto LABEL_31;
      }
    }
    else
    {
      v38 = *((_QWORD *)this + 18);
      if ( !v38 )
        goto LABEL_90;
      if ( v9 < 0x10 || a5 < 0x10 )
        goto LABEL_93;
      v39 = *(_DWORD *)(v38 + 16);
      v40 = *(unsigned int *)(v38 + 8);
      v100 = 0;
      MonitorModes = EDID_V1_GetMonitorModes(
                       v40,
                       v39,
                       (unsigned __int8 *)(v38 + 24),
                       (unsigned __int16 *)&v100,
                       0LL,
                       0LL);
      v42 = 0x80000000LL;
      v11 = MonitorModes;
      if ( (int)(MonitorModes + 0x80000000) < 0 || MonitorModes == -1073741789 )
      {
        if ( !v100 )
          goto LABEL_90;
        v43 = 56LL * (unsigned int)(v100 - 1) + 60;
        if ( *(_QWORD *)a4 < v43 )
          goto LABEL_32;
        v44 = *((_QWORD *)a4 + 1);
        v45 = EDID_V1_GetMonitorModes(
                *(unsigned int *)(*((_QWORD *)this + 18) + 8LL),
                *(_DWORD *)(*((_QWORD *)this + 18) + 16LL),
                (unsigned __int8 *)(*((_QWORD *)this + 18) + 24LL),
                (unsigned __int16 *)&v100,
                (struct _VideoModeDescriptor *)(v44 + 4),
                &v99);
        v11 = v45;
        if ( v45 >= 0 )
        {
          *(_WORD *)v44 = v100;
          *(_WORD *)(v44 + 2) = v99;
          goto LABEL_31;
        }
      }
    }
LABEL_92:
    v83 = WdLogNewEntry5_WdError(v42);
    *(_QWORD *)(v83 + 24) = v11;
    WdLogEvent5_WdError(v83);
    return (unsigned int)v11;
  }
  if ( a4 )
  {
    if ( v9 >= 0x10 )
    {
      v86 = *((unsigned int *)this + 32);
      if ( (_DWORD)v86 )
      {
        v88 = *a4 >> 7;
        v89 = a4[1] + *a4;
        v90 = *a4 & 0x7F;
        v91 = (unsigned int)(v89 - 1) >> 7;
        v99 = (*((_BYTE *)a4 + 4) + *(_BYTE *)a4 - 1) & 0x7F;
        if ( v91 < (unsigned int)v86 )
        {
          v93 = (char *)*((_QWORD *)a4 + 1);
          memmove(v93, (const void *)(*(_QWORD *)(*((_QWORD *)this + 17) + 8 * v88) + v90 + 24), 128 - v90);
          v94 = &v93[128 - v90];
          v95 = v88 + 1;
          for ( i = v95 + 1; i < v91; ++i )
          {
            v97 = v95;
            v95 = i;
            v98 = *(_QWORD *)(*((_QWORD *)this + 17) + 8 * v97);
            *(_OWORD *)v94 = *(_OWORD *)(v98 + 24);
            *((_OWORD *)v94 + 1) = *(_OWORD *)(v98 + 40);
            *((_OWORD *)v94 + 2) = *(_OWORD *)(v98 + 56);
            *((_OWORD *)v94 + 3) = *(_OWORD *)(v98 + 72);
            *((_OWORD *)v94 + 4) = *(_OWORD *)(v98 + 88);
            *((_OWORD *)v94 + 5) = *(_OWORD *)(v98 + 104);
            *((_OWORD *)v94 + 6) = *(_OWORD *)(v98 + 120);
            *((_OWORD *)v94 + 7) = *(_OWORD *)(v98 + 136);
            v94 += 128;
          }
          if ( v95 < v91 )
            memmove(v94, (const void *)(*(_QWORD *)(*((_QWORD *)this + 17) + 8LL * v95) + 24LL), v99 + 1);
          goto LABEL_107;
        }
        v92 = WdLogNewEntry5_WdWarning(v89, v86, v14);
        *(_QWORD *)(v92 + 24) = *a4;
        *(_QWORD *)(v92 + 32) = a4[1];
        WdLogEvent5_WdWarning(v92);
        return 3223126024LL;
      }
      else
      {
        v87 = WdLogNewEntry5_WdWarning(v13, v86, v14);
        *(_QWORD *)(v87 + 24) = this;
        WdLogEvent5_WdWarning(v87);
        return 3223126017LL;
      }
    }
    else
    {
      v85 = WdLogNewEntry5_WdError(v13);
      WdLogEvent5_WdError(v85);
      return 3221225507LL;
    }
  }
  else
  {
    v84 = WdLogNewEntry5_WdError(v13);
    WdLogEvent5_WdError(v84);
    return 3221225485LL;
  }
}
