/*
 * XREFs of EditionPostRawMouseInputMessage @ 0x1C0052930
 * Callers:
 *     ?xxxMoveEventAbsolute@@YA?AW4_CommitMousePosAndMoveResult@@JJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00HHH@Z @ 0x1C00555DC (-xxxMoveEventAbsolute@@YA-AW4_CommitMousePosAndMoveResult@@JJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00HHH@.c)
 * Callees:
 *     AllocateHidData @ 0x1C00072D4 (AllocateHidData.c)
 *     FreeHidData @ 0x1C0009C90 (FreeHidData.c)
 *     RawInputRequestedForMouse @ 0x1C0052C90 (RawInputRequestedForMouse.c)
 *     PostInputMessage @ 0x1C009ED18 (PostInputMessage.c)
 */

__int64 __fastcall EditionPostRawMouseInputMessage(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  __int64 v6; // r8
  __int64 v7; // r10
  __int64 v8; // r12
  __int64 *v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // r15
  __int64 v13; // rax
  char v14; // r13
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rdi
  __int64 v18; // rbx
  __int64 *v19; // rsi
  __int64 v20; // rax
  __int64 v21; // rcx
  unsigned int v22; // ebp
  int v23; // r11d
  __int64 v24; // rdx
  __int64 v25; // r10
  __int64 v26; // r9
  unsigned __int64 v27; // rax
  unsigned __int64 v28; // rax
  __int64 v29; // r14
  __int64 v30; // r9
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rcx
  __int64 v34; // rbx
  __int64 HidData; // rax
  __int64 v36; // rsi
  __int64 v37; // rcx
  __int64 v38; // rdx

  v8 = 0LL;
  if ( !(unsigned int)RawInputRequestedForMouse() )
    return 0LL;
  if ( v7 )
  {
    if ( *(_DWORD *)(v7 + 92) == 2 )
      v38 = *(_QWORD *)(v7 + 80);
    else
      v38 = 0LL;
    v10 = (__int64 *)(*(_QWORD *)(v38 + 16) + 408LL);
  }
  else
  {
    v10 = (__int64 *)gpqForeground;
  }
  v11 = *v10;
  if ( *(_DWORD *)v6 == 2 )
    v12 = *(_QWORD *)(v6 + 8);
  else
    v12 = 0LL;
  v13 = 0LL;
  v14 = 1;
  if ( v11 )
  {
    v15 = *(_QWORD *)(v11 + 104);
    if ( v15 )
      v16 = *(_QWORD *)(v15 + 16);
    else
      v16 = *(_QWORD *)(v11 + 88);
    v13 = *(_QWORD *)(*(_QWORD *)(v16 + 400) + 784LL);
  }
  v17 = v11;
  if ( v13 && (*(_DWORD *)(v13 + 100) & 1) != 0 )
  {
    v31 = *(_QWORD *)(v11 + 104);
    if ( v31 )
      v32 = *(_QWORD *)(v31 + 16);
    else
      v32 = *(_QWORD *)(v11 + 88);
    v33 = *(_QWORD *)(*(_QWORD *)(v32 + 400) + 784LL);
    v34 = *(_QWORD *)(v33 + 64);
    if ( v34 )
      v17 = *(_QWORD *)(*(_QWORD *)(v34 + 16) + 408LL);
    HidData = AllocateHidData(v12, 0, 24LL, 0LL, *(_QWORD *)(v33 + 64));
    v36 = HidData;
    if ( !HidData )
      return 0LL;
    v37 = *(_QWORD *)HidData;
    *(_OWORD *)(HidData + 56) = *(_OWORD *)a4;
    *(_QWORD *)(HidData + 72) = *(_QWORD *)(a4 + 16);
    if ( (unsigned int)PostInputMessage(
                         v17,
                         v34,
                         255LL,
                         0LL,
                         v37,
                         a2,
                         0LL,
                         *(unsigned int *)(a4 + 20),
                         0,
                         0LL,
                         0LL,
                         0LL) )
      v14 = 0;
    else
      FreeHidData(v36);
  }
  if ( gHidCounters[1] )
  {
    v18 = 0LL;
    v19 = (__int64 *)RawInputManagerObject::gHidRequestTable[4];
    if ( v17 )
    {
      v20 = *(_QWORD *)(v17 + 104);
      v21 = v20 ? *(_QWORD *)(v20 + 16) : *(_QWORD *)(v17 + 88);
      v22 = *(_DWORD *)(v17 + 420);
      v8 = *(_QWORD *)(v21 + 400);
      v18 = *(_QWORD *)(v17 + 420);
    }
    else
    {
      v22 = 0;
    }
    for ( ; v19 != &RawInputManagerObject::gHidRequestTable[4]; v19 = (__int64 *)*v19 )
    {
      v23 = *((_DWORD *)v19 + 25);
      if ( (v23 & 4) != 0 )
      {
        v24 = v19[8];
        if ( v24 )
        {
          if ( *(char *)(v24 + 60) >= 0 && *(char *)(v24 + 59) >= 0 && *(_QWORD *)(v24 + 24) == grpdeskRitInput )
          {
            v25 = *(_QWORD *)(v24 + 16);
            v26 = *(_QWORD *)(v25 + 400);
            v27 = *(_QWORD *)(v26 + 832);
            if ( !gbEnforceUIPI
              || (unsigned int)v27 > v22
              || (_DWORD)v27 == v22
              && ((v28 = HIDWORD(v27), (_DWORD)v28 == HIDWORD(v18)) || (_DWORD)v28 == -1 || HIDWORD(v18) == -1)
              || *(int *)(v26 + 12) < 0 )
            {
              if ( v26 != v8 && ((v23 & 8) == 0 || v14) )
              {
                v29 = AllocateHidData(v12, 0, 24LL, 1LL, v19[8]);
                if ( !v29 )
                  return 0LL;
                v30 = *(_QWORD *)v29;
                *(_OWORD *)(v29 + 56) = *(_OWORD *)a4;
                *(_QWORD *)(v29 + 72) = *(_QWORD *)(a4 + 16);
                if ( !(unsigned int)PostInputMessage(
                                      *(_QWORD *)(*(_QWORD *)(v19[8] + 16) + 408LL),
                                      v19[8],
                                      255LL,
                                      1LL,
                                      v30,
                                      a2,
                                      0LL,
                                      *(unsigned int *)(a4 + 20),
                                      0,
                                      0LL,
                                      0LL,
                                      0LL) )
                  FreeHidData(v29);
              }
            }
            else
            {
              EtwTraceUIPIInputError(v25, 0LL, v17, v18, 5);
            }
          }
        }
      }
    }
  }
  return 1LL;
}
