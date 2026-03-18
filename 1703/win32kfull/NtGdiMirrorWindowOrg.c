/*
 * XREFs of NtGdiMirrorWindowOrg @ 0x1C028E4B0
 * Callers:
 *     <none>
 * Callees:
 *     ?vUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C00750D4 (-vUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     ?MirrorWindowOrg@DC@@QEAAXXZ @ 0x1C007B198 (-MirrorWindowOrg@DC@@QEAAXXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C007E0BC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 */

__int64 __fastcall NtGdiMirrorWindowOrg(HDC a1)
{
  unsigned int v1; // ebx
  DC *v3[3]; // [rsp+20h] [rbp-18h] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v3, a1);
  v1 = 0;
  if ( v3[0] )
  {
    DC::MirrorWindowOrg(v3[0]);
    XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v3);
    return 1;
  }
  else
  {
    XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v3);
  }
  return v1;
}
