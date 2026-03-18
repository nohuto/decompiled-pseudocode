/*
 * XREFs of xxxSetScrollBar @ 0x1C0083690
 * Callers:
 *     NtUserSetScrollInfo @ 0x1C0083580 (NtUserSetScrollInfo.c)
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     xxxSetWindowPos @ 0x1C0066BA4 (xxxSetWindowPos.c)
 *     IsVisible @ 0x1C006D048 (IsVisible.c)
 *     xxxWindowEvent @ 0x1C006D410 (xxxWindowEvent.c)
 *     _InitPwSB @ 0x1C0077F80 (_InitPwSB.c)
 *     ?SBSetParms@@YAHPEAUtagSBDATA@@PEAUtagSCROLLINFO@@PEAHPEAJ@Z @ 0x1C00839E8 (-SBSetParms@@YAHPEAUtagSBDATA@@PEAUtagSCROLLINFO@@PEAHPEAJ@Z.c)
 *     ?xxxEnableWndSBArrows@@YAHPEAUtagWND@@II@Z @ 0x1C0083CA0 (-xxxEnableWndSBArrows@@YAHPEAUtagWND@@II@Z.c)
 *     SetOrClrWF @ 0x1C008B874 (SetOrClrWF.c)
 *     DwmAsyncChildStyleChange @ 0x1C008B970 (DwmAsyncChildStyleChange.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C00A8A60 (xxxSendTransformableMessageTimeout.c)
 *     ?xxxDrawThumb@@YAXPEAUtagWND@@PEAUtagSBCALC@@H@Z @ 0x1C020FCAC (-xxxDrawThumb@@YAXPEAUtagWND@@PEAUtagSBCALC@@H@Z.c)
 */

__int64 __fastcall xxxSetScrollBar(struct tagWND *a1, __int64 a2, __int64 a3, int a4)
{
  int v4; // r15d
  unsigned int v6; // esi
  __int16 v8; // ax
  BOOL v9; // r13d
  char v10; // r12
  __int64 v11; // rbp
  __int64 inited; // rdx
  char v13; // bp
  int v14; // r14d
  int v15; // r13d
  int v16; // ebp
  __int64 v17; // rcx
  int v18; // edx
  int v19; // r14d
  int v20; // r13d
  int v21; // r12d
  int v22; // ebp
  __int64 v23; // rcx
  int v24; // edx
  _DWORD *v26; // r8
  __int64 v27; // rcx
  void *v28; // rax
  void *v29; // rax
  char v30; // al
  struct tagSBCALC *v32; // rdx
  __int64 v33; // rcx
  int v34; // [rsp+50h] [rbp-58h] BYREF
  int v35; // [rsp+54h] [rbp-54h]
  int v36; // [rsp+58h] [rbp-50h] BYREF
  int v37; // [rsp+5Ch] [rbp-4Ch]
  BOOL v38; // [rsp+60h] [rbp-48h]
  __int64 v39; // [rsp+68h] [rbp-40h]
  char v40; // [rsp+B8h] [rbp+10h]
  unsigned __int16 v42; // [rsp+C8h] [rbp+20h]

  v4 = a4;
  v6 = a2;
  if ( a4 )
    v4 = IsVisible((__int64)a1);
  if ( v6 == 2 )
  {
    _InterlockedIncrement(&glSendMessage);
    return xxxSendTransformableMessageTimeout((ULONG_PTR)a1, 0, 0, 0LL, 1, 1);
  }
  v8 = 3616;
  v9 = v6 != 0;
  v38 = v9;
  if ( !v6 )
    v8 = 3600;
  v42 = v8;
  v10 = *((_BYTE *)a1 + 70) & v8;
  v40 = v10;
  v37 = v10 != 0;
  v36 = v37;
  if ( (*(_DWORD *)(a3 + 4) & 1) != 0 || v10 || *((_QWORD *)a1 + 24) )
  {
    v11 = *((_QWORD *)a1 + 24);
    inited = v11;
    if ( !v11 )
    {
      inited = InitPwSB((__int64)a1);
      if ( !inited )
        return 0LL;
    }
    if ( !(unsigned int)SBSetParms(
                          (struct tagSBDATA *)(inited + (v6 != 0 ? 20LL : 4LL)),
                          (struct tagSCROLLINFO *)a3,
                          &v36,
                          &v34)
      && v11 )
    {
      if ( v10 && v4 )
      {
LABEL_68:
        xxxWindowEvent(0x800Eu, (volatile signed __int32 *)a1, (unsigned int)(v6 != 0) - 6, 0LL, 1);
        v33 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 688LL);
        if ( !v33
          || a1 != *(struct tagWND **)(v33 + 8)
          || ((*(_DWORD *)v33 >> 1) & 1) != v9
          || *(__int64 (__usercall **)@<rax>(struct tagWND *@<rcx>, struct tagSBCALC *))(v33 + 48) != xxxTrackThumb )
        {
          xxxDrawThumb(a1, v32, v9);
        }
        return (unsigned int)v34;
      }
      return (unsigned int)v34;
    }
    v13 = v42;
    v14 = *((_DWORD *)a1 + 17);
    v15 = *((_DWORD *)a1 + 16);
    v35 = *((_DWORD *)a1 + 76);
    v39 = HIBYTE(v42);
    *((_BYTE *)a1 + HIBYTE(v42) + 56) &= ~(_BYTE)v42;
    if ( !(unsigned int)IsWindowDesktopComposed(a1) )
    {
LABEL_13:
      v19 = v36;
      if ( !v36 )
      {
        if ( (*((_BYTE *)a1 + 70) & 0x30) == 0 )
        {
          v26 = (_DWORD *)*((_QWORD *)a1 + 24);
          if ( v26[1] == v26[2] && v26[5] == v26[6] )
          {
            RtlFreeHeap(*(PVOID *)(*((_QWORD *)a1 + 3) + 128LL), 0, v26);
            *((_QWORD *)a1 + 24) = 0LL;
          }
        }
LABEL_18:
        if ( (*(_DWORD *)(a3 + 4) & 8) != 0 )
        {
          if ( v10 )
          {
            SetOrClrWF(1LL, a1, v42, 1LL);
            xxxEnableWndSBArrows(a1, v6, v19 == 0 ? 3 : 0);
          }
        }
        else
        {
          v37 ^= v19;
          if ( v37 )
          {
            v27 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 688LL);
            if ( v27 && a1 == *(struct tagWND **)(v27 + 8) )
              *(_DWORD *)v27 |= 8u;
            xxxSetWindowPos(a1, 0LL, 0LL, 0LL, 0, 0, 55);
            return (unsigned int)v34;
          }
        }
        if ( v19 && v4 )
        {
          v30 = *((_BYTE *)a1 + 56);
          if ( v6 ? v30 & 2 : v30 & 4 )
          {
            v9 = v38;
            goto LABEL_68;
          }
        }
        return (unsigned int)v34;
      }
      v20 = *((_DWORD *)a1 + 17);
      v21 = *((_DWORD *)a1 + 16);
      v35 = *((_DWORD *)a1 + 76);
      *((_BYTE *)a1 + v39 + 56) |= v13;
      if ( (unsigned int)IsWindowDesktopComposed(a1) )
      {
        v22 = *((_DWORD *)a1 + 17);
        v23 = *((unsigned int *)a1 + 16);
        v24 = *((_DWORD *)a1 + 76);
        if ( v20 != v22 )
          goto LABEL_16;
        if ( v21 == (_DWORD)v23 && v35 == v24 )
          goto LABEL_17;
        if ( v20 == v22 )
        {
          if ( v21 == (_DWORD)v23 )
          {
            if ( ((v35 ^ v24) & 0x5C00300) != 0 )
            {
LABEL_60:
              v29 = (void *)ReferenceDwmApiPort(v23);
              DwmAsyncChildStyleChange(v29);
            }
          }
          else if ( ((v21 ^ (unsigned int)v23) & 0x4E27A9) != 0 )
          {
            goto LABEL_60;
          }
        }
        else
        {
LABEL_16:
          if ( ((v20 ^ v22) & 0xB9CF0000) != 0 )
            goto LABEL_60;
        }
      }
LABEL_17:
      v10 = v40;
      goto LABEL_18;
    }
    v16 = *((_DWORD *)a1 + 17);
    v17 = *((unsigned int *)a1 + 16);
    v18 = *((_DWORD *)a1 + 76);
    if ( v14 != v16 )
      goto LABEL_11;
    if ( v15 == (_DWORD)v17 && v35 == v18 )
      goto LABEL_12;
    if ( v14 == v16 )
    {
      if ( v15 == (_DWORD)v17 )
      {
        if ( ((v35 ^ v18) & 0x5C00300) != 0 )
        {
LABEL_51:
          v28 = (void *)ReferenceDwmApiPort(v17);
          DwmAsyncChildStyleChange(v28);
        }
      }
      else if ( ((v15 ^ (unsigned int)v17) & 0x4E27A9) != 0 )
      {
        goto LABEL_51;
      }
    }
    else
    {
LABEL_11:
      if ( ((v14 ^ v16) & 0xB9CF0000) != 0 )
        goto LABEL_51;
    }
LABEL_12:
    v13 = v42;
    goto LABEL_13;
  }
  UserSetLastError(1447LL, a2);
  return 0LL;
}
