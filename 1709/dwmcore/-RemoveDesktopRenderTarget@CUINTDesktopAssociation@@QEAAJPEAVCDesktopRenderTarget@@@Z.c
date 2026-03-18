/*
 * XREFs of ?RemoveDesktopRenderTarget@CUINTDesktopAssociation@@QEAAJPEAVCDesktopRenderTarget@@@Z @ 0x18013BBF8
 * Callers:
 *     ??1CDesktopRenderTarget@@EEAA@XZ @ 0x180132860 (--1CDesktopRenderTarget@@EEAA@XZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CUINTDesktopAssociation::RemoveDesktopRenderTarget(
        CUINTDesktopAssociation *this,
        struct CDesktopRenderTarget *a2)
{
  unsigned int v3; // ebx
  unsigned int v4; // ecx
  unsigned int v5; // r9d
  __int64 v6; // r11
  __int64 v7; // rcx
  __int64 v8; // rdx

  v3 = 0;
  v4 = *((_DWORD *)this + 6);
  v5 = v4 - 1;
  if ( (int)(v4 - 1) >= 0 )
  {
    v6 = *(_QWORD *)this;
    while ( *(struct CDesktopRenderTarget **)(v6 + 16LL * v5 + 8) != a2 )
    {
      if ( (--v5 & 0x80000000) != 0 )
        return v3;
    }
    if ( v5 < v4 )
    {
      if ( v5 < v4 - 1 )
      {
        do
        {
          v7 = 2LL * v5;
          v8 = 2LL * ++v5;
          *(_OWORD *)(v6 + 8 * v7) = *(_OWORD *)(v6 + 8 * v8);
        }
        while ( v5 < *((_DWORD *)this + 6) - 1 );
      }
      --*((_DWORD *)this + 6);
    }
    else
    {
      v3 = -2147024809;
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x80070057, 0x193u);
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x80070057, 0x53u);
    }
  }
  return v3;
}
