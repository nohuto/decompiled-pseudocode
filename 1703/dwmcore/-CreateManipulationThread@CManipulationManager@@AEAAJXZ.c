/*
 * XREFs of ?CreateManipulationThread@CManipulationManager@@AEAAJXZ @ 0x18004E634
 * Callers:
 *     ?Initialize@CManipulationManager@@AEAAJXZ @ 0x18004E6B4 (-Initialize@CManipulationManager@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CManipulationManager::CreateManipulationThread(CManipulationManager *this)
{
  unsigned int v1; // ebx
  HANDLE v3; // rax
  int v5; // r9d
  DWORD dwCreationFlags; // [rsp+20h] [rbp-18h]
  DWORD ThreadId; // [rsp+40h] [rbp+8h] BYREF

  v1 = 0;
  if ( *((_BYTE *)this + 32) )
  {
    v5 = -2147467260;
    dwCreationFlags = 174;
LABEL_7:
    v1 = v5;
    MilInstrumentationCheckHR(0x14u, &dword_1801F3CB8, 2u, v5, dwCreationFlags);
    return v1;
  }
  v3 = CreateThread(0LL, 0LL, CManipulationManager::s_ThreadMain, this, 4u, &ThreadId);
  *((_QWORD *)this + 3) = v3;
  if ( !v3 )
  {
    v5 = -2147024882;
    dwCreationFlags = 189;
    goto LABEL_7;
  }
  SetThreadPriority(v3, 16);
  ResumeThread(*((HANDLE *)this + 3));
  WaitForSingleObject(CManipulationManager::s_hManipThreadInitializedWaitEvent, 0xFFFFFFFF);
  return v1;
}
