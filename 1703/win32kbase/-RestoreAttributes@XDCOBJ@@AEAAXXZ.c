/*
 * XREFs of ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C0031E20
 * Callers:
 *     ?GreSetPrivateDeviceGammaRamp@@YAHPEAUHDC__@@PEAXH@Z @ 0x1C00020C4 (-GreSetPrivateDeviceGammaRamp@@YAHPEAUHDC__@@PEAXH@Z.c)
 *     GreGetClipBox @ 0x1C0020E10 (GreGetClipBox.c)
 *     GreGetDCPoint @ 0x1C00286C0 (GreGetDCPoint.c)
 *     GreMarkUndeletableDC @ 0x1C0028EA0 (GreMarkUndeletableDC.c)
 *     GreIsRendering @ 0x1C002A1F0 (GreIsRendering.c)
 *     GreGetDeviceCaps @ 0x1C002A9C0 (GreGetDeviceCaps.c)
 *     GreSelectVisRgn @ 0x1C002B720 (GreSelectVisRgn.c)
 *     GreCreateCompatibleDC @ 0x1C002BB10 (GreCreateCompatibleDC.c)
 *     ?ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z @ 0x1C002CDEC (-ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z.c)
 *     ?vCleanupDCs@@YAXK@Z @ 0x1C002F598 (-vCleanupDCs@@YAXK@Z.c)
 *     ReleaseCacheDC @ 0x1C002FBD0 (ReleaseCacheDC.c)
 *     ?vAltUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C003152C (-vAltUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C0031DF4 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C0031EE0 (-vUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     _GetDCEx @ 0x1C0033980 (_GetDCEx.c)
 *     GreGetBounds @ 0x1C0035DB0 (GreGetBounds.c)
 *     NtGdiDeleteObjectApp @ 0x1C003ED30 (NtGdiDeleteObjectApp.c)
 *     GreIntersectClipRect @ 0x1C0040CC0 (GreIntersectClipRect.c)
 *     DestroyCacheDC @ 0x1C0044760 (DestroyCacheDC.c)
 *     NtGdiDdDDIOpenAdapterFromHdc @ 0x1C005F3E0 (NtGdiDdDDIOpenAdapterFromHdc.c)
 *     GreMarkDCUnreadable @ 0x1C006362C (GreMarkDCUnreadable.c)
 *     GreValidateVisrgn @ 0x1C007BB98 (GreValidateVisrgn.c)
 *     GreMarkDeletableDC @ 0x1C0092250 (GreMarkDeletableDC.c)
 * Callees:
 *     <none>
 */

void __fastcall XDCOBJ::RestoreAttributes(XDCOBJ *this)
{
  _OWORD *v1; // rax
  _OWORD *v2; // rdx
  __int64 v3; // r8

  if ( *((_DWORD *)this + 2) )
  {
    v1 = (_OWORD *)(*(_QWORD *)this + 984LL);
    if ( *(_OWORD **)(*(_QWORD *)this + 80LL) == v1 )
    {
      if ( !*((_DWORD *)this + 3) )
      {
        v2 = *(_OWORD **)(*(_QWORD *)this + 976LL);
        v3 = 3LL;
        do
        {
          *v2 = *v1;
          v2[1] = v1[1];
          v2[2] = v1[2];
          v2[3] = v1[3];
          v2[4] = v1[4];
          v2[5] = v1[5];
          v2[6] = v1[6];
          v2 += 8;
          *(v2 - 1) = v1[7];
          v1 += 8;
          --v3;
        }
        while ( v3 );
        *v2 = *v1;
        v2[1] = v1[1];
      }
      *(_QWORD *)(*(_QWORD *)this + 80LL) = *(_QWORD *)(*(_QWORD *)this + 976LL);
      *((_DWORD *)this + 2) = 0;
    }
  }
}
