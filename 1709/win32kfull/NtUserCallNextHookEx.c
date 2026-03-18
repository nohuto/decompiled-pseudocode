/*
 * XREFs of NtUserCallNextHookEx @ 0x1C00A6150
 * Callers:
 *     <none>
 * Callees:
 *     xxxCallNextHookEx @ 0x1C0055BC8 (xxxCallNextHookEx.c)
 *     ?NtUserfnHkINLPMSG@@YA_JHK_KPEAUtagMSG@@@Z @ 0x1C00A6240 (-NtUserfnHkINLPMSG@@YA_JHK_KPEAUtagMSG@@@Z.c)
 *     ?NtUserfnHkINLPCBTACTIVATESTRUCT@@YA_JK_KPEAUtagCBTACTIVATESTRUCT@@@Z @ 0x1C01E28A8 (-NtUserfnHkINLPCBTACTIVATESTRUCT@@YA_JK_KPEAUtagCBTACTIVATESTRUCT@@@Z.c)
 *     ?NtUserfnHkINLPCBTCREATESTRUCT@@YA_JI_KPEAUtagCBT_CREATEWNDW@@H@Z @ 0x1C01E28F8 (-NtUserfnHkINLPCBTCREATESTRUCT@@YA_JI_KPEAUtagCBT_CREATEWNDW@@H@Z.c)
 *     ?NtUserfnHkINLPDEBUGHOOKSTRUCT@@YA_JK_KPEAUtagDEBUGHOOKINFO@@@Z @ 0x1C01E2B80 (-NtUserfnHkINLPDEBUGHOOKSTRUCT@@YA_JK_KPEAUtagDEBUGHOOKINFO@@@Z.c)
 *     ?NtUserfnHkINLPKBDLLHOOKSTRUCT@@YA_JK_KPEAUtagKBDLLHOOKSTRUCT@@@Z @ 0x1C01E2C34 (-NtUserfnHkINLPKBDLLHOOKSTRUCT@@YA_JK_KPEAUtagKBDLLHOOKSTRUCT@@@Z.c)
 *     ?NtUserfnHkINLPMOUSEHOOKSTRUCTEX@@YA_JK_KPEAUtagMOUSEHOOKSTRUCTEX@@@Z @ 0x1C01E2CB0 (-NtUserfnHkINLPMOUSEHOOKSTRUCTEX@@YA_JK_KPEAUtagMOUSEHOOKSTRUCTEX@@@Z.c)
 *     ?NtUserfnHkINLPMSLLHOOKSTRUCT@@YA_JK_KPEAUtagMSLLHOOKSTRUCT@@@Z @ 0x1C01E2D14 (-NtUserfnHkINLPMSLLHOOKSTRUCT@@YA_JK_KPEAUtagMSLLHOOKSTRUCT@@@Z.c)
 *     ?NtUserfnHkINLPRECT@@YA_JK_KPEAUtagRECT@@@Z @ 0x1C01E2D8C (-NtUserfnHkINLPRECT@@YA_JK_KPEAUtagRECT@@@Z.c)
 *     ?NtUserfnHkOPTINLPEVENTMSG@@YA_JK_KPEAUtagEVENTMSG@@@Z @ 0x1C01E2DFC (-NtUserfnHkOPTINLPEVENTMSG@@YA_JK_KPEAUtagEVENTMSG@@@Z.c)
 */

__int64 __fastcall NtUserCallNextHookEx(unsigned int a1, unsigned __int64 a2, struct tagDEBUGHOOKINFO *a3, int a4)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rax
  int v14; // ecx
  int v15; // ecx
  struct tagRECT *v16; // r8
  unsigned __int64 v17; // rdx
  unsigned int v18; // ecx
  int v19; // ecx

  EnterCrit(0LL, 1LL);
  v10 = 0LL;
  v11 = *(_QWORD *)(gptiCurrent + 664LL);
  if ( v11 )
  {
    v9 = *(unsigned int *)(v11 + 48);
    if ( (int)v9 > 7 )
    {
      v14 = v9 - 9;
      if ( !v14 )
      {
        v12 = NtUserfnHkINLPDEBUGHOOKSTRUCT(a1, a2, a3);
        goto LABEL_9;
      }
      v15 = v14 - 1;
      if ( v15 )
      {
        v19 = v15 - 1;
        if ( v19 )
        {
          v9 = (unsigned int)(v19 - 2);
          if ( (_DWORD)v9 )
          {
            if ( (_DWORD)v9 != 1 )
              goto LABEL_10;
            v12 = NtUserfnHkINLPMSLLHOOKSTRUCT(a1, a2, a3);
          }
          else
          {
            v12 = NtUserfnHkINLPKBDLLHOOKSTRUCT(a1, a2, a3);
          }
          goto LABEL_9;
        }
        goto LABEL_14;
      }
      v16 = (struct tagRECT *)a3;
      v17 = a2;
      if ( a1 != 5 )
      {
LABEL_14:
        v12 = xxxCallNextHookEx();
        goto LABEL_9;
      }
      v18 = 5;
      goto LABEL_29;
    }
    if ( (_DWORD)v9 == 7 )
      goto LABEL_24;
    if ( (_DWORD)v9 == -1 )
    {
LABEL_8:
      v12 = NtUserfnHkINLPMSG(v9, a1, a2, a3);
LABEL_9:
      v10 = v12;
      goto LABEL_10;
    }
    if ( (int)v9 >= 0 )
    {
      if ( (int)v9 <= 1 )
      {
        v12 = NtUserfnHkOPTINLPEVENTMSG(a1, a2, a3);
        goto LABEL_9;
      }
      if ( (_DWORD)v9 == 3 )
        goto LABEL_8;
      if ( (_DWORD)v9 == 2 )
        goto LABEL_14;
      if ( (_DWORD)v9 != 5 )
      {
        if ( (_DWORD)v9 != 6 )
          goto LABEL_10;
        goto LABEL_8;
      }
      if ( a1 )
      {
        if ( a1 == 3 )
        {
          v12 = NtUserfnHkINLPCBTCREATESTRUCT(3u, a2, a3, a4);
          goto LABEL_9;
        }
        if ( a1 == 5 )
        {
          v12 = NtUserfnHkINLPCBTACTIVATESTRUCT(5u, a2, a3);
          goto LABEL_9;
        }
        if ( a1 != 6 )
          goto LABEL_14;
LABEL_24:
        v12 = NtUserfnHkINLPMOUSEHOOKSTRUCTEX(a1, a2, a3);
        goto LABEL_9;
      }
      v16 = (struct tagRECT *)a3;
      v17 = a2;
      v18 = 0;
LABEL_29:
      v12 = NtUserfnHkINLPRECT(v18, v17, v16);
      goto LABEL_9;
    }
  }
LABEL_10:
  UserSessionSwitchLeaveCrit(v9, v8);
  return v10;
}
