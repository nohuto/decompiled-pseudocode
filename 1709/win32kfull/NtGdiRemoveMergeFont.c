/*
 * XREFs of NtGdiRemoveMergeFont @ 0x1C0257ED0
 * Callers:
 *     <none>
 * Callees:
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C002C1E0 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C002C344 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?bRemoveMergeFont@XDCOBJ@@QEAAHU_UNIVERSAL_FONT_ID@@@Z @ 0x1C028877C (-bRemoveMergeFont@XDCOBJ@@QEAAHU_UNIVERSAL_FONT_ID@@@Z.c)
 */

DC *__fastcall NtGdiRemoveMergeFont(HDC a1, char a2)
{
  DC *result; // rax
  unsigned int v4; // ebx
  DC *v5; // [rsp+20h] [rbp-18h] BYREF
  int v6; // [rsp+28h] [rbp-10h]
  int v7; // [rsp+2Ch] [rbp-Ch]

  v6 = 0;
  v7 = 0;
  XDCOBJ::vLock(&v5, a1);
  result = v5;
  if ( v5 )
  {
    if ( (*((_DWORD *)v5 + 9) & 1) != 0 )
    {
      v4 = 0;
    }
    else
    {
      if ( (a2 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v4 = XDCOBJ::bRemoveMergeFont(&v5);
    }
    XDCOBJ::vUnlockFast((XDCOBJ *)&v5);
    return (DC *)v4;
  }
  return result;
}
