/*
 * XREFs of ?RemoveGainStageReference@CGainStage@@QEAAKXZ @ 0x1800ACA58
 * Callers:
 *     ?RemoveDuckingManagerGainStage@CAudioSession@@UEAAJ_NPEA_J@Z @ 0x1800AC990 (-RemoveDuckingManagerGainStage@CAudioSession@@UEAAJ_NPEA_J@Z.c)
 * Callees:
 *     WPP_SF__guid_d @ 0x1800AE174 (WPP_SF__guid_d.c)
 */

__int64 __fastcall CGainStage::RemoveGainStageReference(CGainStage *this, __int64 a2, __int64 a3)
{
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF__guid_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 11LL, a3, (char *)this + 16, *((_DWORD *)this + 9) - 1);
  }
  return (unsigned int)_InterlockedDecrement((volatile signed __int32 *)this + 9);
}
