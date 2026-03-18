/*
 * XREFs of PsGetAllocatedFullProcessImageName @ 0x14057D3A8
 * Callers:
 *     PfCalculateProcessHash @ 0x140447470 (PfCalculateProcessHash.c)
 *     PnpLogVetoInformation @ 0x14055BDB8 (PnpLogVetoInformation.c)
 *     PsGetAllocatedFullProcessImageNameEx @ 0x14057D374 (PsGetAllocatedFullProcessImageNameEx.c)
 *     PiUEventHandleVetoEvent @ 0x1405E0CB0 (PiUEventHandleVetoEvent.c)
 *     ViCreateProcessCallbackInternal @ 0x1407B7DA4 (ViCreateProcessCallbackInternal.c)
 * Callees:
 *     memmove @ 0x140192C00 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PsGetAllocatedFullProcessImageName(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rsi
  _QWORD *PoolWithTag; // rax
  unsigned int v5; // edi
  _QWORD *v6; // rbx

  v2 = *(_QWORD *)(a1 + 1128);
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)*(unsigned __int16 *)(v2 + 2) + 16, 0x6E497350u);
  v5 = 0;
  v6 = PoolWithTag;
  if ( PoolWithTag )
  {
    *(_OWORD *)PoolWithTag = *(_OWORD *)v2;
    if ( PoolWithTag[1] )
    {
      PoolWithTag[1] = PoolWithTag + 2;
      memmove(PoolWithTag + 2, *(const void **)(v2 + 8), *(unsigned __int16 *)(v2 + 2));
    }
    *a2 = v6;
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v5;
}
