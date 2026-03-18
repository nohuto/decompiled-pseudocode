/*
 * XREFs of xxxSendMessageBSM @ 0x1C00CD550
 * Callers:
 *     ?BroadcastCompositionChange@@YAXPEBUtagDESKTOP@@@Z @ 0x1C0044F58 (-BroadcastCompositionChange@@YAXPEBUtagDESKTOP@@@Z.c)
 *     xxxWrapSendMessageBSM @ 0x1C010BD10 (xxxWrapSendMessageBSM.c)
 * Callees:
 *     PushW32ThreadLock @ 0x1C009DD90 (PushW32ThreadLock.c)
 *     ?xxxSendBSMtoDesktop@@YAHPEAUtagWND@@I_K_JPEAUtagBROADCASTSYSTEMMSGPARAMS@@H@Z @ 0x1C00CC3F4 (-xxxSendBSMtoDesktop@@YAHPEAUtagWND@@I_K_JPEAUtagBROADCASTSYSTEMMSGPARAMS@@H@Z.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00CE7E0 (PopAndFreeW32ThreadLock.c)
 *     ExchangeW32ThreadLock @ 0x1C00CF270 (ExchangeW32ThreadLock.c)
 */

__int64 __fastcall xxxSendMessageBSM(
        struct tagWND *a1,
        __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        struct tagBROADCASTSYSTEMMSGPARAMS *a5,
        unsigned int a6)
{
  unsigned int v6; // esi
  unsigned int v9; // r12d
  __int64 v10; // r9
  _QWORD *v11; // rbx
  _QWORD *i; // rdi
  _QWORD v14[3]; // [rsp+30h] [rbp-58h] BYREF
  _QWORD v15[3]; // [rsp+48h] [rbp-40h] BYREF

  v6 = 0;
  v9 = a2;
  if ( (*(_DWORD *)a5 & 0x10) != 0 )
  {
    PushW32ThreadLock(0LL, v15, UserDereferenceObject, a4);
    PushW32ThreadLock(0LL, v14, UserDereferenceObject, v10);
    v11 = (_QWORD *)grpWinStaList;
    if ( grpWinStaList )
    {
      while ( 2 )
      {
        ObfReferenceObject(v11);
        ExchangeW32ThreadLock(v11, v15);
        for ( i = (_QWORD *)v11[2]; i; i = (_QWORD *)i[4] )
        {
          ObfReferenceObject(i);
          ExchangeW32ThreadLock(i, v14);
          v6 = xxxSendBSMtoDesktop(*(struct tagWND **)(i[1] + 16LL), v9, a3, a4, a5, a6);
          if ( !v6 && (*((_DWORD *)a5 + 1) & 1) != 0 )
          {
            PopAndFreeW32ThreadLock(v14);
            PopAndFreeW32ThreadLock(v15);
            return 0LL;
          }
        }
        v11 = (_QWORD *)v11[1];
        if ( v11 )
          continue;
        break;
      }
    }
    PopAndFreeW32ThreadLock(v14);
    PopAndFreeW32ThreadLock(v15);
  }
  else
  {
    return (unsigned int)xxxSendBSMtoDesktop(a1, a2, a3, a4, a5, a6);
  }
  return v6;
}
