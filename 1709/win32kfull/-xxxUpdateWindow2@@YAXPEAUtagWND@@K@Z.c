/*
 * XREFs of ?xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z @ 0x1C009F628
 * Callers:
 *     ?xxxInternalUpdateWindow@@YAXPEAUtagWND@@K@Z @ 0x1C009F5E0 (-xxxInternalUpdateWindow@@YAXPEAUtagWND@@K@Z.c)
 *     ?xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z @ 0x1C009F628 (-xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z.c)
 * Callees:
 *     DecPaintCount @ 0x1C0080D20 (DecPaintCount.c)
 *     SetOrClrWF @ 0x1C008B874 (SetOrClrWF.c)
 *     ?ValidateParents@@YAHPEAUtagWND@@H@Z @ 0x1C009F1CC (-ValidateParents@@YAHPEAUtagWND@@H@Z.c)
 *     ?xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z @ 0x1C009F628 (-xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z.c)
 *     xxxSimpleDoSyncPaint @ 0x1C00A1684 (xxxSimpleDoSyncPaint.c)
 *     xxxSendMessage @ 0x1C00A6110 (xxxSendMessage.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     _PostMessage @ 0x1C00C91E0 (_PostMessage.c)
 *     xxxCompositedPaint @ 0x1C020D040 (xxxCompositedPaint.c)
 */

void __fastcall xxxUpdateWindow2(struct tagWND *a1, int a2)
{
  struct tagWND *v4; // rdi
  __int64 v5; // rcx
  struct tagWND *v6; // rax
  __int64 v7; // rdx
  struct tagWND *v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // r8
  __int64 v12; // rdx
  __int64 ThreadWin32Thread; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // [rsp+20h] [rbp-28h] BYREF
  struct tagWND *v19; // [rsp+28h] [rbp-20h]

  v4 = a1;
  if ( a1 )
  {
    do
    {
      if ( (*((_BYTE *)v4 + 67) & 2) != 0 )
        break;
      v4 = (struct tagWND *)*((_QWORD *)v4 + 13);
    }
    while ( v4 );
    if ( v4 )
    {
      ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
      v18 = *(_QWORD *)(ThreadWin32Thread + 392);
      *(_QWORD *)(ThreadWin32Thread + 392) = &v18;
      v19 = v4;
      _InterlockedIncrement((volatile signed __int32 *)v4 + 2);
      xxxCompositedPaint(v4);
LABEL_14:
      ThreadUnlock1(v9, v8);
      return;
    }
  }
  if ( *((_QWORD *)a1 + 22) )
  {
    if ( !(unsigned int)ValidateParents(a1, a2 & 4) )
      return;
  }
  else if ( (*((_BYTE *)a1 + 57) & 0x10) == 0 )
  {
    goto LABEL_7;
  }
  if ( (*((_BYTE *)a1 + 57) & 0x10) != 0 )
  {
    SetOrClrWF(0, a1, 0x110u, 1);
    if ( !*((_QWORD *)a1 + 22) )
      DecPaintCount((__int64)a1);
  }
  SetOrClrWF(1, a1, 0x240u, 1);
  SetOrClrWF(0, a1, 0x120u, 1);
  if ( (*((_BYTE *)a1 + 61) & 2) == 0 && (*((_BYTE *)a1 + 71) & 0x20) != 0 && *(_QWORD *)(*((_QWORD *)a1 + 21) + 128LL) )
  {
    v12 = 38LL;
    v11 = 1LL;
  }
  else
  {
    if ( gfShellFrameHangResilient )
    {
      if ( (*(_DWORD *)(gptiCurrent + 1184LL) & 0x40000) != 0 )
      {
        v14 = *((_QWORD *)a1 + 2);
        if ( gptiCurrent != v14 )
        {
          v15 = *(_QWORD *)(v14 + 792);
          v16 = v15 + 16;
          v17 = -v15;
          if ( (v16 & -(__int64)(v17 != 0)) == 0
            || *(_DWORD *)((v16 & -(__int64)(v17 != 0)) + 8) != 15
            || *(_QWORD *)((v16 & -(__int64)(v17 != 0)) + 0x10)
            || *(_QWORD *)((v16 & -(__int64)(v17 != 0)) + 0x18) )
          {
            PostMessage(a1, 15LL, 0LL, 0LL);
          }
          goto LABEL_28;
        }
      }
    }
    v11 = 0LL;
    v12 = 15LL;
  }
  xxxSendMessage(a1, v12, v11, 0LL);
LABEL_28:
  if ( (*((_BYTE *)a1 + 58) & 0x40) != 0 )
    xxxSimpleDoSyncPaint(a1);
LABEL_7:
  if ( (a2 & 1) != 0 )
  {
    v5 = *((_QWORD *)a1 + 3);
    v6 = 0LL;
    if ( v5 )
    {
      v7 = *(_QWORD *)(v5 + 8);
      if ( v7 )
        v6 = *(struct tagWND **)(v7 + 16);
    }
    if ( a1 != v6 )
    {
      v8 = 0LL;
      v9 = gptiCurrent;
      v18 = *(_QWORD *)(gptiCurrent + 392LL);
      *(_QWORD *)(gptiCurrent + 392LL) = &v18;
      v10 = *((_QWORD *)a1 + 14);
      v19 = 0LL;
      while ( v10 )
      {
        if ( (*(_BYTE *)(v10 + 64) & 0x20) == 0 || !*(_QWORD *)(v10 + 176) && (*(_BYTE *)(v10 + 57) & 0x10) == 0 )
          goto LABEL_17;
        v9 = *(_QWORD *)(v10 + 88);
        if ( !v9 )
          goto LABEL_17;
        do
        {
          if ( *(_QWORD *)(v9 + 176) )
            break;
          if ( (*(_BYTE *)(v9 + 57) & 0x10) != 0 )
            break;
          v9 = *(_QWORD *)(v9 + 88);
        }
        while ( v9 );
        if ( v9 )
        {
          v10 = *(_QWORD *)(v10 + 88);
        }
        else
        {
LABEL_17:
          v19 = (struct tagWND *)v10;
          _InterlockedIncrement((volatile signed __int32 *)(v10 + 8));
          if ( v8 )
          {
            if ( _InterlockedExchangeAdd((volatile signed __int32 *)v8 + 2, 0xFFFFFFFF) == 1 )
              HMUnlockObjectInternal(v8);
          }
          xxxUpdateWindow2((struct tagWND *)v10, a2 | 4);
          v8 = v19;
          v10 = *(_QWORD *)(v10 + 88);
        }
      }
      goto LABEL_14;
    }
  }
}
