/*
 * XREFs of EtwpFlushBuffer @ 0x1405501C4
 * Callers:
 *     EtwpFlushActiveBuffers @ 0x1404F1E3C (EtwpFlushActiveBuffers.c)
 * Callees:
 *     EtwpPrepareHeader @ 0x140550264 (EtwpPrepareHeader.c)
 *     EtwpFlushBufferToRealtime @ 0x1405502F0 (EtwpFlushBufferToRealtime.c)
 *     EtwpFlushBufferToLogfile @ 0x140550754 (EtwpFlushBufferToLogfile.c)
 *     EtwpSendSessionNotification @ 0x140551BF8 (EtwpSendSessionNotification.c)
 */

__int64 __fastcall EtwpFlushBuffer(__int64 a1, __int64 a2, char a3)
{
  int v3; // esi
  int v5; // edi
  __int64 v8; // r8
  char v9; // cl

  v3 = -1073741823;
  v5 = -1073741823;
  if ( (unsigned int)EtwpPrepareHeader() == -2147483614 )
  {
    v9 = 1;
    if ( (a3 & 1) == 0 )
      return 0LL;
  }
  else
  {
    v9 = 0;
  }
  if ( (*(_DWORD *)(a1 + 816) & 8) != 0 )
  {
    LOBYTE(v8) = v9;
    v3 = EtwpFlushBufferToRealtime(a1, a2, v8);
    if ( v3 < 0 )
      EtwpSendSessionNotification(a1, 4LL);
  }
  if ( *(_QWORD *)(a1 + 800) )
  {
    v5 = EtwpFlushBufferToLogfile(a1, a2);
    if ( v5 < 0 )
      EtwpSendSessionNotification(a1, 3LL);
  }
  if ( v3 >= 0 || v5 >= 0 )
    return 0LL;
  return (unsigned int)v5;
}
