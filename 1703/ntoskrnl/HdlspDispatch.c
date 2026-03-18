/*
 * XREFs of HdlspDispatch @ 0x14078E340
 * Callers:
 *     HeadlessDispatch @ 0x140153FA0 (HeadlessDispatch.c)
 *     HdlspKernelAddLogEntry @ 0x14078ECDC (HdlspKernelAddLogEntry.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140013720 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14004FAB0 (KeAcquireSpinLockRaiseToDpc.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     strcmp @ 0x14016B2C0 (strcmp.c)
 *     sprintf_s @ 0x14016FE70 (sprintf_s.c)
 *     InbvPortGetByte @ 0x14026AEFC (InbvPortGetByte.c)
 *     InbvPortPollOnly @ 0x14026B0D0 (InbvPortPollOnly.c)
 *     HdlspAddLogEntry @ 0x14078E008 (HdlspAddLogEntry.c)
 *     HdlspBugCheckProcessing @ 0x14078E20C (HdlspBugCheckProcessing.c)
 *     HdlspEnableTerminal @ 0x14078E910 (HdlspEnableTerminal.c)
 *     HdlspGetLine @ 0x14078E9D8 (HdlspGetLine.c)
 *     HdlspProcessDumpCommand @ 0x14078EF40 (HdlspProcessDumpCommand.c)
 *     HdlspPutData @ 0x14078F170 (HdlspPutData.c)
 *     HdlspPutString @ 0x14078F260 (HdlspPutString.c)
 *     HdlspPutWideString @ 0x14078F3C8 (HdlspPutWideString.c)
 *     HdlspSendBlueScreenInfo @ 0x14078F48C (HdlspSendBlueScreenInfo.c)
 *     HdlspSendStringAtBaud @ 0x14078F530 (HdlspSendStringAtBaud.c)
 *     HdlspSetBlueScreenInformation @ 0x14078F564 (HdlspSetBlueScreenInformation.c)
 */

__int64 __fastcall HdlspDispatch(signed int a1, int *a2, __int64 a3, __int64 a4, _QWORD *a5)
{
  unsigned int v5; // ebx
  int v10; // r13d
  PKSPIN_LOCK v11; // rcx
  KIRQL v12; // al
  unsigned __int8 v13; // di
  int v14; // eax
  bool v16; // di
  const char *v17; // r8
  int v18; // eax
  __int64 v19; // r9
  char *v20; // rcx
  unsigned int v21; // eax
  char Line; // al
  __int64 v23; // r8
  unsigned int v24; // edx
  char DstBuf[80]; // [rsp+30h] [rbp-98h] BYREF

  v5 = 0;
  v10 = 1228800;
  if ( (unsigned int)a1 <= 0x14 && _bittest(&v10, a1) )
    goto LABEL_12;
  v11 = HeadlessGlobals;
  if ( (HeadlessGlobals[6] & 2) != 0 )
  {
    v13 = -1;
  }
  else
  {
    v12 = KeAcquireSpinLockRaiseToDpc(HeadlessGlobals);
    v11 = HeadlessGlobals;
    v13 = v12;
  }
  v14 = *((_DWORD *)v11 + 12);
  if ( (v14 & 0x40) == 0 )
  {
    *((_DWORD *)v11 + 12) = v14 | 0x40;
    if ( v13 == 0xFF )
      goto LABEL_13;
    KxReleaseSpinLock(v11);
    __writecr8(v13);
LABEL_12:
    v11 = HeadlessGlobals;
LABEL_13:
    if ( a1 <= 16 )
    {
      if ( a1 == 16 )
      {
        if ( a4 && a5 && *a5 >= 0x20uLL )
        {
          *(_DWORD *)a4 = 1;
          *(_BYTE *)(a4 + 8) = 1;
          *(_BYTE *)(a4 + 9) = (v11[6] & 8) != 0;
          *(_DWORD *)(a4 + 24) = *((_DWORD *)v11 + 13);
          v24 = *((_DWORD *)v11 + 12);
          if ( (v24 & 0xE00) >= 0x200 || (v24 & 8) != 0 )
          {
            *(_DWORD *)(a4 + 12) = (v24 >> 9) & 7;
            *(_QWORD *)(a4 + 16) = v11[8];
          }
          else
          {
            *(_DWORD *)(a4 + 12) = 0;
            *(_QWORD *)(a4 + 16) = 0LL;
          }
          *(_BYTE *)(a4 + 28) = *((_BYTE *)v11 + 84);
          goto LABEL_132;
        }
        goto LABEL_33;
      }
      if ( a1 > 11 )
      {
        if ( a1 == 12 )
        {
          if ( !a4 || !a5 || *a5 != 1LL )
            goto LABEL_33;
          if ( (v11[6] & 1) != 0 )
          {
            if ( InbvPortPollOnly(*((_DWORD *)v11 + 14), (unsigned int)(a1 - 12), a3, a4) )
            {
              InbvPortGetByte(*((_DWORD *)HeadlessGlobals + 14), a4, v23);
              goto LABEL_47;
            }
            v11 = HeadlessGlobals;
          }
          goto LABEL_84;
        }
        if ( a1 != 13 )
        {
          if ( a1 == 14 )
          {
            *((_DWORD *)v11 + 12) = v11[6] & 0xFFFFFFBD | 2;
          }
          else if ( (v11[6] & 1) != 0 )
          {
            HdlspBugCheckProcessing();
          }
          return v5;
        }
        if ( !a4 || !a5 || *a5 < 2uLL )
          goto LABEL_33;
        if ( (v11[6] & 1) == 0 )
          goto LABEL_84;
        Line = HdlspGetLine((void *)(a4 + 1), *a5 - 1LL);
      }
      else
      {
        if ( a1 != 11 )
        {
          v16 = 1;
          if ( a1 != 1 )
          {
            if ( a1 != 2 )
            {
              if ( a1 != 3 )
              {
                if ( (unsigned int)(a1 - 4) > 6 )
                {
LABEL_29:
                  v5 = -1073741811;
                  goto LABEL_130;
                }
                if ( (v11[6] & 1) == 0 )
                {
LABEL_130:
                  if ( (unsigned int)a1 <= 0x14 && _bittest(&v10, a1) )
                    return v5;
                  goto LABEL_132;
                }
                switch ( a1 )
                {
                  case 4:
                    v20 = "\x1B[2J";
                    goto LABEL_43;
                  case 5:
                    v20 = "\x1B[0J";
                    goto LABEL_43;
                  case 6:
                    v20 = "\x1B[0K";
                    goto LABEL_43;
                  case 7:
                    v20 = "\x1B[0m";
                    goto LABEL_43;
                  case 8:
                    v20 = "\x1B[7m";
                    goto LABEL_43;
                  case 9:
                    if ( a2 && a3 == 8 )
                    {
                      v18 = *a2;
                      v17 = "\x1B[%d;%dm";
                      v19 = (unsigned int)a2[1];
                      goto LABEL_37;
                    }
                    break;
                  case 10:
                    if ( a2 && a3 == 8 )
                    {
                      v17 = "\x1B[%d;%dH";
                      v18 = *a2 + 1;
                      v19 = (unsigned int)(a2[1] + 1);
LABEL_37:
                      sprintf_s(DstBuf, 0x50uLL, v17, v19, v18);
                      v20 = DstBuf;
LABEL_43:
                      HdlspSendStringAtBaud(v20);
LABEL_129:
                      v11 = HeadlessGlobals;
                      goto LABEL_130;
                    }
                    break;
                  default:
                    goto LABEL_29;
                }
                goto LABEL_33;
              }
              if ( a2 )
              {
                if ( (v11[6] & 1) == 0 )
                  goto LABEL_132;
                HdlspPutString(a2);
LABEL_47:
                v11 = HeadlessGlobals;
                goto LABEL_132;
              }
LABEL_33:
              v5 = -1073741811;
LABEL_132:
              *((_DWORD *)v11 + 12) &= ~0x40u;
              return v5;
            }
            if ( !a4 || !a5 || *a5 != 1LL )
              goto LABEL_33;
            if ( (v11[6] & 1) != 0 )
            {
              if ( (unsigned __int8)HdlspGetLine(DstBuf, 0x50uLL) )
              {
                if ( strcmp(DstBuf, "reboot") )
                  v16 = strcmp(DstBuf, "shutdown") == 0;
                *(_BYTE *)a4 = v16;
              }
              goto LABEL_47;
            }
LABEL_84:
            *(_BYTE *)a4 = 0;
            goto LABEL_132;
          }
          if ( !a2 || a3 != 1 )
            goto LABEL_33;
          LOBYTE(v11) = *(_BYTE *)a2;
          v21 = HdlspEnableTerminal(v11);
LABEL_59:
          v5 = v21;
          goto LABEL_47;
        }
        if ( !a4 || !a5 || *a5 != 1LL )
          goto LABEL_33;
        if ( (v11[6] & 1) == 0 )
          goto LABEL_84;
        Line = InbvPortPollOnly(*((_DWORD *)v11 + 14), (__int64)a2, a3, a4);
      }
      *(_BYTE *)a4 = Line;
      goto LABEL_47;
    }
    switch ( a1 )
    {
      case 17:
        if ( a2 )
        {
          HdlspAddLogEntry(a2);
          goto LABEL_129;
        }
        return (unsigned int)-1073741811;
      case 18:
        if ( a2 && a3 == 1 )
        {
          LOBYTE(v11) = *(_BYTE *)a2;
          HdlspProcessDumpCommand(v11);
          goto LABEL_47;
        }
        goto LABEL_33;
      case 19:
        if ( a2 )
        {
          v21 = HdlspSetBlueScreenInformation(a2, a3);
          goto LABEL_59;
        }
        return 3221225485LL;
      case 20:
        if ( (v11[6] & 3) == 3 )
        {
          if ( a2 && a3 == 4 )
          {
            HdlspSendBlueScreenInfo((unsigned int)*a2);
            HdlspSendStringAtBaud("\n\r!SAC>");
            return v5;
          }
          return 3221225485LL;
        }
        break;
      default:
        switch ( a1 )
        {
          case 21:
            if ( a4 && a5 && *a5 >= 0x10uLL )
            {
              *(_OWORD *)a4 = *(_OWORD *)((char *)v11 + 100);
              goto LABEL_132;
            }
            goto LABEL_33;
          case 22:
            if ( a2 && a3 )
            {
              if ( (v11[6] & 1) == 0 )
                goto LABEL_132;
              HdlspPutData(a2, a3);
              goto LABEL_47;
            }
            break;
          case 23:
            if ( a2 )
            {
              if ( (v11[6] & 1) == 0 )
                goto LABEL_132;
              HdlspPutWideString(a2);
              goto LABEL_47;
            }
            break;
          case 24:
            if ( a4 && a5 && *a5 >= 0xCuLL )
            {
              *(_QWORD *)a4 = *(PKSPIN_LOCK)((char *)v11 + 118);
              *(_DWORD *)(a4 + 8) = *(_DWORD *)((char *)v11 + 126);
              goto LABEL_132;
            }
            goto LABEL_33;
          default:
            goto LABEL_29;
        }
        goto LABEL_33;
    }
    return v5;
  }
  if ( v13 != 0xFF )
  {
    KxReleaseSpinLock(v11);
    __writecr8(v13);
  }
  return 3221225473LL;
}
