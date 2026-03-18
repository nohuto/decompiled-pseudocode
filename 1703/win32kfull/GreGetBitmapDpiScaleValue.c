/*
 * XREFs of GreGetBitmapDpiScaleValue @ 0x1C01391FC
 * Callers:
 *     zzzUpdateWindowsAfterModeChange @ 0x1C009DAEC (zzzUpdateWindowsAfterModeChange.c)
 *     NtGdiGetBitmapDpiScaleValue @ 0x1C01391F0 (NtGdiGetBitmapDpiScaleValue.c)
 * Callees:
 *     bFToL @ 0x1C00DF104 (bFToL.c)
 */

__int64 __fastcall GreGetBitmapDpiScaleValue(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  unsigned int v4; // edi
  int v6; // eax
  unsigned int v7; // [rsp+38h] [rbp+10h] BYREF
  __int64 v8; // [rsp+40h] [rbp+18h]

  LOBYTE(a2) = 5;
  v2 = HmgShareLockCheck(a1, a2);
  v3 = v2;
  if ( !v2
    || (*(_DWORD *)(v2 + 116) & 0x800) == 0
    || (v8 = *(_QWORD *)(v2 + 596), v6 = bFToL(*(float *)&v8, (int *)&v7, 6), v4 = v7, !v6) )
  {
    v4 = 1;
  }
  if ( v3 )
    DEC_SHARE_REF_CNT(v3);
  return v4;
}
