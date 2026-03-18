/*
 * XREFs of ?CreateManipulationThread@CManipulationManager@@AEAAJXZ @ 0x180025F1C
 * Callers:
 *     ?Initialize@CManipulationManager@@AEAAJXZ @ 0x180025FA4 (-Initialize@CManipulationManager@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CManipulationManager::CreateManipulationThread(HANDLE *this)
{
  unsigned int v1; // ebx
  HANDLE v3; // rcx
  DWORD ThreadId; // [rsp+40h] [rbp+8h] BYREF

  v1 = 0;
  if ( *((_BYTE *)this + 32) )
  {
    v1 = -2147467260;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180277A60, 2u, -2147467260, 0xB0u);
  }
  else
  {
    v3 = CreateThread(0LL, 0LL, CManipulationManager::s_ThreadMain, this, 4u, &ThreadId);
    this[3] = v3;
    CManipulationManager::s_dwManipulationThreadId = ThreadId;
    if ( v3 )
    {
      SetThreadPriority(v3, 16);
      ResumeThread(this[3]);
      WaitForSingleObject(CManipulationManager::s_hManipThreadInitializedWaitEvent, 0xFFFFFFFF);
    }
    else
    {
      v1 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180277A60, 2u, -2147024882, 0xBDu);
    }
  }
  return v1;
}
