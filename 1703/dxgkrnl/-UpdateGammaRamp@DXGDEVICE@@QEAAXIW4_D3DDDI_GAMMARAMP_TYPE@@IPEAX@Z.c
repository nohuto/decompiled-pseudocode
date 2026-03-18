/*
 * XREFs of ?UpdateGammaRamp@DXGDEVICE@@QEAAXIW4_D3DDDI_GAMMARAMP_TYPE@@IPEAX@Z @ 0x1C01896A4
 * Callers:
 *     DxgkSetGammaRamp @ 0x1C018BE70 (DxgkSetGammaRamp.c)
 * Callees:
 *     <none>
 */

void __fastcall DXGDEVICE::UpdateGammaRamp(
        DXGDEVICE *this,
        unsigned int a2,
        enum _D3DDDI_GAMMARAMP_TYPE a3,
        int a4,
        void *a5)
{
  __int64 v5; // rdi
  void *v9; // rcx

  v5 = a2;
  v9 = (void *)*((_QWORD *)this + a2 + 169);
  if ( v9 )
    ExFreePoolWithTag(v9, 0);
  *((_QWORD *)this + v5 + 169) = a5;
  *((_DWORD *)this + v5 + 370) = a3;
  *((_DWORD *)this + v5 + 386) = a4;
}
