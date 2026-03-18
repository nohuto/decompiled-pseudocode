/*
 * XREFs of ?ReleaseManipulations@CInteractionTracker@@AEAAXXZ @ 0x18016D548
 * Callers:
 *     ?ProcessSetManipulations@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTIONTRACKER_SETMANIPULATIONS@@PEBXI@Z @ 0x18012C7B4 (-ProcessSetManipulations@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTIONTRA.c)
 *     ??1CInteractionTracker@@UEAA@XZ @ 0x18016BD60 (--1CInteractionTracker@@UEAA@XZ.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180034728 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?UpdateConfigurationIfDirty@CChainingHelper@@QEAAXPEAVCInteraction@@@Z @ 0x1801889B8 (-UpdateConfigurationIfDirty@CChainingHelper@@QEAAXPEAVCInteraction@@@Z.c)
 */

void __fastcall CInteractionTracker::ReleaseManipulations(CInteractionTracker *this)
{
  unsigned int v1; // edi
  char *v2; // r14
  __int64 v3; // rbx
  CChainingHelper *v4; // rsi
  int v6; // r12d
  __int64 v7; // r15
  unsigned int v8; // esi
  __int64 v9; // rcx
  __int64 v10; // rdx

  v1 = 0;
  v2 = (char *)this + 488;
  v3 = 0LL;
  v4 = (CInteractionTracker *)((char *)this + 328);
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
  v8 = *((_DWORD *)this + 126);
  if ( v8 )
  {
    do
    {
      v9 = *(_QWORD *)(*(_QWORD *)v2 + 8LL * (int)v1);
      CResource::UnRegisterNotifierInternal(this, (struct CResource *)((v9 + 8) & -(__int64)(v9 != 0)));
      v10 = *(_QWORD *)(*((_QWORD *)this + 62) + 8LL * (int)v1);
      CResource::UnRegisterNotifierInternal(this, (struct CResource *)((v10 + 8) & -(__int64)(v10 != 0)));
      ++v1;
    }
    while ( v1 < v8 );
  }
  CMap<CManipulation *,CInteraction *,CMapEqualHelper<CManipulation *,CInteraction *>>::RemoveAll(v2);
}
