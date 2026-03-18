/*
 * XREFs of ?CreateTokenThread@CSurfaceManager@@IEAAJXZ @ 0x18001FF5C
 * Callers:
 *     ?Initialize@CSurfaceManager@@IEAAJPEAPEAX0@Z @ 0x18001FFD0 (-Initialize@CSurfaceManager@@IEAAJPEAPEAX0@Z.c)
 *     ?ResetTokenThread@CSurfaceManager@@QEAAJXZ @ 0x18002030C (-ResetTokenThread@CSurfaceManager@@QEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CSurfaceManager::CreateTokenThread(HANDLE *this)
{
  unsigned int v1; // ebx
  HANDLE Thread; // rax

  v1 = 0;
  if ( *((_BYTE *)this + 352) )
  {
    v1 = -2147467260;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147467260, 0x164u);
  }
  else
  {
    Thread = CreateThread(0LL, 0LL, CSurfaceManager::s_TokenThreadMain, this, 4u, 0LL);
    this[42] = Thread;
    if ( Thread )
    {
      SetThreadPriority(Thread, 15);
      ResumeThread(this[42]);
    }
    else
    {
      v1 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x171u);
    }
  }
  return v1;
}
