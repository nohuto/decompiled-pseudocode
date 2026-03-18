/*
 * XREFs of ?GetDesc@CHolographicDisplay@@UEAAJPEAUHOLOGRAPHIC_DISPLAY_DESC@@@Z @ 0x1801F9880
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CHolographicDisplay::GetDesc(CHolographicDisplay *this, struct HOLOGRAPHIC_DISPLAY_DESC *a2)
{
  unsigned int v2; // edi

  v2 = 0;
  if ( a2 )
  {
    AcquireSRWLockShared((PSRWLOCK)this + 7);
    *(_OWORD *)a2 = *(_OWORD *)((char *)this + 20);
    *((_QWORD *)a2 + 2) = *(_QWORD *)((char *)this + 36);
    ReleaseSRWLockShared((PSRWLOCK)this + 7);
  }
  else
  {
    v2 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x94u);
  }
  return v2;
}
