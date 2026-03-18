/*
 * XREFs of xxxSendMessageBSM @ 0x1C00C9B50
 * Callers:
 *     ?BroadcastCompositionChange@@YAXPEBUtagDESKTOP@@@Z @ 0x1C00C60EC (-BroadcastCompositionChange@@YAXPEBUtagDESKTOP@@@Z.c)
 *     xxxWrapSendMessageBSM @ 0x1C00C6F60 (xxxWrapSendMessageBSM.c)
 * Callees:
 *     PushW32ThreadLock @ 0x1C0037EB0 (PushW32ThreadLock.c)
 *     ?xxxSendBSMtoDesktop@@YAHPEAUtagWND@@I_K_JPEAUtagBROADCASTSYSTEMMSGPARAMS@@H@Z @ 0x1C00C8B7C (-xxxSendBSMtoDesktop@@YAHPEAUtagWND@@I_K_JPEAUtagBROADCASTSYSTEMMSGPARAMS@@H@Z.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00CD890 (PopAndFreeW32ThreadLock.c)
 *     _guard_dispatch_icall_nop @ 0x1C01400F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall xxxSendMessageBSM(
        struct tagWND *a1,
        unsigned int a2,
        unsigned __int64 a3,
        __int64 a4,
        struct tagBROADCASTSYSTEMMSGPARAMS *a5,
        int a6)
{
  unsigned int v6; // esi
  _QWORD *v10; // rdi
  _QWORD *v11; // rcx
  _QWORD *i; // rbx
  _QWORD *v13; // rcx
  __int64 v15; // [rsp+30h] [rbp-30h] BYREF
  _QWORD *v16; // [rsp+38h] [rbp-28h]
  void (*v17)(void); // [rsp+40h] [rbp-20h]
  __int64 v18; // [rsp+48h] [rbp-18h] BYREF
  _QWORD *v19; // [rsp+50h] [rbp-10h]
  void (*v20)(void); // [rsp+58h] [rbp-8h]

  v6 = 0;
  if ( (*(_DWORD *)a5 & 0x10) == 0 )
    return (unsigned int)xxxSendBSMtoDesktop(a1, a2, a3, a4, a5, a6);
  PushW32ThreadLock(0LL, &v18, UserDereferenceObject);
  PushW32ThreadLock(0LL, &v15, UserDereferenceObject);
  v10 = (_QWORD *)grpWinStaList;
LABEL_4:
  if ( !v10 )
  {
    PopAndFreeW32ThreadLock(&v15);
    PopAndFreeW32ThreadLock(&v18);
    return v6;
  }
  ObfReferenceObject(v10);
  v11 = v19;
  v19 = v10;
  if ( v11 )
    v20();
  for ( i = (_QWORD *)v10[2]; ; i = (_QWORD *)i[4] )
  {
    if ( !i )
    {
      v10 = (_QWORD *)v10[1];
      goto LABEL_4;
    }
    ObfReferenceObject(i);
    v13 = v16;
    v16 = i;
    if ( v13 )
      v17();
    v6 = xxxSendBSMtoDesktop(*(struct tagWND **)(i[1] + 16LL), a2, a3, a4, a5, a6);
    if ( !v6 && (*((_DWORD *)a5 + 1) & 1) != 0 )
      break;
  }
  PopAndFreeW32ThreadLock(&v15);
  PopAndFreeW32ThreadLock(&v18);
  return 0LL;
}
