/*
 * XREFs of ?InitiateWaitForInjectionCompletion@CMouseProcessor@@QEAA_NP6AXXZ@Z @ 0x1C004774C
 * Callers:
 *     InitiateWaitForInjectionCompletion @ 0x1C0089280 (InitiateWaitForInjectionCompletion.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C0051BC0 (RIMLockExclusive.c)
 */

char __fastcall CMouseProcessor::InitiateWaitForInjectionCompletion(CMouseProcessor *this, void (*a2)(void))
{
  char *v2; // rbx
  char v5; // si
  char *v6; // r8

  v2 = (char *)this + 2416;
  RIMLockExclusive((char *)this + 2416);
  if ( *((_WORD *)this + 1205) )
  {
    v5 = 1;
    v6 = (char *)this + 136 * *((unsigned __int16 *)this + 1204) + 232;
    if ( v6 )
      *((_QWORD *)v6 + 16) = a2;
  }
  else
  {
    v5 = 0;
  }
  *((_QWORD *)v2 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v2, 0LL);
  KeLeaveCriticalRegion();
  return v5;
}
