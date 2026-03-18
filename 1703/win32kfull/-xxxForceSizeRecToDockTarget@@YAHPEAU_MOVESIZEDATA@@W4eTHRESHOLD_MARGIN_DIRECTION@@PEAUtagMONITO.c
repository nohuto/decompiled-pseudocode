/*
 * XREFs of ?xxxForceSizeRecToDockTarget@@YAHPEAU_MOVESIZEDATA@@W4eTHRESHOLD_MARGIN_DIRECTION@@PEAUtagMONITOR@@PEAKPEAUtagRECT@@PEAPEAUtagCHECKPOINT@@@Z @ 0x1C01F2DDC
 * Callers:
 *     ?xxxProgrammaticSemiMaximize@@YAHPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@@Z @ 0x1C01F43E4 (-xxxProgrammaticSemiMaximize@@YAHPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTIO.c)
 *     xxxEvaluateDestRectForMonitorMigration @ 0x1C01F7344 (xxxEvaluateDestRectForMonitorMigration.c)
 * Callees:
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     ?xxxSizeOrMoveRect@@YAHPEAU_MOVESIZEDATA@@KPEAKPEAUtagRECT@@PEAPEAUtagCHECKPOINT@@@Z @ 0x1C01F470C (-xxxSizeOrMoveRect@@YAHPEAU_MOVESIZEDATA@@KPEAKPEAUtagRECT@@PEAPEAUtagCHECKPOINT@@@Z.c)
 */

__int64 __fastcall xxxForceSizeRecToDockTarget(
        struct _MOVESIZEDATA *a1,
        int a2,
        __int64 a3,
        unsigned int *a4,
        struct tagRECT *a5,
        struct tagCHECKPOINT **a6)
{
  __int64 v8; // r10
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // r8
  __int64 v13; // rax
  __int16 v14; // r9
  int v15; // esi
  __int64 v16; // rdi
  char *v17; // rbx
  char *v18; // rdx
  char *v19; // rcx
  __int64 v20; // r8
  char v21; // al
  _BYTE *v22; // rax
  __int64 v23; // rdx
  __int64 result; // rax
  char *v25; // rdx
  char v26; // cl
  char v27; // [rsp+30h] [rbp-48h] BYREF

  v8 = a2;
  v10 = *(_QWORD *)a1;
  if ( (*(_DWORD *)(*(_QWORD *)a1 + 368LL) & 0xF) == 0
    && (v11 = *(_QWORD *)(*(_QWORD *)(v10 + 16) + 408LL)) != 0
    && (*(_DWORD *)(**(_QWORD **)(v11 + 8) + 52LL) & 1) != 0 )
  {
    v12 = *(_QWORD *)(a3 + 40) + 92LL;
  }
  else if ( (*(_DWORD *)(*(_QWORD *)a1 + 368LL) & 0xF) == 1
         && (v13 = *(_QWORD *)(*(_QWORD *)(v10 + 16) + 408LL)) != 0
         && (*(_DWORD *)(**(_QWORD **)(v13 + 8) + 52LL) & 1) != 0 )
  {
    v12 = *(_QWORD *)(a3 + 40) + 108LL;
  }
  else
  {
    v12 = *(_QWORD *)(a3 + 40) + 76LL;
  }
  if ( (_DWORD)v8 == 2 )
  {
    v14 = *(_WORD *)(v12 + 8) - 1;
    LOWORD(v15) = *(_DWORD *)(v12 + 4) + (*(_DWORD *)(v12 + 12) - *(_DWORD *)(v12 + 4)) / 2;
  }
  else if ( (_DWORD)v8 == 1 )
  {
    v14 = *(_WORD *)v12;
    v15 = *(_DWORD *)(v12 + 4) + (*(_DWORD *)(v12 + 12) - *(_DWORD *)(v12 + 4)) / 2;
  }
  else
  {
    if ( (_DWORD)v8 )
      return 0LL;
    LOWORD(v15) = *(_WORD *)(v12 + 4);
    v14 = *(_DWORD *)v12 + (*(_DWORD *)(v12 + 8) - *(_DWORD *)v12) / 2;
  }
  v16 = 7LL;
  v17 = (char *)(v8 + a3 + 424);
  v18 = &v27;
  v19 = v17;
  v20 = 7LL;
  do
  {
    v21 = *v19;
    v19 += 4;
    *v18++ = v21;
    --v20;
  }
  while ( v20 );
  v22 = (_BYTE *)(v8 + a3 + 424);
  v23 = 7LL;
  do
  {
    *v22 = 1;
    v22 += 4;
    --v23;
  }
  while ( v23 );
  result = xxxSizeOrMoveRect(
             a1,
             (unsigned __int16)(*((_WORD *)a1 + 76) + v14) | ((unsigned __int16)(*((_WORD *)a1 + 78) + v15) << 16),
             a4,
             a5,
             a6);
  v25 = &v27;
  do
  {
    v26 = *v25++;
    *v17 = v26;
    v17 += 4;
    --v16;
  }
  while ( v16 );
  return result;
}
