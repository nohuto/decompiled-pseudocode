/*
 * XREFs of ?xxxSkipSysMsgEx@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@H@Z @ 0x1C00CBF64
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00CD8F0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     HMValidateHandleNoRip @ 0x1C00C3ABC (HMValidateHandleNoRip.c)
 *     ?UpdateKeyState@@YAXPEAUtagQ@@IH@Z @ 0x1C00CB918 (-UpdateKeyState@@YAXPEAUtagQ@@IH@Z.c)
 *     PhkFirstGlobalValid @ 0x1C00CC1D8 (PhkFirstGlobalValid.c)
 *     ?EqualMsg@@YAHPEAUtagQMSG@@0@Z @ 0x1C00CC210 (-EqualMsg@@YAHPEAUtagQMSG@@0@Z.c)
 *     DelQEntry @ 0x1C00CC24C (DelQEntry.c)
 *     xxxCallJournalRecordHook @ 0x1C01C13AC (xxxCallJournalRecordHook.c)
 */

struct tagQMSG *__fastcall xxxSkipSysMsgEx(struct tagTHREADINFO *a1, struct tagQMSG *a2, unsigned int a3)
{
  struct tagQMSG *i; // rbx
  __int64 GlobalValid; // r9
  struct tagQMSG *v8; // r9
  struct tagQMSG **v9; // r8
  struct tagQMSG *v10; // r9
  unsigned int v11; // eax
  unsigned __int8 v12; // r11
  int v13; // edx
  BOOL v14; // edi
  unsigned __int8 v16; // si
  unsigned int v17; // edx
  unsigned __int8 v18; // si
  unsigned int v19; // eax
  unsigned int v20; // eax
  __int64 v21; // rax
  __int16 v22; // cx
  unsigned int v23; // eax
  unsigned int v24; // eax
  unsigned int v25; // eax

  i = 0LL;
  if ( *(_QWORD *)(*((_QWORD *)a1 + 48) + 48LL) )
  {
    GlobalValid = PhkFirstGlobalValid(a1, 1LL);
    if ( GlobalValid && *((_QWORD *)a1 + 51) == grpdeskRitInput )
    {
      *(_DWORD *)(GlobalValid + 64) |= 4u;
      goto LABEL_13;
    }
    if ( PhkFirstGlobalValid(a1, 0LL) )
      xxxCallJournalRecordHook(a2);
    v8 = *(struct tagQMSG **)(*((_QWORD *)a1 + 48) + 48LL);
    i = v8;
    if ( v8 )
    {
      if ( v8 == (struct tagQMSG *)1 )
        goto LABEL_13;
      if ( (unsigned int)EqualMsg(v8, a2) )
      {
LABEL_8:
        if ( i == v10 )
          v9[6] = 0LL;
        DelQEntry(*((_QWORD *)a1 + 48), i, a3);
        if ( a3 )
        {
          i = 0LL;
        }
        else
        {
          *((_QWORD *)i + 1) = 0LL;
          *(_QWORD *)i = 0LL;
        }
        EtwTraceInputProcessDelay(a1);
        *(_DWORD *)(*((_QWORD *)a1 + 48) + 368LL) = (MEMORY[0xFFFFF78000000320]
                                                   * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
LABEL_13:
        if ( (*((_DWORD *)a2 + 25) & 0x20000) != 0 )
          return i;
        v11 = *((_DWORD *)a2 + 6);
        v12 = 0;
        v13 = 0;
        v14 = 1;
        if ( v11 == 514 )
          goto LABEL_35;
        if ( v11 > 0x202 )
        {
          v19 = v11 - 516;
          if ( v19 )
          {
            v20 = v19 - 1;
            if ( v20 )
            {
              v23 = v20 - 2;
              if ( v23 )
              {
                v24 = v23 - 1;
                if ( v24 )
                {
                  v25 = v24 - 3;
                  if ( v25 )
                  {
                    if ( v25 != 1 )
                      return i;
                    v14 = 0;
                  }
                  if ( *((_WORD *)a2 + 17) == 1 )
                  {
                    v12 = 5;
                    goto LABEL_27;
                  }
                  if ( *((_WORD *)a2 + 17) == 2 )
                  {
                    v12 = 6;
                    goto LABEL_27;
                  }
                  goto LABEL_25;
                }
                v14 = 0;
              }
              v12 = 4;
              goto LABEL_27;
            }
            v14 = 0;
          }
          v12 = 2;
          goto LABEL_25;
        }
        if ( v11 == 255 )
        {
          if ( (*((_DWORD *)a1 + 274) & 0x200000) == 0 )
            return i;
          if ( *((_QWORD *)a2 + 4) )
            return i;
          v21 = HMValidateHandleNoRip(*((_QWORD *)a2 + 5), 18);
          if ( !v21 || *(_DWORD *)(v21 + 32) != 1 )
            return i;
          v22 = *(_WORD *)(v21 + 58);
          v12 = *(_BYTE *)(v21 + 62);
          v14 = (v22 & 1) == 0;
          v13 = v22 & 6;
          if ( v12 == 16 )
          {
            *(_WORD *)(v21 + 58) = v22 & 0xFFF9;
            goto LABEL_32;
          }
          goto LABEL_25;
        }
        if ( v11 != 256 )
        {
          if ( v11 != 257 )
          {
            if ( v11 == 260 )
              goto LABEL_24;
            if ( v11 != 261 )
            {
              if ( v11 != 513 )
                return i;
LABEL_35:
              v12 = 1;
              v14 = v11 != 514;
              goto LABEL_27;
            }
          }
          v14 = 0;
        }
LABEL_24:
        v12 = *((_BYTE *)a2 + 32);
        v13 = *((_DWORD *)a2 + 10) & 0x1000000;
        if ( v12 == 16 )
        {
          *((_QWORD *)a2 + 5) &= ~0x1000000uLL;
          goto LABEL_32;
        }
LABEL_25:
        if ( (unsigned __int8)(v12 - 17) > 1u )
        {
          if ( !v12 )
            return i;
LABEL_27:
          UpdateKeyState(*((struct tagQ **)a1 + 48), v12, v14);
          return i;
        }
LABEL_32:
        v16 = (v13 != 0) - 96 + 2 * (v12 - 16);
        v17 = v16;
        v18 = v16 ^ 1;
        UpdateKeyState(*((struct tagQ **)a1 + 48), v17, v14);
        if ( !v14
          && ((unsigned __int8)(1 << (2 * (v18 & 3))) & *(_BYTE *)(((unsigned __int64)v18 >> 2)
                                                                 + *((_QWORD *)a1 + 48)
                                                                 + 192)) != 0 )
        {
          return i;
        }
        goto LABEL_27;
      }
      for ( i = *v9; i; i = *(struct tagQMSG **)i )
      {
        if ( (unsigned int)EqualMsg(i, a2) )
          goto LABEL_8;
      }
    }
  }
  return 0LL;
}
