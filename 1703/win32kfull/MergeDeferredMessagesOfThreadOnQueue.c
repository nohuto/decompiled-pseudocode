/*
 * XREFs of MergeDeferredMessagesOfThreadOnQueue @ 0x1C01B24AC
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C003EA18 (xxxRealDefWindowProc.c)
 * Callees:
 *     ?RemoveQMsgFromDeferList@@YAXPEAUtagMLIST@@PEAUtagQMSG@@@Z @ 0x1C01B205C (-RemoveQMsgFromDeferList@@YAXPEAUtagMLIST@@PEAUtagQMSG@@@Z.c)
 */

void __fastcall MergeDeferredMessagesOfThreadOnQueue(__int64 a1)
{
  __int64 v1; // rbx
  int v2; // esi
  __int64 v4; // r11
  __int64 v5; // rdi
  _QWORD *v6; // rdx
  _QWORD *v7; // r10
  __int64 v8; // r10
  _QWORD *v9; // r11
  bool v10; // zf

  v1 = *(_QWORD *)(a1 + 384);
  v2 = 0;
  v4 = *(_QWORD *)(v1 + 24);
  v5 = *(_QWORD *)(v1 + 8);
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
          ++v2;
          RemoveQMsgFromDeferList((struct tagMLIST *)v1, (struct tagQMSG *)v4);
          *v6 = *(_QWORD *)v5;
          *v7 = v5;
          if ( v5 == *(_QWORD *)(v1 + 8) )
            *(_QWORD *)(v1 + 8) = v6;
          else
            *(_QWORD *)(*(_QWORD *)v5 + 8LL) = v6;
          *(_QWORD *)v5 = v6;
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
        ++v2;
        RemoveQMsgFromDeferList((struct tagMLIST *)v1, (struct tagQMSG *)v4);
        *v9 = *(_QWORD *)v1;
        if ( *(_QWORD *)v1 )
          *(_QWORD *)(*(_QWORD *)v1 + 8LL) = v9;
        v10 = *(_QWORD *)(v1 + 8) == 0LL;
        *(_QWORD *)v1 = v9;
        if ( v10 )
          *(_QWORD *)(v1 + 8) = v9;
        v9[1] = 0LL;
        v4 = v8;
      }
      else
      {
        v4 = *(_QWORD *)(v4 + 8);
      }
    }
  }
  *(_DWORD *)(v1 + 16) += v2;
}
