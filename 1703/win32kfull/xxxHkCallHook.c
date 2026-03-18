/*
 * XREFs of xxxHkCallHook @ 0x1C00544D0
 * Callers:
 *     xxxCallHook2 @ 0x1C0053B80 (xxxCallHook2.c)
 * Callees:
 *     W32SetCurrentThreadDpiAwarenessContext @ 0x1C0054AA0 (W32SetCurrentThreadDpiAwarenessContext.c)
 *     W32GetThreadWin32Thread @ 0x1C0054B98 (W32GetThreadWin32Thread.c)
 *     SfnDWORD @ 0x1C0054BC0 (SfnDWORD.c)
 *     fnHkINLPMSG @ 0x1C0054DB0 (fnHkINLPMSG.c)
 *     fnHkINDWORD @ 0x1C00E2800 (fnHkINDWORD.c)
 *     fnHkINLPCBTCREATESTRUCT @ 0x1C00F0378 (fnHkINLPCBTCREATESTRUCT.c)
 *     fnHkINLPKBDLLHOOKSTRUCT @ 0x1C00F860C (fnHkINLPKBDLLHOOKSTRUCT.c)
 *     fnHkINLPMOUSEHOOKSTRUCTEX @ 0x1C00FC178 (fnHkINLPMOUSEHOOKSTRUCTEX.c)
 *     fnHkINLPMSLLHOOKSTRUCT @ 0x1C010086C (fnHkINLPMSLLHOOKSTRUCT.c)
 *     fnHkINLPCBTACTIVATESTRUCT @ 0x1C010D1D4 (fnHkINLPCBTACTIVATESTRUCT.c)
 *     _guard_dispatch_icall_nop @ 0x1C01400F0 (_guard_dispatch_icall_nop.c)
 *     fnHkINLPDEBUGHOOKSTRUCT @ 0x1C01FF358 (fnHkINLPDEBUGHOOKSTRUCT.c)
 *     fnHkINLPRECT @ 0x1C01FF500 (fnHkINLPRECT.c)
 *     fnHkOPTINLPEVENTMSG @ 0x1C01FF6BC (fnHkOPTINLPEVENTMSG.c)
 */

__int64 __fastcall xxxHkCallHook(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  int v6; // r12d
  __int64 v7; // rsi
  __int64 v8; // rbx
  __int64 v9; // r15
  __int64 v10; // r8
  __int64 CurrentProcessWin32Process; // rax
  __int64 v12; // r8
  _QWORD *v13; // rdi
  int v14; // ecx
  __int64 v15; // r12
  unsigned __int64 *v16; // r14
  __int64 v17; // rbx
  _QWORD *v18; // r10
  unsigned __int64 v19; // rax
  __int64 v20; // rdi
  unsigned __int64 v21; // rax
  unsigned int v22; // r11d
  int v23; // eax
  __int64 v24; // rax
  unsigned int v25; // r11d
  int v26; // eax
  __int64 v27; // rax
  int v28; // ecx
  _QWORD *v30; // [rsp+50h] [rbp-68h]
  unsigned __int64 v31; // [rsp+50h] [rbp-68h]
  _QWORD *v32; // [rsp+58h] [rbp-60h]
  unsigned int v33; // [rsp+C0h] [rbp+8h]

  v6 = a2;
  v7 = a1;
  v8 = 0LL;
  v32 = 0LL;
  v30 = 0LL;
  v9 = *(_QWORD *)(a1 + 56);
  if ( !v9 )
    return 0LL;
  v10 = *(int *)(a1 + 68);
  if ( (_DWORD)v10 != -1 )
  {
    v9 += *(_QWORD *)(*(_QWORD *)(gptiCurrent + 376LL) + 8 * v10 + 376);
    a1 = *(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread(), a2, v10, a4) + 432);
    *(_QWORD *)(a1 + 224) |= 0x200uLL;
  }
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1, a2);
  v33 = W32SetCurrentThreadDpiAwarenessContext(*(unsigned int *)(CurrentProcessWin32Process + 280));
  v12 = *(_DWORD *)(v7 + 64) & 2;
  if ( (*(_DWORD *)(v7 + 64) & 2) != 0 )
    v13 = (_QWORD *)(gpsi + 392LL);
  else
    v13 = (_QWORD *)(gpsi + 576LL);
  v14 = *(_DWORD *)(v7 + 48);
  switch ( v14 )
  {
    case -1:
    case 3:
    case 6:
      LOBYTE(v8) = (_DWORD)v12 != 0;
      v27 = fnHkINLPMSG((unsigned __int16)v6 | ((unsigned __int16)v14 << 16), a3, (_DWORD)a4, v9, v13[19], v8, v7 + 64);
      break;
    case 0:
      v27 = fnHkOPTINLPEVENTMSG((unsigned __int16)v6 | ((unsigned __int16)v14 << 16), a3, (_DWORD)a4, v9, v13[19]);
      break;
    case 1:
      v27 = fnHkOPTINLPEVENTMSG(
              (unsigned __int16)v6 | ((unsigned __int16)v14 << 16),
              *(_QWORD *)v7,
              (_DWORD)a4,
              v9,
              v13[19]);
      *(_DWORD *)(v7 + 64) &= ~4u;
      break;
    case 2:
    case 11:
      goto LABEL_37;
    case 4:
    case 12:
      if ( v14 == 4 )
      {
        v32 = a4;
        v15 = a4[4];
      }
      else
      {
        v30 = a4;
        v15 = a4[5];
      }
      if ( !v15 || (*(_DWORD *)(v15 + 84) & 5) == 0 )
      {
        v16 = *(unsigned __int64 **)(W32GetThreadWin32Thread(KeGetCurrentThread(), v7 + 64, v12, 0x1C0000000uLL) + 432);
        if ( *(_DWORD *)(v7 + 48) == 4 )
        {
          v17 = v13[17];
          v18 = v30;
        }
        else
        {
          v17 = v13[18];
          v18 = v30;
          v16[13] = *v30;
        }
        v19 = *v16;
        v20 = *v16 & 0x10;
        v31 = v16[13];
        if ( a3 )
          v21 = v19 | 0x10;
        else
          v21 = v19 & 0xFFFFFFFFFFFFFFEFuLL;
        *v16 = v21;
        if ( *(_DWORD *)(v7 + 48) == 4 )
        {
          v22 = *((_DWORD *)v32 + 4);
          v23 = *((_DWORD *)v32 + 6);
          if ( (v22 & 0x1FFFF) < 0x400 )
            v24 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, __int64, __int64, unsigned int, __int64))gapfnScSendMessage[(unsigned __int8)MessageTable[(unsigned __int16)v22]])(
                    *(_QWORD *)(gpKernelHandleTable + 16LL * (unsigned __int16)v23),
                    v22,
                    v32[1],
                    *v32,
                    v9,
                    v17,
                    (*(_DWORD *)(v7 + 64) & 2 | 4u) >> 1,
                    v15);
          else
            v24 = SfnDWORD(*(_QWORD *)(gpKernelHandleTable + 16LL * (unsigned __int16)v23), v22, v32[1], *v32, v9, v17);
        }
        else
        {
          v25 = *((_DWORD *)v18 + 6);
          v26 = *((_DWORD *)v18 + 8);
          if ( (v25 & 0x1FFFF) < 0x400 )
            v24 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, __int64, __int64, unsigned int, __int64))gapfnScSendMessage[(unsigned __int8)MessageTable[(unsigned __int16)v25]])(
                    *(_QWORD *)(gpKernelHandleTable + 16LL * (unsigned __int16)v26),
                    v25,
                    v18[2],
                    v18[1],
                    v9,
                    v17,
                    (*(_DWORD *)(v7 + 64) & 2 | 4u) >> 1,
                    v15);
          else
            v24 = SfnDWORD(
                    *(_QWORD *)(gpKernelHandleTable + 16LL * (unsigned __int16)v26),
                    v25,
                    v18[2],
                    v18[1],
                    v9,
                    v17);
        }
        v8 = v24;
        *v16 ^= ((unsigned __int8)v20 ^ (unsigned __int8)*v16) & 0x10;
        v16[13] = v31;
      }
      goto LABEL_48;
    case 5:
      switch ( v6 )
      {
        case 0:
          v28 = *(unsigned __int16 *)(v7 + 48) << 16;
          goto LABEL_36;
        case 3:
          LOBYTE(v8) = (_DWORD)v12 != 0;
          v27 = fnHkINLPCBTCREATESTRUCT((*(unsigned __int16 *)(v7 + 48) << 16) | 3u, a3, (_DWORD)a4, v9, v8);
          break;
        case 5:
          v27 = fnHkINLPCBTACTIVATESTRUCT((*(unsigned __int16 *)(v7 + 48) << 16) | 5u, a3, (_DWORD)a4, v9, v13[19]);
          break;
        case 6:
LABEL_46:
          v27 = fnHkINLPMOUSEHOOKSTRUCTEX(
                  (unsigned __int16)v6 | (*(unsigned __int16 *)(v7 + 48) << 16),
                  a3,
                  (_DWORD)a4,
                  v9,
                  v13[19],
                  v7 + 64);
          break;
        default:
          v14 = *(unsigned __int16 *)(v7 + 48);
          goto LABEL_32;
      }
      break;
    case 7:
      goto LABEL_46;
    case 9:
      v27 = fnHkINLPDEBUGHOOKSTRUCT((unsigned __int16)v6 | ((unsigned __int16)v14 << 16), a3, (_DWORD)a4, v9, v13[19]);
      break;
    case 10:
      if ( v6 == 5 )
      {
        v28 = ((unsigned __int16)v14 << 16) | 5;
LABEL_36:
        v27 = fnHkINLPRECT(v28, a3, (_DWORD)a4, v9, v13[19]);
      }
      else
      {
LABEL_37:
        v14 = (unsigned __int16)v14;
LABEL_32:
        v27 = fnHkINDWORD((unsigned __int16)v6 | (unsigned int)(v14 << 16), a3, (_DWORD)a4, v9, v13[19], v7 + 64);
      }
      break;
    case 13:
      v27 = fnHkINLPKBDLLHOOKSTRUCT((unsigned __int16)v6 | ((unsigned __int16)v14 << 16), a3, (_DWORD)a4, v9, v13[19]);
      break;
    case 14:
      v27 = fnHkINLPMSLLHOOKSTRUCT((unsigned __int16)v6 | ((unsigned __int16)v14 << 16), a3, (_DWORD)a4, v9, v13[19]);
      break;
    default:
      goto LABEL_48;
  }
  v8 = v27;
LABEL_48:
  W32SetCurrentThreadDpiAwarenessContext(v33);
  return v8;
}
