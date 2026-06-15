/*
 * XREFs of ?GetPosition_Offload@CCrossProcessClientOutputEndpoint@@IEAAJPEA_K0@Z @ 0x1400587B0
 * Callers:
 *     ?GetPosition@CCrossProcessClientOutputEndpoint@@UEAAJPEA_K0@Z @ 0x140058260 (-GetPosition@CCrossProcessClientOutputEndpoint@@UEAAJPEA_K0@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x14001CBB0 (__security_check_cookie.c)
 *     WPP_SF_D @ 0x140035F74 (WPP_SF_D.c)
 *     _TlgWrite @ 0x140036120 (_TlgWrite.c)
 *     ?AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140056F64 (-AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CCrossProcessClientOutputEndpoint::GetPosition_Offload(
        CCrossProcessClientOutputEndpoint *this,
        unsigned __int64 *a2,
        GUID *a3)
{
  __int64 v3; // r9
  GUID *v4; // r14
  int v7; // esi
  __int64 v8; // r10
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  float v12; // xmm7_4
  int v13; // edx
  signed __int32 v14; // eax
  double LowPart; // xmm0_8
  double v16; // xmm0_8
  double v17; // xmm1_8
  __int64 v18; // rax
  int v19; // eax
  double v20; // xmm3_8
  float v21; // xmm0_4
  double v22; // xmm2_8
  unsigned __int64 v23; // rcx
  double v24; // xmm2_8
  unsigned __int64 v25; // rax
  signed __int32 v27; // [rsp+30h] [rbp-D0h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v29; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int64 v30; // [rsp+48h] [rbp-B8h] BYREF
  unsigned __int64 v31; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v32; // [rsp+58h] [rbp-A8h] BYREF
  CCrossProcessClientOutputEndpoint *v33; // [rsp+60h] [rbp-A0h] BYREF
  CCrossProcessClientOutputEndpoint *v34; // [rsp+68h] [rbp-98h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+70h] [rbp-90h] BYREF
  CCrossProcessClientOutputEndpoint **v36; // [rsp+90h] [rbp-70h]
  __int64 v37; // [rsp+98h] [rbp-68h]
  unsigned __int64 *v38; // [rsp+A0h] [rbp-60h]
  __int64 v39; // [rsp+A8h] [rbp-58h]
  __int64 *v40; // [rsp+B0h] [rbp-50h]
  __int64 v41; // [rsp+B8h] [rbp-48h]
  unsigned __int64 *v42; // [rsp+C0h] [rbp-40h]
  __int64 v43; // [rsp+C8h] [rbp-38h]
  unsigned __int64 *v44; // [rsp+D0h] [rbp-30h]
  __int64 v45; // [rsp+D8h] [rbp-28h]
  EVENT_DATA_DESCRIPTOR v46; // [rsp+E0h] [rbp-20h] BYREF
  CCrossProcessClientOutputEndpoint **v47; // [rsp+100h] [rbp+0h]
  __int64 v48; // [rsp+108h] [rbp+8h]
  signed __int32 *v49; // [rsp+110h] [rbp+10h]
  __int64 v50; // [rsp+118h] [rbp+18h]
  unsigned __int64 *v51; // [rsp+120h] [rbp+20h]
  __int64 v52; // [rsp+128h] [rbp+28h]
  __int64 *v53; // [rsp+130h] [rbp+30h]
  __int64 v54; // [rsp+138h] [rbp+38h]

  v3 = *((_QWORD *)this + 8);
  v4 = a3;
  v27 = _InterlockedCompareExchange((volatile signed __int32 *)(v3 + 156), 0, 0);
  v7 = 0;
  if ( (v27 & 4) != 0 )
  {
    v3 = 3LL;
    do
    {
      v8 = (unsigned int)_InterlockedCompareExchange((volatile signed __int32 *)(*((_QWORD *)this + 8) + 152LL), 0, 0);
      a3 = (GUID *)(5 * v8);
      v9 = *((_QWORD *)this + 8);
      v30 = *(_QWORD *)(v9 + 40 * v8 + 24);
      v10 = *(_QWORD *)(v9 + 40 * v8 + 48);
      v11 = *((_QWORD *)this + 8);
      v29 = v10;
      v12 = *(float *)(v11 + 40 * v8 + 56);
      v13 = *(_DWORD *)(*((_QWORD *)this + 8) + 40 * v8 + 60);
      v14 = _InterlockedCompareExchange((volatile signed __int32 *)(*((_QWORD *)this + 8) + 152LL), 0, 0);
      if ( (_DWORD)v8 == v14 )
        break;
      v3 = (unsigned int)(v3 - 1);
    }
    while ( (_DWORD)v3 );
    if ( v13 && (_DWORD)v8 == v14 )
    {
      *a2 = v30;
      if ( (v27 & 1) != 0 )
      {
        PerformanceCount.QuadPart = 0LL;
        QueryPerformanceCounter(&PerformanceCount);
        LowPart = (double)(int)PerformanceCount.LowPart;
        if ( PerformanceCount.QuadPart < 0 )
          LowPart = LowPart + 1.844674407370955e19;
        v16 = LowPart * 10000000.0;
        v17 = (double)(int)g_u64QPCFrequency;
        if ( (g_u64QPCFrequency & 0x8000000000000000uLL) != 0LL )
          v17 = v17 + 1.844674407370955e19;
        v18 = (unsigned int)(int)(v16 / v17);
        if ( v4 )
          *(_QWORD *)&v4->Data1 = v18;
        if ( v18 < v29 )
          v19 = 0;
        else
          v19 = v18 - v29;
        v20 = DOUBLE_0_5;
        *a2 += (unsigned int)(int)((double)v19 * v12 / 10000000.0 + 0.5);
      }
      else
      {
        v20 = DOUBLE_0_5;
      }
      v21 = *((float *)this + 35);
      if ( v21 != v12 )
      {
        v22 = (double)(int)*a2;
        if ( (*a2 & 0x8000000000000000uLL) != 0LL )
          v22 = v22 + 1.844674407370955e19;
        v23 = 0LL;
        v24 = v22 * v21 / v12 + v20;
        if ( v24 >= 9.223372036854776e18 )
        {
          v24 = v24 - 9.223372036854776e18;
          if ( v24 < 9.223372036854776e18 )
            v23 = 0x8000000000000000uLL;
        }
        *a2 = v23 + (unsigned int)(int)v24;
      }
      v25 = *(_QWORD *)(*((_QWORD *)this + 8) + 16LL) / (unsigned __int64)*((unsigned int *)this + 20);
      v31 = v25;
      if ( *a2 > v25 )
      {
        if ( (unsigned int)dword_140089020 > 5 )
        {
          v33 = this;
          v36 = &v33;
          v38 = &v30;
          v40 = &v29;
          v44 = &v31;
          v37 = 8LL;
          v39 = 8LL;
          v41 = 8LL;
          v42 = a2;
          v43 = 8LL;
          v45 = 8LL;
          TlgWrite((TraceLoggingHProvider)&dword_140089020, &unk_1400729A0, a3, (LPCGUID)v3, 7u, &pData);
          v25 = v31;
        }
        *a2 = v25;
      }
      *a2 *= *((unsigned int *)this + 20);
    }
    else
    {
      v7 = -2005139393;
      *a2 = *((_QWORD *)this + 21);
    }
  }
  else
  {
    *a2 = 0LL;
  }
  if ( (unsigned int)dword_140089020 > 5 )
  {
    v34 = this;
    v47 = &v34;
    v49 = &v27;
    v48 = 8LL;
    v50 = 4LL;
    v51 = a2;
    v52 = 8LL;
    if ( v4 )
      v32 = *(_QWORD *)&v4->Data1;
    else
      v32 = 0LL;
    v54 = 8LL;
    v53 = &v32;
    TlgWrite((TraceLoggingHProvider)&dword_140089020, &unk_140072A0E, a3, (LPCGUID)v3, 6u, &v46);
  }
  if ( v7 < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x80000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xCu, (__int64)&WPP_8ba84e4c02b33f572bdb63ead5dc6032_Traceguids, v7);
    }
    AudCPTraceLoggingErrorHelper("CCrossProcessClientOutputEndpoint::GetPosition_Offload", 413, v7);
  }
  return (unsigned int)v7;
}
