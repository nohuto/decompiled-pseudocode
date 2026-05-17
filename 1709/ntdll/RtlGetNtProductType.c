/*
 * XREFs of RtlGetNtProductType @ 0x180007D50
 * Callers:
 *     RtlpQueryPhysicalMemoryPolicy @ 0x1800075E4 (RtlpQueryPhysicalMemoryPolicy.c)
 *     SwitchedRtlGetVersion @ 0x180007A78 (SwitchedRtlGetVersion.c)
 *     RtlGetVersion @ 0x180007C00 (RtlGetVersion.c)
 *     SbpUpdateCacheWithCurrentImpl @ 0x1800215B0 (SbpUpdateCacheWithCurrentImpl.c)
 *     RtlRestoreBootStatusDefaults @ 0x1800EABE0 (RtlRestoreBootStatusDefaults.c)
 *     RtlpHpOptIntoSegmentHeap @ 0x180102E54 (RtlpHpOptIntoSegmentHeap.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x18003F2C0 (RtlGetCurrentServiceSessionId.c)
 *     RtlpGetNtProductTypeFromRegistry @ 0x18008DBBC (RtlpGetNtProductTypeFromRegistry.c)
 */

char __fastcall RtlGetNtProductType(_DWORD *a1, __int64 a2)
{
  char v3; // bl
  int v4; // eax

  v3 = 0;
  if ( (unsigned int)RtlGetCurrentServiceSessionId(a1, a2) )
  {
    v4 = *((_DWORD *)NtCurrentPeb()->SharedData + 4);
    goto LABEL_4;
  }
  if ( MEMORY[0x7FFE0268] )
  {
    v4 = MEMORY[0x7FFE0264];
LABEL_4:
    *a1 = v4;
    return 1;
  }
  if ( (int)RtlpGetNtProductTypeFromRegistry(a1) < 0 )
  {
    *a1 = 1;
    return v3;
  }
  return 1;
}
