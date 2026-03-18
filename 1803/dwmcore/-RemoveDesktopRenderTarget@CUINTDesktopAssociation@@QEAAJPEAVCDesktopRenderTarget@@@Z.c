/*
 * XREFs of ?RemoveDesktopRenderTarget@CUINTDesktopAssociation@@QEAAJPEAVCDesktopRenderTarget@@@Z @ 0x18015E020
 * Callers:
 *     ??1CDesktopRenderTarget@@EEAA@XZ @ 0x180156D98 (--1CDesktopRenderTarget@@EEAA@XZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CUINTDesktopAssociation::RemoveDesktopRenderTarget(
        CUINTDesktopAssociation *this,
        struct CDesktopRenderTarget *a2)
{
  unsigned int v2; // r9d
  unsigned int v3; // ebx
  unsigned int v5; // r8d
  __int64 v6; // r11
  __int64 v7; // rax
  __int64 v8; // rcx

  v2 = *((_DWORD *)this + 6);
  v3 = 0;
  v5 = v2 - 1;
  if ( (int)(v2 - 1) >= 0 )
  {
    v6 = *(_QWORD *)this;
    while ( *(struct CDesktopRenderTarget **)(v6 + 16LL * v5 + 8) != a2 )
    {
      if ( (--v5 & 0x80000000) != 0 )
        return v3;
    }
    if ( v5 < v2 )
    {
      for ( ; v5 < v2 - 1; v2 = *((_DWORD *)this + 6) )
      {
        v7 = 2LL * v5;
        v8 = 2LL * ++v5;
        *(_OWORD *)(v6 + 8 * v7) = *(_OWORD *)(v6 + 8 * v8);
      }
      *((_DWORD *)this + 6) = v2 - 1;
    }
    else
    {
      v3 = -2147024809;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x19Cu);
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x53u);
    }
  }
  return v3;
}
