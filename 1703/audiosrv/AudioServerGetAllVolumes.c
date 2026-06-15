/*
 * XREFs of AudioServerGetAllVolumes @ 0x18002CEA0
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001A360 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x180048BE0 (__security_check_cookie.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004B5C4 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     WPP_SF_q @ 0x18004B768 (WPP_SF_q.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall AudioServerGetAllVolumes(GUID *a1, unsigned int a2, float *a3)
{
  GUID v6; // xmm0
  __int64 (__fastcall *v7)(CVADServer *, unsigned int, float *); // rax
  __int64 v8; // rsi
  int v9; // ebx
  unsigned int v10; // ecx
  char *v11; // rdx
  signed __int64 v12; // r8
  unsigned int v13; // eax
  __int64 v14; // r9
  LPCRITICAL_SECTION lpCriticalSection[2]; // [rsp+20h] [rbp-68h] BYREF
  GUID v17; // [rsp+30h] [rbp-58h]
  GUID v18; // [rsp+40h] [rbp-48h] BYREF

  if ( a1 )
    v6 = a1[17];
  else
    v6 = GUID_00000000_0000_0000_0000_000000000000;
  *(GUID *)lpCriticalSection = v6;
  v17 = v6;
  v18 = v6;
  EtwEventActivityIdControl(4LL, &v18);
  v7 = *(__int64 (__fastcall **)(CVADServer *, unsigned int, float *))(*(_QWORD *)&a1->Data1 + 168LL);
  if ( v7 != CVADServer::GetAllVolumes )
  {
    v9 = v7((CVADServer *)a1, a2, a3);
    goto LABEL_22;
  }
  if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 59LL, &WPP_6a2f5d392ebc3a7b5b56686ced9a2fbc_Traceguids, a1);
  }
  LOBYTE(lpCriticalSection[1]) = 0;
  lpCriticalSection[0] = (LPCRITICAL_SECTION)a1[13].Data4;
  ATL::CCritSecLock::Lock(lpCriticalSection);
  v8 = *(_QWORD *)&a1[12].Data1;
  if ( v8 && *(_DWORD *)a1[11].Data4 )
  {
    if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        36LL,
        &WPP_c45047042f6d344739c91af1a021533b_Traceguids,
        *(_QWORD *)&a1[12].Data1);
    }
    if ( a2 == *(_DWORD *)(v8 + 88) )
    {
      v9 = 0;
      v10 = 0;
      if ( a2 >= 2 )
      {
        v11 = *(char **)(v8 + 112);
        v12 = (char *)a3 - v11;
        v13 = ((a2 - 2) >> 1) + 1;
        v14 = v13;
        v10 = 2 * v13;
        do
        {
          *(_DWORD *)&v11[v12] = *(_DWORD *)v11;
          *(_DWORD *)&v11[v12 + 4] = *((_DWORD *)v11 + 1);
          v11 += 8;
          --v14;
        }
        while ( v14 );
      }
      if ( v10 < a2 )
        a3[v10] = *(float *)(*(_QWORD *)(v8 + 112) + 4LL * v10);
      goto LABEL_20;
    }
    v9 = -2147024809;
    AudSrvTraceLoggingErrorHelper("CAudioStream::GetAllStreamVolumes", 0x571u, -2147024809);
  }
  else
  {
    v9 = -2004287487;
  }
  AudSrvTraceLoggingErrorHelper("CVADServer::GetAllVolumes", 0x9A4u, v9);
LABEL_20:
  if ( LOBYTE(lpCriticalSection[1]) )
    LeaveCriticalSection(lpCriticalSection[0]);
LABEL_22:
  if ( v9 < 0 )
    AudSrvTraceLoggingErrorHelper("AudioServerGetAllVolumes", 0xD31u, v9);
  EtwEventActivityIdControl(4LL, &v18);
  return (unsigned int)v9;
}
