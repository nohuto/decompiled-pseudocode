/*
 * XREFs of HdlspDispatch @ 0x140838E10
 * Callers:
 *     HeadlessDispatch @ 0x1401716E0 (HeadlessDispatch.c)
 *     HdlspKernelAddLogEntry @ 0x1408397F8 (HdlspKernelAddLogEntry.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140034850 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400693C0 (KeAcquireSpinLockRaiseToDpc.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     strcmp @ 0x140189DF0 (strcmp.c)
 *     sprintf_s @ 0x14018E540 (sprintf_s.c)
 *     InbvPortGetByte @ 0x1402CAA2C (InbvPortGetByte.c)
 *     InbvPortPollOnly @ 0x1402CABE4 (InbvPortPollOnly.c)
 *     HdlspAddLogEntry @ 0x140838AE0 (HdlspAddLogEntry.c)
 *     HdlspBugCheckProcessing @ 0x140838CE0 (HdlspBugCheckProcessing.c)
 *     HdlspEnableTerminal @ 0x140839434 (HdlspEnableTerminal.c)
 *     HdlspGetLine @ 0x1408394FC (HdlspGetLine.c)
 *     HdlspProcessDumpCommand @ 0x140839A68 (HdlspProcessDumpCommand.c)
 *     HdlspPutData @ 0x140839C9C (HdlspPutData.c)
 *     HdlspPutString @ 0x140839D8C (HdlspPutString.c)
 *     HdlspPutWideString @ 0x140839F08 (HdlspPutWideString.c)
 *     HdlspSendBlueScreenInfo @ 0x140839FCC (HdlspSendBlueScreenInfo.c)
 *     HdlspSendStringAtBaud @ 0x14083A070 (HdlspSendStringAtBaud.c)
 *     HdlspSetBlueScreenInformation @ 0x14083A0A4 (HdlspSetBlueScreenInformation.c)
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
  PKSPIN_LOCK v21; // rcx
  unsigned int v22; // edx
  int v23; // eax
  __int64 v24; // rcx
  PKSPIN_LOCK v25; // rax
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
          v21 = HeadlessGlobals;
          *(_DWORD *)a4 = 1;
          *(_BYTE *)(a4 + 8) = 1;
          *(_BYTE *)(a4 + 9) = (v21[6] & 8) != 0;
          *(_DWORD *)(a4 + 24) = *((_DWORD *)v21 + 13);
          v22 = *((_DWORD *)v21 + 12);
          v23 = (v22 >> 9) & 7;
          if ( v23 || (v22 & 8) != 0 )
          {
            *(_DWORD *)(a4 + 12) = v23;
            *(_QWORD *)(a4 + 16) = v21[8];
          }
          else
          {
            *(_DWORD *)(a4 + 12) = 0;
            *(_QWORD *)(a4 + 16) = 0LL;
          }
          *(_BYTE *)(a4 + 28) = *((_BYTE *)v21 + 84);
          goto LABEL_129;
        }
        goto LABEL_32;
      }
      if ( v9 > 11 )
      {
        if ( v9 == 12 )
        {
          if ( a4 && a5 && *a5 == 1LL )
          {
            if ( (HeadlessGlobals[6] & 1) != 0 && InbvPortPollOnly(*((_DWORD *)HeadlessGlobals + 14)) )
            {
              InbvPortGetByte(*((_DWORD *)HeadlessGlobals + 14), (_BYTE *)a4);
              goto LABEL_129;
            }
            goto LABEL_54;
          }
LABEL_32:
          v5 = -1073741811;
LABEL_129:
          *((_DWORD *)HeadlessGlobals + 12) &= ~0x40u;
          return v5;
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
          goto LABEL_65;
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
                  goto LABEL_129;
                }
              }
              else
              {
                if ( (unsigned int)(v9 - 4) > 6 )
                {
LABEL_28:
                  v5 = -1073741811;
                  goto LABEL_127;
                }
                if ( (HeadlessGlobals[6] & 1) == 0 )
                {
LABEL_127:
                  if ( (unsigned int)v9 <= 0x14 && _bittest(&v10, v9) )
                    return v5;
                  goto LABEL_129;
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
                      goto LABEL_127;
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
                goto LABEL_129;
              }
LABEL_54:
              *(_BYTE *)a4 = 0;
              goto LABEL_129;
            }
            goto LABEL_32;
          }
          if ( !a2 || a3 != 1 )
            goto LABEL_32;
          LOBYTE(a1) = *(_BYTE *)a2;
          v19 = HdlspEnableTerminal(a1);
LABEL_58:
          v5 = v19;
          goto LABEL_129;
        }
        if ( !a4 || !a5 || *a5 != 1LL )
          goto LABEL_32;
        if ( (HeadlessGlobals[6] & 1) != 0 )
        {
          Line = InbvPortPollOnly(*((_DWORD *)HeadlessGlobals + 14));
LABEL_65:
          *(_BYTE *)a4 = Line;
          goto LABEL_129;
        }
      }
      Line = 0;
      goto LABEL_65;
    }
    if ( v9 == 17 )
    {
      if ( a2 )
      {
        HdlspAddLogEntry(a2);
        goto LABEL_127;
      }
      return (unsigned int)-1073741811;
    }
    else
    {
      v24 = (unsigned int)(v9 - 18);
      if ( v9 == 18 )
      {
        if ( a2 && a3 == 1 )
        {
          LOBYTE(v24) = *(_BYTE *)a2;
          HdlspProcessDumpCommand(v24);
          goto LABEL_129;
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
              goto LABEL_129;
            }
            break;
          case 22:
            if ( a2 && a3 )
            {
              if ( (HeadlessGlobals[6] & 1) != 0 )
                HdlspPutData(a2, a3);
              goto LABEL_129;
            }
            break;
          case 23:
            if ( a2 )
            {
              if ( (HeadlessGlobals[6] & 1) != 0 )
                HdlspPutWideString(a2);
              goto LABEL_129;
            }
            break;
          case 24:
            if ( a4 && a5 && *a5 >= 0xCuLL )
            {
              v25 = HeadlessGlobals;
              *(_QWORD *)a4 = *(PKSPIN_LOCK)((char *)HeadlessGlobals + 118);
              *(_DWORD *)(a4 + 8) = *(_DWORD *)((char *)v25 + 126);
              goto LABEL_129;
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
