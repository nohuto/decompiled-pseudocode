/*
 * XREFs of ?GetDesc@CHolographicDisplay@@UEAAJPEAUHOLOGRAPHIC_DISPLAY_DESC@@@Z @ 0x1801A4620
 * Callers:
 *     ?AddHolographicDisplay@CHolographicManager@@QEAA_NPEAVCHolographicDisplay@@@Z @ 0x1801A5C20 (-AddHolographicDisplay@CHolographicManager@@QEAA_NPEAVCHolographicDisplay@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CHolographicDisplay::GetDesc(RTL_SRWLOCK *this, struct HOLOGRAPHIC_DISPLAY_DESC *a2)
{
  unsigned int v2; // edi

  v2 = 0;
  if ( a2 )
  {
    AcquireSRWLockShared(this + 13);
    *(_OWORD *)a2 = *(_OWORD *)&this[2].Ptr;
    *((_OWORD *)a2 + 1) = *(_OWORD *)&this[4].Ptr;
    *((_OWORD *)a2 + 2) = *(_OWORD *)&this[6].Ptr;
    *((_OWORD *)a2 + 3) = *(_OWORD *)&this[8].Ptr;
    *((_OWORD *)a2 + 4) = *(_OWORD *)&this[10].Ptr;
    ReleaseSRWLockShared(this + 13);
  }
  else
  {
    v2 = -2147024809;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x115u);
  }
  return v2;
}
