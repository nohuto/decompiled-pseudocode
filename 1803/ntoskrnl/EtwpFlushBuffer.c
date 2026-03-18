/*
 * XREFs of EtwpFlushBuffer @ 0x140591F1C
 * Callers:
 *     EtwpFlushActiveBuffers @ 0x140591300 (EtwpFlushActiveBuffers.c)
 * Callees:
 *     EtwpFlushBufferToLogfile @ 0x1405875C0 (EtwpFlushBufferToLogfile.c)
 *     EtwpSendSessionNotification @ 0x14058A040 (EtwpSendSessionNotification.c)
 *     EtwpPrepareHeader @ 0x140591FD8 (EtwpPrepareHeader.c)
 *     EtwpFlushBufferToRealtime @ 0x140592094 (EtwpFlushBufferToRealtime.c)
 */

__int64 __fastcall EtwpFlushBuffer(__int64 a1, unsigned int *a2, __int64 a3)
{
  int v3; // esi
  char v4; // bp
  int v5; // edi
  __int64 v8; // r8
  char v9; // cl
  signed int v10; // eax
  signed int v12; // eax

  v3 = -1073741823;
  v4 = a3;
  v5 = -1073741823;
  if ( (unsigned int)EtwpPrepareHeader(a1, a2, a3) == -2147483614 )
  {
    v9 = 1;
    if ( (v4 & 1) == 0 )
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
