/*
 * XREFs of ?CheckTopmost@@YAHPEAUtagWINDOWPOS@@@Z @ 0x1C00575BC
 * Callers:
 *     ?ZOrderByOwner@@YAPEAUtagSMWP@@PEAU1@@Z @ 0x1C0056D64 (-ZOrderByOwner@@YAPEAUtagSMWP@@PEAU1@@Z.c)
 *     ?xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z @ 0x1C0068CCC (-xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z.c)
 * Callees:
 *     CalcForegroundInsertAfter @ 0x1C00587B8 (CalcForegroundInsertAfter.c)
 *     GetLastTopMostWindow @ 0x1C0058904 (GetLastTopMostWindow.c)
 *     GetTopMostInsertAfter @ 0x1C01AB1DC (GetTopMostInsertAfter.c)
 */

__int64 __fastcall CheckTopmost(struct tagWINDOWPOS *a1)
{
  __int64 v1; // rbx
  __int64 v3; // rsi
  int v4; // edx
  __int64 v6; // rax
  __int64 *v7; // rax
  __int64 *v8; // rax
  __int64 v9; // rax
  __int64 *v10; // rax
  __int64 *LastTopMostWindow; // rax
  __int64 v12; // rax
  _QWORD *TopMostInsertAfter; // rax
  _QWORD *v14; // rax

  v1 = 0LL;
  v3 = *(_QWORD *)(gpKernelHandleTable + 24LL * (unsigned __int16)*(_DWORD *)a1);
  v4 = *((_DWORD *)a1 + 8);
  if ( (v4 & 0x14) == 0
    && *((_QWORD *)a1 + 1) <= 0xFFFFFFFFFFFFFFFDuLL
    && v3 != *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v3 + 16) + 408LL) + 120LL) )
  {
    *((_QWORD *)a1 + 1) = 0LL;
  }
  if ( (v4 & 4) != 0 )
    return 0LL;
  v6 = *((_QWORD *)a1 + 1);
  if ( v6 != 1 )
  {
    switch ( v6 )
    {
      case -2LL:
        if ( (*(_BYTE *)(v3 + 64) & 8) == 0
          || ((LastTopMostWindow = (__int64 *)GetLastTopMostWindow(v3)) == 0LL
            ? (v12 = 0LL)
            : (v12 = *LastTopMostWindow),
              *((_QWORD *)a1 + 1) = v12,
              v12 == *(_QWORD *)a1) )
        {
          if ( (*(_WORD *)(v3 + 82) & 0x3FFF) != 0x29D )
          {
            v10 = *(__int64 **)(v3 + 96);
            if ( v10 )
              v1 = *v10;
          }
          *((_QWORD *)a1 + 1) = v1;
        }
        break;
      case -1LL:
        if ( gHardErrorHandler && (TopMostInsertAfter = (_QWORD *)GetTopMostInsertAfter(v3)) != 0LL )
          *((_QWORD *)a1 + 1) = *TopMostInsertAfter;
        else
          *((_QWORD *)a1 + 1) = 0LL;
        return 1LL;
      case 0LL:
        if ( (*(_BYTE *)(v3 + 64) & 8) == 0 )
        {
          v7 = (__int64 *)CalcForegroundInsertAfter(v3);
          if ( v7 )
            v1 = *v7;
          *((_QWORD *)a1 + 1) = v1;
          return 0LL;
        }
        goto LABEL_9;
      default:
        v8 = (__int64 *)GetLastTopMostWindow(v3);
        if ( v8 )
          v9 = *v8;
        else
          v9 = 0LL;
        if ( *((_QWORD *)a1 + 1) == v9 )
          return 0LL;
        if ( (*(_BYTE *)(*(_QWORD *)(gpKernelHandleTable + 24LL * (unsigned __int16)*((_DWORD *)a1 + 2)) + 64LL) & 8) != 0 )
        {
          if ( (*(_BYTE *)(v3 + 64) & 8) != 0 )
          {
LABEL_9:
            if ( gHardErrorHandler )
            {
              v14 = (_QWORD *)GetTopMostInsertAfter(v3);
              if ( v14 )
                *((_QWORD *)a1 + 1) = *v14;
            }
            return 0LL;
          }
          return 1LL;
        }
        if ( (*(_BYTE *)(v3 + 64) & 8) == 0 )
          return 0LL;
        break;
    }
  }
  return 2LL;
}
