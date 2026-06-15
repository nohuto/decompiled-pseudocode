/*
 * XREFs of ?RemoveGainStageReference@CGainStage@@QEAAKXZ @ 0x1800755D0
 * Callers:
 *     ?RemoveGainStage@CAudioSession@@UEAAJPEBU_GUID@@0_NPEA_J@Z @ 0x1800753D0 (-RemoveGainStage@CAudioSession@@UEAAJPEBU_GUID@@0_NPEA_J@Z.c)
 * Callees:
 *     WPP_SF__guid_d @ 0x180076F00 (WPP_SF__guid_d.c)
 */

__int64 __fastcall CGainStage::RemoveGainStageReference(CGainStage *this)
{
  if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF__guid_d(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      11LL,
      &WPP_bfe4e2b61ee73595151d7148963b9c3a_Traceguids,
      (char *)this + 16,
      *((_DWORD *)this + 9) - 1);
  }
  return (unsigned int)_InterlockedDecrement((volatile signed __int32 *)this + 9);
}
