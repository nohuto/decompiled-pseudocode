/*
 * XREFs of ?ProcessKernelTokens@CSurfaceManager@@AEAAJXZ @ 0x18001FCFC
 * Callers:
 *     ?s_TokenThreadMain@CSurfaceManager@@CAKPEAX@Z @ 0x1800CA200 (-s_TokenThreadMain@CSurfaceManager@@CAKPEAX@Z.c)
 * Callees:
 *     ?Clone@CMmcssTask@@QEBAJPEAV1@@Z @ 0x18001E854 (-Clone@CMmcssTask@@QEBAJPEAV1@@Z.c)
 *     ?ReleaseAdapterInfo@CSurfaceManager@@AEAAXXZ @ 0x18001FE1C (-ReleaseAdapterInfo@CSurfaceManager@@AEAAXXZ.c)
 *     ?EnsureAdapterInfo@CSurfaceManager@@AEAAJXZ @ 0x18001FE80 (-EnsureAdapterInfo@CSurfaceManager@@AEAAJXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x180025210 (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 */

__int64 __fastcall CSurfaceManager::ProcessKernelTokens(CSurfaceManager *this)
{
  unsigned int v1; // edi
  int v3; // eax
  unsigned __int64 v4; // rax
  __int64 v5; // r10
  __int64 v6; // r9
  _QWORD *v7; // rdx
  __int64 v8; // r8
  __int64 v9; // rcx
  int v10; // eax
  void *v11; // rsi
  __int64 v13; // [rsp+38h] [rbp-59h] BYREF
  void *lpMem; // [rsp+40h] [rbp-51h]
  __int64 v15; // [rsp+48h] [rbp-49h]
  _BYTE v16[128]; // [rsp+58h] [rbp-39h] BYREF

  v1 = 0;
  v13 = 0LL;
  v15 = 0LL;
  lpMem = v16;
  if ( !*((_BYTE *)this + 352) )
  {
    do
    {
      ResetEvent(*((HANDLE *)this + 43));
      if ( *((_BYTE *)this + 352) )
        break;
      CMmcssTask::Clone(
        (const struct DWM_MMTASK **)(*((_QWORD *)this + 41) + 160LL),
        (const struct DWM_MMTASK **)this + 45);
      v3 = CSurfaceManager::EnsureAdapterInfo(this);
      v1 = v3;
      if ( v3 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0x20Du);
      }
      else
      {
        v13 = *((_QWORD *)this + 43);
        v4 = *((unsigned int *)this + 116);
        LODWORD(v15) = v4;
        if ( (unsigned int)v4 > 5 )
        {
          v11 = operator new(saturated_mul(v4, 0x18uLL));
          if ( !v11 )
          {
            v1 = -2147024882;
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x21Bu);
            break;
          }
          if ( lpMem != v16 )
            operator delete(lpMem);
          LODWORD(v4) = v15;
          lpMem = v11;
        }
        v5 = 0LL;
        if ( (_DWORD)v4 )
        {
          do
          {
            v6 = 3 * v5;
            v7 = lpMem;
            v8 = (unsigned int)v5;
            v5 = (unsigned int)(v5 + 1);
            v8 *= 2LL;
            *((_QWORD *)lpMem + v6) = *(_QWORD *)(*((_QWORD *)this + 55) + 8 * v8);
            v9 = *(_QWORD *)(*((_QWORD *)this + 55) + 8 * v8 + 8);
            v7[v6 + 2] = 0LL;
            v7[v6 + 1] = v9;
          }
          while ( (unsigned int)v5 < (unsigned int)v15 );
        }
        v10 = NtTokenManagerThread(&v13);
        if ( v10 < 0 )
        {
          v1 = v10 | 0x10000000;
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10 | 0x10000000, 0x236u);
        }
        CSurfaceManager::ReleaseAdapterInfo(this);
      }
    }
    while ( !*((_BYTE *)this + 352) );
    if ( lpMem != v16 )
      operator delete(lpMem);
  }
  return v1;
}
