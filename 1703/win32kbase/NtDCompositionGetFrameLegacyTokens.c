/*
 * XREFs of NtDCompositionGetFrameLegacyTokens @ 0x1C0013A50
 * Callers:
 *     <none>
 * Callees:
 *     ?GetNextTokenBlock@CLegacyTokenBuffer@@QEBA_NPEAPEBEPEAI1@Z @ 0x1C0012E5C (-GetNextTokenBlock@CLegacyTokenBuffer@@QEBA_NPEAPEBEPEAI1@Z.c)
 *     ?Discard@CCompositionFrame@DirectComposition@@QEAAXXZ @ 0x1C00136E4 (-Discard@CCompositionFrame@DirectComposition@@QEAAXXZ.c)
 *     ?GetMappedSectionPointer@CTokenManager@@SAJPEAPEAXPEA_K@Z @ 0x1C0013D04 (-GetMappedSectionPointer@CTokenManager@@SAJPEAPEAXPEA_K@Z.c)
 *     ?GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ @ 0x1C0013D40 (-GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ.c)
 *     ??_GCConnection@DirectComposition@@AEAAPEAXI@Z @ 0x1C00146EC (--_GCConnection@DirectComposition@@AEAAPEAXI@Z.c)
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 *     memmove @ 0x1C00A21C0 (memmove.c)
 */

__int64 __fastcall NtDCompositionGetFrameLegacyTokens(__int64 *a1, _DWORD *a2, _DWORD *a3)
{
  _DWORD *v3; // r13
  __int64 v5; // rbx
  struct DirectComposition::CConnection *DefaultConnection; // rax
  DirectComposition::CConnection *v7; // r14
  volatile signed __int32 *v8; // rsi
  char *v9; // r15
  volatile signed __int32 *i; // rcx
  int v11; // ebx
  unsigned __int8 *v12; // rdx
  unsigned __int64 v13; // r15
  char *v14; // r13
  unsigned int v15; // eax
  int v16; // ecx
  __int64 v18; // rbx
  DirectComposition::CCompositionFrame *v19; // rbx
  signed int MappedSectionPointer; // [rsp+20h] [rbp-78h]
  int v21; // [rsp+24h] [rbp-74h]
  unsigned int v22; // [rsp+28h] [rbp-70h] BYREF
  int v23; // [rsp+2Ch] [rbp-6Ch]
  __int64 v24; // [rsp+30h] [rbp-68h]
  unsigned __int8 *v25; // [rsp+38h] [rbp-60h] BYREF
  unsigned __int64 v26; // [rsp+40h] [rbp-58h] BYREF
  void *v27; // [rsp+48h] [rbp-50h] BYREF
  DirectComposition::CCompositionFrame *v28; // [rsp+50h] [rbp-48h]
  int v29; // [rsp+A0h] [rbp+8h]
  unsigned int v31; // [rsp+B8h] [rbp+20h] BYREF

  v3 = a3;
  v29 = 0;
  v23 = 0;
  v5 = 0LL;
  v24 = 0LL;
  if ( a1 )
  {
    if ( a1 + 1 < a1 || (unsigned __int64)(a1 + 1) > MmUserProbeAddress )
      a1 = (__int64 *)MmUserProbeAddress;
    v5 = *a1;
    v24 = v5;
    MappedSectionPointer = v5 == 0 ? 0xC000000D : 0;
  }
  else
  {
    MappedSectionPointer = -1073741811;
  }
  if ( MappedSectionPointer >= 0 )
  {
    if ( (PVOID)PsGetCurrentProcess() == g_pepDwm )
    {
      KeEnterCriticalRegion();
      DefaultConnection = DirectComposition::CConnection::GetDefaultConnection();
      v7 = DefaultConnection;
      if ( DefaultConnection )
      {
        v8 = 0LL;
        v28 = 0LL;
        v9 = (char *)DefaultConnection + 200;
        ExAcquirePushLockSharedEx((char *)DefaultConnection + 200, 0LL);
        v9[8] = 0;
        for ( i = (volatile signed __int32 *)*((_QWORD *)v7 + 24);
              i != (volatile signed __int32 *)((char *)v7 + 184);
              i = (volatile signed __int32 *)*((_QWORD *)i + 1) )
        {
          if ( *((_QWORD *)i + 8) == v5 )
          {
            _InterlockedIncrement(i - 2);
            v8 = i - 2;
            v28 = (DirectComposition::CCompositionFrame *)(i - 2);
            v11 = 0;
            goto LABEL_13;
          }
        }
        v11 = -1073741275;
LABEL_13:
        if ( v9[8] )
          ExReleasePushLockExclusiveEx(v9, 0LL);
        else
          ExReleasePushLockSharedEx(v9, 0LL);
        MappedSectionPointer = v11;
        if ( v11 >= 0 )
        {
          MappedSectionPointer = CTokenManager::GetMappedSectionPointer(&v27, &v26);
          if ( MappedSectionPointer >= 0 )
          {
            v13 = v26;
            v14 = (char *)v27;
            do
            {
              if ( *((_DWORD *)v8 + 26) )
              {
                *((_DWORD *)v8 + 26) = CLegacyTokenBuffer::GetNextTokenBlock(
                                         *((CLegacyTokenBuffer **)v8 + 12),
                                         (const unsigned __int8 **)&v25,
                                         &v31,
                                         &v22) != 0;
                v15 = v31;
                v12 = v25;
              }
              else
              {
                v12 = 0LL;
                v25 = 0LL;
                v15 = 0;
                v31 = 0;
                v22 = 0;
              }
              v16 = *((_DWORD *)v8 + 26);
              v21 = v16;
              v23 = v16;
              if ( v15 )
              {
                v18 = v15;
                memmove(v14, v12, v15);
                v14 += v18;
                v13 -= v18;
                v29 += v22;
                v16 = v21;
              }
            }
            while ( v16 && v13 >= 0x800 );
            v26 = v13;
            v27 = v14;
            v3 = a3;
          }
          if ( _InterlockedExchangeAdd(v8, 0xFFFFFFFF) == 1 )
          {
            v19 = v28;
            if ( v28 )
            {
              if ( *((_DWORD *)v28 + 20) != 3 )
                DirectComposition::CCompositionFrame::Discard(v28);
              Win32FreePool(v19);
            }
          }
        }
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)v7, 0xFFFFFFFF) == 1 )
          DirectComposition::CConnection::`scalar deleting destructor'(v7, (unsigned int)v12);
      }
      else
      {
        MappedSectionPointer = -1073741790;
      }
      KeLeaveCriticalRegion();
    }
    else
    {
      MappedSectionPointer = -1073741790;
    }
  }
  if ( a2 + 1 < a2 || (unsigned __int64)(a2 + 1) > MmUserProbeAddress )
    *(_BYTE *)MmUserProbeAddress = 0;
  *a2 = v29;
  if ( v3 + 1 < v3 || (unsigned __int64)(v3 + 1) > MmUserProbeAddress )
    *(_BYTE *)MmUserProbeAddress = 0;
  *v3 = v23;
  return (unsigned int)MappedSectionPointer;
}
