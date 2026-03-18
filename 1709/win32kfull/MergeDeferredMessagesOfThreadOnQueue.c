/*
 * XREFs of MergeDeferredMessagesOfThreadOnQueue @ 0x1C010DBD4
 * Callers:
 *     xxxInterSendMsgEx @ 0x1C00A1890 (xxxInterSendMsgEx.c)
 * Callees:
 *     ?RemoveQMsgFromDeferList@@YAXPEAUtagMLIST@@PEAUtagQMSG@@@Z @ 0x1C0009E8C (-RemoveQMsgFromDeferList@@YAXPEAUtagMLIST@@PEAUtagQMSG@@@Z.c)
 *     IsHiddenByInputService @ 0x1C009ECA8 (IsHiddenByInputService.c)
 */

void __fastcall MergeDeferredMessagesOfThreadOnQueue(__int64 a1)
{
  __int64 v1; // r11
  int v2; // edi
  __int64 v4; // r10
  __int64 v5; // rbx
  BOOL v6; // eax
  struct tagQMSG *v7; // r10
  __int64 v8; // r11
  int v9; // ecx
  __int64 v10; // r9
  _QWORD *v11; // r10
  __int64 v12; // rax
  bool v13; // zf
  BOOL v14; // eax
  struct tagQMSG *v15; // r10
  __int64 v16; // r11
  int v17; // ecx
  _QWORD *v18; // rdx
  _QWORD *v19; // r9

  v1 = *(_QWORD *)(a1 + 408);
  v2 = 0;
  v4 = *(_QWORD *)(v1 + 48);
  v5 = *(_QWORD *)(v1 + 32);
  if ( v4 )
  {
    do
    {
      if ( !v5 )
        break;
      if ( *(_QWORD *)(v4 + 104) == a1 )
      {
        if ( *(_DWORD *)(v5 + 48) < *(_DWORD *)(v4 + 48) )
        {
          v14 = IsHiddenByInputService(v4);
          v17 = v2 + 1;
          if ( v14 )
            v17 = v2;
          v2 = v17;
          RemoveQMsgFromDeferList((struct tagMLIST *)(v16 + 24), v15);
          *v18 = *(_QWORD *)v5;
          *v19 = v5;
          if ( v5 == *(_QWORD *)(v1 + 32) )
            *(_QWORD *)(v1 + 32) = v18;
          else
            *(_QWORD *)(*(_QWORD *)v5 + 8LL) = v18;
          *(_QWORD *)v5 = v18;
        }
        else
        {
          v5 = *(_QWORD *)(v5 + 8);
        }
      }
      else
      {
        v4 = *(_QWORD *)(v4 + 8);
      }
    }
    while ( v4 );
    while ( v4 )
    {
      if ( *(_QWORD *)(v4 + 104) == a1 )
      {
        v6 = IsHiddenByInputService(v4);
        v9 = v2 + 1;
        if ( v6 )
          v9 = v2;
        v2 = v9;
        RemoveQMsgFromDeferList((struct tagMLIST *)(v8 + 24), v7);
        *v11 = *(_QWORD *)(v1 + 24);
        v12 = *(_QWORD *)(v1 + 24);
        if ( v12 )
          *(_QWORD *)(v12 + 8) = v11;
        v13 = *(_QWORD *)(v1 + 32) == 0LL;
        *(_QWORD *)(v1 + 24) = v11;
        if ( v13 )
          *(_QWORD *)(v1 + 32) = v11;
        v11[1] = 0LL;
        v4 = v10;
      }
      else
      {
        v4 = *(_QWORD *)(v4 + 8);
      }
    }
  }
  *(_DWORD *)(v1 + 40) += v2;
}
