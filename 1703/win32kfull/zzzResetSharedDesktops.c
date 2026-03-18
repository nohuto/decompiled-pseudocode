/*
 * XREFs of zzzResetSharedDesktops @ 0x1C00A1180
 * Callers:
 *     <none>
 * Callees:
 *     CalcVisRgn @ 0x1C0066160 (CalcVisRgn.c)
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x1C006CCF4 (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     zzzUpdateWindowsAfterModeChange @ 0x1C009DAEC (zzzUpdateWindowsAfterModeChange.c)
 *     zzzInternalSetCursorPos @ 0x1C00BBC30 (zzzInternalSetCursorPos.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall zzzResetSharedDesktops(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // edi
  int v4; // esi
  __int64 v5; // rbx
  __int64 i; // r9
  __int64 *v7; // rcx
  _DWORD *v8; // r9
  HRGN EmptyRgn; // [rsp+30h] [rbp+8h] BYREF
  __int64 v11; // [rsp+48h] [rbp+20h]

  v3 = a3;
  v4 = a2;
  v5 = a1;
  for ( i = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 16LL); i; i = *(_QWORD *)(i + 32) )
  {
    *(_OWORD *)(*(_QWORD *)(*(_QWORD *)(i + 8) + 16LL) + 128LL) = *(_OWORD *)(*gpDispInfo + 24LL);
    a2 = *gpDispInfo;
    a1 = *(_QWORD *)(*(_QWORD *)(i + 8) + 16LL);
    *(_OWORD *)(a1 + 144) = *(_OWORD *)(*gpDispInfo + 24LL);
  }
  EmptyRgn = (HRGN)CreateEmptyRgn(a1, a2, a3, i);
  CalcVisRgn(&EmptyRgn, *(_QWORD *)(*(_QWORD *)(v5 + 8) + 16LL), *(struct tagWND **)(*(_QWORD *)(v5 + 8) + 16LL), 1u);
  GreLockVisRgn(*(_QWORD *)(gpDispInfo + 32LL));
  GreSelectVisRgn(*(_QWORD *)(gpDispInfo + 48LL), EmptyRgn, 1LL);
  GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 32LL));
  zzzUpdateWindowsAfterModeChange(v4, v3);
  v7 = *(__int64 **)(v5 + 8);
  if ( (*(_DWORD *)(*v7 + 52) & 1) == 0 )
    zzzLockDisplayAreaAndInvalidateDCCache(v7[2], 0, 0LL);
  CCursorClip::ClearClip(gpCursorClip);
  v8 = *(_DWORD **)(*(_QWORD *)(gpDispInfo + 88LL) + 40LL);
  LODWORD(v11) = (v8[9] - v8[7]) / 2;
  HIDWORD(v11) = (v8[10] - v8[8]) / 2;
  *(_QWORD *)gptSSCursor = v11;
  return zzzInternalSetCursorPos((unsigned int)v11, HIDWORD(v11), 2LL);
}
