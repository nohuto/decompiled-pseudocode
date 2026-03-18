/*
 * XREFs of ?ProcessUpdateConfiguration@CInteraction@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTION_UPDATECONFIGURATION@@PEBXI@Z @ 0x1800913BC
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x1800ABB40 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCManipulationManager@@@WRL@Microsoft@@IEAAKXZ @ 0x180009FA0 (-InternalRelease@-$ComPtr@VCManipulationManager@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?NotifyUpdateConfiguration@CManipulationManager@@QEAAJPEAVCInteraction@@W4Enum@InteractionConfigurationUpdateType@@W43InteractionInputType@@IPEBXI@Z @ 0x18000A1A8 (-NotifyUpdateConfiguration@CManipulationManager@@QEAAJPEAVCInteraction@@W4Enum@InteractionConfig.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z @ 0x1800AACB0 (-GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z.c)
 *     McTemplateU0pqqNR2 @ 0x18016A4EC (McTemplateU0pqqNR2.c)
 */

__int64 __fastcall CInteraction::ProcessUpdateConfiguration(
        CComposition **this,
        struct CResourceTable *a2,
        const struct MILCMD_INTERACTION_UPDATECONFIGURATION *a3,
        void *a4,
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
  int v17; // r10d
  int ManipulationManager; // eax
  __int64 v19; // rcx
  unsigned int v20; // ebx
  DWORD v22; // r9d
  unsigned int v23; // [rsp+20h] [rbp-38h]
  struct CManipulationManager *v24; // [rsp+68h] [rbp+10h] BYREF

  v24 = a2;
  v5 = *((_DWORD *)a3 + 4);
  v24 = 0LL;
  if ( v5 == 1 || v5 == 2 || v5 == 3 )
  {
    v9 = 12LL;
  }
  else
  {
    if ( v5 != 4 )
    {
      v20 = -2147024809;
      v23 = 320;
LABEL_25:
      v22 = v20;
LABEL_32:
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v22, v23);
      goto LABEL_13;
    }
    v9 = 4LL;
  }
  v10 = *((_DWORD *)a3 + 2);
  v12 = v9;
  v11 = v10 * v9;
  if ( !is_mul_ok(v10, v12) )
  {
    v20 = -2147024362;
    v23 = 323;
    goto LABEL_25;
  }
  v13 = a5;
  if ( v11 != a5 )
  {
    v20 = -2003303421;
    v23 = 327;
    goto LABEL_25;
  }
  v14 = *((_DWORD *)a3 + 3);
  v15 = v5 - 1;
  if ( v15 )
  {
    v16 = v15 - 1;
    if ( v16 )
    {
      v17 = v16 - 1;
      if ( v17 )
      {
        if ( v17 == 1 && (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
          McTemplateU0pqqNR2(
            (_DWORD)this + 8,
            (unsigned int)&INTERACTION_MOUSE_CONFIGURATION_CHANGED,
            this != 0LL ? (_DWORD)this + 8 : 0,
            v14,
            v10,
            4 * v10,
            (__int64)a4);
      }
      else if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
      {
        McTemplateU0pqqNR2(
          (_DWORD)this + 8,
          (unsigned int)&INTERACTION_PEN_CONFIGURATION_CHANGED,
          this != 0LL ? (_DWORD)this + 8 : 0,
          v14,
          v10,
          12 * v10,
          (__int64)a4);
      }
    }
    else if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    {
      McTemplateU0pqqNR2(
        (_DWORD)this + 8,
        (unsigned int)&INTERACTION_TOUCHPAD_CONFIGURATION_CHANGED,
        this != 0LL ? (_DWORD)this + 8 : 0,
        v14,
        v10,
        12 * v10,
        (__int64)a4);
    }
  }
  else if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
  {
    McTemplateU0pqqNR2(
      (_DWORD)this + 8,
      (unsigned int)&INTERACTION_TOUCH_CONFIGURATION_CHANGED,
      this != 0LL ? (_DWORD)this + 8 : 0,
      v14,
      v10,
      12 * v10,
      (__int64)a4);
  }
  Microsoft::WRL::ComPtr<CManipulationManager>::InternalRelease(&v24);
  ManipulationManager = CComposition::GetManipulationManager(this[3], &v24);
  v20 = ManipulationManager;
  if ( ManipulationManager < 0 )
  {
    v23 = 335;
    goto LABEL_31;
  }
  ManipulationManager = CManipulationManager::NotifyUpdateConfiguration(
                          v19,
                          (__int64)this,
                          *((_DWORD *)a3 + 3),
                          *((_DWORD *)a3 + 4),
                          *((_DWORD *)a3 + 2),
                          a4,
                          v13);
  v20 = ManipulationManager;
  if ( ManipulationManager < 0 )
  {
    v23 = 337;
LABEL_31:
    v22 = ManipulationManager;
    goto LABEL_32;
  }
LABEL_13:
  Microsoft::WRL::ComPtr<CManipulationManager>::InternalRelease(&v24);
  return v20;
}
