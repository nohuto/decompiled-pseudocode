/*
 * XREFs of ?_PostShellHookMsgWorker@@YAXI_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C0018FA0
 * Callers:
 *     PostShellHookMessagesEx @ 0x1C0018F4C (PostShellHookMessagesEx.c)
 *     ?xxxNotifyShellOfWindowSwap@@YAXPEAUtagWND@@0@Z @ 0x1C0132E90 (-xxxNotifyShellOfWindowSwap@@YAXPEAUtagWND@@0@Z.c)
 * Callees:
 *     ?_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@H@Z @ 0x1C0055300 (-_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@.c)
 *     _PostMessage @ 0x1C00B3950 (_PostMessage.c)
 */

void __fastcall _PostShellHookMsgWorker(
        unsigned int a1,
        unsigned __int64 a2,
        __int64 a3,
        struct tagINPUT_MESSAGE_SOURCE *a4)
{
  unsigned int v4; // edi
  struct tagWND *v9; // rbx
  __int64 v10; // r14
  unsigned int *v11; // r9
  unsigned int v12; // eax
  __int64 v13; // r8

  v4 = 0;
  v9 = 0LL;
  v10 = *(_QWORD *)(gptiCurrent + 416LL);
  while ( 1 )
  {
    v11 = *(unsigned int **)(v10 + 232);
    if ( !v11 || v11[3] )
      break;
    if ( v4 >= *v11 )
      goto LABEL_14;
    v12 = v4 + 1;
    if ( *(struct tagWND **)&v11[4 * v4 + 6] != v9 )
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
      v9 = *(struct tagWND **)&v11[4 * v12 + 6];
    }
    if ( !v9 )
      break;
    if ( a1 == *(_DWORD *)(gpsi + 912LL) && v9 == *(struct tagWND **)(v10 + 192) )
    {
      if ( a2 == 1 )
      {
        v13 = (unsigned int)guiOtherWindowCreated;
LABEL_19:
        PostMessage(v9, a1, v13, a3);
      }
      else if ( a2 == 2 )
      {
        v13 = (unsigned int)guiOtherWindowDestroyed;
        goto LABEL_19;
      }
    }
    else
    {
      _PostTransformableMessageExtended(v9, a1, a2, a3, a4, 1);
    }
  }
}
