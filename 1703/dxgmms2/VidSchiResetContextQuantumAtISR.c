/*
 * XREFs of VidSchiResetContextQuantumAtISR @ 0x1C0011000
 * Callers:
 *     <none>
 * Callees:
 *     Template_piixqq @ 0x1C0023EF4 (Template_piixqq.c)
 */

__int64 __fastcall VidSchiResetContextQuantumAtISR(__int64 a1)
{
  __int64 v1; // r8
  unsigned __int8 v2; // bl
  __int64 v3; // rax
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // r9
  __int64 v8; // r9

  v1 = *(_QWORD *)(a1 + 96);
  v2 = 0;
  if ( *(_BYTE *)(a1 + 648)
    || (*(_DWORD *)(*(_QWORD *)(v1 + 24) + 2152LL) & 4) == 0
    || gulPriorityToYieldPriorityBand[*(unsigned int *)(a1 + 396)] )
  {
    v3 = *(_QWORD *)(a1 + 480);
    *(_BYTE *)(a1 + 648) = 0;
LABEL_3:
    *(_QWORD *)(a1 + 456) = v3;
    v2 = 1;
    _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 448), 3, 2);
    goto LABEL_4;
  }
  if ( *(_QWORD *)(v1 + 1928) )
    v5 = *(_QWORD *)(v1 + 1936);
  else
    v5 = *(_QWORD *)(a1 + 480);
  if ( *(_BYTE *)(v1 + 1944) && *(__int64 *)(a1 + 456) <= 0 )
  {
    v6 = *(_QWORD *)(v1 + 1920);
    if ( *(_QWORD *)(a1 + 496) == v6 )
      v5 = 0LL;
    else
      *(_QWORD *)(a1 + 496) = v6;
  }
  *(_QWORD *)(a1 + 456) += v5;
  v7 = *(_QWORD *)(a1 + 456);
  if ( v7 > 0 )
  {
    v3 = *(_QWORD *)(a1 + 456);
    if ( v7 > *(_QWORD *)(a1 + 480) )
      v3 = *(_QWORD *)(a1 + 480);
    goto LABEL_3;
  }
LABEL_4:
  if ( bTracingEnabled )
  {
    v8 = *(_QWORD *)(a1 + 56);
    if ( !v8 || (*(_DWORD *)(a1 + 112) & 0x40) != 0 )
      LODWORD(v8) = a1;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
      Template_piixqq(
        a1,
        *(_QWORD *)(a1 + 464),
        v1,
        v8,
        *(_QWORD *)(a1 + 464),
        *(_QWORD *)(a1 + 456),
        *(_QWORD *)(v1 + 1936),
        *(_DWORD *)(a1 + 448),
        1);
  }
  return v2;
}
