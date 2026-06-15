/*
 * XREFs of ?SetUserDuckingPreference@CDuckingManager@@UEAAXKK@Z @ 0x18000C0A0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_D @ 0x18000818C (WPP_SF_D.c)
 */

void __fastcall CDuckingManager::SetUserDuckingPreference(CDuckingManager *this, int a2, int a3)
{
  int v6; // ebx
  float v7; // xmm3_4

  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x8000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xDu, &WPP_32edceac6d05362bf9e379e253568d16_Traceguids, a2);
  }
  *((_DWORD *)this + 71) = a2;
  if ( a2 )
  {
    v6 = a2 - 1;
    if ( v6 )
    {
      if ( v6 == 1 )
        v7 = FLOAT_N6_0;
      else
        v7 = 0.0;
    }
    else
    {
      v7 = FLOAT_N18_0;
    }
  }
  else
  {
    v7 = FLOAT_N96_0;
  }
  CWindowsPolicyManager::SetDuckingGainForId(g_PolicyManager, a3, L"Comm", v7);
}
