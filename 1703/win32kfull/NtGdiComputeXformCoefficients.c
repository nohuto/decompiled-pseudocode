/*
 * XREFs of NtGdiComputeXformCoefficients @ 0x1C00F40C0
 * Callers:
 *     <none>
 * Callees:
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C00751D0 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C0075330 (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C0095500 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 */

__int64 __fastcall NtGdiComputeXformCoefficients(HDC a1)
{
  unsigned int v1; // ebx
  int v2; // ebx
  DC *v4[2]; // [rsp+20h] [rbp-28h] BYREF
  _QWORD v5[3]; // [rsp+30h] [rbp-18h] BYREF

  v1 = 0;
  v4[1] = 0LL;
  XDCOBJ::vLock(v4, a1);
  if ( v4[0] )
  {
    EXFORMOBJ::vQuickInit((EXFORMOBJ *)v5, (struct XDCOBJ *)v4, 516);
    v2 = *(_DWORD *)(v5[0] + 32LL);
    XDCOBJ::RestoreAttributes((XDCOBJ *)v4);
    _InterlockedDecrement((volatile signed __int32 *)v4[0] + 3);
    return v2 & 1;
  }
  return v1;
}
