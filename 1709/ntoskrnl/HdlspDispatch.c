/*
 * XREFs of HdlspDispatch @ 0x1407CBE10
 * Callers:
 *     HeadlessDispatch @ 0x140146130 (HeadlessDispatch.c)
 *     HdlspKernelAddLogEntry @ 0x1407CC800 (HdlspKernelAddLogEntry.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140061030 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400931A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     strcmp @ 0x14015FC60 (strcmp.c)
 *     sprintf_s @ 0x140164670 (sprintf_s.c)
 *     InbvPortGetByte @ 0x140295370 (InbvPortGetByte.c)
 *     InbvPortPollOnly @ 0x140295638 (InbvPortPollOnly.c)
 *     HdlspAddLogEntry @ 0x1407CBAE0 (HdlspAddLogEntry.c)
 *     HdlspBugCheckProcessing @ 0x1407CBCE0 (HdlspBugCheckProcessing.c)
 *     HdlspEnableTerminal @ 0x1407CC430 (HdlspEnableTerminal.c)
 *     HdlspGetLine @ 0x1407CC508 (HdlspGetLine.c)
 *     HdlspProcessDumpCommand @ 0x1407CCA70 (HdlspProcessDumpCommand.c)
 *     HdlspPutData @ 0x1407CCCA0 (HdlspPutData.c)
 *     HdlspPutString @ 0x1407CCD90 (HdlspPutString.c)
 *     HdlspPutWideString @ 0x1407CCF0C (HdlspPutWideString.c)
 *     HdlspSendBlueScreenInfo @ 0x1407CCFD0 (HdlspSendBlueScreenInfo.c)
 *     HdlspSendStringAtBaud @ 0x1407CD074 (HdlspSendStringAtBaud.c)
 *     HdlspSetBlueScreenInformation @ 0x1407CD0A8 (HdlspSetBlueScreenInformation.c)
 */

__int64 __fastcall HdlspDispatch(KSPIN_LOCK *a1, int *a2, __int64 a3, __int64 a4, _QWORD *a5)
{
  unsigned int v5; // ebx
  signed int v9; // ebp
  int v10; // r13d
  KIRQL v11; // di
  int v12; // eax
  bool v14; // di
  const char *v15; // r8
  int v16; // eax
  __int64 v17; // r9
  char *v18; // rcx
  unsigned int v19; // eax
  char Line; // al
  __int64 v21; // r8
  PKSPIN_LOCK v22; // rcx
  unsigned int v23; // edx
  int v24; // eax
  __int64 v25; // rcx
  PKSPIN_LOCK v26; // rax
  char DstBuf[80]; // [rsp+30h] [rbp-98h] BYREF

  v5 = 0;
  v9 = (int)a1;
  v10 = 1228800;
  if ( (unsigned int)a1 <= 0x14 && _bittest(&v10, (unsigned int)a1) )
    goto LABEL_12;
  if ( (HeadlessGlobals[6] & 2) != 0 )
    v11 = -1;
  else
    v11 = KeAcquireSpinLockRaiseToDpc(HeadlessGlobals);
  a1 = HeadlessGlobals;
  v12 = *((_DWORD *)HeadlessGlobals + 12);
  if ( (v12 & 0x40) == 0 )
  {
    *((_DWORD *)HeadlessGlobals + 12) = v12 | 0x40;
    if ( v11 != 0xFF )
    {
      KxReleaseSpinLock(a1);
      __writecr8(v11);
    }
LABEL_12:
    if ( v9 <= 16 )
    {
      if ( v9 == 16 )
      {
        if ( a4 && a5 && *a5 >= 0x20uLL )
        {
          v22 = HeadlessGlobals;
          *(_DWORD *)a4 = 1;
          *(_BYTE *)(a4 + 8) = 1;
          *(_BYTE *)(a4 + 9) = (v22[6] & 8) != 0;
          *(_DWORD *)(a4 + 24) = *((_DWORD *)v22 + 13);
          v23 = *((_DWORD *)v22 + 12);
          v24 = (v23 >> 9) & 7;
          if ( v24 || (v23 & 8) != 0 )
          {
            *(_DWORD *)(a4 + 12) = v24;
            *(_QWORD *)(a4 + 16) = v22[8];
          }
          else
          {
            *(_DWORD *)(a4 + 12) = 0;
            *(_QWORD *)(a4 + 16) = 0LL;
          }
          *(_BYTE *)(a4 + 28) = *((_BYTE *)v22 + 84);
          goto LABEL_128;
        }
        goto LABEL_32;
      }
      if ( v9 > 11 )
      {
        if ( v9 == 12 )
        {
          if ( a4 && a5 && *a5 == 1LL )
          {
            if ( (HeadlessGlobals[6] & 1) != 0
              && InbvPortPollOnly(*((_DWORD *)HeadlessGlobals + 14), (__int64)a2, a3, a4) )
            {
              InbvPortGetByte(*((_DWORD *)HeadlessGlobals + 14), a4, v21);
              goto LABEL_128;
            }
            goto LABEL_54;
          }
          goto LABEL_32;
        }
        if ( v9 != 13 )
        {
          if ( v9 == 14 )
          {
            *((_DWORD *)HeadlessGlobals + 12) = HeadlessGlobals[6] & 0xFFFFFFBD | 2;
          }
          else if ( (HeadlessGlobals[6] & 1) != 0 )
          {
            HdlspBugCheckProcessing();
          }
          return v5;
        }
        if ( !a4 || !a5 || *a5 < 2uLL )
          goto LABEL_32;
        if ( (HeadlessGlobals[6] & 1) != 0 )
        {
          Line = HdlspGetLine((void *)(a4 + 1), *a5 - 1LL);
          goto LABEL_64;
        }
      }
      else
      {
        if ( v9 != 11 )
        {
          v14 = 1;
          if ( v9 != 1 )
          {
            if ( v9 != 2 )
            {
              if ( v9 == 3 )
              {
                if ( a2 )
                {
                  if ( (HeadlessGlobals[6] & 1) != 0 )
                    HdlspPutString(a2);
                  goto LABEL_128;
                }
              }
              else
              {
                if ( (unsigned int)(v9 - 4) > 6 )
                {
LABEL_28:
                  v5 = -1073741811;
                  goto LABEL_126;
                }
                if ( (HeadlessGlobals[6] & 1) == 0 )
                {
LABEL_126:
                  if ( (unsigned int)v9 <= 0x14 && _bittest(&v10, v9) )
                    return v5;
                  goto LABEL_128;
                }
                switch ( v9 )
                {
                  case 4:
                    v18 = "\x1B[2J";
                    goto LABEL_42;
                  case 5:
                    v18 = "\x1B[0J";
                    goto LABEL_42;
                  case 6:
                    v18 = "\x1B[0K";
                    goto LABEL_42;
                  case 7:
                    v18 = "\x1B[0m";
                    goto LABEL_42;
                  case 8:
                    v18 = "\x1B[7m";
                    goto LABEL_42;
                  case 9:
                    if ( a2 && a3 == 8 )
                    {
                      v16 = *a2;
                      v15 = "\x1B[%d;%dm";
                      v17 = (unsigned int)a2[1];
                      goto LABEL_36;
                    }
                    break;
                  case 10:
                    if ( a2 && a3 == 8 )
                    {
                      v15 = "\x1B[%d;%dH";
                      v16 = *a2 + 1;
                      v17 = (unsigned int)(a2[1] + 1);
LABEL_36:
                      sprintf_s(DstBuf, 0x50uLL, v15, v17, v16);
                      v18 = DstBuf;
LABEL_42:
                      HdlspSendStringAtBaud(v18);
                      goto LABEL_126;
                    }
                    break;
                  default:
                    goto LABEL_28;
                }
              }
              goto LABEL_32;
            }
            if ( a4 && a5 && *a5 == 1LL )
            {
              if ( (HeadlessGlobals[6] & 1) != 0 )
              {
                if ( (unsigned __int8)HdlspGetLine(DstBuf, 0x50uLL) )
                {
                  if ( strcmp(DstBuf, "reboot") )
                    v14 = strcmp(DstBuf, "shutdown") == 0;
                  *(_BYTE *)a4 = v14;
                }
                goto LABEL_128;
              }
              goto LABEL_54;
            }
LABEL_32:
            v5 = -1073741811;
LABEL_128:
            *((_DWORD *)HeadlessGlobals + 12) &= ~0x40u;
            return v5;
          }
          if ( !a2 || a3 != 1 )
            goto LABEL_32;
          LOBYTE(a1) = *(_BYTE *)a2;
          v19 = HdlspEnableTerminal(a1);
LABEL_58:
          v5 = v19;
          goto LABEL_128;
        }
        if ( !a4 || !a5 || *a5 != 1LL )
          goto LABEL_32;
        if ( (HeadlessGlobals[6] & 1) != 0 )
        {
          Line = InbvPortPollOnly(*((_DWORD *)HeadlessGlobals + 14), (__int64)a2, a3, a4);
LABEL_64:
          *(_BYTE *)a4 = Line;
          goto LABEL_128;
        }
      }
LABEL_54:
      *(_BYTE *)a4 = 0;
      goto LABEL_128;
    }
    if ( v9 == 17 )
    {
      if ( a2 )
      {
        HdlspAddLogEntry(a2);
        goto LABEL_126;
      }
      return (unsigned int)-1073741811;
    }
    else
    {
      v25 = (unsigned int)(v9 - 18);
      if ( v9 == 18 )
      {
        if ( a2 && a3 == 1 )
        {
          LOBYTE(v25) = *(_BYTE *)a2;
          HdlspProcessDumpCommand(v25);
          goto LABEL_128;
        }
        goto LABEL_32;
      }
      if ( v9 == 19 )
      {
        if ( a2 )
        {
          v19 = HdlspSetBlueScreenInformation(a2, a3);
          goto LABEL_58;
        }
        return 3221225485LL;
      }
      if ( v9 != 20 )
      {
        switch ( v9 )
        {
          case 21:
            if ( a4 && a5 && *a5 >= 0x10uLL )
            {
              *(_OWORD *)a4 = *(_OWORD *)((char *)HeadlessGlobals + 100);
              goto LABEL_128;
            }
            break;
          case 22:
            if ( a2 && a3 )
            {
              if ( (HeadlessGlobals[6] & 1) != 0 )
                HdlspPutData(a2, a3);
              goto LABEL_128;
            }
            break;
          case 23:
            if ( a2 )
            {
              if ( (HeadlessGlobals[6] & 1) != 0 )
                HdlspPutWideString(a2);
              goto LABEL_128;
            }
            break;
          case 24:
            if ( a4 && a5 && *a5 >= 0xCuLL )
            {
              v26 = HeadlessGlobals;
              *(_QWORD *)a4 = *(PKSPIN_LOCK)((char *)HeadlessGlobals + 118);
              *(_DWORD *)(a4 + 8) = *(_DWORD *)((char *)v26 + 126);
              goto LABEL_128;
            }
            break;
          default:
            goto LABEL_28;
        }
        goto LABEL_32;
      }
      if ( (HeadlessGlobals[6] & 3) == 3 )
      {
        if ( a2 && a3 == 4 )
        {
          HdlspSendBlueScreenInfo((unsigned int)*a2);
          HdlspSendStringAtBaud("\n\r!SAC>");
          return v5;
        }
        return 3221225485LL;
      }
    }
    return v5;
  }
  if ( v11 != 0xFF )
  {
    KxReleaseSpinLock(HeadlessGlobals);
    __writecr8(v11);
  }
  return 3221225473LL;
}
