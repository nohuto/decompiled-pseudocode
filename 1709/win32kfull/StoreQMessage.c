/*
 * XREFs of StoreQMessage @ 0x1C00ABB30
 * Callers:
 *     _PostThreadMessageEx @ 0x1C009E6C0 (_PostThreadMessageEx.c)
 *     PostInputMessage @ 0x1C009ED18 (PostInputMessage.c)
 *     PostEventMessageEx @ 0x1C009F99C (PostEventMessageEx.c)
 *     _ScheduleDispatchNotification @ 0x1C00A0450 (_ScheduleDispatchNotification.c)
 *     xxxRealInternalGetMessage @ 0x1C00A66B0 (xxxRealInternalGetMessage.c)
 *     ?_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@H@Z @ 0x1C00AB4B0 (-_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@.c)
 *     xxxSetForegroundWindow2 @ 0x1C00CDBE4 (xxxSetForegroundWindow2.c)
 *     xxxCallJournalPlaybackHook @ 0x1C01C47FC (xxxCallJournalPlaybackHook.c)
 * Callees:
 *     _FindProp @ 0x1C0064018 (_FindProp.c)
 *     IsCurrentDesktopComposed @ 0x1C00780E0 (IsCurrentDesktopComposed.c)
 *     ?OnInput@InputTransform@@YAHPEAUtagWND@@_KPEBUtagINPUT_TRANSFORM@@@Z @ 0x1C0103250 (-OnInput@InputTransform@@YAHPEAUtagWND@@_KPEBUtagINPUT_TRANSFORM@@@Z.c)
 *     LogQMsg @ 0x1C01B54C0 (LogQMsg.c)
 */

__int64 __fastcall StoreQMessage(
        LARGE_INTEGER *a1,
        InputTransform *a2,
        DWORD a3,
        LARGE_INTEGER a4,
        LARGE_INTEGER a5,
        int a6,
        __int64 a7,
        DWORD a8,
        LARGE_INTEGER a9,
        char a10,
        DWORD *a11,
        LONGLONG a12,
        LARGE_INTEGER a13,
        LARGE_INTEGER *a14)
{
  int v14; // esi
  LARGE_INTEGER v18; // rax
  unsigned __int64 v19; // rcx
  LARGE_INTEGER PerformanceCounter; // r12
  __int64 QuadPart_low; // rcx
  unsigned int v22; // r8d
  int v23; // eax
  int v24; // ecx
  unsigned int v25; // eax
  unsigned int v26; // eax
  LARGE_INTEGER *v27; // rsi
  __int64 result; // rax
  _QWORD *Prop; // rax
  const struct tagINPUT_TRANSFORM *v30; // r9
  LARGE_INTEGER *v31; // rax
  LARGE_INTEGER v32; // rax

  v14 = 0;
  if ( a2 )
    v18 = *(LARGE_INTEGER *)a2;
  else
    v18.QuadPart = 0LL;
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
  v22 = (PsGetCurrentProcessWow64Process(QuadPart_low) != 0) | a1[12].HighPart & 0xFFFFFFFE;
  a1[12].HighPart = v22;
  a1[9] = a9;
  a1[10] = *(LARGE_INTEGER *)(gpsi + 4944LL);
  a1[11] = *(LARGE_INTEGER *)(gpsi + 4936LL);
  v23 = v22 ^ ((unsigned __int8)v22 ^ (unsigned __int8)(2 * a10)) & 2;
  a1[12].HighPart = v23;
  if ( (a10 & 4) != 0 )
    v24 = 0x80000;
  else
    v24 = 0;
  v25 = v24 | v23 & 0xFFF7FFFF;
  a1[12].HighPart = v25;
  if ( (a10 & 0x40) != 0 )
    v14 = 0x100000;
  v26 = v14 | v25 & 0xFFEFFFFF;
  v27 = a1 + 15;
  a1[12].HighPart = v26;
  if ( a11 )
  {
    v27->LowPart = *a11;
    a1[15].HighPart = a11[1];
  }
  else
  {
    SetUnavailableInputSource(&a1[15]);
  }
  a1[17] = a13;
  if ( (a10 & 2) == 0 && (a1 == (LARGE_INTEGER *)-120LL || a3 - 512 > 0xE || ((v27->LowPart - 4) & 0xFFFFFFFB) != 0) )
  {
    a1[12].HighPart &= ~0x1000u;
  }
  else
  {
    v31 = a14;
    if ( !a14 )
      v31 = (LARGE_INTEGER *)(*(_QWORD *)(gptiCurrent + 400LL) + 832LL);
    v32 = *v31;
    a1[12].HighPart |= 0x1000u;
    a1[14] = v32;
  }
  if ( a1 != (LARGE_INTEGER *)-120LL && a3 - 512 <= 0xE && ((v27->LowPart - 4) & 0xFFFFFFFB) == 0 )
  {
    a1[9].QuadPart = LOBYTE(a9.LowPart) | 0xFF515700LL;
    a1[18].LowPart = a1[6].LowPart - ((int)a9.LowPart >> 8);
  }
  if ( (gbEnableDwmTouchProcessing || gbEnableDwmMouseProcessing) && (a1[12].HighPart & 8) != 0 )
  {
    if ( a2 )
    {
      if ( *((_QWORD *)a2 + 23) )
      {
        Prop = (_QWORD *)FindProp((__int64)a2, CInputQueueProp::s_atom, 1);
        if ( Prop )
        {
          if ( *Prop )
            InputTransform::OnInput(a2, (struct tagWND *)PerformanceCounter.QuadPart, 0LL, v30);
        }
      }
    }
  }
  result = EtwTraceQueueMessage(a1);
  if ( gMsgQLog )
    return LogQMsg(a1);
  return result;
}
