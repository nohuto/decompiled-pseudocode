/*
 * XREFs of ?xxxSetPKLinThreads@@YAXPEAUtagKL@@0@Z @ 0x1C0072808
 * Callers:
 *     ?xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_INTERNAL@@PEBGII@Z @ 0x1C0071C80 (-xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_IN.c)
 * Callees:
 *     HMAssignmentLock @ 0x1C0017670 (HMAssignmentLock.c)
 *     xxxChangeForegroundKeyboardTable @ 0x1C0071180 (xxxChangeForegroundKeyboardTable.c)
 *     ?GetThreadsWithPKL@@YAIPEAPEAPEAUtagTHREADINFO@@PEAU_TL@@PEAUtagKL@@@Z @ 0x1C00728D0 (-GetThreadsWithPKL@@YAIPEAPEAPEAUtagTHREADINFO@@PEAU_TL@@PEAUtagKL@@@Z.c)
 *     ApiSetEditionImmActivateAndUnloadThreadsLayout @ 0x1C013A158 (ApiSetEditionImmActivateAndUnloadThreadsLayout.c)
 */

void __fastcall xxxSetPKLinThreads(struct tagKL *a1, struct tagKL *a2)
{
  __int64 ThreadsWithPKL; // rsi
  int v5; // r8d
  struct tagTHREADINFO **v6; // r14
  __int128 v7; // [rsp+30h] [rbp-48h]
  __int128 v8; // [rsp+40h] [rbp-38h] BYREF
  _BYTE v9[32]; // [rsp+50h] [rbp-28h] BYREF
  struct tagTHREADINFO **v10; // [rsp+80h] [rbp+8h] BYREF

  ThreadsWithPKL = GetThreadsWithPKL(&v10, (struct _TL *)v9, a2);
  if ( a1 && gptiForeground && *((struct tagKL **)gptiForeground + 52) == a2 )
    xxxChangeForegroundKeyboardTable(a2, a1);
  if ( (_DWORD)ThreadsWithPKL )
  {
    if ( a2 )
    {
      ApiSetEditionImmActivateAndUnloadThreadsLayout((_DWORD)v10, ThreadsWithPKL, v5, (_DWORD)a1, *((_DWORD *)a2 + 10));
    }
    else
    {
      v6 = v10;
      *((_QWORD *)&v7 + 1) = a1;
      do
      {
        *(_QWORD *)&v7 = (char *)*v6 + 416;
        v8 = v7;
        HMAssignmentLock((__int64 **)&v8);
        ++v6;
        --ThreadsWithPKL;
      }
      while ( ThreadsWithPKL );
    }
    PopAndFreeAlwaysW32ThreadLock(v9);
  }
  if ( a2 )
  {
    if ( *((struct tagKL **)a2 + 2) != a1 )
    {
      *(_QWORD *)(*((_QWORD *)a1 + 3) + 16LL) = *((_QWORD *)a1 + 2);
      *(_QWORD *)(*((_QWORD *)a1 + 2) + 24LL) = *((_QWORD *)a1 + 3);
      *((_QWORD *)a1 + 2) = *((_QWORD *)a2 + 2);
      *((_QWORD *)a1 + 3) = a2;
      *(_QWORD *)(*((_QWORD *)a2 + 2) + 24LL) = a1;
      *((_QWORD *)a2 + 2) = a1;
    }
  }
}
