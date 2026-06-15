/*
 * XREFs of ?SetAllVolumes@CVADServer@@UEAAJIPEBM@Z @ 0x18001AAF0
 * Callers:
 *     AudioServerSetAllVolumes @ 0x18001DF10 (AudioServerSetAllVolumes.c)
 * Callees:
 *     ?RecalculateVolume@CAudioStream@@UEAAJXZ @ 0x180018220 (-RecalculateVolume@CAudioStream@@UEAAJXZ.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001A360 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004B5C4 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     WPP_SF_q @ 0x18004B768 (WPP_SF_q.c)
 *     WPP_SF_qd @ 0x18004B79C (WPP_SF_qd.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVADServer::SetAllVolumes(CAudioStream **this, unsigned int a2, float *a3)
{
  CAudioStream *v6; // rdi
  unsigned int v7; // esi
  unsigned int v8; // eax
  float *v9; // rcx
  unsigned int v10; // edx
  __int64 v11; // r9
  const float *v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned int v15; // eax
  __int64 v16; // r10
  int v17; // eax
  __int64 (__fastcall *v18)(CAudioStream *); // rax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-18h] BYREF
  char v21; // [rsp+38h] [rbp-10h]

  if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 58LL, &WPP_6a2f5d392ebc3a7b5b56686ced9a2fbc_Traceguids, this);
  }
  v21 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)(this + 27);
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v6 = this[24];
  if ( !v6 || !*((_DWORD *)this + 46) )
  {
    v7 = -2004287487;
    goto LABEL_31;
  }
  if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qd(*((_QWORD *)WPP_GLOBAL_Control + 2), 37LL, &WPP_c45047042f6d344739c91af1a021533b_Traceguids, v6, a2);
  }
  if ( a2 != *((_DWORD *)v6 + 22) )
  {
    v7 = -2147024809;
    AudSrvTraceLoggingErrorHelper("CAudioStream::SetAllStreamVolumes", 0x592u, -2147024809);
LABEL_31:
    AudSrvTraceLoggingErrorHelper("CVADServer::SetAllVolumes", 0x97Bu, v7);
    goto LABEL_24;
  }
  v7 = 0;
  v8 = 0;
  if ( a2 )
  {
    v9 = a3;
    while ( *v9 >= 0.0 && *v9 <= 1.0 )
    {
      ++v8;
      ++v9;
      if ( v8 >= a2 )
        goto LABEL_17;
    }
    v7 = -2147024809;
    AudSrvTraceLoggingErrorHelper("CAudioStream::SetAllStreamVolumes", 0x59Au, -2147024809);
    goto LABEL_31;
  }
LABEL_17:
  v10 = 0;
  if ( a2 >= 2 )
  {
    v11 = *((_QWORD *)v6 + 14);
    v12 = a3;
    v13 = v11 + 4;
    v14 = v11 - (_QWORD)a3;
    v15 = ((a2 - 2) >> 1) + 1;
    v16 = v15;
    v10 = 2 * v15;
    do
    {
      v13 += 8LL;
      *(const float *)((char *)v12 + v14) = *v12;
      v17 = *((_DWORD *)v12 + 1);
      v12 += 2;
      *(_DWORD *)(v13 - 8) = v17;
      --v16;
    }
    while ( v16 );
  }
  if ( v10 < a2 )
    *(float *)(*((_QWORD *)v6 + 14) + 4LL * v10) = a3[v10];
  v18 = *(__int64 (__fastcall **)(CAudioStream *))(*(_QWORD *)v6 + 128LL);
  if ( v18 == CAudioStream::RecalculateVolume )
    CAudioStream::RecalculateVolume(v6);
  else
    v18(v6);
LABEL_24:
  if ( v21 )
    LeaveCriticalSection(lpCriticalSection);
  return v7;
}
