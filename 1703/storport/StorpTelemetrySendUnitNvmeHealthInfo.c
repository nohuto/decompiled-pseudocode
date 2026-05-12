/*
 * XREFs of StorpTelemetrySendUnitNvmeHealthInfo @ 0x1C00452EC
 * Callers:
 *     StorpDeviceHealthWorkItemRoutine @ 0x1C00026F0 (StorpDeviceHealthWorkItemRoutine.c)
 * Callees:
 *     _TlgCreateWsz @ 0x1C0002B58 (_TlgCreateWsz.c)
 *     _TlgCreateSz @ 0x1C0002B94 (_TlgCreateSz.c)
 *     _TlgWrite @ 0x1C0002BC8 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1C0002C68 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C001EB90 (__security_check_cookie.c)
 *     memset @ 0x1C001F180 (memset.c)
 *     Template_qcccjjzssxqqb @ 0x1C0045BF0 (Template_qcccjjzssxqqb.c)
 */

void __fastcall StorpTelemetrySendUnitNvmeHealthInfo(__int64 a1)
{
  _DWORD *PoolWithTag; // rax
  _DWORD *OutputBuffer; // rdi
  _DWORD *v4; // rsi
  PIRP v5; // rax
  NTSTATUS KeywordAny; // eax
  int v7; // edx
  __int64 v8; // rax
  __int64 v9; // rcx
  char *v10; // r14
  __int64 SecurityDescriptor_low; // rcx
  char v12; // r9
  __int64 v13; // rcx
  const WCHAR *v14; // rdx
  LPCGUID v15; // r8
  LPCGUID v16; // r9
  UINT32 v17; // r10d
  __int64 v18; // rcx
  const WCHAR *v19; // rdx
  LPCGUID v20; // r8
  LPCGUID v21; // r9
  UINT32 v22; // r10d
  char v23; // [rsp+80h] [rbp-80h] BYREF
  char v24; // [rsp+81h] [rbp-7Fh] BYREF
  char v25; // [rsp+82h] [rbp-7Eh] BYREF
  char v26; // [rsp+83h] [rbp-7Dh] BYREF
  char v27; // [rsp+84h] [rbp-7Ch] BYREF
  char v28; // [rsp+85h] [rbp-7Bh] BYREF
  char v29; // [rsp+86h] [rbp-7Ah] BYREF
  char v30; // [rsp+87h] [rbp-79h] BYREF
  char v31; // [rsp+88h] [rbp-78h] BYREF
  char v32; // [rsp+89h] [rbp-77h] BYREF
  int v33; // [rsp+8Ch] [rbp-74h] BYREF
  int v34; // [rsp+90h] [rbp-70h] BYREF
  struct _KEVENT Event; // [rsp+98h] [rbp-68h] BYREF
  struct _TlgProvider_t hProvider; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v37; // [rsp+F0h] [rbp-10h]
  __int64 v38; // [rsp+F8h] [rbp-8h]
  __int64 v39; // [rsp+100h] [rbp+0h]
  __int64 v40; // [rsp+108h] [rbp+8h]
  int *v41; // [rsp+110h] [rbp+10h]
  __int64 v42; // [rsp+118h] [rbp+18h]
  char *v43; // [rsp+120h] [rbp+20h]
  __int64 v44; // [rsp+128h] [rbp+28h]
  char *v45; // [rsp+130h] [rbp+30h]
  __int64 v46; // [rsp+138h] [rbp+38h]
  char *v47; // [rsp+140h] [rbp+40h]
  __int64 v48; // [rsp+148h] [rbp+48h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+150h] [rbp+50h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v50; // [rsp+160h] [rbp+60h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v51; // [rsp+170h] [rbp+70h] BYREF
  struct _TlgProvider_t *p_hProvider; // [rsp+180h] [rbp+80h]
  __int64 v53; // [rsp+188h] [rbp+88h]
  char *v54; // [rsp+190h] [rbp+90h]
  __int64 v55; // [rsp+198h] [rbp+98h]
  char *v56; // [rsp+1A0h] [rbp+A0h]
  __int64 v57; // [rsp+1A8h] [rbp+A8h]
  __int64 *v58; // [rsp+1B0h] [rbp+B0h]
  __int64 v59; // [rsp+1B8h] [rbp+B8h]
  char *v60; // [rsp+1C0h] [rbp+C0h]
  __int64 v61; // [rsp+1C8h] [rbp+C8h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+1E0h] [rbp+E0h] BYREF
  __int64 v63; // [rsp+200h] [rbp+100h]
  __int64 v64; // [rsp+208h] [rbp+108h]
  __int64 v65; // [rsp+210h] [rbp+110h]
  __int64 v66; // [rsp+218h] [rbp+118h]
  int *v67; // [rsp+220h] [rbp+120h]
  __int64 v68; // [rsp+228h] [rbp+128h]
  char *v69; // [rsp+230h] [rbp+130h]
  __int64 v70; // [rsp+238h] [rbp+138h]
  char *v71; // [rsp+240h] [rbp+140h]
  __int64 v72; // [rsp+248h] [rbp+148h]
  char *v73; // [rsp+250h] [rbp+150h]
  __int64 v74; // [rsp+258h] [rbp+158h]
  struct _EVENT_DATA_DESCRIPTOR v75; // [rsp+260h] [rbp+160h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v76; // [rsp+270h] [rbp+170h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v77; // [rsp+280h] [rbp+180h] BYREF
  const unsigned __int16 **p_ProviderMetadataPtr; // [rsp+290h] [rbp+190h]
  __int64 v79; // [rsp+298h] [rbp+198h]
  char *v80; // [rsp+2A0h] [rbp+1A0h]
  __int64 v81; // [rsp+2A8h] [rbp+1A8h]
  char *v82; // [rsp+2B0h] [rbp+1B0h]
  __int64 v83; // [rsp+2B8h] [rbp+1B8h]
  __int64 *v84; // [rsp+2C0h] [rbp+1C0h]
  __int64 v85; // [rsp+2C8h] [rbp+1C8h]
  char *v86; // [rsp+2D0h] [rbp+1D0h]
  __int64 v87; // [rsp+2D8h] [rbp+1D8h] BYREF
  CHAR psz[8]; // [rsp+2F0h] [rbp+1F0h] BYREF
  char v89; // [rsp+2F8h] [rbp+1F8h]
  CHAR v90[16]; // [rsp+300h] [rbp+200h] BYREF
  char v91; // [rsp+310h] [rbp+210h]

  hProvider.KeywordAny = 0LL;
  hProvider.KeywordAll = 0LL;
  memset(&Event, 0, sizeof(Event));
  *(_QWORD *)psz = 0LL;
  v89 = 0;
  memset(v90, 0, sizeof(v90));
  v91 = 0;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x230uLL, 0x65546152u);
  OutputBuffer = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x230uLL);
    *(_QWORD *)OutputBuffer = 50LL;
    v4 = OutputBuffer + 2;
    OutputBuffer[2] = 3;
    OutputBuffer[3] = 2;
    *((_QWORD *)OutputBuffer + 2) = 2LL;
    OutputBuffer[6] = 40;
    OutputBuffer[7] = 512;
    KeInitializeEvent(&Event, NotificationEvent, 0);
    v5 = IoBuildDeviceIoControlRequest(
           0x2D1400u,
           *(PDEVICE_OBJECT *)(a1 + 8),
           OutputBuffer,
           0x230u,
           OutputBuffer,
           0x230u,
           0,
           &Event,
           (PIO_STATUS_BLOCK)&hProvider.KeywordAny);
    if ( v5 )
    {
      v5->IoStatus.Status = -1073741637;
      KeywordAny = IofCallDriver(*(PDEVICE_OBJECT *)(a1 + 8), v5);
      if ( KeywordAny == 259 )
      {
        KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
        KeywordAny = hProvider.KeywordAny;
      }
      if ( KeywordAny >= 0 && *OutputBuffer == 48 && OutputBuffer[1] == 48 )
      {
        v8 = (unsigned int)OutputBuffer[6];
        if ( (unsigned int)v8 >= 0x28 && OutputBuffer[7] >= 0x200u )
        {
          v9 = *(_QWORD *)(a1 + 96);
          v10 = (char *)v4 + v8;
          *(_BYTE *)(a1 + 1705) = *((_BYTE *)v4 + v8);
          if ( v9 )
          {
            *(_QWORD *)psz = *(_QWORD *)(v9 + 8);
            *(_OWORD *)v90 = *(_OWORD *)(v9 + 16);
          }
          SecurityDescriptor_low = LODWORD(WPP_MAIN_CB.SecurityDescriptor);
          if ( g_StorpTraceLoggingCriticalEventEnabledSetByRegistry == 1 && !LODWORD(WPP_MAIN_CB.SecurityDescriptor) )
            goto LABEL_33;
          v7 = g_StorpTraceLoggingCriticalEventsLogged;
          if ( g_StorpTraceLoggingCriticalEventsLogged >= (unsigned int)g_StorpTraceLoggingCriticalEventMaximum )
            goto LABEL_33;
          if ( *(_BYTE *)(a1 + 1704) )
          {
            SecurityDescriptor_low = 0xFFFFFFFFLL;
            LODWORD(WPP_MAIN_CB.SecurityDescriptor) = -1;
          }
          if ( *(_BYTE *)(a1 + 1705) )
          {
            SecurityDescriptor_low = 0xFFFFFFFFLL;
            LODWORD(WPP_MAIN_CB.SecurityDescriptor) = -1;
          }
          if ( (*(_BYTE *)(a1 + 154) & 2) != 0 )
          {
            SecurityDescriptor_low = 0xFFFFFFFFLL;
            LODWORD(WPP_MAIN_CB.SecurityDescriptor) = -1;
          }
          if ( (_DWORD)SecurityDescriptor_low )
          {
            v7 = ++g_StorpTraceLoggingCriticalEventsLogged;
            if ( (unsigned int)dword_1C0055010 > 5
              && TlgKeywordOn((TraceLoggingHProvider)SecurityDescriptor_low, 0x800000000000uLL) )
            {
              v13 = *(_QWORD *)(a1 + 24);
              v33 = *(_DWORD *)(v13 + 56);
              v23 = *(_BYTE *)(a1 + 88);
              v24 = *(_BYTE *)(a1 + 89);
              v25 = *(_BYTE *)(a1 + 90);
              v14 = *(const WCHAR **)(v13 + 4800);
              *(_QWORD *)&hProvider.LevelPlus1 = *(_QWORD *)&WPP_MAIN_CB.DeviceLock.Header.Lock;
              v27 = v10[5];
              v37 = v13 + 5192;
              v26 = v12;
              v39 = a1 + 1688;
              v41 = &v33;
              v43 = &v23;
              v45 = &v24;
              v47 = &v25;
              v38 = 16LL;
              v40 = 16LL;
              v42 = 4LL;
              v44 = 1LL;
              v46 = 1LL;
              v48 = 1LL;
              TlgCreateWsz(&pDesc, v14);
              TlgCreateSz(&v50, psz);
              TlgCreateSz(&v51, v90);
              v53 = 8LL;
              v54 = &v26;
              p_hProvider = &hProvider;
              v56 = &v27;
              v58 = &v61;
              v55 = 1LL;
              v57 = 1LL;
              v59 = 2LL;
              v60 = v10;
              v61 = 216LL;
              TlgWrite(&hProvider, &unk_1C004C86D, v15, v16, v17, (EVENT_DATA_DESCRIPTOR *)&hProvider.RegHandle);
            }
          }
          else
          {
LABEL_33:
            if ( (unsigned int)dword_1C0055010 > 5
              && TlgKeywordOn((TraceLoggingHProvider)SecurityDescriptor_low, 0x400000000000uLL) )
            {
              v18 = *(_QWORD *)(a1 + 24);
              v34 = *(_DWORD *)(v18 + 56);
              v28 = *(_BYTE *)(a1 + 88);
              v29 = *(_BYTE *)(a1 + 89);
              v30 = *(_BYTE *)(a1 + 90);
              v19 = *(const WCHAR **)(v18 + 4800);
              hProvider.ProviderMetadataPtr = *(const unsigned __int16 **)&WPP_MAIN_CB.DeviceLock.Header.Lock;
              v31 = *(_BYTE *)(a1 + 1705);
              v32 = v10[5];
              v63 = v18 + 5192;
              v64 = 16LL;
              v65 = a1 + 1688;
              v67 = &v34;
              v69 = &v28;
              v71 = &v29;
              v73 = &v30;
              v66 = 16LL;
              v68 = 4LL;
              v70 = 1LL;
              v72 = 1LL;
              v74 = 1LL;
              TlgCreateWsz(&v75, v19);
              TlgCreateSz(&v76, psz);
              TlgCreateSz(&v77, v90);
              v79 = 8LL;
              v80 = &v31;
              p_ProviderMetadataPtr = &hProvider.ProviderMetadataPtr;
              v82 = &v32;
              v84 = &v87;
              v81 = 1LL;
              v83 = 1LL;
              v85 = 2LL;
              v86 = v10;
              v87 = 216LL;
              TlgWrite((TraceLoggingHProvider)&hProvider.ProviderMetadataPtr, &unk_1C004C7A8, v20, v21, v22, &pData);
            }
          }
          if ( (BYTE4(WPP_MAIN_CB.Dpc.DpcData) & 1) != 0 )
            Template_qcccjjzssxqqb(
              *(_QWORD *)(a1 + 24) + 5192,
              v7,
              a1 + 1688,
              *(_DWORD *)(*(_QWORD *)(a1 + 24) + 56LL),
              *(_BYTE *)(a1 + 88),
              *(_BYTE *)(a1 + 89),
              *(_BYTE *)(a1 + 90),
              a1 + 1688,
              *(_QWORD *)(a1 + 24) + 5192LL,
              *(_QWORD *)(*(_QWORD *)(a1 + 24) + 4800LL),
              (__int64)psz,
              (__int64)v90);
        }
      }
    }
    ExFreePoolWithTag(OutputBuffer, 0x65546152u);
  }
}
