/*
 * XREFs of ?Start@CISMInputThread@@QEAAJXZ @ 0x1801A0D68
 * Callers:
 *     ?Reset@CISMInputThread@@QEAAJXZ @ 0x1801A0C0C (-Reset@CISMInputThread@@QEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
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
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x8007000E, 0x46u);
  }
  return v2;
}
