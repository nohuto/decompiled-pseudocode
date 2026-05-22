/*
 * XREFs of ?GetPoseAtTime_@HolographicDriverClientContinuousTrace@@QEAAXPEBXAEBUSPATIAL_NODE_ID@@_J2222W4TracePredictionType@@AEBUSPATIAL_GRAPH_DYNAMIC_NODE_POSE@@_NI@Z @ 0x1800BEAE0
 * Callers:
 *     _lambda_2e90b6ae67ad76cbf474a8c31d64668a_::operator() @ 0x1800C7D00 (_lambda_2e90b6ae67ad76cbf474a8c31d64668a_--operator().c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?Instance@HolographicDriverClientContinuousTrace@@KAPEAV1@XZ @ 0x1800BE9B4 (-Instance@HolographicDriverClientContinuousTrace@@KAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1800E1B10 (__security_check_cookie.c)
 */

int __fastcall HolographicDriverClientContinuousTrace::GetPoseAtTime_(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        int a9,
        __int64 a10,
        char a11,
        int a12)
{
  __int64 v13; // rdi
  __int64 v14; // rax
  __int64 v15; // rcx
  int v17; // [rsp+38h] [rbp-D0h] BYREF
  int v18; // [rsp+3Ch] [rbp-CCh] BYREF
  __int64 v19; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v20; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v21; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v22; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v23; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v24; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v25; // [rsp+70h] [rbp-98h] BYREF
  GUID ActivityId; // [rsp+78h] [rbp-90h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+88h] [rbp-80h] BYREF
  GUID *p_ActivityId; // [rsp+A8h] [rbp-60h]
  __int64 v29; // [rsp+B0h] [rbp-58h]
  __int64 *v30; // [rsp+B8h] [rbp-50h]
  __int64 v31; // [rsp+C0h] [rbp-48h]
  __int64 v32; // [rsp+C8h] [rbp-40h]
  __int64 v33; // [rsp+D0h] [rbp-38h]
  __int64 *v34; // [rsp+D8h] [rbp-30h]
  __int64 v35; // [rsp+E0h] [rbp-28h]
  __int64 *v36; // [rsp+E8h] [rbp-20h]
  __int64 v37; // [rsp+F0h] [rbp-18h]
  __int64 *v38; // [rsp+F8h] [rbp-10h]
  __int64 v39; // [rsp+100h] [rbp-8h]
  __int64 *v40; // [rsp+108h] [rbp+0h]
  __int64 v41; // [rsp+110h] [rbp+8h]
  __int64 *v42; // [rsp+118h] [rbp+10h]
  __int64 v43; // [rsp+120h] [rbp+18h]
  __int64 *v44; // [rsp+128h] [rbp+20h]
  __int64 v45; // [rsp+130h] [rbp+28h]
  __int64 *v46; // [rsp+138h] [rbp+30h]
  __int64 v47; // [rsp+140h] [rbp+38h]
  __int64 *v48; // [rsp+148h] [rbp+40h]
  __int64 v49; // [rsp+150h] [rbp+48h]
  __int64 *v50; // [rsp+158h] [rbp+50h]
  __int64 v51; // [rsp+160h] [rbp+58h]
  int *v52; // [rsp+168h] [rbp+60h]
  __int64 v53; // [rsp+170h] [rbp+68h]
  __int64 v54; // [rsp+178h] [rbp+70h]
  __int64 v55; // [rsp+180h] [rbp+78h]
  __int64 v56; // [rsp+188h] [rbp+80h]
  __int64 v57; // [rsp+190h] [rbp+88h]
  __int64 v58; // [rsp+198h] [rbp+90h]
  __int64 v59; // [rsp+1A0h] [rbp+98h]
  __int64 v60; // [rsp+1A8h] [rbp+A0h]
  __int64 v61; // [rsp+1B0h] [rbp+A8h]
  __int64 v62; // [rsp+1B8h] [rbp+B0h]
  __int64 v63; // [rsp+1C0h] [rbp+B8h]
  __int64 v64; // [rsp+1C8h] [rbp+C0h]
  __int64 v65; // [rsp+1D0h] [rbp+C8h]
  __int64 v66; // [rsp+1D8h] [rbp+D0h]
  __int64 v67; // [rsp+1E0h] [rbp+D8h]
  int *v68; // [rsp+1E8h] [rbp+E0h]
  __int64 v69; // [rsp+1F0h] [rbp+E8h]
  char *v70; // [rsp+1F8h] [rbp+F0h]
  __int64 v71; // [rsp+200h] [rbp+F8h]
  __int64 *v72; // [rsp+208h] [rbp+100h]
  __int64 v73; // [rsp+210h] [rbp+108h]
  __int64 v74; // [rsp+240h] [rbp+138h] BYREF

  v74 = a2;
  v13 = a10;
  v20 = 1000000 * (a5 - a4) / qword_1801366F8;
  v21 = 1000000 * (a5 - a6) / qword_1801366F8;
  v22 = 1000000 * (a7 - a5) / qword_1801366F8;
  v23 = 1000000 * (a7 - a6) / qword_1801366F8;
  v25 = 1000000 * (a8 - a6) / qword_1801366F8;
  LODWORD(v19) = a12 ^ *(_DWORD *)(a10 + 16);
  v24 = 1000000 * (a4 - a8) / qword_1801366F8;
  *(_QWORD *)&ActivityId.Data1 = 0LL;
  *(_QWORD *)ActivityId.Data4 = 0LL;
  EventActivityIdControl(1u, &ActivityId);
  v14 = (__int64)HolographicDriverClientContinuousTrace::Instance();
  v15 = *(_QWORD *)(v14 + 8);
  if ( *(_DWORD *)v15 > 5u )
  {
    LODWORD(v14) = *(_DWORD *)(v15 + 16);
    if ( (v14 & 0x400000) != 0 )
    {
      v14 = *(_QWORD *)(v15 + 24) & 0x400000LL;
      if ( v14 == *(_QWORD *)(v15 + 24) )
      {
        v29 = 16LL;
        p_ActivityId = &ActivityId;
        v30 = &v74;
        v34 = &a7;
        v36 = &a6;
        v38 = &a8;
        v40 = &v20;
        v42 = &v21;
        v44 = &v22;
        v46 = &v23;
        v48 = &v24;
        v50 = &v25;
        v17 = a9;
        v52 = &v17;
        v56 = v13 + 8;
        v58 = v13 + 36;
        v60 = v13 + 84;
        v62 = v13 + 96;
        v64 = v13 + 108;
        v66 = v13 + 120;
        v18 = *(_DWORD *)(v13 + 16);
        v68 = &v18;
        v70 = &a11;
        v72 = &v19;
        v31 = 8LL;
        v32 = a3;
        v33 = 16LL;
        v35 = 8LL;
        v37 = 8LL;
        v39 = 8LL;
        v41 = 8LL;
        v43 = 8LL;
        v45 = 8LL;
        v47 = 8LL;
        v49 = 8LL;
        v51 = 8LL;
        v53 = 4LL;
        v54 = v13;
        v55 = 8LL;
        v57 = 8LL;
        v59 = 48LL;
        v61 = 12LL;
        v63 = 12LL;
        v65 = 12LL;
        v67 = 12LL;
        v69 = 4LL;
        v71 = 1LL;
        v73 = 4LL;
        LODWORD(v14) = TlgWrite((TraceLoggingHProvider)v15, &unk_180112253, 0LL, 0LL, 0x19u, &pData);
      }
    }
  }
  return v14;
}
