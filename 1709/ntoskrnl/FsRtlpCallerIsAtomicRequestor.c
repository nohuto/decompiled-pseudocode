/*
 * XREFs of FsRtlpCallerIsAtomicRequestor @ 0x140025124
 * Callers:
 *     FsRtlpRequestShareableOplock @ 0x140023680 (FsRtlpRequestShareableOplock.c)
 *     FsRtlCheckOplockEx @ 0x140085CC0 (FsRtlCheckOplockEx.c)
 *     FsRtlpRequestExclusiveOplock @ 0x1401490F0 (FsRtlpRequestExclusiveOplock.c)
 *     FsRtlpOplockFsctrlInternal @ 0x14049062C (FsRtlpOplockFsctrlInternal.c)
 * Callees:
 *     <none>
 */

char __fastcall FsRtlpCallerIsAtomicRequestor(__int64 a1, __int64 a2, _QWORD *a3)
{
  char v3; // r9
  _QWORD *i; // rax

  v3 = 0;
  for ( i = *(_QWORD **)(a1 + 120); i != (_QWORD *)(a1 + 120); i = (_QWORD *)*i )
  {
    if ( a2 == *(i - 4) )
    {
      v3 = 1;
      if ( a3 )
        *a3 = i - 7;
      return v3;
    }
  }
  return v3;
}
