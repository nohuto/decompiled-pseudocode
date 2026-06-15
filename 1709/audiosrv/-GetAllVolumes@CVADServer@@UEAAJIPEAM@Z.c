/*
 * XREFs of ?GetAllVolumes@CVADServer@@UEAAJIPEAM@Z @ 0x180025D40
 * Callers:
 *     AudioServerGetAllVolumes @ 0x180027EE0 (AudioServerGetAllVolumes.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001E280 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18005F740 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     WPP_SF_q @ 0x18007DC24 (WPP_SF_q.c)
 */

__int64 __fastcall CVADServer::GetAllVolumes(CVADServer *this, unsigned int a2, float *a3)
{
  __int64 v4; // rbp
  __int64 v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // rcx
  unsigned int v9; // ebx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v12; // [rsp+28h] [rbp-10h]

  v4 = a2;
  if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 56LL, &WPP_cdc5f6c5d0f339869e28fa9670aa29b0_Traceguids, this);
  }
  v12 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 216);
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v6 = *((_QWORD *)this + 24);
  if ( !v6 || !*((_DWORD *)this + 46) )
  {
    v9 = -2004287487;
    goto LABEL_21;
  }
  if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      35LL,
      &WPP_78805be245a237971eed1a1da5d2d3a4_Traceguids,
      *((_QWORD *)this + 24));
  }
  if ( (_DWORD)v4 != *(_DWORD *)(v6 + 84) )
  {
    v9 = -2147024809;
    AudSrvTraceLoggingErrorHelper("CAudioStream::GetAllStreamVolumes", 0x53Bu, -2147024809);
LABEL_21:
    AudSrvTraceLoggingErrorHelper("CVADServer::GetAllVolumes", 0x96Bu, v9);
    goto LABEL_12;
  }
  if ( (_DWORD)v4 )
  {
    v7 = v4;
    v8 = *(_QWORD *)(v6 + 112) - (_QWORD)a3;
    do
    {
      *a3 = *(float *)((char *)a3 + v8);
      ++a3;
      --v7;
    }
    while ( v7 );
  }
  v9 = 0;
LABEL_12:
  if ( v12 )
    LeaveCriticalSection(lpCriticalSection);
  return v9;
}
