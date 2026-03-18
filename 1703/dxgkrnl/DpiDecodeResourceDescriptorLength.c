/*
 * XREFs of DpiDecodeResourceDescriptorLength @ 0x1C011BF64
 * Callers:
 *     DpiFdoDetectPostDevice @ 0x1C011BD40 (DpiFdoDetectPostDevice.c)
 *     DpiVerifyResources @ 0x1C01C6BC8 (DpiVerifyResources.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall DpiDecodeResourceDescriptorLength(unsigned __int8 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int16 v6; // ax
  __int64 v7; // rax
  __int64 v8; // rcx

  if ( *a1 == 3 )
    return *((unsigned int *)a1 + 3);
  if ( *a1 == 7 )
  {
    v6 = *((_WORD *)a1 + 1);
    if ( (v6 & 0x200) != 0 )
      return (unsigned __int64)*((unsigned int *)a1 + 3) << 8;
    if ( (v6 & 0x400) != 0 )
      return (unsigned __int64)*((unsigned int *)a1 + 3) << 16;
    if ( (v6 & 0x800) != 0 )
      return (unsigned __int64)*((unsigned int *)a1 + 3) << 32;
    v7 = WdLogNewEntry5_WdWarning(2048LL, a2, a3, a4);
    v8 = *((unsigned __int16 *)a1 + 1);
  }
  else
  {
    v7 = WdLogNewEntry5_WdWarning(a1, a2, a3, a4);
    v8 = *a1;
  }
  *(_QWORD *)(v7 + 24) = v8;
  WdLogEvent5_WdWarning(v7);
  return 0LL;
}
