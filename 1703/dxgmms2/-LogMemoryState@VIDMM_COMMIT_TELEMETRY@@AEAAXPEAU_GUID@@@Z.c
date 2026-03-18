/*
 * XREFs of ?LogMemoryState@VIDMM_COMMIT_TELEMETRY@@AEAAXPEAU_GUID@@@Z @ 0x1C00A6258
 * Callers:
 *     ?LogFullDefragPass@VIDMM_COMMIT_TELEMETRY@@QEAAXK@Z @ 0x1C00A5F10 (-LogFullDefragPass@VIDMM_COMMIT_TELEMETRY@@QEAAXK@Z.c)
 *     ?LogLongPagingPacket@VIDMM_COMMIT_TELEMETRY@@QEAAXPEAUVIDMM_PAGING_QUEUE_PACKET@@@Z @ 0x1C00A608C (-LogLongPagingPacket@VIDMM_COMMIT_TELEMETRY@@QEAAXPEAUVIDMM_PAGING_QUEUE_PACKET@@@Z.c)
 *     ?LogNoCandidatesToSuspendFound@VIDMM_COMMIT_TELEMETRY@@QEAAX_N@Z @ 0x1C00A65E4 (-LogNoCandidatesToSuspendFound@VIDMM_COMMIT_TELEMETRY@@QEAAX_N@Z.c)
 *     ?LogUnderBudgetButCantCommitEvent@VIDMM_COMMIT_TELEMETRY@@QEAAX_N@Z @ 0x1C00A6A04 (-LogUnderBudgetButCantCommitEvent@VIDMM_COMMIT_TELEMETRY@@QEAAX_N@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0014430 (__security_check_cookie.c)
 *     _TlgCreateSz @ 0x1C0021DD8 (_TlgCreateSz.c)
 *     _TlgWrite @ 0x1C0021E0C (_TlgWrite.c)
 */

void __fastcall VIDMM_COMMIT_TELEMETRY::LogMemoryState(VIDMM_COMMIT_TELEMETRY *this, struct _GUID *a2)
{
  __int64 v4; // rcx
  const CHAR *v5; // rdx
  __int64 v6; // r8
  unsigned __int16 *v7; // rax
  int v8; // ecx
  __int64 v9; // rax
  LPCGUID v10; // r9
  unsigned int i; // edi
  __int64 v12; // r10
  __int64 v13; // rsi
  __int64 v14; // r15
  char v15; // al
  unsigned __int16 *v16; // rax
  int v17; // ecx
  __int64 v18; // rax
  const GUID *v19; // r9
  UINT32 cData; // r11d
  __int64 v21; // r9
  __int64 v22; // rax
  char v23; // al
  unsigned __int16 *v24; // rax
  int v25; // ecx
  __int64 v26; // rax
  __int64 v27; // r10
  LPCGUID v28; // r9
  UINT32 v29; // r11d
  __int64 v30; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v31; // [rsp+38h] [rbp-C8h] BYREF
  const GUID *v32; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v33; // [rsp+48h] [rbp-B8h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-B0h] BYREF
  int *v35; // [rsp+70h] [rbp-90h]
  __int64 v36; // [rsp+78h] [rbp-88h]
  __int64 v37; // [rsp+80h] [rbp-80h]
  int v38; // [rsp+88h] [rbp-78h] BYREF
  int v39; // [rsp+8Ch] [rbp-74h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+90h] [rbp-70h] BYREF
  __int64 *v41; // [rsp+A0h] [rbp-60h]
  __int64 v42; // [rsp+A8h] [rbp-58h]
  __int64 *v43; // [rsp+B0h] [rbp-50h]
  __int64 v44; // [rsp+B8h] [rbp-48h]
  const GUID **v45; // [rsp+C0h] [rbp-40h]
  __int64 v46; // [rsp+C8h] [rbp-38h]
  EVENT_DATA_DESCRIPTOR v47; // [rsp+E0h] [rbp-20h] BYREF
  _DWORD *v48; // [rsp+100h] [rbp+0h]
  __int64 v49; // [rsp+108h] [rbp+8h]
  __int64 v50; // [rsp+110h] [rbp+10h]
  _DWORD v51[2]; // [rsp+118h] [rbp+18h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v52; // [rsp+120h] [rbp+20h] BYREF
  __int64 *v53; // [rsp+130h] [rbp+30h]
  __int64 v54; // [rsp+138h] [rbp+38h]
  __int64 *v55; // [rsp+140h] [rbp+40h]
  __int64 v56; // [rsp+148h] [rbp+48h]
  __int64 *v57; // [rsp+150h] [rbp+50h]
  __int64 v58; // [rsp+158h] [rbp+58h]

  if ( *((_BYTE *)this + 24) )
  {
    v4 = *(_QWORD *)this;
    v5 = "Discrete";
    if ( !*(_QWORD *)(*(_QWORD *)(v4 + 41200) + 40LL) )
      v5 = "Integrated";
    v6 = qword_1C003C018;
    if ( hProvider > 5u
      && (qword_1C003C010 & 0x400000000008LL) != 0
      && (qword_1C003C018 & 0x400000000008LL) == qword_1C003C018 )
    {
      v7 = *(unsigned __int16 **)(*(_QWORD *)(v4 + 24) + 1224LL);
      v35 = &v38;
      v36 = 2LL;
      v8 = *v7;
      v9 = *((_QWORD *)v7 + 1);
      v38 = v8;
      v37 = v9;
      v39 = 0;
      TlgCreateSz(&pDesc, v5);
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C00301DA, a2, v10, 5u, &pData);
      v6 = qword_1C003C018;
    }
    for ( i = 0; i < *(_DWORD *)(*(_QWORD *)this + 6416LL); ++i )
    {
      v12 = *(_QWORD *)this;
      v13 = 280LL * i;
      v14 = *(_QWORD *)(*(_QWORD *)this + 41200LL);
      v30 = *(_QWORD *)(v14 + v13 + 32);
      v31 = *(_QWORD *)(v14 + v13 + 248);
      if ( hProvider > 5u )
      {
        if ( (qword_1C003C010 & 0x400000000008LL) == 0 || (v15 = 1, (v6 & 0x400000000008LL) != v6) )
          v15 = 0;
        if ( v15 )
        {
          v16 = *(unsigned __int16 **)(*(_QWORD *)(v12 + 24) + 1224LL);
          v35 = &v38;
          v36 = 2LL;
          v17 = *v16;
          v18 = *((_QWORD *)v16 + 1);
          v38 = v17;
          v37 = v18;
          v39 = 0;
          TlgCreateSz(&pDesc, "Local");
          v42 = 8LL;
          v43 = &v31;
          v41 = &v30;
          v45 = &v32;
          v44 = 8LL;
          v32 = v19;
          v46 = 8LL;
          TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C003015B, a2, v19, cData, &pData);
          v6 = qword_1C003C018;
        }
      }
      v21 = *(_QWORD *)this;
      v22 = *(_QWORD *)(*(_QWORD *)this + 41200LL);
      if ( *(_QWORD *)(v22 + v13 + 40) )
      {
        v30 = *(_QWORD *)(v22 + v13 + 40);
        v31 = *(_QWORD *)(v14 + v13 + 256);
        if ( hProvider > 5u )
        {
          if ( (qword_1C003C010 & 0x400000000008LL) == 0 || (v23 = 1, (v6 & 0x400000000008LL) != v6) )
            v23 = 0;
          if ( v23 )
          {
            v24 = *(unsigned __int16 **)(*(_QWORD *)(v21 + 24) + 1224LL);
            v48 = v51;
            v49 = 2LL;
            v25 = *v24;
            v26 = *((_QWORD *)v24 + 1);
            v51[0] = v25;
            v50 = v26;
            v51[1] = 0;
            TlgCreateSz(&v52, "NonLocal");
            v54 = 8LL;
            v55 = &v31;
            v53 = &v30;
            v57 = &v33;
            v56 = 8LL;
            v33 = v27;
            v58 = 8LL;
            TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C003015B, a2, v28, v29, &v47);
            v6 = qword_1C003C018;
          }
        }
      }
    }
  }
}
