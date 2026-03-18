/*
 * XREFs of ?xxxSystemBroadcastMessage@@YAXI_K_JIPEATtagBROADCASTMSG@@HI@Z @ 0x1C011208C
 * Callers:
 *     xxxBroadcastMessageEx @ 0x1C009D190 (xxxBroadcastMessageEx.c)
 *     xxxSendNotifyMessage @ 0x1C009E0C0 (xxxSendNotifyMessage.c)
 * Callees:
 *     xxxBroadcastMessageEx @ 0x1C009D190 (xxxBroadcastMessageEx.c)
 *     PushW32ThreadLock @ 0x1C009DD90 (PushW32ThreadLock.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00CE7E0 (PopAndFreeW32ThreadLock.c)
 *     ExchangeW32ThreadLock @ 0x1C00CF270 (ExchangeW32ThreadLock.c)
 */

void __fastcall xxxSystemBroadcastMessage(
        unsigned int a1,
        unsigned __int64 a2,
        struct _LARGE_STRING *a3,
        __int64 a4,
        union tagBROADCASTMSG *a5,
        int a6,
        unsigned int a7)
{
  unsigned int v8; // ebp
  __int64 v9; // r9
  int v10; // edx
  _QWORD *v11; // rdi
  unsigned int v12; // esi
  _QWORD *v13; // rbx
  __int64 v14; // rcx
  int v15; // edx
  _QWORD *v16; // [rsp+40h] [rbp-78h]
  _QWORD v17[3]; // [rsp+48h] [rbp-70h] BYREF
  _QWORD v18[11]; // [rsp+60h] [rbp-58h] BYREF
  unsigned int v21; // [rsp+D8h] [rbp+20h]

  v21 = a4;
  v8 = a4;
  PushW32ThreadLock(0LL, v18, UserDereferenceObject, a4);
  PushW32ThreadLock(0LL, v17, UserDereferenceObject, v9);
  v11 = (_QWORD *)grpWinStaList;
  v16 = (_QWORD *)grpWinStaList;
  if ( grpWinStaList )
  {
    do
    {
      if ( v8 || (v12 = 1, v11 == *(_QWORD **)(*(_QWORD *)(gptiCurrent + 432LL) + 40LL)) )
        v12 = v8;
      if ( v11 )
        ObfReferenceObject(v11);
      ExchangeW32ThreadLock((__int64)v11, (__int64)v18);
      v13 = (_QWORD *)v11[2];
      if ( v13 )
      {
        do
        {
          ObfReferenceObject(v13);
          ExchangeW32ThreadLock((__int64)v13, (__int64)v17);
          v14 = *(_QWORD *)(v13[1] + 16LL);
          if ( v14 )
            xxxBroadcastMessageEx(v14, a1, a2, a3, v12, a5, a6, a7);
          v13 = (_QWORD *)v13[4];
        }
        while ( v13 );
        v11 = v16;
        v8 = v21;
      }
      v11 = (_QWORD *)v11[1];
      v16 = v11;
    }
    while ( v11 );
  }
  PopAndFreeW32ThreadLock((__int64)v17, v10);
  PopAndFreeW32ThreadLock((__int64)v18, v15);
}
