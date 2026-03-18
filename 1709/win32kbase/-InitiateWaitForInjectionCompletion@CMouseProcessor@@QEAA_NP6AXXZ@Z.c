/*
 * XREFs of ?InitiateWaitForInjectionCompletion@CMouseProcessor@@QEAA_NP6AXXZ@Z @ 0x1C0013D90
 * Callers:
 *     InitiateWaitForInjectionCompletion @ 0x1C00122E0 (InitiateWaitForInjectionCompletion.c)
 * Callees:
 *     ?GetItemForWrite@CMouseQueue@CMouseProcessor@@QEAAPEAURawMouseEvent@2@_N@Z @ 0x1C0016AA4 (-GetItemForWrite@CMouseQueue@CMouseProcessor@@QEAAPEAURawMouseEvent@2@_N@Z.c)
 *     RIMLockExclusive @ 0x1C0016D00 (RIMLockExclusive.c)
 */

bool __fastcall CMouseProcessor::InitiateWaitForInjectionCompletion(CMouseProcessor *this, void (*a2)(void))
{
  char *v2; // rbx
  __int16 v5; // ax
  __int64 v6; // r8
  bool v7; // bp
  struct CMouseProcessor::RawMouseEvent *v8; // rax

  v2 = (char *)this + 2568;
  RIMLockExclusive((char *)this + 2568);
  v5 = *((_WORD *)this + 1281);
  v6 = 0LL;
  v7 = v5 != 0;
  if ( v5 )
  {
    v8 = CMouseProcessor::CMouseQueue::GetItemForWrite((CMouseProcessor *)((char *)this + 256), 1);
    if ( v8 )
      *((_QWORD *)v8 + 17) = a2;
  }
  *((_QWORD *)v2 + 1) = v6;
  ExReleasePushLockExclusiveEx(v2, 0LL);
  KeLeaveCriticalRegion();
  return v7;
}
