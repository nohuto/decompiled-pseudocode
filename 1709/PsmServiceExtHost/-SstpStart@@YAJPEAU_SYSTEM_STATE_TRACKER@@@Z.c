/*
 * XREFs of ?SstpStart@@YAJPEAU_SYSTEM_STATE_TRACKER@@@Z @ 0x180020E40
 * Callers:
 *     SystemStateTrackerStart @ 0x180020D58 (SystemStateTrackerStart.c)
 * Callees:
 *     ?SstpPublish@@YAXQEAU_SYSTEM_STATE_TRACKER@@@Z @ 0x180020FD4 (-SstpPublish@@YAXQEAU_SYSTEM_STATE_TRACKER@@@Z.c)
 */

__int64 __fastcall SstpStart(struct _SYSTEM_STATE_TRACKER *a1)
{
  _BYTE *v2; // rsi
  unsigned int v3; // edi
  unsigned int v4; // edi
  unsigned int *i; // rsi
  __int64 result; // rax
  int UniqueThread; // ecx

  v2 = (char *)a1 + 40;
  v3 = 0;
  while ( 1 )
  {
    if ( (*v2 & 1) != 0 )
    {
      result = RtlQueryWnfStateData(
                 (char *)a1 + 32 * v3 + 44,
                 *((_QWORD *)a1 + 4 * v3 + 3),
                 SstpStateChangeTriage,
                 a1,
                 0LL);
      if ( (int)result < 0 )
        break;
    }
    ++v3;
    v2 += 32;
    if ( v3 >= 6 )
    {
      v4 = 0;
      for ( i = (unsigned int *)((char *)a1 + 44); ; i += 8 )
      {
        result = RtlSubscribeWnfStateChangeNotification(
                   (char *)a1 + 32 * v4 + 48,
                   *((_QWORD *)a1 + 4 * v4 + 3),
                   *i,
                   SstpOnStateChanged,
                   a1,
                   0LL,
                   0,
                   0);
        if ( (int)result < 0 )
          break;
        if ( ++v4 >= 6 )
        {
          RtlAcquireSRWLockExclusive(a1);
          UniqueThread = (int)NtCurrentTeb()->ClientId.UniqueThread;
          *((_DWORD *)a1 + 4) |= 1u;
          *((_DWORD *)a1 + 2) = UniqueThread;
          SstpPublish(a1);
          *((_DWORD *)a1 + 2) = 0;
          *((_DWORD *)a1 + 3) = 1;
          RtlReleaseSRWLockExclusive(a1);
          return 0LL;
        }
      }
      return result;
    }
  }
  return result;
}
