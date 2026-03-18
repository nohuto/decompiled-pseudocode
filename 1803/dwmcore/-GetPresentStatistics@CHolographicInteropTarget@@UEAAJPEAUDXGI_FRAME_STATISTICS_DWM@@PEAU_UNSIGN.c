/*
 * XREFs of ?GetPresentStatistics@CHolographicInteropTarget@@UEAAJPEAUDXGI_FRAME_STATISTICS_DWM@@PEAU_UNSIGNED_RATIO@@@Z @ 0x1801FDB50
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHolographicInteropTarget::GetPresentStatistics(
        CHolographicInteropTarget *this,
        struct DXGI_FRAME_STATISTICS_DWM *a2,
        struct _UNSIGNED_RATIO *a3)
{
  __int64 v3; // rax
  __int64 v5; // rax
  int v6; // ebx
  __int64 v7; // rcx
  UINT32 v9; // [rsp+40h] [rbp+8h] BYREF
  UINT32 v10; // [rsp+44h] [rbp+Ch]

  v3 = *((_QWORD *)this + 13);
  if ( v3 )
  {
    v5 = *(_QWORD *)(v3 + 32);
    v6 = -2147467259;
    if ( v5 )
    {
      v7 = *(_QWORD *)(v5 + 32);
      if ( v7 )
      {
        v6 = (*(__int64 (__fastcall **)(__int64, struct DXGI_FRAME_STATISTICS_DWM *, UINT32 *))(*(_QWORD *)v7 + 24LL))(
               v7,
               a2,
               &v9);
        a3->uiNumerator = v9;
        a3->uiDenominator = v10;
      }
    }
    if ( v6 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1802ACFB0, 1u, v6, 0x117u);
  }
  else
  {
    v6 = -2003304307;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1802ACFB0, 1u, -2003304307, 0x11Bu);
  }
  return (unsigned int)v6;
}
