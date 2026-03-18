/*
 * XREFs of VidSchiResetContextQuantumAtISR @ 0x1C0011F70
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0piixqq @ 0x1C0025F78 (McTemplateK0piixqq.c)
 */

__int64 __fastcall VidSchiResetContextQuantumAtISR(__int64 a1)
{
  __int64 v1; // r8
  unsigned __int8 v2; // bl
  __int64 v3; // rax
  __int64 v4; // r9
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rdx

  v1 = *(_QWORD *)(a1 + 96);
  v2 = 0;
  if ( *(_BYTE *)(a1 + 624)
    || (*(_DWORD *)(*(_QWORD *)(v1 + 24) + 2168LL) & 4) == 0
    || gulPriorityToYieldPriorityBand[*(unsigned int *)(a1 + 396)] )
  {
    v3 = *(_QWORD *)(a1 + 456);
    *(_BYTE *)(a1 + 624) = 0;
LABEL_3:
    *(_QWORD *)(a1 + 432) = v3;
LABEL_4:
    _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 428), 3, 2);
    v2 = 1;
    goto LABEL_5;
  }
  if ( *(_QWORD *)(v1 + 1944) )
    v6 = *(_QWORD *)(v1 + 1952);
  else
    v6 = *(_QWORD *)(a1 + 456);
  if ( *(_BYTE *)(v1 + 1960) && *(__int64 *)(a1 + 432) <= 0 )
  {
    v7 = *(_QWORD *)(v1 + 1936);
    if ( *(_QWORD *)(a1 + 472) == v7 )
      v6 = 0LL;
    else
      *(_QWORD *)(a1 + 472) = v7;
  }
  *(_QWORD *)(a1 + 432) += v6;
  v8 = *(_QWORD *)(a1 + 432);
  if ( v8 > 0 )
  {
    v3 = *(_QWORD *)(a1 + 456);
    if ( v8 <= v3 )
      goto LABEL_4;
    goto LABEL_3;
  }
LABEL_5:
  if ( bTracingEnabled )
  {
    v4 = *(_QWORD *)(a1 + 56);
    if ( !v4 || (*(_DWORD *)(a1 + 112) & 0x40) != 0 )
      LODWORD(v4) = a1;
    if ( (char)Microsoft_Windows_DxgKrnlEnableBits < 0 )
      McTemplateK0piixqq(
        a1,
        *(_QWORD *)(a1 + 440),
        v1,
        v4,
        *(_QWORD *)(a1 + 440),
        *(_QWORD *)(a1 + 432),
        *(_QWORD *)(v1 + 1952),
        *(_DWORD *)(a1 + 428),
        1);
  }
  return v2;
}
