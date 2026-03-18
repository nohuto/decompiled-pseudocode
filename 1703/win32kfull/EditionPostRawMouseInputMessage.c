/*
 * XREFs of EditionPostRawMouseInputMessage @ 0x1C00BD670
 * Callers:
 *     ?xxxMoveEventAbsolute@@YA?AW4_CommitMousePosAndMoveResult@@JJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00HHH@Z @ 0x1C00BBE1C (-xxxMoveEventAbsolute@@YA-AW4_CommitMousePosAndMoveResult@@JJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00HHH@.c)
 * Callees:
 *     AllocateHidData @ 0x1C0002474 (AllocateHidData.c)
 *     FreeHidData @ 0x1C0004F00 (FreeHidData.c)
 *     PostInputMessage @ 0x1C0049470 (PostInputMessage.c)
 *     RawInputRequestedForMouse @ 0x1C00BD9C8 (RawInputRequestedForMouse.c)
 */

__int64 __fastcall EditionPostRawMouseInputMessage(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v5; // r14d
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
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rcx
  InputTransform *v21; // rbx
  __int64 HidData; // rax
  __int64 v23; // rsi
  __int64 v24; // rcx
  __int64 v25; // rbx
  __int64 *v26; // rsi
  __int64 v27; // rax
  __int64 v28; // rcx
  unsigned int v29; // ebp
  int v30; // r11d
  __int64 v31; // rdx
  __int64 v32; // r10
  __int64 v33; // r9
  unsigned __int64 v34; // rax
  __int64 v35; // r14
  __int64 v36; // r9
  unsigned __int64 v37; // rax
  __int64 v38; // rdx
  int v39; // [rsp+B8h] [rbp+10h]

  v39 = a2;
  v5 = a2;
  v8 = 0LL;
  if ( !(unsigned int)RawInputRequestedForMouse(a1, a2, a3, a4) )
    return 0LL;
  if ( v7 )
  {
    if ( *(_DWORD *)(v7 + 92) == 2 )
      v38 = *(_QWORD *)(v7 + 80);
    else
      v38 = 0LL;
    v10 = (__int64 *)(*(_QWORD *)(v38 + 16) + 384LL);
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
    v15 = *(_QWORD *)(v11 + 72);
    if ( v15 )
      v16 = *(_QWORD *)(v15 + 16);
    else
      v16 = *(_QWORD *)(v11 + 56);
    v13 = *(_QWORD *)(*(_QWORD *)(v16 + 376) + 776LL);
  }
  v17 = v11;
  if ( v13 && (*(_DWORD *)(v13 + 100) & 1) != 0 )
  {
    v18 = *(_QWORD *)(v11 + 72);
    if ( v18 )
      v19 = *(_QWORD *)(v18 + 16);
    else
      v19 = *(_QWORD *)(v11 + 56);
    v20 = *(_QWORD *)(*(_QWORD *)(v19 + 376) + 776LL);
    v21 = *(InputTransform **)(v20 + 64);
    if ( v21 )
      v17 = *(_QWORD *)(*((_QWORD *)v21 + 2) + 384LL);
    HidData = AllocateHidData(v12, 0, 24LL, 0LL, *(_QWORD *)(v20 + 64));
    v23 = HidData;
    if ( !HidData )
      return 0LL;
    v24 = *(_QWORD *)HidData;
    *(_OWORD *)(HidData + 56) = *(_OWORD *)a4;
    *(_QWORD *)(HidData + 72) = *(_QWORD *)(a4 + 16);
    if ( (unsigned int)PostInputMessage(
                         (struct tagMLIST *)v17,
                         v21,
                         0xFFu,
                         0LL,
                         v24,
                         v5,
                         0LL,
                         *(unsigned int *)(a4 + 20),
                         0,
                         0LL,
                         0LL,
                         0LL) )
      v14 = 0;
    else
      FreeHidData(v23);
  }
  if ( gHidCounters[1] )
  {
    v25 = 0LL;
    v26 = (__int64 *)RawInputManagerObject::gHidRequestTable[4];
    if ( v17 )
    {
      v27 = *(_QWORD *)(v17 + 72);
      v28 = v27 ? *(_QWORD *)(v27 + 16) : *(_QWORD *)(v17 + 56);
      v29 = *(_DWORD *)(v17 + 380);
      v8 = *(_QWORD *)(v28 + 376);
      v25 = *(_QWORD *)(v17 + 380);
    }
    else
    {
      v29 = 0;
    }
    for ( ; v26 != &RawInputManagerObject::gHidRequestTable[4]; v26 = (__int64 *)*v26 )
    {
      v30 = *((_DWORD *)v26 + 25);
      if ( (v30 & 4) != 0 )
      {
        v31 = v26[8];
        if ( v31 )
        {
          if ( *(char *)(v31 + 60) >= 0 && *(char *)(v31 + 59) >= 0 && *(_QWORD *)(v31 + 24) == grpdeskRitInput )
          {
            v32 = *(_QWORD *)(v31 + 16);
            v33 = *(_QWORD *)(v32 + 376);
            v34 = *(_QWORD *)(v33 + 824);
            if ( !gbEnforceUIPI
              || (unsigned int)v34 > v29
              || (_DWORD)v34 == v29
              && ((v37 = HIDWORD(v34), (_DWORD)v37 == HIDWORD(v25)) || (_DWORD)v37 == -1 || HIDWORD(v25) == -1)
              || *(int *)(v33 + 12) < 0 )
            {
              if ( v33 != v8 && ((v30 & 8) == 0 || v14) )
              {
                v35 = AllocateHidData(v12, 0, 24LL, 1LL, v26[8]);
                if ( !v35 )
                  return 0LL;
                v36 = *(_QWORD *)v35;
                *(_OWORD *)(v35 + 56) = *(_OWORD *)a4;
                *(_QWORD *)(v35 + 72) = *(_QWORD *)(a4 + 16);
                if ( !(unsigned int)PostInputMessage(
                                      *(struct tagMLIST **)(*(_QWORD *)(v26[8] + 16) + 384LL),
                                      (InputTransform *)v26[8],
                                      0xFFu,
                                      1uLL,
                                      v36,
                                      v39,
                                      0LL,
                                      *(unsigned int *)(a4 + 20),
                                      0,
                                      0LL,
                                      0LL,
                                      0LL) )
                  FreeHidData(v35);
              }
            }
            else
            {
              EtwTraceUIPIInputError(v32, 0LL, v17, v25, 5);
            }
          }
        }
      }
    }
  }
  return 1LL;
}
