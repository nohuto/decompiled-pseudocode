/*
 * XREFs of TpStartAsyncIoOperation @ 0x180017660
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800176B8 @ 0x1800176B8 (sub_1800176B8.c)
 *     sub_18007358C @ 0x18007358C (sub_18007358C.c)
 */

void __cdecl TpStartAsyncIoOperation(PTP_IO Io)
{
  __int64 v2; // rcx

  if ( (unsigned int)sub_1800176B8(Io, 0LL, 1LL) )
  {
    sub_18007358C((char *)Io + 56, 1LL, 0LL);
    _InterlockedIncrement((volatile signed __int32 *)Io + 70);
    _InterlockedIncrement((volatile signed __int32 *)Io);
    v2 = *((_QWORD *)Io + 18);
    if ( *(_DWORD *)(v2 + 424) != MEMORY[0x7FFE03C0] )
      sub_180105430(v2);
  }
}
