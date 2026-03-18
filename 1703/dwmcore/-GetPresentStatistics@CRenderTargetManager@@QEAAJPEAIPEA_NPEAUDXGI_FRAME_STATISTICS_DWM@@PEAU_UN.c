/*
 * XREFs of ?GetPresentStatistics@CRenderTargetManager@@QEAAJPEAIPEA_NPEAUDXGI_FRAME_STATISTICS_DWM@@PEAU_UNSIGNED_RATIO@@@Z @ 0x1801320FC
 * Callers:
 *     ?GetDesktopPresentStatistics@CComposition@@QEAAJPEAIPEA_NPEAUDXGI_FRAME_STATISTICS_DWM@@PEAU_UNSIGNED_RATIO@@@Z @ 0x180131AF0 (-GetDesktopPresentStatistics@CComposition@@QEAAJPEAIPEA_NPEAUDXGI_FRAME_STATISTICS_DWM@@PEAU_UNS.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CRenderTargetManager::GetPresentStatistics(
        CRenderTargetManager *this,
        unsigned int *a2,
        bool *a3,
        struct DXGI_FRAME_STATISTICS_DWM *a4,
        struct _UNSIGNED_RATIO *a5)
{
  int v5; // esi
  __int64 v6; // rdi
  __int64 v7; // rbp
  struct DXGI_FRAME_STATISTICS_DWM *i; // rbx
  _QWORD *v12; // r14
  int v13; // ebx
  __int64 result; // rax

  v5 = 0;
  v6 = 0LL;
  v7 = 0LL;
  *a3 = 0;
  for ( i = a4; (unsigned int)v7 < *((_DWORD *)this + 12); v7 = (unsigned int)(v7 + 1) )
  {
    if ( (unsigned int)v6 >= *a2 )
      break;
    v12 = *(_QWORD **)(*((_QWORD *)this + 3) + 8 * v7);
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD *, __int64))(*v12 + 48LL))(v12, 38LL)
      && !(*(unsigned __int8 (__fastcall **)(_QWORD *))(*v12 + 176LL))(v12) )
    {
      v13 = (*(__int64 (__fastcall **)(_QWORD *, __int64, struct _UNSIGNED_RATIO *))(v12[8] + 112LL))(
              v12 + 8,
              (__int64)i + 32 * (unsigned int)v6,
              &a5[v6]);
      if ( (*(unsigned __int8 (__fastcall **)(_QWORD *))(*v12 + 208LL))(v12) )
        *a3 = v13 == 142213121;
      if ( v13 < 0 )
        MilInstrumentationCheckHR(0x14u, &dword_1801F3568, 2u, v13, 0x4EFu);
      if ( !v5 || v5 >= 0 && v13 < 0 )
        v5 = v13;
      i = a4;
      v6 = (unsigned int)(v6 + 1);
    }
  }
  result = (unsigned int)v5;
  *a2 = v6;
  return result;
}
