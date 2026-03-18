/*
 * XREFs of NtDCompositionGetFrameLegacyTokens @ 0x1C0036B40
 * Callers:
 *     <none>
 * Callees:
 *     ??_GCConnection@DirectComposition@@AEAAPEAXI@Z @ 0x1C0034998 (--_GCConnection@DirectComposition@@AEAAPEAXI@Z.c)
 *     ?Discard@CCompositionFrame@DirectComposition@@QEAAXXZ @ 0x1C0035174 (-Discard@CCompositionFrame@DirectComposition@@QEAAXXZ.c)
 *     ?GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ @ 0x1C0036E40 (-GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ.c)
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 *     memmove @ 0x1C00AB840 (memmove.c)
 */

__int64 __fastcall NtDCompositionGetFrameLegacyTokens(__int64 *a1, _DWORD *a2, _DWORD *a3)
{
  __int64 v4; // rbx
  struct DirectComposition::CConnection *DefaultConnection; // rax
  DirectComposition::CConnection *v6; // r14
  volatile signed __int32 *v7; // rsi
  int v8; // r12d
  char *v9; // r15
  volatile signed __int32 *i; // rcx
  const void *v11; // rdx
  __int64 v12; // r8
  char *v13; // r12
  unsigned __int64 v14; // r15
  int v15; // eax
  unsigned int v16; // ecx
  int v17; // eax
  __int64 v19; // r9
  unsigned __int8 v20; // r10
  __int64 *v21; // rax
  __int64 v22; // rbx
  signed int v23; // [rsp+20h] [rbp-78h]
  int v24; // [rsp+24h] [rbp-74h]
  int v25; // [rsp+28h] [rbp-70h]
  DirectComposition::CCompositionFrame *v26; // [rsp+48h] [rbp-50h]
  int v27; // [rsp+A0h] [rbp+8h]
  int v29; // [rsp+B8h] [rbp+20h]

  v27 = 0;
  v24 = 0;
  v4 = 0LL;
  if ( a1 )
  {
    if ( a1 + 1 < a1 || (unsigned __int64)(a1 + 1) > MmUserProbeAddress )
      a1 = (__int64 *)MmUserProbeAddress;
    v4 = *a1;
    v23 = *a1 == 0 ? 0xC000000D : 0;
  }
  else
  {
    v23 = -1073741811;
  }
  if ( v23 >= 0 )
  {
    if ( (PVOID)PsGetCurrentProcess() == g_pepDwm )
    {
      KeEnterCriticalRegion();
      DefaultConnection = DirectComposition::CConnection::GetDefaultConnection();
      v6 = DefaultConnection;
      if ( DefaultConnection )
      {
        v7 = 0LL;
        v8 = -1073741275;
        v26 = 0LL;
        v9 = (char *)DefaultConnection + 200;
        ExAcquirePushLockSharedEx((char *)DefaultConnection + 200, 0LL);
        v9[8] = 0;
        for ( i = (volatile signed __int32 *)*((_QWORD *)v6 + 24);
              i != (volatile signed __int32 *)((char *)v6 + 184);
              i = (volatile signed __int32 *)*((_QWORD *)i + 1) )
        {
          if ( *((_QWORD *)i + 8) == v4 )
          {
            _InterlockedIncrement(i - 2);
            v7 = i - 2;
            v26 = (DirectComposition::CCompositionFrame *)(i - 2);
            v8 = 0;
            break;
          }
        }
        if ( v9[8] )
          ExReleasePushLockExclusiveEx(v9, 0LL);
        else
          ExReleasePushLockSharedEx(v9, 0LL);
        v23 = v8;
        if ( v8 >= 0 )
        {
          v13 = 0LL;
          v14 = 0LL;
          if ( g_pTokenManager && *((_QWORD *)g_pTokenManager + 3) )
          {
            v13 = (char *)*((_QWORD *)g_pTokenManager + 3);
            v14 = *((_QWORD *)g_pTokenManager + 4);
            v15 = 0;
          }
          else
          {
            v15 = -1073741823;
          }
          v23 = v15;
          if ( v15 >= 0 )
          {
            do
            {
              if ( *((_DWORD *)v7 + 26) )
              {
                v19 = *((_QWORD *)v7 + 12);
                v20 = 0;
                v21 = *(__int64 **)(v19 + 2088);
                v11 = (char *)v21 + 20;
                v16 = *((_DWORD *)v21 + 517);
                v29 = *((_DWORD *)v21 + 4);
                v12 = *v21;
                if ( *v21 != v19 + 16 )
                {
                  *(_QWORD *)(v19 + 2088) = v12;
                  v20 = 1;
                }
                *((_DWORD *)v7 + 26) = v20;
              }
              else
              {
                v11 = 0LL;
                v16 = 0;
                v29 = 0;
              }
              v17 = *((_DWORD *)v7 + 26);
              v25 = v17;
              v24 = v17;
              if ( v16 )
              {
                v22 = v16;
                memmove(v13, v11, v16);
                v13 += v22;
                v14 -= v22;
                v27 += v29;
                v17 = v25;
              }
            }
            while ( v17 && v14 >= 0x800 );
          }
          if ( _InterlockedExchangeAdd(v7, 0xFFFFFFFF) == 1 && v26 )
          {
            if ( *((_DWORD *)v26 + 20) != 3 )
              DirectComposition::CCompositionFrame::Discard(v26, (unsigned int)v11);
            Win32FreePool(v26, v11, v12);
          }
        }
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)v6, 0xFFFFFFFF) == 1 )
          DirectComposition::CConnection::`scalar deleting destructor'(v6);
      }
      else
      {
        v23 = -1073741790;
      }
      KeLeaveCriticalRegion();
    }
    else
    {
      v23 = -1073741790;
    }
  }
  if ( a2 + 1 < a2 || (unsigned __int64)(a2 + 1) > MmUserProbeAddress )
    *(_BYTE *)MmUserProbeAddress = 0;
  *a2 = v27;
  if ( a3 + 1 < a3 || (unsigned __int64)(a3 + 1) > MmUserProbeAddress )
    *(_BYTE *)MmUserProbeAddress = 0;
  *a3 = v24;
  return (unsigned int)v23;
}
