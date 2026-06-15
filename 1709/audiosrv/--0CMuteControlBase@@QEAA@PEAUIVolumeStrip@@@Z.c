/*
 * XREFs of ??0CMuteControlBase@@QEAA@PEAUIVolumeStrip@@@Z @ 0x180066808
 * Callers:
 *     ?RuntimeClassInitialize@CVolumeStrip@@QEAAJPEBG@Z @ 0x18006D86C (-RuntimeClassInitialize@CVolumeStrip@@QEAAJPEBG@Z.c)
 * Callees:
 *     WPP_SF_q @ 0x18007DC24 (WPP_SF_q.c)
 */

CMuteControlBase *__fastcall CMuteControlBase::CMuteControlBase(CMuteControlBase *this, struct IVolumeStrip *a2)
{
  *((_DWORD *)this + 6) = 0;
  *((_QWORD *)this + 4) = 0LL;
  *(_QWORD *)this = &CMuteControlBase::`vftable';
  *((_DWORD *)this + 2) = 1;
  *((_QWORD *)this + 2) = a2;
  if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 10LL, &WPP_c071410194bb3e21497a264ebdcc8fa3_Traceguids, this);
  }
  return this;
}
