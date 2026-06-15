/*
 * XREFs of ?SetAllVolumes@CVADServer@@UEAAJIPEBM@Z @ 0x180025E30
 * Callers:
 *     AudioServerSetAllVolumes @ 0x180028AD0 (AudioServerSetAllVolumes.c)
 * Callees:
 *     ?RecalculateVolume@CAudioStream@@UEAAJXZ @ 0x18001B730 (-RecalculateVolume@CAudioStream@@UEAAJXZ.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001E280 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18005F740 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     WPP_SF_qd @ 0x180067C30 (WPP_SF_qd.c)
 *     WPP_SF_q @ 0x18007DC24 (WPP_SF_q.c)
 */

__int64 __fastcall CVADServer::SetAllVolumes(float ***this, unsigned int a2, float *a3)
{
  __int64 v4; // rdi
  float **v6; // rbx
  unsigned int v7; // eax
  float *v8; // rcx
  char *v9; // rcx
  __int64 v10; // rdx
  signed __int64 v11; // r14
  __int64 (__fastcall *v12)(float **); // rax
  unsigned int v13; // ebx
  unsigned int v15; // edx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-18h] BYREF
  char v17; // [rsp+38h] [rbp-10h]

  v4 = a2;
  if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 55LL, &WPP_cdc5f6c5d0f339869e28fa9670aa29b0_Traceguids, this);
  }
  v17 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)(this + 27);
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v6 = this[24];
  if ( !v6 || !*((_DWORD *)this + 46) )
  {
    v13 = -2004287487;
LABEL_30:
    AudSrvTraceLoggingErrorHelper("CVADServer::SetAllVolumes", 0x942u, v13);
    goto LABEL_18;
  }
  if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qd(*((_QWORD *)WPP_GLOBAL_Control + 2), 36LL, &WPP_78805be245a237971eed1a1da5d2d3a4_Traceguids, v6, v4);
  }
  if ( (_DWORD)v4 != *((_DWORD *)v6 + 21) )
  {
    v15 = 1372;
LABEL_28:
    v13 = -2147024809;
    AudSrvTraceLoggingErrorHelper("CAudioStream::SetAllStreamVolumes", v15, -2147024809);
    goto LABEL_30;
  }
  v7 = 0;
  if ( (_DWORD)v4 )
  {
    v8 = a3;
    do
    {
      if ( *v8 < 0.0 || *v8 > 1.0 )
      {
        v15 = 1380;
        goto LABEL_28;
      }
      ++v7;
      ++v8;
    }
    while ( v7 < (unsigned int)v4 );
    v9 = (char *)v6[14];
    v10 = v4;
    v11 = (char *)a3 - v9;
    do
    {
      *(_DWORD *)v9 = *(_DWORD *)&v9[v11];
      v9 += 4;
      --v10;
    }
    while ( v10 );
  }
  v12 = (__int64 (__fastcall *)(float **))*((_QWORD *)*v6 + 15);
  if ( v12 == CAudioStream::RecalculateVolume )
    CAudioStream::RecalculateVolume(v6);
  else
    v12(v6);
  v13 = 0;
LABEL_18:
  if ( v17 )
    LeaveCriticalSection(lpCriticalSection);
  return v13;
}
