/*
 * XREFs of ?ReleaseManipulations@CInteractionTracker@@AEAAXXZ @ 0x18016D09C
 * Callers:
 *     ??1CInteractionTracker@@UEAA@XZ @ 0x18016A868 (--1CInteractionTracker@@UEAA@XZ.c)
 *     ?ProcessSetManipulations@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTIONTRACKER_SETMANIPULATIONS@@PEBXI@Z @ 0x18016CA44 (-ProcessSetManipulations@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTIONTRA.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800A9E50 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?UpdateConfigurationIfDirty@CChainingHelper@@QEAAXPEAVCInteraction@@@Z @ 0x18019269C (-UpdateConfigurationIfDirty@CChainingHelper@@QEAAXPEAVCInteraction@@@Z.c)
 */

void __fastcall CInteractionTracker::ReleaseManipulations(CInteractionTracker *this)
{
  unsigned int v1; // ebx
  char *v2; // rdi
  __int64 v3; // rsi
  CChainingHelper *v4; // r14
  int v6; // r12d
  __int64 v7; // r15
  unsigned int v8; // esi

  v1 = 0;
  v2 = (char *)this + 520;
  v3 = 0LL;
  v4 = (CInteractionTracker *)((char *)this + 340);
  do
  {
    v6 = 0;
    if ( *((int *)v2 + 4) > 0 )
    {
      v7 = 0LL;
      do
      {
        if ( *(_QWORD *)(v7 + *((_QWORD *)v2 + 1)) )
        {
          *((_BYTE *)v4 + v3) &= ~2u;
          *(_DWORD *)((char *)v4 + v3 + 4) = 0;
          *((_BYTE *)v4 + 36) |= 1u;
          *((_BYTE *)v4 + v3) &= ~4u;
          *(_DWORD *)((char *)v4 + v3 + 8) = 0;
          *((_BYTE *)v4 + 36) |= 2u;
          CChainingHelper::UpdateConfigurationIfDirty(v4, *(struct CInteraction **)(*((_QWORD *)v2 + 1) + v7));
        }
        ++v6;
        v7 += 8LL;
      }
      while ( v6 < *((_DWORD *)v2 + 4) );
    }
    v3 += 12LL;
  }
  while ( v3 < 36 );
  v8 = *((_DWORD *)this + 134);
  if ( v8 )
  {
    do
      CResource::UnRegisterNotifierInternal(this, *(struct CResource **)(*(_QWORD *)v2 + 8LL * (int)v1++));
    while ( v1 < v8 );
  }
  CMap<Microsoft::WRL::ComPtr<CManipulation>,Microsoft::WRL::ComPtr<CInteraction>,CMapEqualHelper<Microsoft::WRL::ComPtr<CManipulation>,Microsoft::WRL::ComPtr<CInteraction>>>::RemoveAll(v2);
}
