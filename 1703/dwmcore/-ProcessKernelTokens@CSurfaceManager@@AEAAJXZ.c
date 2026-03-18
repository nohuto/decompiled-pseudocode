/*
 * XREFs of ?ProcessKernelTokens@CSurfaceManager@@AEAAJXZ @ 0x1800B5FAC
 * Callers:
 *     ?s_TokenThreadMain@CSurfaceManager@@CAKPEAX@Z @ 0x1800CC250 (-s_TokenThreadMain@CSurfaceManager@@CAKPEAX@Z.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18004F8CC (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?ReleaseAdapterInfo@CSurfaceManager@@AEAAXXZ @ 0x1800B60E8 (-ReleaseAdapterInfo@CSurfaceManager@@AEAAXXZ.c)
 *     ?EnsureAdapterInfo@CSurfaceManager@@AEAAJXZ @ 0x1800B6178 (-EnsureAdapterInfo@CSurfaceManager@@AEAAJXZ.c)
 *     ?Clone@CMmcssTask@@QEBAJPEAV1@@Z @ 0x1800B6654 (-Clone@CMmcssTask@@QEBAJPEAV1@@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 */

__int64 __fastcall CSurfaceManager::ProcessKernelTokens(HANDLE *this)
{
  unsigned int v1; // edi
  int v3; // eax
  __int64 v4; // rdx
  char *v5; // r8
  unsigned __int64 v6; // rax
  __int64 v7; // r9
  __int64 v8; // r8
  int v9; // ecx
  int v10; // eax
  void *v11; // rsi
  HANDLE v13; // [rsp+38h] [rbp-79h] BYREF
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
      ResetEvent(this[52]);
      if ( *((_BYTE *)this + 424) )
        break;
      CMmcssTask::Clone((CMmcssTask *)((char *)this[50] + 160), (struct CMmcssTask *)(this + 54));
      v3 = CSurfaceManager::EnsureAdapterInfo((CSurfaceManager *)this);
      v1 = v3;
      if ( v3 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0x20Eu);
      }
      else
      {
        v13 = this[52];
        v6 = *((unsigned int *)this + 134);
        LODWORD(v15) = v6;
        if ( (unsigned int)v6 > 5 )
        {
          v11 = operator new(saturated_mul(v6, 0x20uLL));
          if ( !v11 )
          {
            v1 = -2147024882;
            MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x21Cu);
            break;
          }
          if ( lpMem != v16 )
            WPF::ProcessHeapImpl::Free(lpMem);
          LODWORD(v6) = v15;
          lpMem = v11;
        }
        v7 = 0LL;
        if ( (_DWORD)v6 )
        {
          do
          {
            v4 = 5 * v7;
            v8 = (unsigned int)v7;
            v7 = (unsigned int)(v7 + 1);
            v5 = (char *)lpMem + 32 * v8;
            *(_QWORD *)v5 = *((_QWORD *)this[64] + v4);
            *((_DWORD *)v5 + 2) = *((_DWORD *)this[64] + 2 * v4 + 4);
            *((_DWORD *)v5 + 3) = *((_DWORD *)this[64] + 2 * v4 + 6);
            v9 = *((_DWORD *)this[64] + 2 * v4 + 8);
            *((_QWORD *)v5 + 3) = 0LL;
            *((_DWORD *)v5 + 4) = v9;
          }
          while ( (unsigned int)v7 < (unsigned int)v15 );
        }
        v10 = NtTokenManagerThread(&v13, v4, v5, v7);
        if ( v10 < 0 )
        {
          v1 = v10 | 0x10000000;
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v10 | 0x10000000, 0x239u);
        }
        CSurfaceManager::ReleaseAdapterInfo((CSurfaceManager *)this);
      }
    }
    while ( !*((_BYTE *)this + 424) );
    if ( lpMem != v16 )
      WPF::ProcessHeapImpl::Free(lpMem);
  }
  return v1;
}
