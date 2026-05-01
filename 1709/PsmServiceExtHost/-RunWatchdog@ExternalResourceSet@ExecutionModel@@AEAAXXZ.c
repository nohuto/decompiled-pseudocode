/*
 * XREFs of ?RunWatchdog@ExternalResourceSet@ExecutionModel@@AEAAXXZ @ 0x18003D428
 * Callers:
 *     ?OnHostFrozen@ExternalResourceSet@ExecutionModel@@UEAAJXZ @ 0x18003D260 (-OnHostFrozen@ExternalResourceSet@ExecutionModel@@UEAAJXZ.c)
 *     ?WatchdogTimerCallback@ExternalResourceSet@ExecutionModel@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x18003D7A0 (-WatchdogTimerCallback@ExternalResourceSet@ExecutionModel@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEA.c)
 * Callees:
 *     ?RmpSystemGetProcessPsmInfo@@YAJKPEAU_RM_PSM_HOST_INFO@@@Z @ 0x180006740 (-RmpSystemGetProcessPsmInfo@@YAJKPEAU_RM_PSM_HOST_INFO@@@Z.c)
 *     ?RmpActivityHostGetTracingId@@YAXPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ACTIVITY_HOST_TRACING_ID@@@Z @ 0x180007710 (-RmpActivityHostGetTracingId@@YAXPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ACTIVITY_HOST_TRACING_ID@@@Z.c)
 *     _TlgKeywordOn @ 0x180013B38 (_TlgKeywordOn.c)
 *     _TlgCreateWsz @ 0x180015DB4 (_TlgCreateWsz.c)
 *     _TlgWrite @ 0x1800176F0 (_TlgWrite.c)
 *     TraceLoggingProviderEnabled @ 0x180020094 (TraceLoggingProviderEnabled.c)
 *     __security_check_cookie @ 0x180025FE0 (__security_check_cookie.c)
 *     ?ForceReleaseExternalResources@ResourceManager@ExecutionModel@@QEAAXK@Z @ 0x180031DF0 (-ForceReleaseExternalResources@ResourceManager@ExecutionModel@@QEAAXK@Z.c)
 *     ?IsDebuggerAttached@ExternalResourceSet@ExecutionModel@@CA_NK@Z @ 0x18003D1AC (-IsDebuggerAttached@ExternalResourceSet@ExecutionModel@@CA_NK@Z.c)
 */

void __fastcall ExecutionModel::ExternalResourceSet::RunWatchdog(ExecutionModel::ExternalResourceSet *this)
{
  DWORD v2; // edi
  const struct _TlgProvider_t *v3; // rcx
  const GUID *v4; // r8
  const GUID *v5; // r9
  UCHAR v6; // dl
  HANDLE v7; // rsi
  struct _RM_ACTIVITY_HOST *v8; // rcx
  __int64 v9; // r9
  WCHAR *v10; // rax
  _OWORD *v11; // rcx
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  int ProcessPsmInfo; // eax
  __int64 v24; // r9
  WCHAR *v25; // rcx
  _OWORD *v26; // rdx
  __int128 v27; // xmm1
  __int128 v28; // xmm0
  __int128 v29; // xmm1
  __int128 v30; // xmm0
  __int128 v31; // xmm1
  __int128 v32; // xmm0
  __int128 v33; // xmm1
  __int128 v34; // xmm1
  __int128 v35; // xmm0
  __int128 v36; // xmm1
  __int128 v37; // xmm0
  NTSTATUS v38; // eax
  LPCGUID v39; // r8
  LPCGUID v40; // r9
  DWORD v41; // [rsp+30h] [rbp-D0h] BYREF
  ULONG ReturnLength; // [rsp+34h] [rbp-CCh] BYREF
  ExecutionModel::ExternalResourceSet *v43; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v44; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v45; // [rsp+48h] [rbp-B8h]
  char ProcessInformation[4]; // [rsp+50h] [rbp-B0h] BYREF
  int v47; // [rsp+54h] [rbp-ACh]
  __int64 v48; // [rsp+60h] [rbp-A0h]
  __int16 v49; // [rsp+88h] [rbp-78h]
  __int16 v50; // [rsp+8Ch] [rbp-74h]
  _BYTE v51[560]; // [rsp+B0h] [rbp-50h] BYREF
  WCHAR pwsz[232]; // [rsp+2E0h] [rbp+1E0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+4B0h] [rbp+3B0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+4D0h] [rbp+3D0h] BYREF
  DWORD *v55; // [rsp+4E0h] [rbp+3E0h]
  int v56; // [rsp+4E8h] [rbp+3E8h]
  int v57; // [rsp+4ECh] [rbp+3ECh]

  v44 = 0LL;
  v45 = 0LL;
  if ( *((_DWORD *)this + 350) )
  {
    v2 = *((_DWORD *)this + 2);
    if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 9uLL) )
    {
      pDesc.Reserved = 0;
      v57 = 0;
      pDesc.Ptr = (ULONGLONG)&v43;
      v55 = &v41;
      v43 = this;
      pDesc.Size = 8;
      v41 = v2;
      v56 = 4;
      TlgWrite(v3, &unk_1800595D3, v4, v5, 4u, &pData);
    }
    if ( v2 && !ExecutionModel::ExternalResourceSet::IsDebuggerAttached(v2) )
    {
      if ( (*((_BYTE *)this + 1472) & 2) != 0 )
      {
        ExecutionModel::ResourceManager::ForceReleaseExternalResources(
          *((ExecutionModel::ResourceManager **)this + 3),
          v2);
        return;
      }
      v7 = OpenProcess(0x1001u, 0, v2);
      if ( v7 )
      {
        if ( TraceLoggingProviderEnabled((TraceLoggingHProvider)&hProvider, v6, 0LL) )
        {
          v8 = (struct _RM_ACTIVITY_HOST *)*((_QWORD *)this + 182);
          if ( v8 )
          {
            RmpActivityHostGetTracingId(v8, (struct _RM_ACTIVITY_HOST_TRACING_ID *)v51);
            v9 = 3LL;
            v10 = pwsz;
            v11 = v51;
            do
            {
              v12 = v11[1];
              *(_OWORD *)v10 = *v11;
              v13 = v11[2];
              *((_OWORD *)v10 + 1) = v12;
              v14 = v11[3];
              *((_OWORD *)v10 + 2) = v13;
              v15 = v11[4];
              *((_OWORD *)v10 + 3) = v14;
              v16 = v11[5];
              *((_OWORD *)v10 + 4) = v15;
              v17 = v11[6];
              *((_OWORD *)v10 + 5) = v16;
              v18 = v11[7];
              v11 += 8;
              *((_OWORD *)v10 + 6) = v17;
              v10 += 64;
              *((_OWORD *)v10 - 1) = v18;
              --v9;
            }
            while ( v9 );
            v19 = v11[1];
            *(_OWORD *)v10 = *v11;
            v20 = v11[2];
            *((_OWORD *)v10 + 1) = v19;
            v21 = v11[3];
            *((_OWORD *)v10 + 2) = v20;
            v22 = v11[4];
            *((_OWORD *)v10 + 3) = v21;
            *((_OWORD *)v10 + 4) = v22;
LABEL_18:
            v38 = NtQueryInformationProcess(v7, (PROCESSINFOCLASS)64, ProcessInformation, 0x60u, &ReturnLength);
            if ( (int)(v38 + 0x80000000) < 0 || v38 == -2147483643 )
            {
              LODWORD(v44) = v47;
              WORD2(v44) = v49;
              HIWORD(v44) = v50;
              v45 = v48;
            }
            if ( hProvider > 4u )
            {
              if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x400000000001uLL) )
              {
                TlgCreateWsz(&pDesc, pwsz);
                v57 = 0;
                v55 = (DWORD *)&v44;
                v56 = 16;
                TlgWrite((TraceLoggingHProvider)&hProvider, &unk_180059619, v39, v40, 4u, &pData);
              }
            }
            goto LABEL_24;
          }
          ProcessPsmInfo = RmpSystemGetProcessPsmInfo(v2, (struct _RM_PSM_HOST_INFO *)v51);
          v24 = 3LL;
          v25 = pwsz;
          v26 = v51;
          do
          {
            v27 = v26[1];
            *(_OWORD *)v25 = *v26;
            v28 = v26[2];
            *((_OWORD *)v25 + 1) = v27;
            v29 = v26[3];
            *((_OWORD *)v25 + 2) = v28;
            v30 = v26[4];
            *((_OWORD *)v25 + 3) = v29;
            v31 = v26[5];
            *((_OWORD *)v25 + 4) = v30;
            v32 = v26[6];
            *((_OWORD *)v25 + 5) = v31;
            v33 = v26[7];
            v26 += 8;
            *((_OWORD *)v25 + 6) = v32;
            v25 += 64;
            *((_OWORD *)v25 - 1) = v33;
            --v24;
          }
          while ( v24 );
          v34 = v26[1];
          *(_OWORD *)v25 = *v26;
          v35 = v26[2];
          *((_OWORD *)v25 + 1) = v34;
          v36 = v26[3];
          *((_OWORD *)v25 + 2) = v35;
          v37 = v26[4];
          *((_OWORD *)v25 + 3) = v36;
          *((_OWORD *)v25 + 4) = v37;
          if ( ProcessPsmInfo >= 0 )
            goto LABEL_18;
        }
LABEL_24:
        TerminateProcess(v7, 0x80004004);
        CloseHandle(v7);
      }
    }
  }
}
