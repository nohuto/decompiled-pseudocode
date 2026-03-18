/*
 * XREFs of NtUserCallNextHookEx @ 0x1C0052DE0
 * Callers:
 *     <none>
 * Callees:
 *     ?NtUserfnHkINLPMSG@@YA_JHK_KPEAUtagMSG@@@Z @ 0x1C0052F90 (-NtUserfnHkINLPMSG@@YA_JHK_KPEAUtagMSG@@@Z.c)
 *     xxxCallNextHookEx @ 0x1C00D93C4 (xxxCallNextHookEx.c)
 *     ?NtUserfnHkINLPCBTACTIVATESTRUCT@@YA_JK_KPEAUtagCBTACTIVATESTRUCT@@@Z @ 0x1C01D6044 (-NtUserfnHkINLPCBTACTIVATESTRUCT@@YA_JK_KPEAUtagCBTACTIVATESTRUCT@@@Z.c)
 *     ?NtUserfnHkINLPCBTCREATESTRUCT@@YA_JI_KPEAUtagCBT_CREATEWNDW@@H@Z @ 0x1C01D6090 (-NtUserfnHkINLPCBTCREATESTRUCT@@YA_JI_KPEAUtagCBT_CREATEWNDW@@H@Z.c)
 *     ?NtUserfnHkINLPDEBUGHOOKSTRUCT@@YA_JK_KPEAUtagDEBUGHOOKINFO@@@Z @ 0x1C01D6308 (-NtUserfnHkINLPDEBUGHOOKSTRUCT@@YA_JK_KPEAUtagDEBUGHOOKINFO@@@Z.c)
 *     ?NtUserfnHkINLPKBDLLHOOKSTRUCT@@YA_JK_KPEAUtagKBDLLHOOKSTRUCT@@@Z @ 0x1C01D63BC (-NtUserfnHkINLPKBDLLHOOKSTRUCT@@YA_JK_KPEAUtagKBDLLHOOKSTRUCT@@@Z.c)
 *     ?NtUserfnHkINLPMOUSEHOOKSTRUCTEX@@YA_JK_KPEAUtagMOUSEHOOKSTRUCTEX@@@Z @ 0x1C01D6430 (-NtUserfnHkINLPMOUSEHOOKSTRUCTEX@@YA_JK_KPEAUtagMOUSEHOOKSTRUCTEX@@@Z.c)
 *     ?NtUserfnHkINLPMSLLHOOKSTRUCT@@YA_JK_KPEAUtagMSLLHOOKSTRUCT@@@Z @ 0x1C01D6490 (-NtUserfnHkINLPMSLLHOOKSTRUCT@@YA_JK_KPEAUtagMSLLHOOKSTRUCT@@@Z.c)
 *     ?NtUserfnHkINLPRECT@@YA_JK_KPEAUtagRECT@@@Z @ 0x1C01D6500 (-NtUserfnHkINLPRECT@@YA_JK_KPEAUtagRECT@@@Z.c)
 *     ?NtUserfnHkOPTINLPEVENTMSG@@YA_JK_KPEAUtagEVENTMSG@@@Z @ 0x1C01D6568 (-NtUserfnHkOPTINLPEVENTMSG@@YA_JK_KPEAUtagEVENTMSG@@@Z.c)
 */

__int64 __fastcall NtUserCallNextHookEx(unsigned int a1, unsigned __int64 a2, struct tagDEBUGHOOKINFO *a3, int a4)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rbx
  __int64 v13; // rax
  __int64 v14; // rax
  struct tagRECT *v15; // r8
  unsigned __int64 v16; // rdx
  unsigned int v17; // ecx
  int v18; // ecx
  int v19; // ecx
  int v20; // ecx

  EnterCrit(0LL, 1LL);
  v12 = 0LL;
  v13 = *(_QWORD *)(gptiCurrent + 608LL);
  if ( !v13 )
    goto LABEL_35;
  v9 = *(unsigned int *)(v13 + 48);
  if ( (int)v9 > 7 )
  {
    v18 = v9 - 9;
    if ( !v18 )
    {
      v14 = NtUserfnHkINLPDEBUGHOOKSTRUCT(a1, a2, a3);
      goto LABEL_34;
    }
    v19 = v18 - 1;
    if ( v19 )
    {
      v20 = v19 - 1;
      if ( v20 )
      {
        v9 = (unsigned int)(v20 - 2);
        if ( !(_DWORD)v9 )
        {
          v14 = NtUserfnHkINLPKBDLLHOOKSTRUCT(a1, a2, a3);
          goto LABEL_34;
        }
        if ( (_DWORD)v9 == 1 )
        {
          v14 = NtUserfnHkINLPMSLLHOOKSTRUCT(a1, a2, a3);
          goto LABEL_34;
        }
        goto LABEL_35;
      }
      goto LABEL_16;
    }
    v15 = (struct tagRECT *)a3;
    v16 = a2;
    if ( a1 != 5 )
      goto LABEL_17;
    v17 = 5;
    goto LABEL_21;
  }
  if ( (_DWORD)v9 == 7 )
    goto LABEL_23;
  if ( (_DWORD)v9 == -1 )
    goto LABEL_11;
  if ( (int)v9 < 0 )
    goto LABEL_35;
  if ( (int)v9 <= 1 )
  {
    v14 = NtUserfnHkOPTINLPEVENTMSG(a1, a2, a3);
    goto LABEL_34;
  }
  switch ( (_DWORD)v9 )
  {
    case 2:
      goto LABEL_16;
    case 3:
LABEL_11:
      v14 = NtUserfnHkINLPMSG(v9, a1, a2, a3);
LABEL_34:
      v12 = v14;
      break;
    case 5:
      if ( a1 )
      {
        if ( a1 == 3 )
        {
          v14 = NtUserfnHkINLPCBTCREATESTRUCT(3u, a2, a3, a4);
          goto LABEL_34;
        }
        if ( a1 == 5 )
        {
          v14 = NtUserfnHkINLPCBTACTIVATESTRUCT(5u, a2, a3);
          goto LABEL_34;
        }
        if ( a1 != 6 )
        {
LABEL_16:
          v15 = (struct tagRECT *)a3;
          v16 = a2;
LABEL_17:
          v14 = xxxCallNextHookEx(a1, v16, v15);
          goto LABEL_34;
        }
LABEL_23:
        v14 = NtUserfnHkINLPMOUSEHOOKSTRUCTEX(a1, a2, a3);
        goto LABEL_34;
      }
      v15 = (struct tagRECT *)a3;
      v16 = a2;
      v17 = 0;
LABEL_21:
      v14 = NtUserfnHkINLPRECT(v17, v16, v15);
      goto LABEL_34;
    case 6:
      goto LABEL_11;
  }
LABEL_35:
  UserSessionSwitchLeaveCrit(v9, v8, v10, v11);
  return v12;
}
