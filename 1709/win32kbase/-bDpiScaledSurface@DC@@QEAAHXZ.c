/*
 * XREFs of ?bDpiScaledSurface@DC@@QEAAHXZ @ 0x1C0051F20
 * Callers:
 *     ?vDeleteDCInternalWorker@@YAXPEAVXDCOBJ@@H@Z @ 0x1C0050890 (-vDeleteDCInternalWorker@@YAXPEAVXDCOBJ@@H@Z.c)
 *     ?vGet_sizlWindow@DC@@QEAAXPEAUtagSIZE@@@Z @ 0x1C0051EF0 (-vGet_sizlWindow@DC@@QEAAXPEAUtagSIZE@@@Z.c)
 *     ?prgnVisSnap@DC@@QEAAPEAVREGION@@XZ @ 0x1C0053114 (-prgnVisSnap@DC@@QEAAPEAVREGION@@XZ.c)
 *     ?vUpdateScaledRegions@DC@@QEAAXXZ @ 0x1C0053140 (-vUpdateScaledRegions@DC@@QEAAXXZ.c)
 *     ?bCompute@DC@@QEAAHXZ @ 0x1C0053630 (-bCompute@DC@@QEAAHXZ.c)
 *     ?prgnRao@DC@@QEAAPEAVREGION@@XZ @ 0x1C0053E24 (-prgnRao@DC@@QEAAPEAVREGION@@XZ.c)
 *     ?vSetDpiScaling@DC@@QEAAXVPOINTFL@@@Z @ 0x1C00EDCC8 (-vSetDpiScaling@DC@@QEAAXVPOINTFL@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DC::bDpiScaledSurface(DC *this)
{
  __int64 v1; // rax
  unsigned int v2; // ecx

  v1 = *((_QWORD *)this + 64);
  v2 = 0;
  if ( v1 )
    return (*(_DWORD *)(v1 + 116) & 0x800) != 0;
  return v2;
}
