/*
 * XREFs of ?xxxSkipSysMsgEx@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@H@Z @ 0x1C009E924
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00D07A0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     HMValidateHandleNoRip @ 0x1C0053EA8 (HMValidateHandleNoRip.c)
 *     ?UpdateKeyState@@YAXPEAUtagQ@@IH@Z @ 0x1C009D640 (-UpdateKeyState@@YAXPEAUtagQ@@IH@Z.c)
 *     PhkFirstGlobalValid @ 0x1C009EB9C (PhkFirstGlobalValid.c)
 *     ?EqualMsg@@YAHPEAUtagQMSG@@0@Z @ 0x1C009EBD4 (-EqualMsg@@YAHPEAUtagQMSG@@0@Z.c)
 *     DelQEntry @ 0x1C009EC10 (DelQEntry.c)
 *     xxxCallJournalRecordHook @ 0x1C01C4BB4 (xxxCallJournalRecordHook.c)
 */

struct tagQMSG *__fastcall xxxSkipSysMsgEx(struct tagTHREADINFO *a1, struct tagQMSG *a2, __int64 a3, __int64 a4)
{
  struct tagQMSG *i; // rbx
  unsigned int v5; // edi
  __int64 GlobalValid; // r8
  __int64 v9; // r9
  struct tagQMSG *v10; // r9
  __int64 v11; // r8
  struct tagQMSG *v12; // r9
  unsigned int v13; // eax
  unsigned __int8 v14; // r11
  int v15; // edx
  BOOL v16; // edi
  unsigned __int8 v18; // si
  unsigned int v19; // edx
  unsigned __int8 v20; // si
  unsigned int v21; // eax
  unsigned int v22; // eax
  __int64 v23; // rax
  __int16 v24; // cx
  unsigned int v25; // eax
  unsigned int v26; // eax
  unsigned int v27; // eax

  i = 0LL;
  v5 = a3;
  if ( *(_QWORD *)(*((_QWORD *)a1 + 51) + 80LL) )
  {
    GlobalValid = PhkFirstGlobalValid(a1, 1LL, a3, a4);
    if ( GlobalValid && *((_QWORD *)a1 + 54) == grpdeskRitInput )
    {
      *(_DWORD *)(GlobalValid + 64) |= 4u;
      goto LABEL_13;
    }
    if ( PhkFirstGlobalValid(a1, 0LL, GlobalValid, v9) )
      xxxCallJournalRecordHook(a2);
    v10 = *(struct tagQMSG **)(*((_QWORD *)a1 + 51) + 80LL);
    i = v10;
    if ( v10 )
    {
      if ( v10 == (struct tagQMSG *)1 )
        goto LABEL_13;
      if ( (unsigned int)EqualMsg(v10, a2) )
      {
LABEL_8:
        if ( i == v12 )
          *(_QWORD *)(v11 + 80) = 0LL;
        DelQEntry(*((_QWORD *)a1 + 51) + 24LL, i, v5);
        if ( v5 )
        {
          i = 0LL;
        }
        else
        {
          *((_QWORD *)i + 1) = 0LL;
          *(_QWORD *)i = 0LL;
        }
        EtwTraceInputProcessDelay(a1);
        *(_DWORD *)(*((_QWORD *)a1 + 51) + 408LL) = (MEMORY[0xFFFFF78000000320]
                                                   * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
LABEL_13:
        if ( (*((_DWORD *)a2 + 25) & 0x20000) != 0 )
          return i;
        v13 = *((_DWORD *)a2 + 6);
        v14 = 0;
        v15 = 0;
        v16 = 1;
        if ( v13 == 514 )
          goto LABEL_35;
        if ( v13 > 0x202 )
        {
          v21 = v13 - 516;
          if ( v21 )
          {
            v22 = v21 - 1;
            if ( v22 )
            {
              v25 = v22 - 2;
              if ( v25 )
              {
                v26 = v25 - 1;
                if ( v26 )
                {
                  v27 = v26 - 3;
                  if ( v27 )
                  {
                    if ( v27 != 1 )
                      return i;
                    v16 = 0;
                  }
                  if ( *((_WORD *)a2 + 17) == 1 )
                  {
                    v14 = 5;
                    goto LABEL_27;
                  }
                  if ( *((_WORD *)a2 + 17) == 2 )
                  {
                    v14 = 6;
                    goto LABEL_27;
                  }
                  goto LABEL_25;
                }
                v16 = 0;
              }
              v14 = 4;
              goto LABEL_27;
            }
            v16 = 0;
          }
          v14 = 2;
          goto LABEL_25;
        }
        if ( v13 == 255 )
        {
          if ( (*((_DWORD *)a1 + 296) & 0x200000) == 0 )
            return i;
          if ( *((_QWORD *)a2 + 4) )
            return i;
          v23 = HMValidateHandleNoRip(*((_QWORD *)a2 + 5), 18);
          if ( !v23 || *(_DWORD *)(v23 + 32) != 1 )
            return i;
          v24 = *(_WORD *)(v23 + 58);
          v14 = *(_BYTE *)(v23 + 62);
          v16 = (v24 & 1) == 0;
          v15 = v24 & 6;
          if ( v14 == 16 )
          {
            *(_WORD *)(v23 + 58) = v24 & 0xFFF9;
            goto LABEL_32;
          }
          goto LABEL_25;
        }
        if ( v13 != 256 )
        {
          if ( v13 != 257 )
          {
            if ( v13 == 260 )
              goto LABEL_24;
            if ( v13 != 261 )
            {
              if ( v13 != 513 )
                return i;
LABEL_35:
              v14 = 1;
              v16 = v13 != 514;
              goto LABEL_27;
            }
          }
          v16 = 0;
        }
LABEL_24:
        v14 = *((_BYTE *)a2 + 32);
        v15 = *((_DWORD *)a2 + 10) & 0x1000000;
        if ( v14 == 16 )
        {
          *((_QWORD *)a2 + 5) &= ~0x1000000uLL;
          goto LABEL_32;
        }
LABEL_25:
        if ( (unsigned __int8)(v14 - 17) > 1u )
        {
          if ( !v14 )
            return i;
LABEL_27:
          UpdateKeyState(*((struct tagQ **)a1 + 51), v14, v16);
          return i;
        }
LABEL_32:
        v18 = 2 * (v14 - 16) - 96 + (v15 != 0);
        v19 = v18;
        v20 = v18 ^ 1;
        UpdateKeyState(*((struct tagQ **)a1 + 51), v19, v16);
        if ( !v16
          && ((unsigned __int8)(1 << (2 * (v20 & 3))) & *(_BYTE *)(((unsigned __int64)v20 >> 2)
                                                                 + *((_QWORD *)a1 + 51)
                                                                 + 224)) != 0 )
        {
          return i;
        }
        goto LABEL_27;
      }
      for ( i = *(struct tagQMSG **)(v11 + 24); i; i = *(struct tagQMSG **)i )
      {
        if ( (unsigned int)EqualMsg(i, a2) )
          goto LABEL_8;
      }
    }
  }
  return 0LL;
}
