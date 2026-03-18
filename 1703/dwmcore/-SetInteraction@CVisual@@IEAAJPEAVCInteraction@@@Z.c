/*
 * XREFs of ?SetInteraction@CVisual@@IEAAJPEAVCInteraction@@@Z @ 0x180087E0C
 * Callers:
 *     ?ProcessSetInteraction@CVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_SETINTERACTION@@@Z @ 0x180085EA0 (-ProcessSetInteraction@CVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_SETINTERACTION@@@Z.c)
 *     ?SetInteraction@CVisual@@IEAAJPEAVCInteraction@@@Z @ 0x180087E0C (-SetInteraction@CVisual@@IEAAJPEAVCInteraction@@@Z.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180034728 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x180034FA4 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?SetVisual@CInteraction@@QEAAJPEAVCVisual@@@Z @ 0x18004B67C (-SetVisual@CInteraction@@QEAAJPEAVCVisual@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ @ 0x180085584 (-GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ.c)
 *     ?SetInteractionInternal@CVisual@@QEAAXPEAVCInteraction@@@Z @ 0x180085680 (-SetInteractionInternal@CVisual@@QEAAXPEAVCInteraction@@@Z.c)
 *     ?NotifyMidManipulationUpdate@CVisual@@AEAAXW4MidManipulationUpdateType@@PEAV1@@Z @ 0x180086A4C (-NotifyMidManipulationUpdate@CVisual@@AEAAXW4MidManipulationUpdateType@@PEAV1@@Z.c)
 *     ?OnInputSinkChange@CVisual@@QEAAXXZ @ 0x180087DB8 (-OnInputSinkChange@CVisual@@QEAAXXZ.c)
 *     ?SetInteraction@CVisual@@IEAAJPEAVCInteraction@@@Z @ 0x180087E0C (-SetInteraction@CVisual@@IEAAJPEAVCInteraction@@@Z.c)
 */

__int64 __fastcall CVisual::SetInteraction(CVisual *this, struct CInteraction *a2)
{
  unsigned int v4; // ebx
  struct CInteraction *InteractionInternal; // rax
  struct CInteraction *v6; // rbp
  __int64 v7; // rax
  int v8; // eax
  int v9; // eax
  CVisual *v11; // rcx
  int v12; // eax

  v4 = 0;
  InteractionInternal = CVisual::GetInteractionInternal(this);
  v6 = InteractionInternal;
  if ( a2 != InteractionInternal )
  {
    if ( InteractionInternal )
    {
      CVisual::NotifyMidManipulationUpdate((__int64)this, 1u, (__int64)this);
      CInteraction::SetVisual(v6, 0LL);
      CResource::UnRegisterNotifierInternal(this, (struct CInteraction *)((char *)v6 + 8));
      CVisual::SetInteractionInternal(this, 0LL);
    }
    if ( a2 )
    {
      v7 = *((_QWORD *)a2 + 15);
      if ( v7 )
      {
        v11 = *(CVisual **)(v7 + 8);
        if ( v11 )
        {
          v12 = CVisual::SetInteraction(v11, 0LL);
          v4 = v12;
          if ( v12 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0xB82u);
            return v4;
          }
        }
      }
      v8 = CInteraction::SetVisual(a2, this);
      v4 = v8;
      if ( v8 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0xB86u);
        return v4;
      }
    }
    v9 = CResource::RegisterNotifier(
           this,
           (struct CResource *)(((unsigned __int64)a2 + 8) & ((unsigned __int128)-(__int128)(unsigned __int64)a2 >> 64)));
    v4 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0xB8Cu);
    }
    else
    {
      CVisual::SetInteractionInternal(this, a2);
      if ( a2 )
        CVisual::NotifyMidManipulationUpdate((__int64)this, 0, (__int64)this);
      CVisual::OnInputSinkChange(this);
    }
  }
  return v4;
}
