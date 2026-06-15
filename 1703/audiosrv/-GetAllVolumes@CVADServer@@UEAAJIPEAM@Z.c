/*
 * XREFs of ?GetAllVolumes@CVADServer@@UEAAJIPEAM@Z @ 0x18001A9D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001A360 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004B5C4 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     WPP_SF_q @ 0x18004B768 (WPP_SF_q.c)
 */

__int64 __fastcall CVADServer::GetAllVolumes(CVADServer *this, unsigned int a2, float *a3)
{
  __int64 v6; // rsi
  unsigned int v7; // edi
  unsigned int v8; // ecx
  char *v9; // rdx
  signed __int64 v10; // r8
  unsigned int v11; // eax
  __int64 v12; // r9
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v15; // [rsp+28h] [rbp-10h]

  if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 59LL, &WPP_6a2f5d392ebc3a7b5b56686ced9a2fbc_Traceguids, this);
  }
  v15 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 216);
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v6 = *((_QWORD *)this + 24);
  if ( !v6 || !*((_DWORD *)this + 46) )
  {
    v7 = -2004287487;
    goto LABEL_22;
  }
  if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      36LL,
      &WPP_c45047042f6d344739c91af1a021533b_Traceguids,
      *((_QWORD *)this + 24));
  }
  if ( a2 != *(_DWORD *)(v6 + 88) )
  {
    v7 = -2147024809;
    AudSrvTraceLoggingErrorHelper("CAudioStream::GetAllStreamVolumes", 0x571u, -2147024809);
LABEL_22:
    AudSrvTraceLoggingErrorHelper("CVADServer::GetAllVolumes", 0x9A4u, v7);
    goto LABEL_17;
  }
  v7 = 0;
  v8 = 0;
  if ( a2 >= 2 )
  {
    v9 = *(char **)(v6 + 112);
    v10 = (char *)a3 - v9;
    v11 = ((a2 - 2) >> 1) + 1;
    v12 = v11;
    v8 = 2 * v11;
    do
    {
      *(_DWORD *)&v9[v10] = *(_DWORD *)v9;
      *(_DWORD *)&v9[v10 + 4] = *((_DWORD *)v9 + 1);
      v9 += 8;
      --v12;
    }
    while ( v12 );
  }
  if ( v8 < a2 )
    a3[v8] = *(float *)(*(_QWORD *)(v6 + 112) + 4LL * v8);
LABEL_17:
  if ( v15 )
    LeaveCriticalSection(lpCriticalSection);
  return v7;
}
