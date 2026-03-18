/*
 * XREFs of ?ProcessKernelTokens@CSurfaceManager@@AEAAJXZ @ 0x180119BD4
 * Callers:
 *     ?s_TokenThreadMain@CSurfaceManager@@CAKPEAX@Z @ 0x180131850 (-s_TokenThreadMain@CSurfaceManager@@CAKPEAX@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18000A3E8 (--2@YAPEAX_K@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?Clone@CMmcssTask@@QEBAJPEAV1@@Z @ 0x180075B38 (-Clone@CMmcssTask@@QEBAJPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?ReleaseAdapterInfo@CSurfaceManager@@AEAAXXZ @ 0x180076A68 (-ReleaseAdapterInfo@CSurfaceManager@@AEAAXXZ.c)
 *     ?EnsureAdapterInfo@CSurfaceManager@@AEAAJXZ @ 0x180076AF8 (-EnsureAdapterInfo@CSurfaceManager@@AEAAJXZ.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 */

__int64 __fastcall CSurfaceManager::ProcessKernelTokens(CSurfaceManager *this)
{
  unsigned int v1; // edi
  signed int v3; // eax
  __int64 v4; // rdx
  char *v5; // r8
  unsigned int v6; // eax
  void *v7; // rsi
  __int64 v8; // r9
  __int64 v9; // r8
  int v10; // ecx
  int v11; // eax
  __int64 v13; // [rsp+38h] [rbp-79h] BYREF
  void *lpMem; // [rsp+40h] [rbp-71h]
  __int64 v15; // [rsp+48h] [rbp-69h]
  _BYTE v16[160]; // [rsp+58h] [rbp-59h] BYREF

  v1 = 0;
  v13 = 0LL;
  v15 = 0LL;
  lpMem = v16;
  if ( !*((_BYTE *)this + 424) )
  {
    do
    {
      ResetEvent(*((HANDLE *)this + 52));
      if ( *((_BYTE *)this + 424) )
        break;
      CMmcssTask::Clone((CMmcssTask *)(*((_QWORD *)this + 50) + 136LL), (const struct DWM_MMTASK **)this + 54);
      v3 = CSurfaceManager::EnsureAdapterInfo(this);
      v1 = v3;
      if ( v3 >= 0 )
      {
        v13 = *((_QWORD *)this + 52);
        v6 = *((_DWORD *)this + 134);
        LODWORD(v15) = v6;
        if ( v6 > 5 )
        {
          v7 = operator new(saturated_mul(v6, 0x20uLL));
          if ( !v7 )
          {
            v1 = -2147024882;
            MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x8007000E, 0x225u);
            break;
          }
          if ( lpMem != v16 )
            WPF::ProcessHeapImpl::Free(lpMem);
          v6 = v15;
          lpMem = v7;
        }
        v8 = 0LL;
        if ( v6 )
        {
          do
          {
            v4 = 5 * v8;
            v9 = (unsigned int)v8;
            v8 = (unsigned int)(v8 + 1);
            v5 = (char *)lpMem + 32 * v9;
            *(_QWORD *)v5 = *(_QWORD *)(*((_QWORD *)this + 64) + 8 * v4);
            *((_DWORD *)v5 + 2) = *(_DWORD *)(*((_QWORD *)this + 64) + 8 * v4 + 16);
            *((_DWORD *)v5 + 3) = *(_DWORD *)(*((_QWORD *)this + 64) + 8 * v4 + 24);
            v10 = *(_DWORD *)(*((_QWORD *)this + 64) + 8 * v4 + 32);
            *((_QWORD *)v5 + 3) = 0LL;
            *((_DWORD *)v5 + 4) = v10;
          }
          while ( (unsigned int)v8 < (unsigned int)v15 );
        }
        v11 = NtTokenManagerThread(&v13, v4, v5, v8);
        if ( v11 < 0 )
        {
          v1 = v11 | 0x10000000;
          MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v11 | 0x10000000, 0x242u);
        }
        CSurfaceManager::ReleaseAdapterInfo(this);
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v3, 0x217u);
      }
    }
    while ( !*((_BYTE *)this + 424) );
    if ( lpMem != v16 )
      WPF::ProcessHeapImpl::Free(lpMem);
  }
  return v1;
}
