/*
 * XREFs of StorpTelemetrySendUnitNvmeHealthInfo @ 0x1C004603C
 * Callers:
 *     StorpDeviceHealthWorkItemRoutine @ 0x1C00035B0 (StorpDeviceHealthWorkItemRoutine.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C0002C98 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0002CCC (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x1C0003A20 (_TlgCreateWsz.c)
 *     _TlgCreateSz @ 0x1C0003A5C (_TlgCreateSz.c)
 *     __security_check_cookie @ 0x1C001EEB0 (__security_check_cookie.c)
 *     McTemplateK0qcccjjzssxqqbchqb @ 0x1C0042C20 (McTemplateK0qcccjjzssxqqbchqb.c)
 *     StorpTelemetryNvmeGetLogPage @ 0x1C0045EFC (StorpTelemetryNvmeGetLogPage.c)
 */

void __fastcall StorpTelemetrySendUnitNvmeHealthInfo(__int64 a1)
{
  __int64 v2; // rsi
  unsigned __int16 v3; // r12
  unsigned int *v4; // r14
  __int64 v5; // rdi
  char v6; // r13
  unsigned int *PoolWithTag; // rax
  unsigned int *v8; // r15
  unsigned int *v9; // rax
  NTSTATUS LogPage; // eax
  int v11; // eax
  __int64 v12; // rcx
  const struct _TlgProvider_t *v13; // rcx
  char v14; // r9
  const unsigned __int16 *v15; // r10
  unsigned __int64 v16; // r11
  __int64 v17; // rcx
  const WCHAR *v18; // rdx
  int v19; // r10d
  LPCGUID v20; // r8
  LPCGUID v21; // r9
  const unsigned __int16 *v22; // r10
  __int64 v23; // r11
  __int64 v24; // rcx
  const WCHAR *v25; // rdx
  int v26; // r10d
  LPCGUID v27; // r8
  LPCGUID v28; // r9
  int v29; // [rsp+68h] [rbp-C0h]
  char v30; // [rsp+A8h] [rbp-80h] BYREF
  char v31; // [rsp+A9h] [rbp-7Fh] BYREF
  char v32; // [rsp+AAh] [rbp-7Eh] BYREF
  char v33; // [rsp+ABh] [rbp-7Dh] BYREF
  _BYTE v34[2]; // [rsp+ACh] [rbp-7Ch] BYREF
  __int16 v35; // [rsp+AEh] [rbp-7Ah]
  _WORD v36[2]; // [rsp+B0h] [rbp-78h] BYREF
  int v37; // [rsp+B4h] [rbp-74h]
  int v38; // [rsp+B8h] [rbp-70h] BYREF
  __int64 v39; // [rsp+C0h] [rbp-68h] BYREF
  __int64 v40; // [rsp+C8h] [rbp-60h] BYREF
  __int64 v41; // [rsp+D0h] [rbp-58h] BYREF
  __int64 v42; // [rsp+D8h] [rbp-50h] BYREF
  struct _TlgProvider_t hProvider; // [rsp+E0h] [rbp-48h] BYREF
  __int64 v44; // [rsp+120h] [rbp-8h]
  __int64 v45; // [rsp+128h] [rbp+0h]
  __int64 v46; // [rsp+130h] [rbp+8h]
  int *v47; // [rsp+138h] [rbp+10h]
  __int64 v48; // [rsp+140h] [rbp+18h]
  char *v49; // [rsp+148h] [rbp+20h]
  __int64 v50; // [rsp+150h] [rbp+28h]
  char *v51; // [rsp+158h] [rbp+30h]
  __int64 v52; // [rsp+160h] [rbp+38h]
  char *v53; // [rsp+168h] [rbp+40h]
  __int64 v54; // [rsp+170h] [rbp+48h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+178h] [rbp+50h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v56; // [rsp+188h] [rbp+60h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v57; // [rsp+198h] [rbp+70h] BYREF
  void *p_hProvider; // [rsp+1A8h] [rbp+80h]
  __int64 v59; // [rsp+1B0h] [rbp+88h]
  char *v60; // [rsp+1B8h] [rbp+90h]
  __int64 v61; // [rsp+1C0h] [rbp+98h]
  int *v62; // [rsp+1C8h] [rbp+A0h]
  __int64 v63; // [rsp+1D0h] [rbp+A8h]
  __int64 v64; // [rsp+1D8h] [rbp+B0h]
  int v65; // [rsp+1E0h] [rbp+B8h] BYREF
  int v66; // [rsp+1E4h] [rbp+BCh]
  char *v67; // [rsp+1E8h] [rbp+C0h]
  __int64 v68; // [rsp+1F0h] [rbp+C8h]
  _WORD *v69; // [rsp+1F8h] [rbp+D0h]
  __int64 v70; // [rsp+200h] [rbp+D8h]
  int *v71; // [rsp+208h] [rbp+E0h]
  __int64 v72; // [rsp+210h] [rbp+E8h]
  __int64 v73; // [rsp+218h] [rbp+F0h]
  int v74; // [rsp+220h] [rbp+F8h] BYREF
  int v75; // [rsp+224h] [rbp+FCh]
  const unsigned __int16 **p_ProviderMetadataPtr; // [rsp+228h] [rbp+100h]
  __int64 v77; // [rsp+230h] [rbp+108h]
  void *p_KeywordAny; // [rsp+238h] [rbp+110h]
  __int64 v79; // [rsp+240h] [rbp+118h]
  __int64 *v80; // [rsp+248h] [rbp+120h]
  __int64 v81; // [rsp+250h] [rbp+128h]
  __int64 *v82; // [rsp+258h] [rbp+130h]
  __int64 v83; // [rsp+260h] [rbp+138h]
  __int64 *v84; // [rsp+268h] [rbp+140h]
  __int64 v85; // [rsp+270h] [rbp+148h]
  __int64 *v86; // [rsp+278h] [rbp+150h]
  __int64 v87; // [rsp+280h] [rbp+158h]
  CHAR psz[8]; // [rsp+288h] [rbp+160h] BYREF
  char v89; // [rsp+290h] [rbp+168h]
  CHAR v90[16]; // [rsp+298h] [rbp+170h] BYREF
  char v91; // [rsp+2A8h] [rbp+180h]

  LOWORD(v37) = 0;
  v35 = 0;
  v2 = 0LL;
  v39 = 0LL;
  v40 = 0LL;
  v3 = 0;
  v41 = 0LL;
  v4 = 0LL;
  v42 = 0LL;
  v5 = 0LL;
  *(_QWORD *)psz = 0LL;
  v6 = 0;
  v89 = 0;
  memset(v90, 0, sizeof(v90));
  v91 = 0;
  PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(PagedPool, 0x230uLL, 0x65546152u);
  v8 = PoolWithTag;
  if ( PoolWithTag && StorpTelemetryNvmeGetLogPage(a1, 2, PoolWithTag) >= 0 )
  {
    v3 = 216;
    v2 = (__int64)v8 + v8[6] + 8;
    v39 = *(_QWORD *)(v2 + 48);
    v40 = *(_QWORD *)(v2 + 56);
    *(_BYTE *)(a1 + 1740) = *(_BYTE *)v2;
  }
  if ( (*(_DWORD *)(a1 + 1736) & 8) == 0 )
  {
    v9 = (unsigned int *)ExAllocatePoolWithTag(PagedPool, 0x230uLL, 0x65546152u);
    v4 = v9;
    if ( v9 )
    {
      LogPage = StorpTelemetryNvmeGetLogPage(a1, 192, v9);
      if ( LogPage < 0
        || ((v5 = (__int64)v4 + v4[6] + 8, *(_WORD *)(v5 + 510) >= 0x10u) || *(_BYTE *)(v5 + 509)
          ? (v5 = 0LL, LogPage = -1073741637)
          : (v35 = *(_WORD *)(v5 + 510), v6 = -64, v41 = *(_QWORD *)v5, v42 = *(_QWORD *)(v5 + 8), v37 = 55),
            LogPage < 0) )
      {
        if ( LogPage != -1073741670 )
        {
          v11 = *(_DWORD *)(a1 + 1736);
          if ( (v11 & 1) == 0 )
            *(_DWORD *)(a1 + 1736) = v11 | 8;
        }
      }
    }
  }
  if ( v2 || v5 )
  {
    v12 = *(_QWORD *)(a1 + 96);
    if ( v12 )
    {
      *(_QWORD *)psz = *(_QWORD *)(v12 + 8);
      *(_OWORD *)v90 = *(_OWORD *)(v12 + 16);
    }
    *(_QWORD *)(a1 + 2592) = 0LL;
    *(_QWORD *)(a1 + 2600) = 0LL;
    if ( g_StorpTraceLoggingCriticalEventEnabledSetByRegistry == 1 && !WPP_MAIN_CB.DeviceLock.Header.LockNV )
      goto LABEL_43;
    v12 = (unsigned int)g_StorpTraceLoggingCriticalEventsLogged;
    if ( g_StorpTraceLoggingCriticalEventsLogged >= (unsigned int)g_StorpTraceLoggingCriticalEventMaximum )
      goto LABEL_43;
    if ( (*(_DWORD *)(a1 + 1736) & 0x10) != 0 )
      WPP_MAIN_CB.DeviceLock.Header.LockNV = -1;
    if ( *(_BYTE *)(a1 + 1740) )
      WPP_MAIN_CB.DeviceLock.Header.LockNV = -1;
    if ( (*(_BYTE *)(a1 + 154) & 2) != 0 )
      WPP_MAIN_CB.DeviceLock.Header.LockNV = -1;
    if ( WPP_MAIN_CB.DeviceLock.Header.LockNV )
    {
      v13 = (const struct _TlgProvider_t *)(unsigned int)++g_StorpTraceLoggingCriticalEventsLogged;
      if ( (unsigned int)dword_1C0056060 > 5 && TlgKeywordOn(v13, 0x800000000000uLL) )
      {
        v17 = *(_QWORD *)(a1 + 24);
        v38 = *(_DWORD *)(v17 + 56);
        v30 = *(_BYTE *)(a1 + 88);
        v31 = *(_BYTE *)(a1 + 89);
        v32 = *(_BYTE *)(a1 + 90);
        v18 = *(const WCHAR **)(v17 + 4800);
        *(_QWORD *)&hProvider.LevelPlus1 = WPP_MAIN_CB.SecurityDescriptor;
        v36[0] = v35;
        hProvider.AnnotationFunc = (void (*)(...))(v17 + 5192);
        hProvider.ProviderMetadataPtr = v15;
        v45 = a1 + 1720;
        v33 = v14;
        v47 = &v38;
        v49 = &v30;
        v51 = &v31;
        v53 = &v32;
        v34[0] = v6;
        hProvider.KeywordAny = v16;
        v44 = 16LL;
        v46 = 16LL;
        v48 = 4LL;
        v50 = 1LL;
        v52 = 1LL;
        v54 = 1LL;
        TlgCreateWsz(&pDesc, v18);
        TlgCreateSz(&v56, psz);
        TlgCreateSz(&v57, v90);
        v59 = 8LL;
        v60 = &v33;
        p_hProvider = &hProvider;
        v62 = &v65;
        v65 = v3;
        v67 = v34;
        v69 = v36;
        v71 = &v74;
        v74 = (unsigned __int16)v37;
        p_ProviderMetadataPtr = &hProvider.ProviderMetadataPtr;
        v61 = 1LL;
        v63 = 2LL;
        v64 = v2;
        v66 = v19;
        v68 = 1LL;
        v70 = 2LL;
        v72 = 2LL;
        v73 = v5;
        v75 = v19;
        v77 = 8LL;
        p_KeywordAny = &hProvider.KeywordAny;
        v80 = &v39;
        v82 = &v40;
        v84 = &v41;
        v86 = &v42;
        v79 = 8LL;
        v81 = 8LL;
        v83 = 8LL;
        v85 = 8LL;
        v87 = 8LL;
        TlgWrite(&hProvider, &unk_1C004CA28, v20, v21, 0x19u, (EVENT_DATA_DESCRIPTOR *)&hProvider.KeywordAll);
      }
    }
    else
    {
LABEL_43:
      if ( (unsigned int)dword_1C0056060 > 5 && TlgKeywordOn((TraceLoggingHProvider)v12, 0x400000000000uLL) )
      {
        v24 = *(_QWORD *)(a1 + 24);
        v38 = *(_DWORD *)(v24 + 56);
        v34[0] = *(_BYTE *)(a1 + 88);
        v33 = *(_BYTE *)(a1 + 89);
        v32 = *(_BYTE *)(a1 + 90);
        v25 = *(const WCHAR **)(v24 + 4800);
        hProvider.KeywordAny = (unsigned __int64)WPP_MAIN_CB.SecurityDescriptor;
        v31 = *(_BYTE *)(a1 + 1740);
        v36[0] = v35;
        hProvider.AnnotationFunc = (void (*)(...))(v24 + 5192);
        hProvider.ProviderMetadataPtr = v22;
        v45 = a1 + 1720;
        v30 = v6;
        v47 = &v38;
        v49 = v34;
        v51 = &v33;
        v53 = &v32;
        *(_QWORD *)&hProvider.LevelPlus1 = v23;
        v44 = 16LL;
        v46 = 16LL;
        v48 = 4LL;
        v50 = 1LL;
        v52 = 1LL;
        v54 = 1LL;
        TlgCreateWsz(&pDesc, v25);
        TlgCreateSz(&v56, psz);
        TlgCreateSz(&v57, v90);
        v59 = 8LL;
        v60 = &v31;
        p_hProvider = &hProvider.KeywordAny;
        v62 = &v65;
        v65 = v3;
        v67 = &v30;
        v69 = v36;
        v71 = &v74;
        v74 = (unsigned __int16)v37;
        v61 = 1LL;
        v63 = 2LL;
        v64 = v2;
        v66 = v26;
        v68 = 1LL;
        v70 = 2LL;
        v72 = 2LL;
        v73 = v5;
        v75 = v26;
        p_ProviderMetadataPtr = &hProvider.ProviderMetadataPtr;
        p_KeywordAny = &hProvider;
        v80 = &v39;
        v82 = &v40;
        v84 = &v41;
        v86 = &v42;
        v77 = 8LL;
        v79 = 8LL;
        v81 = 8LL;
        v83 = 8LL;
        v85 = 8LL;
        v87 = 8LL;
        TlgWrite(
          (TraceLoggingHProvider)&hProvider.KeywordAny,
          &unk_1C004D683,
          v27,
          v28,
          0x19u,
          (EVENT_DATA_DESCRIPTOR *)&hProvider.KeywordAll);
      }
    }
    if ( (BYTE4(WPP_MAIN_CB.Dpc.DpcData) & 8) != 0 )
      McTemplateK0qcccjjzssxqqbchqb(
        v3,
        *(unsigned __int8 *)(a1 + 1740),
        *(_QWORD *)(a1 + 24) + 5192LL,
        *(_DWORD *)(*(_QWORD *)(a1 + 24) + 56LL),
        *(_BYTE *)(a1 + 88),
        *(_BYTE *)(a1 + 89),
        *(_BYTE *)(a1 + 90),
        a1 + 1720,
        *(_QWORD *)(a1 + 24) + 5192LL,
        *(const wchar_t **)(*(_QWORD *)(a1 + 24) + 4800LL),
        psz,
        v90,
        v29,
        *(_BYTE *)(a1 + 1740),
        v3,
        v2,
        v6,
        v35,
        (unsigned __int16)v37,
        v5);
  }
  if ( v8 )
    ExFreePoolWithTag(v8, 0x65546152u);
  if ( v4 )
    ExFreePoolWithTag(v4, 0x65546152u);
}
