/*
 * XREFs of NtDCompositionTelemetryAnimationScenarioBegin @ 0x1C0021350
 * Callers:
 *     <none>
 * Callees:
 *     ?ReferenceHandleAndLock@CApplicationChannel@DirectComposition@@SAJIPEAPEAV12@@Z @ 0x1C0023924 (-ReferenceHandleAndLock@CApplicationChannel@DirectComposition@@SAJIPEAPEAV12@@Z.c)
 *     ?AnimationScenarioBegin@CTelemetryInfo@DirectComposition@@QEAAJ_KPEBX@Z @ 0x1C007440C (-AnimationScenarioBegin@CTelemetryInfo@DirectComposition@@QEAAJ_KPEBX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AB7F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtDCompositionTelemetryAnimationScenarioBegin(unsigned int a1, unsigned __int64 a2, char *a3)
{
  int v5; // ebx
  struct DirectComposition::CApplicationChannel *v6; // r14
  struct DirectComposition::CApplicationChannel *v8; // [rsp+68h] [rbp+20h] BYREF

  v5 = 0;
  v8 = 0LL;
  if ( !a3 || !a2 || (a2 & 1) != 0 || a2 - 48 > 0xC0 )
    v5 = -1073741811;
  if ( v5 >= 0 )
  {
    if ( a2 )
    {
      if ( ((unsigned __int8)a3 & 7) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (unsigned __int64)&a3[a2] > MmUserProbeAddress || &a3[a2] < a3 )
        *(_BYTE *)MmUserProbeAddress = 0;
    }
    v5 = DirectComposition::CApplicationChannel::ReferenceHandleAndLock(a1, &v8);
    v6 = v8;
    if ( v5 >= 0 )
    {
      v5 = DirectComposition::CTelemetryInfo::AnimationScenarioBegin(
             (struct DirectComposition::CApplicationChannel *)((char *)v8 + 528),
             a2,
             a3);
      (**(void (__fastcall ***)(struct DirectComposition::CApplicationChannel *))v6)(v6);
    }
  }
  return (unsigned int)v5;
}
