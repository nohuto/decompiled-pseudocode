/*
 * XREFs of ?xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z @ 0x1C0049000
 * Callers:
 *     ?xxxInternalUpdateWindow@@YAXPEAUtagWND@@K@Z @ 0x1C0048FB4 (-xxxInternalUpdateWindow@@YAXPEAUtagWND@@K@Z.c)
 *     ?xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z @ 0x1C0049000 (-xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z.c)
 * Callees:
 *     DecPaintCount @ 0x1C001C338 (DecPaintCount.c)
 *     SetOrClrWF @ 0x1C001C5B4 (SetOrClrWF.c)
 *     ?ValidateParents@@YAHPEAUtagWND@@H@Z @ 0x1C0048C6C (-ValidateParents@@YAHPEAUtagWND@@H@Z.c)
 *     ?xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z @ 0x1C0049000 (-xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z.c)
 *     xxxSendMessage @ 0x1C00509B0 (xxxSendMessage.c)
 *     _PostMessage @ 0x1C00B3950 (_PostMessage.c)
 *     xxxSimpleDoSyncPaint @ 0x1C00CC88C (xxxSimpleDoSyncPaint.c)
 *     xxxCompositedPaint @ 0x1C020BA84 (xxxCompositedPaint.c)
 */

void __fastcall xxxUpdateWindow2(struct tagWND *a1, int a2)
{
  struct tagWND *v3; // rbx
  __int64 v4; // rcx
  struct tagWND *v5; // rax
  __int64 v6; // rdx
  struct tagWND *v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rbx
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // [rsp+20h] [rbp-28h] BYREF
  struct tagWND *i; // [rsp+28h] [rbp-20h]

  v3 = a1;
  if ( a1 )
  {
    do
    {
      if ( (*((_BYTE *)a1 + 67) & 2) != 0 )
        break;
      a1 = (struct tagWND *)*((_QWORD *)a1 + 13);
    }
    while ( a1 );
    if ( a1 )
    {
      v17 = *(_QWORD *)(gptiCurrent + 368LL);
      *(_QWORD *)(gptiCurrent + 368LL) = &v17;
      i = a1;
      ++*((_DWORD *)a1 + 2);
      xxxCompositedPaint(a1);
LABEL_13:
      ThreadUnlock1(v8, v7);
      return;
    }
  }
  if ( *((_QWORD *)v3 + 22) )
  {
    if ( !(unsigned int)ValidateParents(v3, a2 & 4) )
      return;
  }
  else if ( (*((_BYTE *)v3 + 57) & 0x10) == 0 )
  {
    goto LABEL_7;
  }
  if ( (*((_BYTE *)v3 + 57) & 0x10) != 0 )
  {
    SetOrClrWF(0, v3, 0x110u, 1);
    if ( !*((_QWORD *)v3 + 22) )
      DecPaintCount((__int64)v3);
  }
  SetOrClrWF(1, v3, 0x240u, 1);
  SetOrClrWF(0, v3, 0x120u, 1);
  if ( (*((_BYTE *)v3 + 61) & 2) == 0 && (*((_BYTE *)v3 + 71) & 0x20) != 0 && *(_QWORD *)(*((_QWORD *)v3 + 21) + 120LL) )
  {
    v11 = 38LL;
    v10 = 1LL;
  }
  else
  {
    if ( gfShellFrameHangResilient )
    {
      if ( (*(_DWORD *)(gptiCurrent + 1096LL) & 0x40000) != 0 )
      {
        v13 = *((_QWORD *)v3 + 2);
        if ( gptiCurrent != v13 )
        {
          v14 = *(_QWORD *)(v13 + 736);
          v15 = v14 + 16;
          v16 = -v14;
          if ( (v15 & -(__int64)(v16 != 0)) == 0
            || *(_DWORD *)((v15 & -(__int64)(v16 != 0)) + 8) != 15
            || *(_QWORD *)((v15 & -(__int64)(v16 != 0)) + 0x10)
            || *(_QWORD *)((v15 & -(__int64)(v16 != 0)) + 0x18) )
          {
            PostMessage(v3, 15LL, 0LL, 0LL);
          }
          goto LABEL_22;
        }
      }
    }
    v10 = 0LL;
    v11 = 15LL;
  }
  xxxSendMessage(v3, v11, v10, 0LL);
LABEL_22:
  if ( (*((_BYTE *)v3 + 58) & 0x40) != 0 )
    xxxSimpleDoSyncPaint(v3);
LABEL_7:
  if ( (a2 & 1) != 0 )
  {
    v4 = *((_QWORD *)v3 + 3);
    v5 = 0LL;
    if ( v4 )
    {
      v6 = *(_QWORD *)(v4 + 8);
      if ( v6 )
        v5 = *(struct tagWND **)(v6 + 16);
    }
    if ( v3 != v5 )
    {
      v7 = 0LL;
      v8 = gptiCurrent;
      v17 = *(_QWORD *)(gptiCurrent + 368LL);
      *(_QWORD *)(gptiCurrent + 368LL) = &v17;
      v9 = *((_QWORD *)v3 + 14);
      for ( i = 0LL; v9; v9 = *(_QWORD *)(v9 + 88) )
      {
        if ( (*(_BYTE *)(v9 + 64) & 0x20) != 0 && (*(_QWORD *)(v9 + 176) || (*(_BYTE *)(v9 + 57) & 0x10) != 0) )
        {
          v8 = *(_QWORD *)(v9 + 88);
          if ( v8 )
          {
            do
            {
              if ( *(_QWORD *)(v8 + 176) )
                break;
              if ( (*(_BYTE *)(v8 + 57) & 0x10) != 0 )
                break;
              v8 = *(_QWORD *)(v8 + 88);
            }
            while ( v8 );
            if ( v8 )
              continue;
          }
        }
        i = (struct tagWND *)v9;
        ++*(_DWORD *)(v9 + 8);
        if ( v7 )
        {
          if ( (*((_DWORD *)v7 + 2))-- == 1 )
            HMUnlockObjectInternal(v7);
        }
        xxxUpdateWindow2((struct tagWND *)v9, a2 | 4);
        v7 = i;
      }
      goto LABEL_13;
    }
  }
}
