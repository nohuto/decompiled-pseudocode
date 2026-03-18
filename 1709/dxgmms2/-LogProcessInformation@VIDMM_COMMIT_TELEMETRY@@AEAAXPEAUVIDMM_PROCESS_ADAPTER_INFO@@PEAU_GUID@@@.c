/*
 * XREFs of ?LogProcessInformation@VIDMM_COMMIT_TELEMETRY@@AEAAXPEAUVIDMM_PROCESS_ADAPTER_INFO@@PEAU_GUID@@@Z @ 0x1C00AEE8C
 * Callers:
 *     ?LogDeviceInPenaltyBoxEvent@VIDMM_COMMIT_TELEMETRY@@QEAAXPEAVVIDMM_DEVICE@@_N@Z @ 0x1C00AE32C (-LogDeviceInPenaltyBoxEvent@VIDMM_COMMIT_TELEMETRY@@QEAAXPEAVVIDMM_DEVICE@@_N@Z.c)
 *     ?LogFullDefragPass@VIDMM_COMMIT_TELEMETRY@@QEAAXK@Z @ 0x1C00AE5D8 (-LogFullDefragPass@VIDMM_COMMIT_TELEMETRY@@QEAAXK@Z.c)
 *     ?LogLongPagingPacket@VIDMM_COMMIT_TELEMETRY@@QEAAXPEAUVIDMM_PAGING_QUEUE_PACKET@@@Z @ 0x1C00AE754 (-LogLongPagingPacket@VIDMM_COMMIT_TELEMETRY@@QEAAXPEAUVIDMM_PAGING_QUEUE_PACKET@@@Z.c)
 *     ?LogNoCandidatesToSuspendFound@VIDMM_COMMIT_TELEMETRY@@QEAAX_N@Z @ 0x1C00AECFC (-LogNoCandidatesToSuspendFound@VIDMM_COMMIT_TELEMETRY@@QEAAX_N@Z.c)
 *     ?LogUnderBudgetButCantCommitEvent@VIDMM_COMMIT_TELEMETRY@@QEAAX_N@Z @ 0x1C00AF124 (-LogUnderBudgetButCantCommitEvent@VIDMM_COMMIT_TELEMETRY@@QEAAX_N@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0016910 (__security_check_cookie.c)
 *     _TlgCreateSz @ 0x1C00240A0 (_TlgCreateSz.c)
 *     _TlgWrite @ 0x1C00240D4 (_TlgWrite.c)
 *     ?TotalDemotedCommitment@VIDMM_PROCESS_BUDGET_STATE@@QEBA_KXZ @ 0x1C0050E60 (-TotalDemotedCommitment@VIDMM_PROCESS_BUDGET_STATE@@QEBA_KXZ.c)
 */

void __fastcall VIDMM_COMMIT_TELEMETRY::LogProcessInformation(
        VIDMM_COMMIT_TELEMETRY *this,
        struct VIDMM_PROCESS_ADAPTER_INFO *a2,
        struct _GUID *a3)
{
  __int64 v6; // rcx
  unsigned int v7; // ebx
  __int64 v8; // rdx
  VIDMM_PROCESS_BUDGET_STATE *v9; // rsi
  char v10; // al
  unsigned __int16 *v11; // rax
  int v12; // ecx
  _QWORD *v13; // rax
  const CHAR *ProcessImageFileName; // rax
  __int64 *v15; // rcx
  const CHAR *v16; // rdx
  int v17; // eax
  __int64 v18; // rcx
  unsigned __int64 v19; // rax
  bool v20; // zf
  LPCGUID v21; // r9
  BOOL v22; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v23; // [rsp+38h] [rbp-C8h] BYREF
  unsigned __int64 v24; // [rsp+40h] [rbp-C0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-B0h] BYREF
  _DWORD *v26; // [rsp+70h] [rbp-90h]
  __int64 v27; // [rsp+78h] [rbp-88h]
  __int64 v28; // [rsp+80h] [rbp-80h]
  _DWORD v29[2]; // [rsp+88h] [rbp-78h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+90h] [rbp-70h] BYREF
  __int64 *v31; // [rsp+A0h] [rbp-60h]
  __int64 v32; // [rsp+A8h] [rbp-58h]
  struct _EVENT_DATA_DESCRIPTOR v33; // [rsp+B0h] [rbp-50h] BYREF
  char *v34; // [rsp+C0h] [rbp-40h]
  __int64 v35; // [rsp+C8h] [rbp-38h]
  char *v36; // [rsp+D0h] [rbp-30h]
  __int64 v37; // [rsp+D8h] [rbp-28h]
  char *v38; // [rsp+E0h] [rbp-20h]
  __int64 v39; // [rsp+E8h] [rbp-18h]
  char *v40; // [rsp+F0h] [rbp-10h]
  __int64 v41; // [rsp+F8h] [rbp-8h]
  unsigned __int64 *v42; // [rsp+100h] [rbp+0h]
  __int64 v43; // [rsp+108h] [rbp+8h]
  BOOL *v44; // [rsp+110h] [rbp+10h]
  __int64 v45; // [rsp+118h] [rbp+18h]
  char *v46; // [rsp+120h] [rbp+20h]
  __int64 v47; // [rsp+128h] [rbp+28h]
  char *v48; // [rsp+130h] [rbp+30h]
  __int64 v49; // [rsp+138h] [rbp+38h]
  char *v50; // [rsp+140h] [rbp+40h]
  __int64 v51; // [rsp+148h] [rbp+48h]
  char *v52; // [rsp+150h] [rbp+50h]
  __int64 v53; // [rsp+158h] [rbp+58h]

  if ( *((_BYTE *)this + 24) )
  {
    if ( a2 )
    {
      v6 = *(_QWORD *)this;
      v7 = 0;
      if ( *(_DWORD *)(v6 + 6416) )
      {
        v8 = qword_1C0040068;
        do
        {
          v9 = (VIDMM_PROCESS_BUDGET_STATE *)(*((_QWORD *)a2 + 6) + 296LL * v7);
          if ( (unsigned int)hProvider > 5 )
          {
            if ( (qword_1C0040060 & 0x400000000008LL) == 0 || (v10 = 1, (v8 & 0x400000000008LL) != v8) )
              v10 = 0;
            if ( v10 )
            {
              v11 = *(unsigned __int16 **)(*(_QWORD *)(v6 + 24) + 1248LL);
              v26 = v29;
              v27 = 2LL;
              v12 = *v11;
              v28 = *((_QWORD *)v11 + 1);
              v13 = (_QWORD *)*((_QWORD *)a2 + 5);
              v29[0] = v12;
              v29[1] = 0;
              ProcessImageFileName = (const CHAR *)PsGetProcessImageFileName(*v13);
              TlgCreateSz(&pDesc, ProcessImageFileName);
              v15 = (__int64 *)*((_QWORD *)a2 + 5);
              v23 = *v15;
              v31 = &v23;
              v32 = 8LL;
              if ( *((_BYTE *)this + 24) )
              {
                LOBYTE(v17) = 0;
                if ( v15 )
                {
                  v18 = v15[4];
                  if ( v18 )
                    v17 = *(_DWORD *)(v18 + 312);
                }
                if ( (v17 & 1) != 0 )
                {
                  v16 = "Focus";
                }
                else
                {
                  v16 = "Visible";
                  if ( (v17 & 2) == 0 )
                    v16 = "Occluded";
                }
              }
              else
              {
                v16 = 0LL;
              }
              TlgCreateSz(&v33, v16);
              v35 = 8LL;
              v36 = (char *)v9 + 72;
              v34 = (char *)v9 + 200;
              v38 = (char *)v9 + 136;
              v37 = 8LL;
              v40 = (char *)v9 + 24;
              v39 = 8LL;
              v41 = 8LL;
              v19 = VIDMM_PROCESS_BUDGET_STATE::TotalDemotedCommitment(v9);
              v20 = *(_QWORD *)v9 == 0LL;
              v24 = v19;
              v42 = &v24;
              v43 = 8LL;
              v22 = !v20;
              v44 = &v22;
              v46 = (char *)v9 + 208;
              v48 = (char *)v9 + 80;
              v50 = (char *)v9 + 144;
              v52 = (char *)v9 + 32;
              v45 = 4LL;
              v47 = 8LL;
              v49 = 8LL;
              v51 = 8LL;
              v53 = 8LL;
              TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C0033928, a3, v21, 0x11u, &pData);
              v8 = qword_1C0040068;
            }
          }
          v6 = *(_QWORD *)this;
          ++v7;
        }
        while ( v7 < *(_DWORD *)(*(_QWORD *)this + 6416LL) );
      }
    }
  }
}
