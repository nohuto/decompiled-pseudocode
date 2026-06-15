/*
 * XREFs of ?AddGainStageReference@CGainStage@@QEAAKXZ @ 0x1800A8698
 * Callers:
 *     ?AddDuckingManagerGainStage@CAudioSession@@UEAAJPEAVCGainStage@@@Z @ 0x1800A85F0 (-AddDuckingManagerGainStage@CAudioSession@@UEAAJPEAVCGainStage@@@Z.c)
 * Callees:
 *     WPP_SF__guid_d @ 0x1800AE174 (WPP_SF__guid_d.c)
 */

__int64 __fastcall CGainStage::AddGainStageReference(CGainStage *this, __int64 a2, __int64 a3)
{
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF__guid_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 10LL, a3, (char *)this + 16, *((_DWORD *)this + 9) + 1);
  }
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 9);
}
