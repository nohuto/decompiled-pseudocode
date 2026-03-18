/*
 * XREFs of ?FindDesktopRenderTarget@CUINTDesktopAssociation@@QEAAJIPEAPEAVCDesktopRenderTarget@@@Z @ 0x18013BB40
 * Callers:
 *     ?FindTreeFromMITLuid@CComposition@@QEAAJU_LUID@@PEAPEAVCVisualTree@@@Z @ 0x180127F7C (-FindTreeFromMITLuid@CComposition@@QEAAJU_LUID@@PEAPEAVCVisualTree@@@Z.c)
 * Callees:
 *     ?InternalAddRef@CMILCOMBase@@QEAAKXZ @ 0x180027AA0 (-InternalAddRef@CMILCOMBase@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CUINTDesktopAssociation::FindDesktopRenderTarget(
        CUINTDesktopAssociation *this,
        int a2,
        struct CDesktopRenderTarget **a3)
{
  unsigned int v6; // ebx
  unsigned int v7; // r9d
  unsigned int v8; // ecx
  __int64 v9; // r8
  struct CDesktopRenderTarget *v10; // rcx

  *a3 = 0LL;
  v6 = -2147024890;
  AcquireSRWLockShared((PSRWLOCK)(*((_QWORD *)this + 4) + 552LL));
  v7 = *((_DWORD *)this + 6);
  if ( v7 )
  {
    v8 = 0;
    v9 = *(_QWORD *)this;
    while ( *(_DWORD *)(v9 + 16LL * v8) != a2 )
    {
      if ( ++v8 >= v7 )
        goto LABEL_8;
    }
    v10 = *(struct CDesktopRenderTarget **)(v9 + 16LL * v8 + 8);
    *a3 = v10;
    CMILCOMBase::InternalAddRef(v10);
    v6 = 0;
  }
  else
  {
    v6 = -2003292412;
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x88982F04, 0x76u);
  }
LABEL_8:
  ReleaseSRWLockShared((PSRWLOCK)(*((_QWORD *)this + 4) + 552LL));
  return v6;
}
