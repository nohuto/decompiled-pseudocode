/*
 * XREFs of ?xxxSendMessageToClient@@YAXPEAUtagWND@@I_K_JPEAUtagSMS@@HPEA_J@Z @ 0x1C00535C0
 * Callers:
 *     xxxSendMessageCallback @ 0x1C003CBE4 (xxxSendMessageCallback.c)
 *     xxxReceiveMessage @ 0x1C004F020 (xxxReceiveMessage.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C00530C0 (xxxSendTransformableMessageTimeout.c)
 * Callees:
 *     xxxDefWindowProc @ 0x1C003E580 (xxxDefWindowProc.c)
 *     SfnDWORD @ 0x1C0054BC0 (SfnDWORD.c)
 *     _guard_dispatch_icall_nop @ 0x1C01400F0 (_guard_dispatch_icall_nop.c)
 *     PrepareSentPointerMessageForClient @ 0x1C01BB47C (PrepareSentPointerMessageForClient.c)
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
  __int64 v7; // rdi
  __int64 v8; // r11
  unsigned int v9; // r10d
  int v11; // ecx
  unsigned int v12; // r9d
  unsigned __int16 v13; // cx
  int v14; // r8d
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // r14
  __int64 v19; // rax
  int v20; // esi
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 *v23; // rcx
  _QWORD v24[4]; // [rsp+50h] [rbp-48h] BYREF
  unsigned int v25; // [rsp+A8h] [rbp+10h] BYREF
  __int64 v26; // [rsp+B0h] [rbp+18h] BYREF
  __int64 v27; // [rsp+B8h] [rbp+20h] BYREF

  v27 = a4;
  v26 = a3;
  v25 = a2;
  v7 = a4;
  v8 = a3;
  v9 = a2;
  if ( a2 - 577 <= 0x16 && (v11 = 8122367, _bittest(&v11, a2 - 577)) )
  {
    if ( (_WORD)a3 == 1 )
      goto LABEL_10;
  }
  else if ( a2 != 528 || (_WORD)a3 != 582 )
  {
    goto LABEL_10;
  }
  if ( !(unsigned int)PrepareSentPointerMessageForClient(&v25, &v26, &v27, 0LL) )
  {
    *a7 = 0LL;
    return;
  }
  v7 = v27;
  v8 = v26;
  v9 = v25;
LABEL_10:
  v12 = (*((unsigned __int8 *)a1 + 58) >> 3) & 1;
  if ( gihmodUserApiHook >= 0
    || gihmodDManipHook >= 0
    || v9 == 90
    || (v13 = *((_WORD *)a1 + 41) & 0x3FFF, (unsigned __int16)(v13 - 673) > 9u)
    || (v14 = v13, v15 = v13 - 666, v16 = *((_QWORD *)a1 + 20), v16 != *(_QWORD *)(gpsi + 8 * v15 + 576))
    && v16 != *(_QWORD *)(gpsi + 8 * v15 + 392) )
  {
    if ( (v9 & 0x1FFFF) < 0x400 )
      v19 = ((__int64 (__fastcall *)(struct tagWND *, _QWORD, __int64, __int64, _QWORD, _QWORD, unsigned int, struct tagSMS *))gapfnScSendMessage[(unsigned __int8)MessageTable[(unsigned __int16)v9]])(
              a1,
              v9,
              v8,
              v7,
              *((_QWORD *)a1 + 20),
              *(_QWORD *)(gpsi + 744LL),
              v12,
              a5);
    else
      v19 = SfnDWORD((_DWORD)a1, v9, v8, v7, *((_QWORD *)a1 + 20), *(_QWORD *)(gpsi + 744LL));
    goto LABEL_31;
  }
  v17 = 2 * v15;
  v18 = gSharedInfo[v17 + 6];
  if ( !v18
    || v9 <= LODWORD(gSharedInfo[v17 + 5])
    && ((unsigned __int8)(1 << (v9 & 7)) & *(_BYTE *)(((unsigned __int64)v9 >> 3) + v18)) != 0
    || (*((_BYTE *)a1 + 58) & 1) != 0 )
  {
    if ( (v9 & 0x1FFFF) < 0x400 )
      v19 = ((__int64 (__fastcall *)(struct tagWND *, _QWORD, __int64, __int64, _QWORD, _QWORD, unsigned int, struct tagSMS *))gapfnScSendMessage[(unsigned __int8)MessageTable[(unsigned __int16)v9]])(
              a1,
              v9,
              v8,
              v7,
              v12,
              *(_QWORD *)(gpsi + 8LL * (v14 - 673) + 760),
              v12,
              a5);
    else
      v19 = SfnDWORD((_DWORD)a1, v9, v8, v7, v12, *(_QWORD *)(gpsi + 8LL * (v14 - 673) + 760));
LABEL_31:
    *a7 = v19;
    return;
  }
  v20 = a6;
  if ( a6 )
  {
    v24[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v24;
    ++*((_DWORD *)a1 + 2);
    v24[1] = a1;
  }
  v21 = xxxDefWindowProc(a1, v9, v8, v7);
  v23 = a7;
  *a7 = v21;
  if ( v20 )
    ThreadUnlock1(v23, v22);
}
