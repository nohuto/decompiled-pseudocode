/*
 * XREFs of ?ProcessUpdateConfiguration@CInteraction@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTION_UPDATECONFIGURATION@@PEBXI@Z @ 0x18004B768
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18005CD70 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCManipulationManager@@@WRL@Microsoft@@IEAAKXZ @ 0x18004D8E4 (-InternalRelease@-$ComPtr@VCManipulationManager@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?NotifyUpdateConfiguration@CManipulationManager@@QEAAJPEAVCInteraction@@W4Enum@InteractionConfigurationUpdateType@@W43InteractionInputType@@IPEBXI@Z @ 0x18004E994 (-NotifyUpdateConfiguration@CManipulationManager@@QEAAJPEAVCInteraction@@W4Enum@InteractionConfig.c)
 *     ?GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z @ 0x18005B588 (-GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     Template_pqqNR2 @ 0x1801678D8 (Template_pqqNR2.c)
 */

__int64 __fastcall CInteraction::ProcessUpdateConfiguration(
        CComposition **this,
        struct CResourceTable *a2,
        const struct MILCMD_INTERACTION_UPDATECONFIGURATION *a3,
        __int64 a4,
        unsigned int a5)
{
  int v5; // r10d
  __int64 v9; // rax
  unsigned int v10; // r9d
  __int64 v11; // rax
  unsigned __int64 v12; // kr00_8
  unsigned int v13; // r14d
  int v14; // r11d
  int v15; // r10d
  int v16; // r10d
  int ManipulationManager; // eax
  __int64 v18; // rcx
  unsigned int v19; // ebx
  int v21; // r10d
  int v22; // r9d
  unsigned int v23; // [rsp+20h] [rbp-38h]
  struct CManipulationManager *v24; // [rsp+68h] [rbp+10h] BYREF

  v24 = a2;
  v5 = *((_DWORD *)a3 + 4);
  v24 = 0LL;
  if ( v5 == 1 || v5 == 2 )
  {
    v9 = 12LL;
  }
  else
  {
    if ( (unsigned int)(v5 - 3) > 1 )
    {
      v19 = -2147024809;
      v23 = 298;
LABEL_25:
      v22 = v19;
LABEL_30:
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v22, v23);
      goto LABEL_12;
    }
    v9 = 4LL;
  }
  v10 = *((_DWORD *)a3 + 2);
  v12 = v9;
  v11 = v10 * v9;
  if ( !is_mul_ok(v10, v12) )
  {
    v19 = -2147024362;
    v23 = 301;
    goto LABEL_25;
  }
  v13 = a5;
  if ( v11 != a5 )
  {
    v19 = -2003303421;
    v23 = 305;
    goto LABEL_25;
  }
  v14 = *((_DWORD *)a3 + 3);
  v15 = v5 - 1;
  if ( v15 )
  {
    v16 = v15 - 1;
    if ( v16 )
    {
      v21 = v16 - 1;
      if ( v21 )
      {
        if ( v21 == 1 && (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
          Template_pqqNR2(
            (_DWORD)this + 8,
            (unsigned int)&INTERACTION_MOUSE_CONFIGURATION_CHANGED,
            this != 0LL ? (_DWORD)this + 8 : 0,
            v14,
            v10,
            4 * v10,
            a4);
      }
      else if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
      {
        Template_pqqNR2(
          (_DWORD)this + 8,
          (unsigned int)&INTERACTION_PEN_CONFIGURATION_CHANGED,
          this != 0LL ? (_DWORD)this + 8 : 0,
          v14,
          v10,
          4 * v10,
          a4);
      }
    }
    else if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    {
      Template_pqqNR2(
        (_DWORD)this + 8,
        (unsigned int)&INTERACTION_TOUCHPAD_CONFIGURATION_CHANGED,
        this != 0LL ? (_DWORD)this + 8 : 0,
        v14,
        v10,
        12 * v10,
        a4);
    }
  }
  else if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
  {
    Template_pqqNR2(
      (_DWORD)this + 8,
      (unsigned int)&INTERACTION_TOUCH_CONFIGURATION_CHANGED,
      this != 0LL ? (_DWORD)this + 8 : 0,
      v14,
      v10,
      12 * v10,
      a4);
  }
  Microsoft::WRL::ComPtr<CManipulationManager>::InternalRelease(&v24);
  ManipulationManager = CComposition::GetManipulationManager(this[3], &v24);
  v19 = ManipulationManager;
  if ( ManipulationManager < 0 )
  {
    v23 = 313;
    goto LABEL_29;
  }
  ManipulationManager = CManipulationManager::NotifyUpdateConfiguration(
                          v18,
                          this,
                          *((unsigned int *)a3 + 3),
                          *((unsigned int *)a3 + 4),
                          *((_DWORD *)a3 + 2),
                          a4,
                          v13);
  v19 = ManipulationManager;
  if ( ManipulationManager < 0 )
  {
    v23 = 315;
LABEL_29:
    v22 = ManipulationManager;
    goto LABEL_30;
  }
LABEL_12:
  Microsoft::WRL::ComPtr<CManipulationManager>::InternalRelease(&v24);
  return v19;
}
