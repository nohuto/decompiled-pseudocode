/*
 * XREFs of ?InitiateWaitForInjectionCompletion@CMouseProcessor@@QEAA_NP6AXXZ@Z @ 0x1C0039700
 * Callers:
 *     InitiateWaitForInjectionCompletion @ 0x1C0068FD0 (InitiateWaitForInjectionCompletion.c)
 * Callees:
 *     ?GetItemForWrite@CMouseQueue@CMouseProcessor@@QEAAPEAURawMouseEvent@2@_N@Z @ 0x1C003A0CC (-GetItemForWrite@CMouseQueue@CMouseProcessor@@QEAAPEAURawMouseEvent@2@_N@Z.c)
 *     RIMLockExclusive @ 0x1C003B4E0 (RIMLockExclusive.c)
 */

bool __fastcall CMouseProcessor::InitiateWaitForInjectionCompletion(CMouseProcessor *this, void (*a2)(void))
{
  char *v2; // rbx
  __int16 v5; // ax
  bool v6; // bp
  struct CMouseProcessor::RawMouseEvent *v7; // rax

  v2 = (char *)this + 2424;
  RIMLockExclusive((char *)this + 2424);
  v5 = *((_WORD *)this + 1209);
  v6 = v5 != 0;
  if ( v5 )
  {
    v7 = CMouseProcessor::CMouseQueue::GetItemForWrite((CMouseProcessor *)((char *)this + 112), 1);
    if ( v7 )
      *((_QWORD *)v7 + 17) = a2;
  }
  *((_QWORD *)v2 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v2, 0LL);
  KeLeaveCriticalRegion();
  return v6;
}
