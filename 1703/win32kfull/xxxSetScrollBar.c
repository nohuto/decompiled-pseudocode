/*
 * XREFs of xxxSetScrollBar @ 0x1C00D6A78
 * Callers:
 *     NtUserSetScrollInfo @ 0x1C00D6970 (NtUserSetScrollInfo.c)
 * Callees:
 *     SetOrClrWF @ 0x1C001C5B4 (SetOrClrWF.c)
 *     DwmAsyncChildStyleChange @ 0x1C001C6B0 (DwmAsyncChildStyleChange.c)
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C00530C0 (xxxSendTransformableMessageTimeout.c)
 *     xxxWindowEvent @ 0x1C005A820 (xxxWindowEvent.c)
 *     xxxSetWindowPos @ 0x1C0063478 (xxxSetWindowPos.c)
 *     IsVisible @ 0x1C0069E24 (IsVisible.c)
 *     ?SBSetParms@@YAHPEAUtagSBDATA@@PEAUtagSCROLLINFO@@PEAHPEAJ@Z @ 0x1C00D6DD0 (-SBSetParms@@YAHPEAUtagSBDATA@@PEAUtagSCROLLINFO@@PEAHPEAJ@Z.c)
 *     ?xxxEnableWndSBArrows@@YAHPEAUtagWND@@II@Z @ 0x1C00D708C (-xxxEnableWndSBArrows@@YAHPEAUtagWND@@II@Z.c)
 *     _InitPwSB @ 0x1C00D79B4 (_InitPwSB.c)
 *     ?xxxDrawThumb@@YAXPEAUtagWND@@PEAUtagSBCALC@@H@Z @ 0x1C020E480 (-xxxDrawThumb@@YAXPEAUtagWND@@PEAUtagSBCALC@@H@Z.c)
 */

__int64 __fastcall xxxSetScrollBar(struct tagWND *a1, unsigned int a2, __int64 a3, int a4)
{
  __int64 *BugCheckParameter3; // r9
  __int16 v9; // cx
  int v10; // r15d
  int v11; // eax
  int v12; // r14d
  __int64 v13; // rbp
  __int64 inited; // rdx
  int v15; // r15d
  int v16; // r13d
  char v17; // bp
  __int64 v18; // r9
  int v19; // ebp
  __int64 v20; // rcx
  __int64 v21; // rdx
  int v22; // r15d
  int v23; // r13d
  int v24; // ebp
  __int64 v25; // rcx
  __int64 v26; // rdx
  _DWORD *v28; // r8
  __int64 v29; // rcx
  int v30; // r15d
  void *v31; // rax
  int v32; // r13d
  void *v33; // rax
  char v34; // al
  struct tagSBCALC *v36; // rdx
  __int64 v37; // rcx
  unsigned int v38; // [rsp+50h] [rbp-58h]
  unsigned int v39; // [rsp+50h] [rbp-58h]
  int v40; // [rsp+54h] [rbp-54h] BYREF
  int v41; // [rsp+58h] [rbp-50h]
  __int64 v42; // [rsp+60h] [rbp-48h]
  unsigned __int16 v43; // [rsp+B8h] [rbp+10h]
  int v45; // [rsp+C8h] [rbp+20h] BYREF

  BugCheckParameter3 = 0LL;
  if ( a4 )
    a4 = IsVisible((__int64)a1);
  if ( a2 == 2 )
  {
    _InterlockedIncrement(&glSendMessage);
    return xxxSendTransformableMessageTimeout(
             (ULONG_PTR)a1,
             0xE9u,
             a4,
             (struct _LARGE_STRING *)a3,
             (int)BugCheckParameter3,
             (int)BugCheckParameter3,
             BugCheckParameter3,
             1,
             1);
  }
  v10 = (int)BugCheckParameter3;
  v9 = 3616;
  LOBYTE(v10) = a2 != 0;
  v41 = v10;
  if ( !a2 )
    v9 = 3600;
  v43 = v9;
  v12 = (int)BugCheckParameter3;
  v42 = HIBYTE(v9);
  v11 = *(_DWORD *)(a3 + 4);
  LOBYTE(v12) = ((unsigned __int8)v9 & *((_BYTE *)a1 + HIBYTE(v9) + 56)) != 0;
  v40 = v12;
  if ( (v11 & 1) != 0 || v12 || *((__int64 **)a1 + 24) != BugCheckParameter3 )
  {
    v13 = *((_QWORD *)a1 + 24);
    inited = v13;
    if ( !v13 )
    {
      inited = InitPwSB(a1);
      if ( !inited )
        return 0LL;
    }
    if ( !(unsigned int)SBSetParms(
                          (struct tagSBDATA *)(inited + (a2 != 0 ? 20LL : 4LL)),
                          (struct tagSCROLLINFO *)a3,
                          &v40,
                          &v45)
      && v13 )
    {
      if ( v12 && a4 )
      {
LABEL_69:
        xxxWindowEvent(0x800Eu, (__int64 *)a1, (a2 != 0) - 6, 0, 1);
        v37 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 632LL);
        if ( !v37
          || a1 != *(struct tagWND **)(v37 + 8)
          || ((*(_DWORD *)v37 >> 1) & 1) != v10
          || *(__int64 (__usercall **)@<rax>(struct tagWND *@<rcx>, struct tagSBCALC *))(v37 + 48) != xxxTrackThumb )
        {
          xxxDrawThumb(a1, v36, v10);
        }
        return (unsigned int)v45;
      }
      return (unsigned int)v45;
    }
    v15 = *((_DWORD *)a1 + 17);
    v16 = *((_DWORD *)a1 + 16);
    v17 = v43;
    v38 = *((_DWORD *)a1 + 76);
    *((_BYTE *)a1 + v42 + 56) &= ~(_BYTE)v43;
    if ( !(unsigned int)IsWindowDesktopComposed(a1) )
    {
LABEL_13:
      v22 = v40;
      if ( v40 )
      {
        v23 = *((_DWORD *)a1 + 16);
        v40 = *((_DWORD *)a1 + 17);
        v39 = *((_DWORD *)a1 + 76);
        *((_BYTE *)a1 + v42 + 56) |= v17;
        if ( !(unsigned int)IsWindowDesktopComposed(a1) )
          goto LABEL_17;
        v24 = *((_DWORD *)a1 + 17);
        v25 = *((unsigned int *)a1 + 16);
        v26 = *((unsigned int *)a1 + 76);
        if ( v40 != v24 )
          goto LABEL_16;
        if ( v23 != (_DWORD)v25 || v39 != (_DWORD)v26 )
        {
          if ( v40 == v24 )
          {
            if ( v23 == (_DWORD)v25 )
            {
              if ( ((v39 ^ (unsigned int)v26) & 0x5C00300) == 0 )
                goto LABEL_17;
              v32 = -268435456;
              v24 = *((_DWORD *)a1 + 76);
            }
            else
            {
              if ( ((v23 ^ (unsigned int)v25) & 0x4E27A9) == 0 )
                goto LABEL_17;
              v32 = -20;
              v24 = *((_DWORD *)a1 + 16);
            }
            goto LABEL_61;
          }
LABEL_16:
          if ( ((v40 ^ v24) & 0xB9CF0000) == 0 )
            goto LABEL_17;
          v32 = -16;
LABEL_61:
          v33 = (void *)ReferenceDwmApiPort(v25, v26, (unsigned int)v40, v39);
          DwmAsyncChildStyleChange(v33, *(_QWORD *)a1, v32, v24);
        }
      }
      else if ( (*((_BYTE *)a1 + 70) & 0x30) == 0 )
      {
        v28 = (_DWORD *)*((_QWORD *)a1 + 24);
        if ( v28[1] == v28[2] && v28[5] == v28[6] )
        {
          RtlFreeHeap(*(PVOID *)(*((_QWORD *)a1 + 3) + 128LL), 0, v28);
          *((_QWORD *)a1 + 24) = 0LL;
        }
      }
LABEL_17:
      if ( (*(_DWORD *)(a3 + 4) & 8) != 0 )
      {
        if ( v12 )
        {
          SetOrClrWF(1, a1, v43, 1);
          xxxEnableWndSBArrows(a1, a2, v22 == 0 ? 3 : 0);
        }
      }
      else if ( v22 != v12 )
      {
        v29 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 632LL);
        if ( v29 && a1 == *(struct tagWND **)(v29 + 8) )
          *(_DWORD *)v29 |= 8u;
        xxxSetWindowPos(a1, 0LL, 0LL, 0LL, 0, 0, 55);
        return (unsigned int)v45;
      }
      if ( v22 && a4 )
      {
        v34 = *((_BYTE *)a1 + 56);
        if ( a2 ? v34 & 2 : v34 & 4 )
        {
          v10 = v41;
          goto LABEL_69;
        }
      }
      return (unsigned int)v45;
    }
    v19 = *((_DWORD *)a1 + 17);
    v20 = *((unsigned int *)a1 + 16);
    v21 = *((unsigned int *)a1 + 76);
    if ( v15 != v19 )
      goto LABEL_11;
    if ( v16 == (_DWORD)v20 && v38 == (_DWORD)v21 )
      goto LABEL_12;
    if ( v15 == v19 )
    {
      if ( v16 == (_DWORD)v20 )
      {
        if ( ((v38 ^ (unsigned int)v21) & 0x5C00300) != 0 )
        {
          v30 = -268435456;
          v19 = *((_DWORD *)a1 + 76);
          goto LABEL_51;
        }
      }
      else if ( ((v16 ^ (unsigned int)v20) & 0x4E27A9) != 0 )
      {
        v30 = -20;
        v19 = *((_DWORD *)a1 + 16);
LABEL_51:
        v31 = (void *)ReferenceDwmApiPort(v20, v21, v38, v18);
        DwmAsyncChildStyleChange(v31, *(_QWORD *)a1, v30, v19);
      }
    }
    else
    {
LABEL_11:
      if ( ((v15 ^ v19) & 0xB9CF0000) != 0 )
      {
        v30 = -16;
        goto LABEL_51;
      }
    }
LABEL_12:
    v17 = v43;
    goto LABEL_13;
  }
  UserSetLastError(1447LL);
  return 0LL;
}
