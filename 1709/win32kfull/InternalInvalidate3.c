/*
 * XREFs of InternalInvalidate3 @ 0x1C006AFA4
 * Callers:
 *     ?InternalInvalidate2@@YAHPEAUtagWND@@PEAUHRGN__@@1PEAUtagRECT@@K@Z @ 0x1C0069EC4 (-InternalInvalidate2@@YAHPEAUtagWND@@PEAUHRGN__@@1PEAUtagRECT@@K@Z.c)
 *     xxxEndPaint @ 0x1C007DE24 (xxxEndPaint.c)
 * Callees:
 *     ClearHungFlag @ 0x1C0061BB8 (ClearHungFlag.c)
 *     _GetDesktopWindow @ 0x1C0065304 (_GetDesktopWindow.c)
 *     CalcWindowRgn @ 0x1C00800C0 (CalcWindowRgn.c)
 *     DecPaintCount @ 0x1C0080D20 (DecPaintCount.c)
 *     SetOrClrWF @ 0x1C008B874 (SetOrClrWF.c)
 *     DwmAsyncChildStyleChange @ 0x1C008B970 (DwmAsyncChildStyleChange.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     ?VWPLAddBase@@YAHPEAPEAUtagVWPL@@_KPEAUtagWND@@KH@Z @ 0x1C01052BC (-VWPLAddBase@@YAHPEAPEAUtagVWPL@@_KPEAUtagWND@@KH@Z.c)
 *     SetWakeBitInterMoveSize @ 0x1C01B55D0 (SetWakeBitInterMoveSize.c)
 *     IncPaintCount @ 0x1C020CF6C (IncPaintCount.c)
 */

void __fastcall InternalInvalidate3(struct tagWND *a1, __int64 a2, __int64 a3)
{
  int v3; // ebx
  __int64 v4; // r12
  struct tagWND *v5; // rdi
  int v6; // esi
  struct tagWND *v7; // rax
  BOOL v8; // ebp
  int v9; // ebp
  int v10; // r14d
  int v11; // r15d
  __int64 v12; // rdx
  __int64 v13; // r8
  int v14; // esi
  __int64 v15; // rcx
  int v16; // ebp
  int v17; // r14d
  int v18; // r15d
  int v19; // esi
  __int64 v20; // rcx
  int v21; // r14d
  int v22; // ebp
  int v23; // r15d
  int v24; // esi
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 EmptyRgnPublic; // rax
  bool v28; // cf
  __int64 v29; // rbx
  int v30; // ecx
  __int64 v31; // rax
  unsigned int v32; // r8d
  int v33; // eax
  void *v34; // rax
  void *v35; // rax
  void *v36; // rax
  __int64 v37; // rbx
  int v38; // edx
  int v39; // [rsp+20h] [rbp-38h]
  BOOL v40; // [rsp+70h] [rbp+18h]

  v3 = a3;
  v4 = a2;
  v5 = a1;
  v6 = a3 & 1;
  if ( (a3 & 1) == 0 )
    goto LABEL_7;
  a1 = (struct tagWND *)*((_QWORD *)a1 + 3);
  v7 = 0LL;
  if ( a1 )
  {
    a2 = *((_QWORD *)a1 + 1);
    if ( a2 )
      v7 = *(struct tagWND **)(a2 + 16);
  }
  if ( v5 != v7 || !(unsigned int)IsWindowDesktopComposed(v5) )
  {
LABEL_7:
    v8 = *((_QWORD *)v5 + 22) || (*((_BYTE *)v5 + 57) & 0x10) != 0;
    v40 = v8;
    if ( (v3 & 0x407) != 0 )
    {
      if ( (v3 & 2) != 0 )
        SetOrClrWF(1LL, v5, 272LL, 1LL);
      if ( !v6 )
        goto LABEL_40;
      v9 = *((_DWORD *)v5 + 17);
      v10 = *((_DWORD *)v5 + 16);
      v11 = *((_DWORD *)v5 + 76);
      *((_BYTE *)v5 + 57) &= ~1u;
      if ( (unsigned int)IsWindowDesktopComposed(v5) )
      {
        v14 = *((_DWORD *)v5 + 17);
        v15 = *((unsigned int *)v5 + 16);
        v12 = *((unsigned int *)v5 + 76);
        if ( v9 != v14 )
          goto LABEL_88;
        if ( v10 == (_DWORD)v15 && v11 == (_DWORD)v12 )
          goto LABEL_17;
        if ( v9 == v14 )
        {
          if ( v10 == (_DWORD)v15 )
          {
            if ( ((v11 ^ (unsigned int)v12) & 0x5C00300) == 0 )
              goto LABEL_17;
          }
          else if ( ((v10 ^ (unsigned int)v15) & 0x4E27A9) == 0 )
          {
            goto LABEL_17;
          }
        }
        else
        {
LABEL_88:
          if ( ((v9 ^ v14) & 0xB9CF0000) == 0 )
            goto LABEL_17;
        }
        v34 = (void *)ReferenceDwmApiPort(v15);
        DwmAsyncChildStyleChange(v34);
      }
LABEL_17:
      if ( *((_QWORD *)v5 + 2) != gptiCurrent )
      {
        SetOrClrWF(1LL, v5, 288LL, 1LL);
        if ( (*((_BYTE *)v5 + 60) & 1) != 0 )
        {
          SetOrClrWF(1LL, v5, 1026LL, 1LL);
          gRdwFlags |= v3;
        }
      }
      if ( v4 == 1 && (*((_BYTE *)v5 + 61) & 1) == 0 )
        SetOrClrWF(0LL, v5, 258LL, 1LL);
      if ( (v3 & 4) != 0 )
      {
        v16 = *((_DWORD *)v5 + 17);
        v17 = *((_DWORD *)v5 + 16);
        v18 = *((_DWORD *)v5 + 76);
        *((_BYTE *)v5 + 57) |= 2u;
        if ( (unsigned int)IsWindowDesktopComposed(v5) )
        {
          v19 = *((_DWORD *)v5 + 17);
          v20 = *((unsigned int *)v5 + 16);
          v12 = *((unsigned int *)v5 + 76);
          if ( v16 != v19 )
            goto LABEL_96;
          if ( v17 == (_DWORD)v20 && v18 == (_DWORD)v12 )
            goto LABEL_24;
          if ( v16 == v19 )
          {
            if ( v17 == (_DWORD)v20 )
            {
              if ( ((v18 ^ (unsigned int)v12) & 0x5C00300) == 0 )
                goto LABEL_24;
            }
            else if ( ((v17 ^ (unsigned int)v20) & 0x4E27A9) == 0 )
            {
              goto LABEL_24;
            }
          }
          else
          {
LABEL_96:
            if ( ((v16 ^ v19) & 0xB9CF0000) == 0 )
              goto LABEL_24;
          }
          v35 = (void *)ReferenceDwmApiPort(v20);
          DwmAsyncChildStyleChange(v35);
        }
      }
LABEL_24:
      if ( (v3 & 0x404) != 0 && (*((_BYTE *)v5 + 64) & 0x20) == 0 )
      {
        if ( (*((_BYTE *)v5 + 59) & 0x18) == 0 && *((_QWORD *)v5 + 13) == GetDesktopWindow((__int64)v5) )
          VWPLAddBase(gpvwplHungRedraw, 0LL, v5, 0xAu, v39);
        v21 = *((_DWORD *)v5 + 17);
        v22 = *((_DWORD *)v5 + 16);
        v23 = *((_DWORD *)v5 + 76);
        *((_BYTE *)v5 + 59) |= 8u;
        if ( (unsigned int)IsWindowDesktopComposed(v5) )
        {
          v24 = *((_DWORD *)v5 + 17);
          v25 = *((unsigned int *)v5 + 16);
          v12 = *((unsigned int *)v5 + 76);
          if ( v21 != v24 )
            goto LABEL_104;
          if ( v22 == (_DWORD)v25 && v23 == (_DWORD)v12 )
            goto LABEL_33;
          if ( v21 == v24 )
          {
            if ( v22 == (_DWORD)v25 )
            {
              if ( ((v23 ^ (unsigned int)v12) & 0x5C00300) == 0 )
                goto LABEL_33;
            }
            else if ( ((v22 ^ (unsigned int)v25) & 0x4E27A9) == 0 )
            {
              goto LABEL_33;
            }
          }
          else
          {
LABEL_104:
            if ( ((v21 ^ v24) & 0xB9CF0000) == 0 )
              goto LABEL_33;
          }
          v36 = (void *)ReferenceDwmApiPort(v25);
          DwmAsyncChildStyleChange(v36);
        }
      }
LABEL_33:
      if ( (v3 & 0x400) != 0 )
        SetOrClrWF(1LL, v5, 264LL, 1LL);
      v26 = *((_QWORD *)v5 + 22);
      if ( v26 == 1 )
        goto LABEL_40;
      if ( v4 != 1 )
      {
        if ( v26 )
        {
          if ( (unsigned int)GreCombineRgn(v26, *((_QWORD *)v5 + 22), v4, 2LL) )
            goto LABEL_40;
        }
        else
        {
          EmptyRgnPublic = CreateEmptyRgnPublic(0LL, v12, v13);
          *((_QWORD *)v5 + 22) = EmptyRgnPublic;
          if ( EmptyRgnPublic && (unsigned int)GreCombineRgn(EmptyRgnPublic, v4, 0LL, 5LL) )
          {
LABEL_40:
            if ( !v40 && (*((_QWORD *)v5 + 22) || (*((_BYTE *)v5 + 57) & 0x10) != 0) )
            {
              v28 = (v3 & 0x20000) != 0;
              v29 = *((_QWORD *)v5 + 2);
              if ( v28 )
              {
                if ( v29 == W32GetThreadWin32Thread(KeGetCurrentThread()) )
                {
                  IncPaintCount(v5);
                }
                else
                {
                  v37 = *((_QWORD *)v5 + 2);
                  v38 = *(_DWORD *)(v37 + 576);
                  *(_DWORD *)(v37 + 576) = v38 + 1;
                  if ( !v38 )
                  {
                    EtwTraceWakePump(v37, v5, 15LL);
                    SetWakeBitInterMoveSize(v37);
                  }
                }
              }
              else
              {
                v30 = *(_DWORD *)(v29 + 576);
                *(_DWORD *)(v29 + 576) = v30 + 1;
                if ( !v30 )
                {
                  EtwTraceWakePump(v29, v5, 15LL);
                  if ( (*(_DWORD *)(v29 + 464) & 1) == 0 )
                  {
                    *(_WORD *)(*(_QWORD *)(v29 + 424) + 6LL) |= 0x20u;
                    *(_WORD *)(*(_QWORD *)(v29 + 424) + 4LL) |= 0x20u;
                    if ( (*(_BYTE *)(*(_QWORD *)(v29 + 424) + 10LL) & 0x20) != 0 )
                      KeSetEvent(*(PRKEVENT *)(v29 + 704), 2, 0);
                  }
                }
              }
            }
            return;
          }
        }
      }
LABEL_52:
      DeleteMaybeSpecialRgn(*((_QWORD *)v5 + 22));
      *((_QWORD *)v5 + 22) = 1LL;
      goto LABEL_40;
    }
    if ( (v3 & 0x838) == 0 )
      return;
    LOBYTE(a1) = ((v3 & 0x8000) == 0) & (*((_BYTE *)v5 + 57) >> 5);
    if ( (_BYTE)a1 )
      return;
    if ( (v3 & 0x10) != 0 )
      SetOrClrWF(0LL, v5, 272LL, 1LL);
    if ( (v3 & 8) == 0 )
      goto LABEL_67;
    if ( (v3 & 0x20) != 0 )
      SetOrClrWF(0LL, v5, 258LL, 1LL);
    if ( (v3 & 0x800) != 0 )
    {
      SetOrClrWF(0LL, v5, 264LL, 1LL);
      SetOrClrWF(0LL, v5, 1664LL, 1LL);
    }
    if ( (v3 & 0x820) != 0 )
      ClearHungFlag(v5, 776);
    if ( !*((_QWORD *)v5 + 22) )
      goto LABEL_67;
    if ( (*((_BYTE *)v5 + 57) & 8) != 0 )
    {
      if ( v4 != 1 )
        goto LABEL_76;
      v4 = ghrgnInv2;
      CalcWindowRgn(v5, ghrgnInv2, 1LL);
    }
    if ( v4 == 1 )
    {
LABEL_81:
      DeleteMaybeSpecialRgn(*((_QWORD *)v5 + 22));
      *((_QWORD *)v5 + 22) = 0LL;
      SetOrClrWF(0LL, v5, 258LL, 1LL);
      ClearHungFlag(v5, 776);
LABEL_67:
      if ( v8 && !*((_QWORD *)v5 + 22) && (*((_BYTE *)v5 + 57) & 0x10) == 0 )
        DecPaintCount(v5);
      return;
    }
LABEL_76:
    if ( *((_QWORD *)v5 + 22) == 1LL )
    {
      v31 = CreateEmptyRgnPublic(a1, a2, a3);
      *((_QWORD *)v5 + 22) = v31;
      if ( !v31 )
        goto LABEL_52;
      LOBYTE(v32) = ~*((_BYTE *)v5 + 57);
      if ( !(unsigned int)CalcWindowRgn(v5, v31, (v32 >> 3) & 1) )
        goto LABEL_52;
    }
    v33 = GreCombineRgn(*((_QWORD *)v5 + 22), *((_QWORD *)v5 + 22), v4, 4LL);
    if ( !v33 )
      goto LABEL_52;
    if ( v33 != 1 )
      goto LABEL_67;
    goto LABEL_81;
  }
}
