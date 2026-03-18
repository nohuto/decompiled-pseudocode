/*
 * XREFs of NtDCompositionTelemetrySetApplicationId @ 0x1C0083DD0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReferenceHandleAndLock@CApplicationChannel@DirectComposition@@SAJIPEAPEAV12@@Z @ 0x1C001E6E4 (-ReferenceHandleAndLock@CApplicationChannel@DirectComposition@@SAJIPEAPEAV12@@Z.c)
 *     ?SetApplicationId@CTelemetryInfo@DirectComposition@@QEAAJ_KPEBX@Z @ 0x1C007C014 (-SetApplicationId@CTelemetryInfo@DirectComposition@@QEAAJ_KPEBX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00A20B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtDCompositionTelemetrySetApplicationId(unsigned int a1, size_t a2, char *a3)
{
  int v5; // ebx
  struct DirectComposition::CApplicationChannel *v7; // [rsp+68h] [rbp+20h] BYREF

  v5 = 0;
  v7 = 0LL;
  if ( !a3 || !a2 || (a2 & 1) != 0 || a2 > 0xC8 )
    v5 = -1073741811;
  if ( v5 >= 0 )
  {
    if ( a2 )
    {
      if ( ((unsigned __int8)a3 & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (unsigned __int64)&a3[a2] > MmUserProbeAddress || &a3[a2] < a3 )
        *(_BYTE *)MmUserProbeAddress = 0;
    }
    v5 = DirectComposition::CApplicationChannel::ReferenceHandleAndLock(a1, &v7);
    if ( v5 >= 0 )
    {
      v5 = DirectComposition::CTelemetryInfo::SetApplicationId(
             (struct DirectComposition::CApplicationChannel *)((char *)v7 + 552),
             a2,
             a3);
      _guard_dispatch_icall_fptr();
    }
  }
  return (unsigned int)v5;
}
