/*
 * XREFs of xxxHkCallHook @ 0x1C00A9FC0
 * Callers:
 *     xxxCallHook2 @ 0x1C00A9660 (xxxCallHook2.c)
 * Callees:
 *     fnHkINDWORD @ 0x1C005C594 (fnHkINDWORD.c)
 *     W32SetCurrentThreadDpiAwarenessContext @ 0x1C00AA540 (W32SetCurrentThreadDpiAwarenessContext.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     SfnDWORD @ 0x1C00AA690 (SfnDWORD.c)
 *     fnHkINLPMSG @ 0x1C00AA9D0 (fnHkINLPMSG.c)
 *     fnHkINLPCBTCREATESTRUCT @ 0x1C00FC994 (fnHkINLPCBTCREATESTRUCT.c)
 *     fnHkINLPKBDLLHOOKSTRUCT @ 0x1C0104570 (fnHkINLPKBDLLHOOKSTRUCT.c)
 *     fnHkINLPMOUSEHOOKSTRUCTEX @ 0x1C0108254 (fnHkINLPMOUSEHOOKSTRUCTEX.c)
 *     fnHkINLPMSLLHOOKSTRUCT @ 0x1C010AA34 (fnHkINLPMSLLHOOKSTRUCT.c)
 *     fnHkINLPCBTACTIVATESTRUCT @ 0x1C0116658 (fnHkINLPCBTACTIVATESTRUCT.c)
 *     _guard_dispatch_icall_nop @ 0x1C0145690 (_guard_dispatch_icall_nop.c)
 *     fnHkINLPDEBUGHOOKSTRUCT @ 0x1C0200D30 (fnHkINLPDEBUGHOOKSTRUCT.c)
 *     fnHkINLPRECT @ 0x1C0200EF0 (fnHkINLPRECT.c)
 *     fnHkOPTINLPEVENTMSG @ 0x1C02010C0 (fnHkOPTINLPEVENTMSG.c)
 */

__int64 __fastcall xxxHkCallHook(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  __int64 v7; // rdi
  __int64 v8; // rbx
  __int64 v9; // r15
  __int64 ThreadWin32Thread; // rax
  __int64 v11; // rdx
  __int64 CurrentProcessWin32Process; // rax
  int v13; // r8d
  _QWORD *v14; // rsi
  int v15; // ecx
  __int64 v16; // r12
  unsigned __int64 *v17; // r14
  __int64 v18; // rbx
  _QWORD *v19; // r10
  unsigned __int64 v20; // rax
  __int64 v21; // rsi
  unsigned __int64 v22; // rax
  unsigned int v23; // r11d
  __int64 v24; // rcx
  __int64 v25; // rax
  unsigned int v26; // r11d
  __int64 v27; // rcx
  __int64 v28; // rax
  int v29; // ecx
  _QWORD *v31; // [rsp+50h] [rbp-68h]
  unsigned __int64 v32; // [rsp+50h] [rbp-68h]
  __int64 v33; // [rsp+58h] [rbp-60h]
  unsigned int v34; // [rsp+C0h] [rbp+8h]

  v7 = a1;
  v8 = 0LL;
  v33 = 0LL;
  v31 = 0LL;
  v9 = *(_QWORD *)(a1 + 56);
  if ( !v9 )
    return 0LL;
  if ( *(_DWORD *)(a1 + 68) != -1 )
  {
    ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
    v11 = *(int *)(v7 + 68);
    v9 = *(_QWORD *)(v7 + 56) + *(_QWORD *)(*(_QWORD *)(ThreadWin32Thread + 400) + 8 * v11 + 384);
    if ( (_DWORD)v11 != -1 )
    {
      a1 = *(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 456);
      *(_QWORD *)(a1 + 224) |= 0x200uLL;
    }
  }
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
  v34 = W32SetCurrentThreadDpiAwarenessContext(*(unsigned int *)(CurrentProcessWin32Process + 280));
  v13 = *(_DWORD *)(v7 + 64) & 2;
  if ( v13 )
    v14 = (_QWORD *)(gpsi + 392LL);
  else
    v14 = (_QWORD *)(gpsi + 576LL);
  v15 = *(_DWORD *)(v7 + 48);
  switch ( v15 )
  {
    case -1:
    case 3:
    case 6:
      LOBYTE(v8) = v13 != 0;
      v28 = fnHkINLPMSG((unsigned __int16)a2 | ((unsigned __int16)v15 << 16), a3, a4, v9, v14[19], v8, v7 + 64);
      break;
    case 0:
      v28 = fnHkOPTINLPEVENTMSG((unsigned __int16)a2 | ((unsigned __int16)v15 << 16), a3, a4, v9, v14[19]);
      break;
    case 1:
      v28 = fnHkOPTINLPEVENTMSG((unsigned __int16)a2 | ((unsigned __int16)v15 << 16), *(_QWORD *)v7, a4, v9, v14[19]);
      *(_DWORD *)(v7 + 64) &= ~4u;
      break;
    case 2:
    case 11:
      goto LABEL_38;
    case 4:
    case 12:
      if ( v15 == 4 )
      {
        v33 = a4;
        v16 = *(_QWORD *)(a4 + 32);
      }
      else
      {
        v31 = (_QWORD *)a4;
        v16 = *(_QWORD *)(a4 + 40);
      }
      if ( !v16 || (*(_DWORD *)(v16 + 84) & 5) == 0 )
      {
        v17 = *(unsigned __int64 **)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 456);
        if ( *(_DWORD *)(v7 + 48) == 4 )
        {
          v18 = v14[17];
          v19 = v31;
        }
        else
        {
          v18 = v14[18];
          v19 = v31;
          v17[13] = *v31;
        }
        v20 = *v17;
        v21 = *v17 & 0x10;
        v32 = v17[13];
        if ( a3 )
          v22 = v20 | 0x10;
        else
          v22 = v20 & 0xFFFFFFFFFFFFFFEFuLL;
        *v17 = v22;
        if ( *(_DWORD *)(v7 + 48) == 4 )
        {
          v23 = *(_DWORD *)(v33 + 16);
          v24 = (unsigned __int16)*(_DWORD *)(v33 + 24);
          if ( (v23 & 0x1FFFF) < 0x400 )
            v25 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, __int64, __int64, unsigned int, __int64))gapfnScSendMessage[(unsigned __int8)MessageTable[(unsigned __int16)v23]])(
                    *(_QWORD *)(gpKernelHandleTable + 24 * v24),
                    v23,
                    *(_QWORD *)(v33 + 8),
                    *(_QWORD *)v33,
                    v9,
                    v18,
                    (*(_DWORD *)(v7 + 64) & 2 | 4u) >> 1,
                    v16);
          else
            v25 = SfnDWORD(
                    *(_QWORD *)(gpKernelHandleTable + 24 * v24),
                    v23,
                    *(_QWORD *)(v33 + 8),
                    *(_QWORD *)v33,
                    v9,
                    v18);
        }
        else
        {
          v26 = *((_DWORD *)v19 + 6);
          v27 = (unsigned __int16)*((_DWORD *)v19 + 8);
          if ( (v26 & 0x1FFFF) < 0x400 )
            v25 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, __int64, __int64, unsigned int, __int64))gapfnScSendMessage[(unsigned __int8)MessageTable[(unsigned __int16)v26]])(
                    *(_QWORD *)(gpKernelHandleTable + 24 * v27),
                    v26,
                    v19[2],
                    v19[1],
                    v9,
                    v18,
                    (*(_DWORD *)(v7 + 64) & 2 | 4u) >> 1,
                    v16);
          else
            v25 = SfnDWORD(*(_QWORD *)(gpKernelHandleTable + 24 * v27), v26, v19[2], v19[1], v9, v18);
        }
        v8 = v25;
        *v17 ^= ((unsigned __int8)v21 ^ (unsigned __int8)*v17) & 0x10;
        v17[13] = v32;
      }
      goto LABEL_49;
    case 5:
      switch ( a2 )
      {
        case 0:
          v29 = *(unsigned __int16 *)(v7 + 48) << 16;
          goto LABEL_37;
        case 3:
          LOBYTE(v8) = v13 != 0;
          v28 = fnHkINLPCBTCREATESTRUCT((*(unsigned __int16 *)(v7 + 48) << 16) | 3u, a3, a4, v9, v8);
          break;
        case 5:
          v28 = fnHkINLPCBTACTIVATESTRUCT((*(unsigned __int16 *)(v7 + 48) << 16) | 5u, a3, a4, v9, v14[19]);
          break;
        case 6:
LABEL_47:
          v28 = fnHkINLPMOUSEHOOKSTRUCTEX(
                  (unsigned __int16)a2 | (*(unsigned __int16 *)(v7 + 48) << 16),
                  a3,
                  a4,
                  v9,
                  v14[19],
                  v7 + 64);
          break;
        default:
          v15 = *(unsigned __int16 *)(v7 + 48);
          goto LABEL_33;
      }
      break;
    case 7:
      goto LABEL_47;
    case 9:
      v28 = fnHkINLPDEBUGHOOKSTRUCT((unsigned __int16)a2 | ((unsigned __int16)v15 << 16), a3, a4, v9, v14[19]);
      break;
    case 10:
      if ( a2 == 5 )
      {
        v29 = ((unsigned __int16)v15 << 16) | 5;
LABEL_37:
        v28 = fnHkINLPRECT(v29, a3, a4, v9, v14[19]);
      }
      else
      {
LABEL_38:
        v15 = (unsigned __int16)v15;
LABEL_33:
        v28 = fnHkINDWORD((unsigned __int16)a2 | (unsigned int)(v15 << 16), a3, a4, v9, v14[19], (_DWORD *)(v7 + 64));
      }
      break;
    case 13:
      v28 = fnHkINLPKBDLLHOOKSTRUCT((unsigned __int16)a2 | ((unsigned __int16)v15 << 16), a3, a4, v9, v14[19]);
      break;
    case 14:
      v28 = fnHkINLPMSLLHOOKSTRUCT((unsigned __int16)a2 | ((unsigned __int16)v15 << 16), a3, a4, v9, v14[19]);
      break;
    default:
      goto LABEL_49;
  }
  v8 = v28;
LABEL_49:
  W32SetCurrentThreadDpiAwarenessContext(v34);
  return v8;
}
