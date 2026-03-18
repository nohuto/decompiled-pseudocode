/*
 * XREFs of ?GetPresentStatistics@CRenderTargetManager@@QEAAJPEAIPEA_NPEAUDXGI_FRAME_STATISTICS_DWM@@PEAU_UNSIGNED_RATIO@@@Z @ 0x18005F7D8
 * Callers:
 *     ?UpdateTimes@CPartitionVerticalBlankScheduler@@EEAAJXZ @ 0x18005B3B0 (-UpdateTimes@CPartitionVerticalBlankScheduler@@EEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetPrimaryRenderTargetNoRef@CRenderTargetManager@@AEBAPEAVCRenderTarget@@XZ @ 0x18005F088 (-GetPrimaryRenderTargetNoRef@CRenderTargetManager@@AEBAPEAVCRenderTarget@@XZ.c)
 *     ?IsOfType@CHwndRenderTarget@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18005FB40 (-IsOfType@CHwndRenderTarget@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?GetPresentStatistics@CHwndRenderTarget@@UEAAJPEAUDXGI_FRAME_STATISTICS_DWM@@PEAU_UNSIGNED_RATIO@@@Z @ 0x1800609D0 (-GetPresentStatistics@CHwndRenderTarget@@UEAAJPEAUDXGI_FRAME_STATISTICS_DWM@@PEAU_UNSIGNED_RATIO.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CRenderTargetManager::GetPresentStatistics(
        CRenderTargetManager *this,
        unsigned int *a2,
        bool *a3,
        struct DXGI_FRAME_STATISTICS_DWM *a4,
        struct _UNSIGNED_RATIO *a5)
{
  int v5; // ebx
  __int64 v6; // rdi
  __int64 v7; // r14
  struct DXGI_FRAME_STATISTICS_DWM *v8; // rsi
  _QWORD *v12; // rsi
  __int64 (__fastcall *v13)(_QWORD *, __int64); // rax
  char v14; // al
  bool v15; // bp
  __int64 v16; // rax
  CHwndRenderTarget *v17; // rcx
  struct DXGI_FRAME_STATISTICS_DWM *v18; // rdx
  struct _UNSIGNED_RATIO *v19; // r8
  __int64 (__fastcall *v20)(CHwndRenderTarget *__hidden, struct DXGI_FRAME_STATISTICS_DWM *, struct _UNSIGNED_RATIO *); // rax
  int PresentStatistics; // eax
  int v22; // esi
  __int64 result; // rax
  struct CRenderTarget *PrimaryRenderTargetNoRef; // rax
  int v25; // eax
  int v26; // edi

  v5 = 0;
  v6 = 0LL;
  v7 = 0LL;
  *a3 = 0;
  v8 = a4;
  if ( !*((_DWORD *)this + 12) )
  {
LABEL_24:
    if ( *a2 )
    {
      PrimaryRenderTargetNoRef = CRenderTargetManager::GetPrimaryRenderTargetNoRef(this);
      if ( PrimaryRenderTargetNoRef )
      {
        v25 = (*(__int64 (__fastcall **)(__int64, struct DXGI_FRAME_STATISTICS_DWM *, struct _UNSIGNED_RATIO *))(*((_QWORD *)PrimaryRenderTargetNoRef + 8) + 112LL))(
                (__int64)PrimaryRenderTargetNoRef + 64,
                v8,
                a5);
        v26 = v25;
        if ( v25 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1802767B0, 2u, v25, 0x40Cu);
        if ( !v5 || v5 >= 0 && v26 < 0 )
          v5 = v26;
        LODWORD(v6) = 1;
      }
    }
    goto LABEL_22;
  }
  do
  {
    if ( (unsigned int)v6 >= *a2 )
      break;
    v12 = *(_QWORD **)(*((_QWORD *)this + 3) + 8 * v7);
    v13 = *(__int64 (__fastcall **)(_QWORD *, __int64))(*v12 + 48LL);
    if ( (char *)v13 == (char *)CHwndRenderTarget::IsOfType )
      v14 = CHwndRenderTarget::IsOfType(v12, 76LL);
    else
      v14 = v13(v12, 76LL);
    if ( v14 && !(*(unsigned __int8 (__fastcall **)(_QWORD *))(*v12 + 216LL))(v12) )
    {
      v15 = 0;
      if ( !(*(unsigned __int8 (__fastcall **)(_QWORD *))(*v12 + 216LL))(v12) )
      {
        v16 = v12[21];
        v15 = *(_BYTE *)(v16 + 324) && *(_BYTE *)(v16 + 325);
      }
      v17 = (CHwndRenderTarget *)(v12 + 8);
      v18 = (struct DXGI_FRAME_STATISTICS_DWM *)((char *)a4 + 32 * (unsigned int)v6);
      v19 = &a5[v6];
      v20 = *(__int64 (__fastcall **)(CHwndRenderTarget *__hidden, struct DXGI_FRAME_STATISTICS_DWM *, struct _UNSIGNED_RATIO *))(v12[8] + 112LL);
      if ( v20 == CHwndRenderTarget::GetPresentStatistics )
        PresentStatistics = CHwndRenderTarget::GetPresentStatistics(v17, v18, v19);
      else
        PresentStatistics = v20(v17, v18, v19);
      v22 = PresentStatistics;
      if ( v15 )
        *a3 = PresentStatistics == 142213121;
      if ( PresentStatistics < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1802767B0, 2u, PresentStatistics, 0x3FFu);
      if ( !v5 || v5 >= 0 && v22 < 0 )
        v5 = v22;
      v6 = (unsigned int)(v6 + 1);
    }
    v7 = (unsigned int)(v7 + 1);
  }
  while ( (unsigned int)v7 < *((_DWORD *)this + 12) );
  if ( !(_DWORD)v6 )
  {
    v8 = a4;
    goto LABEL_24;
  }
LABEL_22:
  result = (unsigned int)v5;
  *a2 = v6;
  return result;
}
