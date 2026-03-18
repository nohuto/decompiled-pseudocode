/*
 * XREFs of ?_PostShellHookMsgWorker@@YAXI_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C005410C
 * Callers:
 *     PostShellHookMessagesEx @ 0x1C00540B8 (PostShellHookMessagesEx.c)
 *     ?xxxNotifyShellOfWindowSwap@@YAXPEAUtagWND@@0@Z @ 0x1C0135050 (-xxxNotifyShellOfWindowSwap@@YAXPEAUtagWND@@0@Z.c)
 * Callees:
 *     _PostMessageExtended @ 0x1C00541EC (_PostMessageExtended.c)
 *     _PostMessage @ 0x1C00C91E0 (_PostMessage.c)
 */

void __fastcall _PostShellHookMsgWorker(unsigned int a1, __int64 a2, __int64 a3, struct tagINPUT_MESSAGE_SOURCE *a4)
{
  unsigned int v4; // edi
  __int64 v9; // rbx
  __int64 v10; // r14
  unsigned int *v11; // r9
  unsigned int v12; // eax
  __int64 SystemArgument1_high; // r8

  v4 = 0;
  v9 = 0LL;
  v10 = *(_QWORD *)(gptiCurrent + 440LL);
  while ( 1 )
  {
    v11 = *(unsigned int **)(v10 + 232);
    if ( !v11 || v11[3] )
      break;
    if ( v4 >= *v11 )
      goto LABEL_14;
    v12 = v4 + 1;
    if ( *(_QWORD *)&v11[4 * v4 + 6] != v9 )
      v12 = v4;
    v4 = v12;
    if ( v12 >= *v11 )
    {
LABEL_14:
      v4 = 0;
      v9 = 0LL;
    }
    else
    {
      v9 = *(_QWORD *)&v11[4 * v12 + 6];
    }
    if ( !v9 )
      break;
    if ( a1 == *(_DWORD *)(gpsi + 912LL) && v9 == *(_QWORD *)(v10 + 192) )
    {
      if ( a2 == 1 )
      {
        SystemArgument1_high = HIDWORD(WPP_MAIN_CB.Dpc.SystemArgument1);
LABEL_19:
        PostMessage(v9, a1, SystemArgument1_high, a3);
      }
      else if ( a2 == 2 )
      {
        SystemArgument1_high = LODWORD(WPP_MAIN_CB.Dpc.SystemArgument1);
        goto LABEL_19;
      }
    }
    else
    {
      PostMessageExtended(v9, a1, a2, a3, a4);
    }
  }
}
