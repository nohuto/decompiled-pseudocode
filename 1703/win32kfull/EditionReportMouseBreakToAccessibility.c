/*
 * XREFs of EditionReportMouseBreakToAccessibility @ 0x1C01106E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall EditionReportMouseBreakToAccessibility(__int64 a1, __int16 a2, unsigned __int64 *a3, int a4)
{
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rax

  if ( (HIDWORD(gMouseKeys) & 1) != 0 )
    gwMKButtonState &= ~a2;
  if ( (HIDWORD(gStickyKeys) & 1) == 0 )
    return 1LL;
  xxxUnlatchStickyKeys();
  if ( !a4 )
    return 1LL;
  if ( !gpqForeground )
    return 1LL;
  v7 = *(_QWORD *)(gpqForeground + 380LL);
  v8 = *a3;
  if ( !gbEnforceUIPI )
    return 1LL;
  if ( (unsigned int)v8 > (unsigned int)v7 )
    return 1LL;
  if ( (_DWORD)v8 == (_DWORD)v7 )
  {
    v9 = HIDWORD(v8);
    v10 = HIDWORD(v7);
    if ( (_DWORD)v9 == (_DWORD)v10 || (_DWORD)v9 == -1 || (_DWORD)v10 == -1 )
      return 1LL;
  }
  if ( *((_DWORD *)a3 + 2) )
    return 1LL;
  EtwTraceUIPIInputError(gptiCurrent, 0LL, gpqForeground, *(_QWORD *)(gpqForeground + 380LL), 1);
  return 0LL;
}
