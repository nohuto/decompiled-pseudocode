/*
 * XREFs of VidSchEnableLatencyToleranceTimer @ 0x1C00143B0
 * Callers:
 *     <none>
 * Callees:
 *     TemplateEventDescriptor @ 0x1C0028DF8 (TemplateEventDescriptor.c)
 */

void __fastcall VidSchEnableLatencyToleranceTimer(__int64 a1, char a2)
{
  LARGE_INTEGER v3; // rcx
  unsigned __int64 v4; // r8
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+30h] [rbp+8h] BYREF

  *(_BYTE *)(a1 + 2944) = a2;
  if ( a2 )
  {
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
      TemplateEventDescriptor(a1, &Dxgk_LatencyToleranceTimerEnable);
    v3 = KeQueryPerformanceCounter(&PerformanceFrequency);
    if ( is_mul_ok(v3.QuadPart, 0x989680uLL) )
      v4 = (unsigned __int64)v3.QuadPart
         * (unsigned __int128)0x989680uLL
         / (unsigned __int64)PerformanceFrequency.QuadPart;
    else
      v4 = 10000000 * (v3.QuadPart / (unsigned __int64)PerformanceFrequency.QuadPart)
         + 10000000 * (v3.QuadPart % (unsigned __int64)PerformanceFrequency.QuadPart) / PerformanceFrequency.QuadPart;
    *(_QWORD *)(a1 + 2928) = v4 + *(_QWORD *)(a1 + 2936);
    *(_QWORD *)(a1 + 1544) = MEMORY[0xFFFFF78000000320];
    KeSetEvent((PRKEVENT)(a1 + 1512), 0, 0);
  }
  else if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
  {
    TemplateEventDescriptor(a1, &Dxgk_LatencyToleranceTimerDisable);
  }
}
