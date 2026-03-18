/*
 * XREFs of ?FindDesktopRenderTarget@CUINTDesktopAssociation@@QEAAJIPEAPEAVCDesktopRenderTarget@@@Z @ 0x18015DF64
 * Callers:
 *     ?FindTreeFromMITLuid@CComposition@@QEAAJU_LUID@@PEAPEAVCVisualTree@@@Z @ 0x18014A240 (-FindTreeFromMITLuid@CComposition@@QEAAJU_LUID@@PEAPEAVCVisualTree@@@Z.c)
 * Callees:
 *     ?InternalAddRef@CMILCOMBase@@QEAAKXZ @ 0x18001DA50 (-InternalAddRef@CMILCOMBase@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CUINTDesktopAssociation::FindDesktopRenderTarget(
        CUINTDesktopAssociation *this,
        int a2,
        struct CDesktopRenderTarget **a3)
{
  unsigned int v6; // ebx
  __int64 v7; // r8
  unsigned int v8; // edx
  struct CDesktopRenderTarget *v9; // rcx

  *a3 = 0LL;
  v6 = -2147024890;
  AcquireSRWLockShared((PSRWLOCK)(*((_QWORD *)this + 4) + 576LL));
  if ( *((_DWORD *)this + 6) )
  {
    v7 = *(_QWORD *)this;
    v8 = 0;
    while ( *(_DWORD *)(v7 + 16LL * v8) != a2 )
    {
      if ( ++v8 >= *((_DWORD *)this + 6) )
        goto LABEL_8;
    }
    v9 = *(struct CDesktopRenderTarget **)(v7 + 16LL * v8 + 8);
    *a3 = v9;
    CMILCOMBase::InternalAddRef(v9);
    v6 = 0;
  }
  else
  {
    v6 = -2003292412;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1802ACDB0, 1u, -2003292412, 0x7Au);
  }
LABEL_8:
  ReleaseSRWLockShared((PSRWLOCK)(*((_QWORD *)this + 4) + 576LL));
  return v6;
}
