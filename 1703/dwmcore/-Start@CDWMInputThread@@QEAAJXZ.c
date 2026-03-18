/*
 * XREFs of ?Start@CDWMInputThread@@QEAAJXZ @ 0x180192088
 * Callers:
 *     ?Initialize@CInputManager@@IEAAJXZ @ 0x1800B5AB8 (-Initialize@CInputManager@@IEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CDWMInputThread::Start(HANDLE *this)
{
  unsigned int v1; // ebx
  int v3; // r9d
  HANDLE v4; // rax
  DWORD dwCreationFlags; // [rsp+20h] [rbp-18h]
  DWORD ThreadId; // [rsp+40h] [rbp+8h] BYREF

  v1 = 0;
  if ( *((_BYTE *)this + 24) )
  {
    v3 = -2147467260;
    dwCreationFlags = 117;
  }
  else
  {
    v4 = CreateThread(0LL, 0LL, (LPTHREAD_START_ROUTINE)CDWMInputThread::RunInputThreadStatic, this, 4u, &ThreadId);
    this[1] = v4;
    if ( v4 )
    {
      SetThreadPriority(v4, 16);
      ResumeThread(this[1]);
      return v1;
    }
    v3 = -2147024882;
    dwCreationFlags = 133;
  }
  v1 = v3;
  MilInstrumentationCheckHR(0x14u, &dword_1801FD82C, 1u, v3, dwCreationFlags);
  return v1;
}
