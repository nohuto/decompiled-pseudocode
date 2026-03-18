/*
 * XREFs of HUBDTX_GetConfigDescriptorWithReturnedLengthUsingControlTransfer @ 0x1C0023EE4
 * Callers:
 *     HUBDSM_GettingAlternateConfigurationDescriptorWithReturnedLength @ 0x1C001B750 (HUBDSM_GettingAlternateConfigurationDescriptorWithReturnedLength.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00019D4 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001DC8 (WPP_RECORDER_SF_.c)
 *     HUBSM_AddEvent @ 0x1C0009C18 (HUBSM_AddEvent.c)
 *     HUBDTX_GetDescriptor @ 0x1C0023A80 (HUBDTX_GetDescriptor.c)
 */

void __fastcall HUBDTX_GetConfigDescriptorWithReturnedLengthUsingControlTransfer(__int64 a1)
{
  PVOID PoolWithTag; // rax
  int Descriptor; // eax
  __int64 v4; // [rsp+28h] [rbp-20h]

  PoolWithTag = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, *(unsigned __int16 *)(a1 + 1734), 0x64334855u);
  *(_QWORD *)(a1 + 2016) = PoolWithTag;
  if ( PoolWithTag )
  {
    Descriptor = HUBDTX_GetDescriptor(a1, (__int64)PoolWithTag, *(unsigned __int16 *)(a1 + 1734), 2, 0, 0);
    if ( Descriptor >= 0 )
      return;
  }
  else
  {
    WPP_RECORDER_SF_(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
      2u,
      5u,
      0x26u,
      (__int64)&WPP_0a0f952dc11639804361b505720162cd_Traceguids);
    Descriptor = -1073741670;
  }
  LODWORD(v4) = Descriptor;
  WPP_RECORDER_SF_d(
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
    2u,
    5u,
    0x27u,
    (__int64)&WPP_0a0f952dc11639804361b505720162cd_Traceguids,
    v4);
  HUBSM_AddEvent(a1 + 504, 4004);
}
