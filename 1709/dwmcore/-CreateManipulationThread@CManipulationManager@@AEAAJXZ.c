/*
 * XREFs of ?CreateManipulationThread@CManipulationManager@@AEAAJXZ @ 0x180195E10
 * Callers:
 *     ?Initialize@CManipulationManager@@AEAAJXZ @ 0x180195F28 (-Initialize@CManipulationManager@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CManipulationManager::CreateManipulationThread(HANDLE *this)
{
  DWORD v1; // ebx
  DWORD v3; // r9d
  HANDLE v4; // rcx
  DWORD dwCreationFlags; // [rsp+20h] [rbp-18h]
  DWORD ThreadId; // [rsp+40h] [rbp+8h] BYREF

  v1 = 0;
  if ( *((_BYTE *)this + 32) )
  {
    v3 = -2147467260;
    dwCreationFlags = 172;
  }
  else
  {
    v4 = CreateThread(0LL, 0LL, CManipulationManager::s_ThreadMain, this, 4u, &ThreadId);
    this[3] = v4;
    CManipulationManager::s_dwManipulationThreadId = ThreadId;
    if ( v4 )
    {
      SetThreadPriority(v4, 16);
      ResumeThread(this[3]);
      WaitForSingleObject(CManipulationManager::s_hManipThreadInitializedWaitEvent, 0xFFFFFFFF);
      return v1;
    }
    v3 = -2147024882;
    dwCreationFlags = 185;
  }
  v1 = v3;
  MilInstrumentationCheckHR_MaybeFailFast(20LL, &dword_18021BE08, 2u, v3, dwCreationFlags);
  return v1;
}
