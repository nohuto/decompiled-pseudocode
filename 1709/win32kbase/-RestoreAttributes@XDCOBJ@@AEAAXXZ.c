/*
 * XREFs of ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C004C3D0
 * Callers:
 *     _GetDCEx @ 0x1C0049920 (_GetDCEx.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C004AAC0 (--1DCOBJ@@QEAA@XZ.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C004C224 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?vAltUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C004C498 (-vAltUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z @ 0x1C0050E30 (-ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z.c)
 *     GreIntersectClipRect @ 0x1C0055340 (GreIntersectClipRect.c)
 *     GreCreateCompatibleDC @ 0x1C0055490 (GreCreateCompatibleDC.c)
 *     ReleaseCacheDC @ 0x1C0057AF0 (ReleaseCacheDC.c)
 *     GreGetDeviceCaps @ 0x1C005CBF0 (GreGetDeviceCaps.c)
 *     GreGetBounds @ 0x1C006FD70 (GreGetBounds.c)
 * Callees:
 *     <none>
 */

void __fastcall XDCOBJ::RestoreAttributes(XDCOBJ *this)
{
  _OWORD *v1; // rdx
  _OWORD *v2; // r8
  __int64 v3; // rax

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
