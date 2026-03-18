/*
 * XREFs of MakeGdtReadOnly @ 0x140164E58
 * Callers:
 *     Phase1InitializationDiscard @ 0x14080AC64 (Phase1InitializationDiscard.c)
 * Callees:
 *     KeRevertToUserGroupAffinityThread @ 0x140026160 (KeRevertToUserGroupAffinityThread.c)
 *     KeSetSystemGroupAffinityThread @ 0x140112860 (KeSetSystemGroupAffinityThread.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     KeWriteProtectProcessorState @ 0x140412AB0 (KeWriteProtectProcessorState.c)
 */

void MakeGdtReadOnly()
{
  struct _GROUP_AFFINITY *p_PreviousAffinity; // rdi
  __int64 i; // rbx
  char v2; // cl
  struct _GROUP_AFFINITY Affinity; // [rsp+20h] [rbp-38h] BYREF
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+30h] [rbp-28h] BYREF

  p_PreviousAffinity = &PreviousAffinity;
  for ( i = 0LL; (unsigned int)i < (unsigned int)KeNumberProcessors_0; i = (unsigned int)(i + 1) )
  {
    v2 = KiProcessorIndexToNumberMappingTable[i] & 0x3F;
    Affinity.Group = (unsigned int)KiProcessorIndexToNumberMappingTable[i] >> 6;
    *(_DWORD *)Affinity.Reserved = 0;
    Affinity.Reserved[2] = 0;
    Affinity.Mask = 1LL << v2;
    KeSetSystemGroupAffinityThread(&Affinity, p_PreviousAffinity);
    p_PreviousAffinity = 0LL;
    KeWriteProtectProcessorState(&KeGetCurrentPrcb()[-1].PrcbPad140[468]);
  }
  KeRevertToUserGroupAffinityThread(&PreviousAffinity);
}
