/*
 * XREFs of KiAbPropagateBoosts @ 0x1400A86D0
 * Callers:
 *     KiAbDeferredProcessingWorker @ 0x1400A79A0 (KiAbDeferredProcessingWorker.c)
 * Callees:
 *     KiAbProcessThreadLocks @ 0x1400A7650 (KiAbProcessThreadLocks.c)
 */

void __fastcall KiAbPropagateBoosts(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rbx
  signed __int32 v7[8]; // [rsp+0h] [rbp-48h] BYREF

  while ( *a1 )
  {
    v6 = *a1;
    if ( *a1 )
      *a1 = *(_QWORD *)v6;
    *(_QWORD *)v6 = 1LL;
    _InterlockedOr(v7, 0);
    if ( *(_BYTE *)(v6 - 583) )
      KiAbProcessThreadLocks(v6 - 1376, 0, 1, 0, a3, (__int64)a1, a2);
    _InterlockedDecrement16((volatile signed __int16 *)(v6 + 44));
  }
}
