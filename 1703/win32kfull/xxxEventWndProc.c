/*
 * XREFs of xxxEventWndProc @ 0x1C00C39F0
 * Callers:
 *     <none>
 * Callees:
 *     ClientEventCallback @ 0x1C00073BC (ClientEventCallback.c)
 *     xxxDefWindowProc @ 0x1C003E580 (xxxDefWindowProc.c)
 *     HMValidateHandleNoRip @ 0x1C00C3ABC (HMValidateHandleNoRip.c)
 *     xxxChangeMonitorFlags @ 0x1C010FD54 (xxxChangeMonitorFlags.c)
 */

__int64 __fastcall xxxEventWndProc(__int64 a1, __int64 a2, __int64 a3, unsigned __int16 *a4)
{
  unsigned int v6; // esi
  _QWORD *v9; // rcx
  __int64 v10; // rcx

  v6 = a2;
  if ( *(_WORD *)(a1 + 82) )
    return 0LL;
  v9 = *(_QWORD **)(a1 + 392);
  if ( v9 && *(_DWORD *)(a1 + 252) >= 8u )
  {
    LOBYTE(a2) = 9;
    v10 = HMValidateHandleNoRip(*v9, a2);
  }
  else
  {
    v10 = 0LL;
  }
  if ( v10 )
  {
    if ( v6 == 2 )
    {
      xxxChangeMonitorFlags(v10, 0LL);
      return 0LL;
    }
    if ( v6 == 60 )
    {
      if ( (*(_DWORD *)a4 & *(_DWORD *)(v10 + 40)) != 0 && a4[2]
        || (*(_DWORD *)a4 & *(_DWORD *)(v10 + 40)) == 0 && !a4[2] )
      {
        ClientEventCallback(*(_QWORD *)(v10 + 56), a4);
      }
      return 0LL;
    }
  }
  return xxxDefWindowProc((struct tagWND *)a1, v6, a3, (__int64)a4);
}
