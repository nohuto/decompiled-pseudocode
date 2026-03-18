/*
 * XREFs of ?xxxSendMessageToClient@@YAXPEAUtagWND@@I_K_JPEAUtagSMS@@HPEA_J@Z @ 0x1C00A9040
 * Callers:
 *     xxxSendMessageCallback @ 0x1C009F334 (xxxSendMessageCallback.c)
 *     xxxReceiveMessage @ 0x1C00A4670 (xxxReceiveMessage.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C00A8A60 (xxxSendTransformableMessageTimeout.c)
 * Callees:
 *     xxxDefWindowProc @ 0x1C0093900 (xxxDefWindowProc.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     SfnDWORD @ 0x1C00AA690 (SfnDWORD.c)
 *     _guard_dispatch_icall_nop @ 0x1C0145690 (_guard_dispatch_icall_nop.c)
 *     PrepareSentPointerMessageForClient @ 0x1C01BF194 (PrepareSentPointerMessageForClient.c)
 */

void __fastcall xxxSendMessageToClient(
        struct tagWND *a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        struct tagSMS *a5,
        int a6,
        __int64 *a7)
{
  __int64 v7; // r11
  unsigned int v8; // r10d
  unsigned int v10; // r9d
  unsigned __int16 v11; // cx
  __int64 v12; // rsi
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // r14
  __int64 v17; // rax
  int v18; // edi
  __int64 ThreadWin32Thread; // rax
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 *v22; // rcx
  _QWORD v23[4]; // [rsp+50h] [rbp-48h] BYREF
  unsigned int v24; // [rsp+A8h] [rbp+10h] BYREF
  __int64 v25; // [rsp+B0h] [rbp+18h] BYREF
  __int64 v26; // [rsp+B8h] [rbp+20h] BYREF

  v26 = a4;
  v25 = a3;
  v24 = a2;
  v7 = a4;
  v8 = a2;
  if ( a2 - 577 > 3 && (a2 - 581 > 0x12 || a2 == 589) || a2 == 595 )
  {
    if ( a2 != 528 || (_WORD)a3 != 582 )
      goto LABEL_12;
  }
  else if ( (_WORD)a3 == 1 )
  {
    goto LABEL_12;
  }
  if ( !(unsigned int)PrepareSentPointerMessageForClient(&v24, &v25, &v26, 0LL) )
  {
    *a7 = 0LL;
    return;
  }
  v7 = v26;
  a3 = v25;
  v8 = v24;
LABEL_12:
  v10 = (*((unsigned __int8 *)a1 + 58) >> 3) & 1;
  if ( gihmodUserApiHook >= 0
    || gihmodDManipHook >= 0
    || v8 == 90
    || (v11 = *((_WORD *)a1 + 41) & 0x3FFF, (unsigned __int16)(v11 - 673) > 9u)
    || (v12 = v11, v13 = v11 - 666LL, v14 = *((_QWORD *)a1 + 20), v14 != *(_QWORD *)(gpsi + 8 * v13 + 576))
    && v14 != *(_QWORD *)(gpsi + 8 * v13 + 392) )
  {
    if ( (v8 & 0x1FFFF) < 0x400 )
      v17 = ((__int64 (__fastcall *)(struct tagWND *, _QWORD, __int64, __int64, _QWORD, _QWORD, unsigned int, struct tagSMS *))gapfnScSendMessage[(unsigned __int8)MessageTable[(unsigned __int16)v8]])(
              a1,
              v8,
              a3,
              v7,
              *((_QWORD *)a1 + 20),
              *(_QWORD *)(gpsi + 744LL),
              v10,
              a5);
    else
      v17 = SfnDWORD((_DWORD)a1, v8, a3, v7, *((_QWORD *)a1 + 20), *(_QWORD *)(gpsi + 744LL));
    goto LABEL_32;
  }
  v15 = 2 * v13;
  v16 = gSharedInfo[v15 + 6];
  if ( !v16
    || v8 <= LODWORD(gSharedInfo[v15 + 5])
    && ((unsigned __int8)(1 << (v8 & 7)) & *(_BYTE *)(((unsigned __int64)v8 >> 3) + v16)) != 0
    || (*((_BYTE *)a1 + 58) & 1) != 0 )
  {
    if ( (v8 & 0x1FFFF) < 0x400 )
      v17 = ((__int64 (__fastcall *)(struct tagWND *, _QWORD, __int64, __int64, _QWORD, _QWORD, unsigned int, struct tagSMS *))gapfnScSendMessage[(unsigned __int8)MessageTable[(unsigned __int16)v8]])(
              a1,
              v8,
              a3,
              v7,
              v10,
              *(_QWORD *)(gpsi + 8 * v12 - 4624),
              v10,
              a5);
    else
      v17 = SfnDWORD((_DWORD)a1, v8, a3, v7, v10, *(_QWORD *)(gpsi + 8 * v12 - 4624));
LABEL_32:
    *a7 = v17;
    return;
  }
  v18 = a6;
  if ( a6 )
  {
    ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
    v23[0] = *(_QWORD *)(ThreadWin32Thread + 392);
    *(_QWORD *)(ThreadWin32Thread + 392) = v23;
    v23[1] = a1;
    _InterlockedIncrement((volatile signed __int32 *)a1 + 2);
    v7 = v26;
    a3 = v25;
    v8 = v24;
  }
  v20 = xxxDefWindowProc(a1, v8, a3, v7);
  v22 = a7;
  *a7 = v20;
  if ( v18 )
    ThreadUnlock1(v22, v21);
}
