/*
 * XREFs of ?Start@CISMInputThread@@QEAAJXZ @ 0x1801922B8
 * Callers:
 *     ?Initialize@CInputManager@@IEAAJXZ @ 0x1800B5AB8 (-Initialize@CInputManager@@IEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CISMInputThread::Start(CISMInputThread *this)
{
  unsigned int v2; // ebx
  HANDLE Thread; // rax

  v2 = 0;
  Thread = CreateThread(0LL, 0LL, (LPTHREAD_START_ROUTINE)CISMInputThread::RunInputThreadStatic, this, 4u, 0LL);
  *(_QWORD *)this = Thread;
  if ( Thread )
  {
    SetThreadPriority(Thread, 16);
    ResumeThread(*(HANDLE *)this);
  }
  else
  {
    v2 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x46u);
  }
  return v2;
}
