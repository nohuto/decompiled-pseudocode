/*
 * XREFs of ??0CMeterControlBase@@QEAA@XZ @ 0x180065A38
 * Callers:
 *     ?RuntimeClassInitialize@CVolumeStrip@@QEAAJPEBG@Z @ 0x18006D86C (-RuntimeClassInitialize@CVolumeStrip@@QEAAJPEBG@Z.c)
 * Callees:
 *     WPP_SF_q @ 0x18007DC24 (WPP_SF_q.c)
 */

CMeterControlBase *__fastcall CMeterControlBase::CMeterControlBase(CMeterControlBase *this)
{
  *((_QWORD *)this + 2) = 0LL;
  *((_DWORD *)this + 6) = 0;
  *(_QWORD *)this = &CMeterControlBase::`vftable';
  *((_DWORD *)this + 2) = 1;
  if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 10LL, &WPP_118e7498cb42378e567ca6442fb0db3b_Traceguids, this);
  }
  return this;
}
