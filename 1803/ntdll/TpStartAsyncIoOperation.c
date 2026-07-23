/*
 * XREFs of TpStartAsyncIoOperation @ 0x180025840
 * Callers:
 *     <none>
 * Callees:
 *     sub_180025900 @ 0x180025900 (sub_180025900.c)
 *     sub_180055584 @ 0x180055584 (sub_180055584.c)
 */

void __cdecl TpStartAsyncIoOperation(PTP_IO Io)
{
  if ( (unsigned int)sub_180025900(Io, 0LL, 1LL) )
  {
    sub_180055584((char *)Io + 56, 1LL);
    _InterlockedIncrement((volatile signed __int32 *)Io + 70);
    _InterlockedIncrement((volatile signed __int32 *)Io);
    if ( *(_DWORD *)(*((_QWORD *)Io + 18) + 424LL) != MEMORY[0x7FFE03C0] )
      sub_180108210();
  }
}
