/*
 * XREFs of xxxEventWndProc @ 0x1C0053E10
 * Callers:
 *     <none>
 * Callees:
 *     ClientEventCallback @ 0x1C000C52C (ClientEventCallback.c)
 *     HMValidateHandleNoRip @ 0x1C0053EA8 (HMValidateHandleNoRip.c)
 *     xxxDefWindowProc @ 0x1C0093900 (xxxDefWindowProc.c)
 *     xxxChangeMonitorFlags @ 0x1C0118BE0 (xxxChangeMonitorFlags.c)
 */

__int64 __fastcall xxxEventWndProc(__int64 a1, __int64 a2, __int64 a3, unsigned __int16 *a4)
{
  int v5; // edi
  __int64 v7; // rax

  v5 = a2;
  LOBYTE(a2) = 9;
  v7 = HMValidateHandleNoRip(**(_QWORD **)(a1 + 392), a2);
  if ( !v7 )
    return xxxDefWindowProc((struct tagWND *)a1);
  if ( v5 == 2 )
  {
    xxxChangeMonitorFlags(v7, 0LL);
    return 0LL;
  }
  if ( v5 != 60 )
    return xxxDefWindowProc((struct tagWND *)a1);
  if ( (*(_DWORD *)(v7 + 40) & *(_DWORD *)a4) != 0 )
  {
    if ( !a4[2] )
      return 0LL;
    goto LABEL_7;
  }
  if ( !a4[2] )
LABEL_7:
    ClientEventCallback(*(_QWORD *)(v7 + 56), a4);
  return 0LL;
}
