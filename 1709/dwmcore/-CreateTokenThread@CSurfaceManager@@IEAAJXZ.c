/*
 * XREFs of ?CreateTokenThread@CSurfaceManager@@IEAAJXZ @ 0x180131634
 * Callers:
 *     ?ResetTokenThread@CSurfaceManager@@QEAAJXZ @ 0x180076BDC (-ResetTokenThread@CSurfaceManager@@QEAAJXZ.c)
 *     ?Initialize@CSurfaceManager@@IEAAJPEAPEAX0@Z @ 0x1801316D8 (-Initialize@CSurfaceManager@@IEAAJPEAPEAX0@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CSurfaceManager::CreateTokenThread(HANDLE *this)
{
  DWORD v1; // ebx
  DWORD v3; // r9d
  HANDLE Thread; // rax
  DWORD dwCreationFlags; // [rsp+20h] [rbp-18h]

  v1 = 0;
  if ( *((_BYTE *)this + 424) )
  {
    v3 = -2147467260;
    dwCreationFlags = 366;
  }
  else
  {
    Thread = CreateThread(0LL, 0LL, CSurfaceManager::s_TokenThreadMain, this, 4u, 0LL);
    this[51] = Thread;
    if ( Thread )
    {
      SetThreadPriority(Thread, 15);
      ResumeThread(this[51]);
      return v1;
    }
    dwCreationFlags = 379;
    v3 = -2147024882;
  }
  v1 = v3;
  MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v3, dwCreationFlags);
  return v1;
}
