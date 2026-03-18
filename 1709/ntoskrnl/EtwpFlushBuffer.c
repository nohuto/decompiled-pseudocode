/*
 * XREFs of EtwpFlushBuffer @ 0x140532644
 * Callers:
 *     EtwpFlushActiveBuffers @ 0x1405322C8 (EtwpFlushActiveBuffers.c)
 * Callees:
 *     EtwpSendSessionNotification @ 0x1404EDDD4 (EtwpSendSessionNotification.c)
 *     EtwpPrepareHeader @ 0x140532734 (EtwpPrepareHeader.c)
 *     EtwpFlushBufferToRealtime @ 0x1405327BC (EtwpFlushBufferToRealtime.c)
 *     EtwpFlushBufferToLogfile @ 0x1405330A4 (EtwpFlushBufferToLogfile.c)
 */

__int64 __fastcall EtwpFlushBuffer(__int64 a1, __int64 a2, char a3)
{
  int v3; // esi
  int v5; // edi
  __int64 v8; // r8
  char v9; // cl
  signed int v10; // eax
  signed int v12; // eax

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
  if ( (*(_DWORD *)(a1 + 832) & 8) != 0 )
  {
    LOBYTE(v8) = v9;
    v10 = EtwpFlushBufferToRealtime(a1, a2, v8);
    v3 = v10;
    if ( v10 < 0 )
      EtwpSendSessionNotification(a1, 4u, v10);
  }
  if ( *(_QWORD *)(a1 + 816) )
  {
    v12 = EtwpFlushBufferToLogfile(a1, a2);
    v5 = v12;
    if ( v12 < 0 )
      EtwpSendSessionNotification(a1, 3u, v12);
  }
  if ( v3 >= 0 || v5 >= 0 )
    return 0LL;
  return (unsigned int)v5;
}
