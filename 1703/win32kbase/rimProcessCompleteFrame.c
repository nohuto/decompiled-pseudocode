/*
 * XREFs of rimProcessCompleteFrame @ 0x1C010CCA0
 * Callers:
 *     RIMCompletePointerDeviceFrame @ 0x1C010E278 (RIMCompletePointerDeviceFrame.c)
 * Callees:
 *     rimDispatchCompleteFrame @ 0x1C010CB20 (rimDispatchCompleteFrame.c)
 *     rimQueueCompleteFrame @ 0x1C010CE04 (rimQueueCompleteFrame.c)
 */

NTSTATUS __fastcall rimProcessCompleteFrame(__int64 a1, __int64 a2, LARGE_INTEGER *a3)
{
  int v5; // eax
  NTSTATUS result; // eax

  if ( (*(_QWORD *)(a1 + 768) || *(_DWORD *)(a1 + 976))
    && (v5 = *(_DWORD *)(a2 + 184), (v5 & 0x1000) != 0)
    && (v5 & 0x20000) != 0
    && (v5 & 0x200000) == 0 )
  {
    rimQueueCompleteFrame(a1);
    result = *(_DWORD *)(a2 + 184);
    if ( (result & 0x80000) == 0 )
    {
      *(_DWORD *)(a2 + 184) = result | 0x80000;
      return ZwSetEvent(*(HANDLE *)(a1 + 520), 0LL);
    }
  }
  else if ( *(_BYTE *)(a1 + 712) )
  {
    *(_BYTE *)(a1 + 712) = 0;
    return rimDispatchCompleteFrame(a1, a2, a3);
  }
  else
  {
    return rimQueueCompleteFrame(a1);
  }
  return result;
}
