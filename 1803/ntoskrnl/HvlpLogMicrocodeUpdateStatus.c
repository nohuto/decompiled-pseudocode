/*
 * XREFs of HvlpLogMicrocodeUpdateStatus @ 0x140717B14
 * Callers:
 *     HvlPhase2Initialize @ 0x1401869A4 (HvlPhase2Initialize.c)
 *     HvlUpdateMicrocode @ 0x140717DD0 (HvlUpdateMicrocode.c)
 * Callees:
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     CmLogMcUpdateStatus @ 0x140222194 (CmLogMcUpdateStatus.c)
 *     HvlpGetLogicalProcessorProperty @ 0x140227768 (HvlpGetLogicalProcessorProperty.c)
 */

void HvlpLogMicrocodeUpdateStatus()
{
  unsigned int v0; // ebx
  int *v1; // rdi
  _OWORD v2[204]; // [rsp+20h] [rbp-CD8h] BYREF

  v0 = 0;
  if ( (_DWORD)HvlpLogicalProcessorCount )
  {
    v1 = &dword_140453514;
    do
    {
      HvlpGetLogicalProcessorProperty(*v1, 5, v2);
      if ( (int)CmLogMcUpdateStatus(*v1, (__int64)v2) < 0 )
        break;
      ++v0;
      v1 += 30;
    }
    while ( v0 < (unsigned int)HvlpLogicalProcessorCount );
  }
}
