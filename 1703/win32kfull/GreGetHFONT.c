/*
 * XREFs of GreGetHFONT @ 0x1C027E024
 * Callers:
 *     xxxDrawState @ 0x1C0219860 (xxxDrawState.c)
 *     IsSysFontAndDefaultMode @ 0x1C023A4A4 (IsSysFontAndDefaultMode.c)
 * Callees:
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C00751D0 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C0075330 (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 */

__int64 __fastcall GreGetHFONT(HDC a1)
{
  __int64 v1; // rbx
  DC *v3[3]; // [rsp+20h] [rbp-18h] BYREF

  v1 = 0LL;
  v3[1] = 0LL;
  XDCOBJ::vLock(v3, a1);
  if ( v3[0] )
  {
    v1 = *(_QWORD *)(*((_QWORD *)v3[0] + 10) + 176LL);
    XDCOBJ::RestoreAttributes((XDCOBJ *)v3);
    _InterlockedDecrement((volatile signed __int32 *)v3[0] + 3);
  }
  return v1;
}
