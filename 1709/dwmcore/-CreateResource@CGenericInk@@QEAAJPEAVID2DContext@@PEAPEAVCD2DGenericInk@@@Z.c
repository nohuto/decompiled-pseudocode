/*
 * XREFs of ?CreateResource@CGenericInk@@QEAAJPEAVID2DContext@@PEAPEAVCD2DGenericInk@@@Z @ 0x180166A1C
 * Callers:
 *     ?FindOrCreateResourceNoRef@?$CDeviceResourceTable@VCD2DGenericInk@@VCGenericInk@@VID2DContext@@@@QEAAJPEAVID2DContext@@PEAPEAVCD2DGenericInk@@@Z @ 0x180166BBC (-FindOrCreateResourceNoRef@-$CDeviceResourceTable@VCD2DGenericInk@@VCGenericInk@@VID2DContext@@@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?InternalRelease@?$ComPtr@VCCompositionSurfaceBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x18015A76C (-InternalRelease@-$ComPtr@VCCompositionSurfaceBitmap@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall CGenericInk::CreateResource(CGenericInk *this, struct ID2DContext *a2, struct CD2DGenericInk **a3)
{
  signed int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rsi
  signed int v9; // eax
  unsigned int v10; // eax
  signed int v11; // eax
  struct CD2DGenericInk *v12; // rax
  CMILCOMBase *v14; // [rsp+58h] [rbp+10h] BYREF

  *a3 = 0LL;
  v14 = 0LL;
  Microsoft::WRL::ComPtr<CCompositionSurfaceBitmap>::InternalRelease(&v14);
  v6 = (*(__int64 (__fastcall **)(struct ID2DContext *, CMILCOMBase **))(*(_QWORD *)a2 + 184LL))(a2, &v14);
  v7 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v6, 0x108u);
  }
  else
  {
    v8 = *((_QWORD *)v14 + 13);
    if ( *((_DWORD *)this + 40)
      && (v9 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v8 + 40LL))(
                 *((_QWORD *)v14 + 13),
                 *((_QWORD *)this + 17)),
          v7 = v9,
          v9 < 0) )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v9, 0x10Du);
    }
    else
    {
      v10 = *((_DWORD *)this + 48);
      if ( v10
        && (v11 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, _DWORD, _DWORD, _QWORD))(*(_QWORD *)v8 + 48LL))(
                    v8,
                    0LL,
                    *((_QWORD *)this + 21),
                    v10 / *((_DWORD *)this + 50),
                    *((_DWORD *)this + 51),
                    *((_DWORD *)this + 50),
                    0LL),
            v7 = v11,
            v11 < 0) )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v11, 0x11Au);
      }
      else
      {
        v12 = v14;
        v14 = 0LL;
        *a3 = v12;
        (*(void (__fastcall **)(CGenericInk *, _QWORD, _QWORD))(*(_QWORD *)this + 64LL))(this, 0LL, 0LL);
      }
    }
  }
  Microsoft::WRL::ComPtr<CCompositionSurfaceBitmap>::InternalRelease(&v14);
  return v7;
}
