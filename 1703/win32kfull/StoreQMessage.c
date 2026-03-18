/*
 * XREFs of StoreQMessage @ 0x1C0055990
 * Callers:
 *     PostInputMessage @ 0x1C0049470 (PostInputMessage.c)
 *     PostEventMessageEx @ 0x1C0049DE8 (PostEventMessageEx.c)
 *     _ScheduleDispatchNotification @ 0x1C004D2C0 (_ScheduleDispatchNotification.c)
 *     xxxRealInternalGetMessage @ 0x1C0050B40 (xxxRealInternalGetMessage.c)
 *     ?_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@H@Z @ 0x1C0055300 (-_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@.c)
 *     xxxSetForegroundWindow2 @ 0x1C00B489C (xxxSetForegroundWindow2.c)
 *     _PostThreadMessageEx @ 0x1C00CBC7C (_PostThreadMessageEx.c)
 *     xxxCallJournalPlaybackHook @ 0x1C01C0FF8 (xxxCallJournalPlaybackHook.c)
 * Callees:
 *     IsCurrentDesktopComposed @ 0x1C0018CD0 (IsCurrentDesktopComposed.c)
 *     _FindProp @ 0x1C0062530 (_FindProp.c)
 *     ?OnInput@InputTransform@@YAHPEAUtagWND@@_KPEBUtagINPUT_TRANSFORM@@@Z @ 0x1C00F9BC0 (-OnInput@InputTransform@@YAHPEAUtagWND@@_KPEBUtagINPUT_TRANSFORM@@@Z.c)
 *     LogQMsg @ 0x1C01B2438 (LogQMsg.c)
 */

__int64 __fastcall StoreQMessage(
        LARGE_INTEGER *a1,
        LARGE_INTEGER *a2,
        DWORD a3,
        LARGE_INTEGER a4,
        LARGE_INTEGER a5,
        int a6,
        int a7,
        DWORD a8,
        LARGE_INTEGER a9,
        unsigned int a10,
        DWORD *a11,
        LONGLONG a12,
        LARGE_INTEGER a13,
        LARGE_INTEGER *a14)
{
  int v14; // r14d
  LARGE_INTEGER v18; // rax
  unsigned __int64 v19; // rcx
  LARGE_INTEGER v20; // rdx
  LARGE_INTEGER v21; // r8
  LARGE_INTEGER v22; // r9
  LARGE_INTEGER PerformanceCounter; // r15
  __int64 QuadPart_low; // rcx
  LARGE_INTEGER *v25; // rdi
  unsigned int v26; // r8d
  LARGE_INTEGER *v27; // rax
  LARGE_INTEGER v28; // rax
  _QWORD *Prop; // rax
  InputTransform *v30; // rcx
  const struct tagINPUT_TRANSFORM *v31; // r9
  __int64 result; // rax

  v14 = 0;
  v18.QuadPart = 0LL;
  if ( a2 )
    v18 = *a2;
  a1[2] = v18;
  a1[3].LowPart = a3;
  a1[4] = a4;
  a1[5] = a5;
  if ( a6 )
    LODWORD(v19) = a6;
  else
    v19 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  a1[6].LowPart = v19;
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  a1[18].LowPart = a1[6].LowPart;
  QuadPart_low = a3 - 512;
  a1[16] = PerformanceCounter;
  if ( (unsigned int)QuadPart_low <= 0xE && (unsigned int)IsCurrentDesktopComposed() )
  {
    QuadPart_low = (unsigned int)SLOWORD(a5.QuadPart);
    a1[7].LowPart = SHIWORD(a5.u.LowPart);
    a1[6].HighPart = QuadPart_low;
  }
  else
  {
    *(LONGLONG *)((char *)&a1[6].QuadPart + 4) = a12;
  }
  a1[12].LowPart = a8;
  v25 = a1 + 15;
  LOBYTE(v14) = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))PsGetCurrentProcessWow64Process)(
                  QuadPart_low,
                  (LARGE_INTEGER)v20.QuadPart,
                  (LARGE_INTEGER)v21.QuadPart,
                  (LARGE_INTEGER)v22.QuadPart) != 0;
  v26 = v14 | a1[12].HighPart & 0xFFFFFFFE;
  a1[12].HighPart = v26;
  a1[9] = a9;
  a1[10] = *(LARGE_INTEGER *)(gpsi + 5368LL);
  a1[11] = *(LARGE_INTEGER *)(gpsi + 5360LL);
  a1[12].HighPart = v26 & 0xFFE7FFFD | (2 * (a10 & 1 | (((a10 >> 2) & 1 | (2 * ((a10 >> 3) & 1))) << 18)));
  if ( a11 )
  {
    v25->LowPart = *a11;
    a1[15].HighPart = a11[1];
  }
  else
  {
    SetUnavailableInputSource(&a1[15]);
  }
  a1[17] = a13;
  if ( (a10 & 2) == 0 && (a1 == (LARGE_INTEGER *)-120LL || a3 - 512 > 0xE || ((v25->LowPart - 4) & 0xFFFFFFFB) != 0) )
  {
    a1[12].HighPart &= ~0x1000u;
  }
  else
  {
    v27 = a14;
    if ( !a14 )
      v27 = (LARGE_INTEGER *)(*(_QWORD *)(gptiCurrent + 376LL) + 824LL);
    v28 = *v27;
    a1[12].HighPart |= 0x1000u;
    a1[14] = v28;
  }
  if ( a1 != (LARGE_INTEGER *)-120LL && a3 - 512 <= 0xE && ((v25->LowPart - 4) & 0xFFFFFFFB) == 0 )
  {
    a1[9].QuadPart = LOBYTE(a9.LowPart) | 0xFF515700LL;
    a1[18].LowPart = a1[6].LowPart - ((int)a9.LowPart >> 8);
  }
  if ( (gbEnableDwmTouchProcessing || gbEnableDwmMouseProcessing) && (a1[12].HighPart & 8) != 0 )
  {
    if ( a2 )
    {
      if ( a2[23].QuadPart )
      {
        Prop = (_QWORD *)FindProp(a2, CInputQueueProp::s_atom, 1LL);
        if ( Prop )
        {
          if ( *Prop )
            InputTransform::OnInput(v30, (struct tagWND *)PerformanceCounter.QuadPart, 0LL, v31);
        }
      }
    }
  }
  result = EtwTraceQueueMessage(a1);
  if ( gMsgQLog )
    return LogQMsg(a1);
  return result;
}
