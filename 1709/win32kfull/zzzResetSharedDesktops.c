/*
 * XREFs of zzzResetSharedDesktops @ 0x1C00E3D10
 * Callers:
 *     <none>
 * Callees:
 *     zzzInternalSetCursorPos @ 0x1C0051D98 (zzzInternalSetCursorPos.c)
 *     CalcVisRgn @ 0x1C006A5C0 (CalcVisRgn.c)
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x1C0071F0C (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     zzzUpdateWindowsAfterModeChange @ 0x1C00E662C (zzzUpdateWindowsAfterModeChange.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall zzzResetSharedDesktops(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // edi
  unsigned int v4; // esi
  __int64 v5; // rbx
  __int128 v6; // xmm1
  __int64 i; // r9
  __int64 *v8; // rcx
  _DWORD *v9; // r9
  HRGN EmptyRgn; // [rsp+30h] [rbp+8h] BYREF
  __int64 v12; // [rsp+48h] [rbp+20h]

  v3 = a3;
  v4 = a2;
  v5 = a1;
  v6 = *(_OWORD *)(*gpDispInfo + 24LL);
  for ( i = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 16LL); i; i = *(_QWORD *)(i + 32) )
  {
    *(_OWORD *)(*(_QWORD *)(*(_QWORD *)(i + 8) + 16LL) + 128LL) = v6;
    a1 = *(_QWORD *)(*(_QWORD *)(i + 8) + 16LL);
    *(_OWORD *)(a1 + 144) = v6;
  }
  EmptyRgn = (HRGN)CreateEmptyRgn(a1, a2, a3, 0LL);
  CalcVisRgn(&EmptyRgn, *(_QWORD *)(*(_QWORD *)(v5 + 8) + 16LL), *(struct tagWND **)(*(_QWORD *)(v5 + 8) + 16LL), 1u);
  GreLockVisRgn(*(_QWORD *)(gpDispInfo + 32LL));
  GreSelectVisRgn(*(_QWORD *)(gpDispInfo + 48LL), EmptyRgn, 1LL);
  GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 32LL));
  zzzUpdateWindowsAfterModeChange(v4, v3);
  v8 = *(__int64 **)(v5 + 8);
  if ( (*(_DWORD *)(*v8 + 52) & 1) == 0 )
    zzzLockDisplayAreaAndInvalidateDCCache(v8[2], 0, 0LL);
  CCursorClip::ClearClip(gpCursorClip);
  v9 = *(_DWORD **)(*(_QWORD *)(gpDispInfo + 88LL) + 40LL);
  LODWORD(v12) = (v9[9] - v9[7]) / 2;
  HIDWORD(v12) = (v9[10] - v9[8]) / 2;
  *(_QWORD *)gptSSCursor = v12;
  return zzzInternalSetCursorPos(v12, HIDWORD(v12), 2, 0);
}
