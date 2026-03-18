/*
 * XREFs of InternalInvalidate3 @ 0x1C0066B30
 * Callers:
 *     xxxEndPaint @ 0x1C003BF60 (xxxEndPaint.c)
 *     ?InternalInvalidate2@@YAHPEAUtagWND@@PEAUHRGN__@@1PEAUtagRECT@@K@Z @ 0x1C0065A64 (-InternalInvalidate2@@YAHPEAUtagWND@@PEAUHRGN__@@1PEAUtagRECT@@K@Z.c)
 * Callees:
 *     DecPaintCount @ 0x1C001C338 (DecPaintCount.c)
 *     SetOrClrWF @ 0x1C001C5B4 (SetOrClrWF.c)
 *     DwmAsyncChildStyleChange @ 0x1C001C6B0 (DwmAsyncChildStyleChange.c)
 *     W32GetThreadWin32Thread @ 0x1C0054B98 (W32GetThreadWin32Thread.c)
 *     ClearHungFlag @ 0x1C005EE68 (ClearHungFlag.c)
 *     _GetDesktopWindow @ 0x1C0062730 (_GetDesktopWindow.c)
 *     CalcWindowRgn @ 0x1C00F12D0 (CalcWindowRgn.c)
 *     ?VWPLAddBase@@YAHPEAPEAUtagVWPL@@_KPEAUtagWND@@KH@Z @ 0x1C00F8188 (-VWPLAddBase@@YAHPEAPEAUtagVWPL@@_KPEAUtagWND@@KH@Z.c)
 *     SetWakeBitInterMoveSize @ 0x1C01B2640 (SetWakeBitInterMoveSize.c)
 *     IncPaintCount @ 0x1C020BA3C (IncPaintCount.c)
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
  __int64 v14; // r9
  int v15; // r13d
  int v16; // esi
  __int64 v17; // rcx
  int v18; // ebp
  int v19; // r14d
  int v20; // r15d
  __int64 v21; // r9
  int v22; // esi
  __int64 v23; // rcx
  int v24; // r14d
  int v25; // ebp
  int v26; // r15d
  __int64 v27; // r9
  int v28; // esi
  __int64 v29; // rcx
  __int64 v30; // rcx
  __int64 EmptyRgnPublic; // rax
  bool v32; // cf
  __int64 v33; // rbx
  int v34; // ecx
  __int64 v35; // rax
  unsigned int v36; // r8d
  int v37; // eax
  int v38; // ebp
  void *v39; // rax
  int v40; // ebp
  void *v41; // rax
  void *v42; // rax
  __int64 v43; // rbx
  int v44; // edx
  int v45; // [rsp+20h] [rbp-38h]
  BOOL v46; // [rsp+70h] [rbp+18h]

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
    v46 = v8;
    if ( (v3 & 0x407) != 0 )
    {
      if ( (v3 & 2) != 0 )
        SetOrClrWF(1, v5, 0x110u, 1);
      if ( !v6 )
        goto LABEL_40;
      v9 = *((_DWORD *)v5 + 17);
      v10 = *((_DWORD *)v5 + 16);
      v11 = *((_DWORD *)v5 + 76);
      *((_BYTE *)v5 + 57) &= ~1u;
      v15 = -16;
      if ( (unsigned int)IsWindowDesktopComposed(v5) )
      {
        v16 = *((_DWORD *)v5 + 17);
        v17 = *((unsigned int *)v5 + 16);
        v12 = *((unsigned int *)v5 + 76);
        if ( v9 != v16 )
          goto LABEL_89;
        if ( v10 == (_DWORD)v17 && v11 == (_DWORD)v12 )
          goto LABEL_17;
        if ( v9 == v16 )
        {
          if ( v10 == (_DWORD)v17 )
          {
            if ( ((v11 ^ (unsigned int)v12) & 0x5C00300) == 0 )
              goto LABEL_17;
            v38 = -268435456;
            v16 = *((_DWORD *)v5 + 76);
          }
          else
          {
            if ( ((v10 ^ (unsigned int)v17) & 0x4E27A9) == 0 )
              goto LABEL_17;
            v38 = -20;
            v16 = *((_DWORD *)v5 + 16);
          }
        }
        else
        {
LABEL_89:
          if ( ((v9 ^ v16) & 0xB9CF0000) == 0 )
            goto LABEL_17;
          v38 = -16;
        }
        v39 = (void *)ReferenceDwmApiPort(v17, v12, v13, v14);
        DwmAsyncChildStyleChange(v39, *(_QWORD *)v5, v38, v16);
      }
LABEL_17:
      if ( *((_QWORD *)v5 + 2) != gptiCurrent )
      {
        SetOrClrWF(1, v5, 0x120u, 1);
        if ( (*((_BYTE *)v5 + 60) & 1) != 0 )
        {
          SetOrClrWF(1, v5, 0x402u, 1);
          gRdwFlags |= v3;
        }
      }
      if ( v4 == 1 && (*((_BYTE *)v5 + 61) & 1) == 0 )
        SetOrClrWF(0, v5, 0x102u, 1);
      if ( (v3 & 4) != 0 )
      {
        v18 = *((_DWORD *)v5 + 17);
        v19 = *((_DWORD *)v5 + 16);
        v20 = *((_DWORD *)v5 + 76);
        *((_BYTE *)v5 + 57) |= 2u;
        if ( (unsigned int)IsWindowDesktopComposed(v5) )
        {
          v22 = *((_DWORD *)v5 + 17);
          v23 = *((unsigned int *)v5 + 16);
          v12 = *((unsigned int *)v5 + 76);
          if ( v18 != v22 )
            goto LABEL_98;
          if ( v19 == (_DWORD)v23 && v20 == (_DWORD)v12 )
            goto LABEL_24;
          if ( v18 == v22 )
          {
            if ( v19 == (_DWORD)v23 )
            {
              if ( ((v20 ^ (unsigned int)v12) & 0x5C00300) == 0 )
                goto LABEL_24;
              v40 = -268435456;
              v22 = *((_DWORD *)v5 + 76);
            }
            else
            {
              if ( ((v19 ^ (unsigned int)v23) & 0x4E27A9) == 0 )
                goto LABEL_24;
              v40 = -20;
              v22 = *((_DWORD *)v5 + 16);
            }
          }
          else
          {
LABEL_98:
            if ( ((v18 ^ v22) & 0xB9CF0000) == 0 )
              goto LABEL_24;
            v40 = -16;
          }
          v41 = (void *)ReferenceDwmApiPort(v23, v12, v13, v21);
          DwmAsyncChildStyleChange(v41, *(_QWORD *)v5, v40, v22);
        }
      }
LABEL_24:
      if ( (v3 & 0x404) != 0 && (*((_BYTE *)v5 + 64) & 0x20) == 0 )
      {
        if ( (*((_BYTE *)v5 + 59) & 0x18) == 0 && *((_QWORD *)v5 + 13) == GetDesktopWindow((__int64)v5) )
          VWPLAddBase(gpvwplHungRedraw, 0LL, v5, 0xAu, v45);
        v24 = *((_DWORD *)v5 + 17);
        v25 = *((_DWORD *)v5 + 16);
        v26 = *((_DWORD *)v5 + 76);
        *((_BYTE *)v5 + 59) |= 8u;
        if ( (unsigned int)IsWindowDesktopComposed(v5) )
        {
          v28 = *((_DWORD *)v5 + 17);
          v29 = *((unsigned int *)v5 + 16);
          v12 = *((unsigned int *)v5 + 76);
          if ( v24 != v28 )
            goto LABEL_107;
          if ( v25 == (_DWORD)v29 && v26 == (_DWORD)v12 )
            goto LABEL_33;
          if ( v24 == v28 )
          {
            if ( v25 == (_DWORD)v29 )
            {
              if ( ((v26 ^ (unsigned int)v12) & 0x5C00300) == 0 )
                goto LABEL_33;
              v15 = -268435456;
              v28 = *((_DWORD *)v5 + 76);
            }
            else
            {
              if ( ((v25 ^ (unsigned int)v29) & 0x4E27A9) == 0 )
                goto LABEL_33;
              v15 = -20;
              v28 = *((_DWORD *)v5 + 16);
            }
          }
          else
          {
LABEL_107:
            if ( ((v24 ^ v28) & 0xB9CF0000) == 0 )
              goto LABEL_33;
          }
          v42 = (void *)ReferenceDwmApiPort(v29, v12, v13, v27);
          DwmAsyncChildStyleChange(v42, *(_QWORD *)v5, v15, v28);
        }
      }
LABEL_33:
      if ( (v3 & 0x400) != 0 )
        SetOrClrWF(1, v5, 0x108u, 1);
      v30 = *((_QWORD *)v5 + 22);
      if ( v30 == 1 )
        goto LABEL_40;
      if ( v4 != 1 )
      {
        if ( v30 )
        {
          if ( (unsigned int)GreCombineRgn(v30, *((_QWORD *)v5 + 22), v4, 2LL) )
            goto LABEL_40;
        }
        else
        {
          EmptyRgnPublic = CreateEmptyRgnPublic(0LL, v12, v13);
          *((_QWORD *)v5 + 22) = EmptyRgnPublic;
          if ( EmptyRgnPublic && (unsigned int)GreCombineRgn(EmptyRgnPublic, v4, 0LL, 5LL) )
          {
LABEL_40:
            if ( !v46 && (*((_QWORD *)v5 + 22) || (*((_BYTE *)v5 + 57) & 0x10) != 0) )
            {
              v32 = (v3 & 0x20000) != 0;
              v33 = *((_QWORD *)v5 + 2);
              if ( v32 )
              {
                if ( v33 == W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) )
                {
                  IncPaintCount(v5);
                }
                else
                {
                  v43 = *((_QWORD *)v5 + 2);
                  v44 = *(_DWORD *)(v43 + 520);
                  *(_DWORD *)(v43 + 520) = v44 + 1;
                  if ( !v44 )
                  {
                    EtwTraceWakePump(v43, v5, 15LL);
                    SetWakeBitInterMoveSize(v43);
                  }
                }
              }
              else
              {
                v34 = *(_DWORD *)(v33 + 520);
                *(_DWORD *)(v33 + 520) = v34 + 1;
                if ( !v34 )
                {
                  EtwTraceWakePump(v33, v5, 15LL);
                  if ( (*(_DWORD *)(v33 + 440) & 1) == 0 )
                  {
                    *(_WORD *)(*(_QWORD *)(v33 + 400) + 6LL) |= 0x20u;
                    *(_WORD *)(*(_QWORD *)(v33 + 400) + 4LL) |= 0x20u;
                    if ( (*(_BYTE *)(*(_QWORD *)(v33 + 400) + 10LL) & 0x20) != 0 )
                      KeSetEvent(*(PRKEVENT *)(v33 + 648), 2, 0);
                  }
                }
              }
            }
            return;
          }
        }
      }
LABEL_53:
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
      SetOrClrWF(0, v5, 0x110u, 1);
    if ( (v3 & 8) == 0 )
      goto LABEL_68;
    if ( (v3 & 0x20) != 0 )
      SetOrClrWF(0, v5, 0x102u, 1);
    if ( (v3 & 0x800) != 0 )
    {
      SetOrClrWF(0, v5, 0x108u, 1);
      SetOrClrWF(0, v5, 0x680u, 1);
    }
    if ( (v3 & 0x820) != 0 )
      ClearHungFlag(v5, 776);
    if ( !*((_QWORD *)v5 + 22) )
      goto LABEL_68;
    if ( (*((_BYTE *)v5 + 57) & 8) != 0 )
    {
      if ( v4 != 1 )
        goto LABEL_77;
      v4 = ghrgnInv2;
      CalcWindowRgn(v5, ghrgnInv2, 1LL);
    }
    if ( v4 == 1 )
    {
LABEL_82:
      DeleteMaybeSpecialRgn(*((_QWORD *)v5 + 22));
      *((_QWORD *)v5 + 22) = 0LL;
      SetOrClrWF(0, v5, 0x102u, 1);
      ClearHungFlag(v5, 776);
LABEL_68:
      if ( v8 && !*((_QWORD *)v5 + 22) && (*((_BYTE *)v5 + 57) & 0x10) == 0 )
        DecPaintCount((__int64)v5);
      return;
    }
LABEL_77:
    if ( *((_QWORD *)v5 + 22) == 1LL )
    {
      v35 = CreateEmptyRgnPublic(a1, a2, a3);
      *((_QWORD *)v5 + 22) = v35;
      if ( !v35 )
        goto LABEL_53;
      LOBYTE(v36) = ~*((_BYTE *)v5 + 57);
      if ( !(unsigned int)CalcWindowRgn(v5, v35, (v36 >> 3) & 1) )
        goto LABEL_53;
    }
    v37 = GreCombineRgn(*((_QWORD *)v5 + 22), *((_QWORD *)v5 + 22), v4, 4LL);
    if ( !v37 )
      goto LABEL_53;
    if ( v37 != 1 )
      goto LABEL_68;
    goto LABEL_82;
  }
}
