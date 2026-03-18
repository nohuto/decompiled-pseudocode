/*
 * XREFs of ?GetSwapChainSize@CSurfaceBrush@@AEBAJ_NPEAUD2D_SIZE_F@@PEAUD2D_RECT_F@@PEAUD2D_MATRIX_3X2_F@@@Z @ 0x1800C54F4
 * Callers:
 *     ?ComputeLayout@CSurfaceBrush@@QEBAJAEBUD2D_SIZE_F@@PEBUD2D_MATRIX_3X2_F@@_NPEAULayoutData@1@PEAPEAVCShape@@@Z @ 0x1800C4D38 (-ComputeLayout@CSurfaceBrush@@QEBAJAEBUD2D_SIZE_F@@PEBUD2D_MATRIX_3X2_F@@_NPEAULayoutData@1@PEAP.c)
 * Callees:
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x180059FB0 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18007950C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSurfaceBrush::GetSwapChainSize(
        CSurfaceBrush *this,
        char a2,
        struct D2D_SIZE_F *a3,
        struct D2D_RECT_F *a4,
        struct D2D_MATRIX_3X2_F *a5)
{
  __int64 v5; // rcx
  signed int v9; // eax
  unsigned int v10; // ebx
  __int128 *v11; // rdx
  char v12; // bl
  float v13; // xmm0_4
  __int64 v14; // xmm1_8
  __int64 v15; // rcx
  __int64 v17; // [rsp+40h] [rbp-71h] BYREF
  __int64 v18; // [rsp+48h] [rbp-69h] BYREF
  _QWORD v19[8]; // [rsp+50h] [rbp-61h] BYREF
  int v20; // [rsp+90h] [rbp-21h]
  __int128 v21; // [rsp+A0h] [rbp-11h] BYREF
  __int64 v22; // [rsp+B0h] [rbp-1h]
  struct D2D_RECT_F v23; // [rsp+B8h] [rbp+7h] BYREF
  struct D2D_RECT_F v24; // [rsp+C8h] [rbp+17h] BYREF

  v5 = *((_QWORD *)this + 13);
  v20 = 0;
  v18 = 0LL;
  v17 = 0LL;
  v9 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v5 + 80LL))(v5, &v18);
  v10 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, &dword_1802024F8, 1u, v9, 0x276u);
  }
  else
  {
    if ( a2
      && (**(int (__fastcall ***)(__int64, GUID *, __int64 *))v18)(
           v18,
           &GUID_51e2a1f0_4a0d_4788_800f_3cee7a2512a6,
           &v17) >= 0 )
    {
      v11 = &v21;
      LOBYTE(v11) = 1;
      v12 = (*(__int64 (__fastcall **)(__int64, __int128 *, _QWORD *, struct D2D_RECT_F *, __int128 *, struct D2D_RECT_F *))(*(_QWORD *)v17 + 24LL))(
              v17,
              v11,
              v19,
              &v23,
              &v21,
              &v24);
    }
    else
    {
      v12 = (*(__int64 (__fastcall **)(__int64, _QWORD *, struct D2D_RECT_F *))(*(_QWORD *)v18 + 40LL))(v18, v19, &v23);
      if ( v12 )
        CMILMatrix::Transform2DBoundsHelper<0>((__int64)v19, (__int64)&v23, &v24.left);
      else
        v24 = v23;
    }
    v13 = v24.bottom - v24.top;
    if ( (float)(v24.right - v24.left) == 0.0 || v13 == 0.0 )
    {
      v10 = -2003304441;
      MilInstrumentationCheckHR_MaybeFailFast(20LL, &dword_1802024F8, 1u, 0x88980007, 0x29Eu);
    }
    else
    {
      a3->width = v24.right - v24.left;
      a3->height = v13;
      if ( a4 )
      {
        v21 = (__int128)v23;
        *a4 = v23;
      }
      if ( a5 )
      {
        if ( v12 )
        {
          *(_QWORD *)&v21 = v19[0];
          *((_QWORD *)&v21 + 1) = v19[2];
          v22 = v19[6];
        }
        else
        {
          v22 = 0LL;
          v21 = _xmm;
        }
        v14 = v22;
        *(_OWORD *)&a5->m11 = v21;
        *(_QWORD *)&a5->m[2][0] = v14;
      }
      v10 = 0;
    }
  }
  v15 = v17;
  if ( v17 )
  {
    v17 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v18);
  return v10;
}
