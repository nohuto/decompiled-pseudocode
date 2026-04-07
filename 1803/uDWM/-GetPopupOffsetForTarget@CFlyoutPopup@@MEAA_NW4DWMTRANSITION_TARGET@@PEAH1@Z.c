/*
 * XREFs of ?GetPopupOffsetForTarget@CFlyoutPopup@@MEAA_NW4DWMTRANSITION_TARGET@@PEAH1@Z @ 0x1800018B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall CFlyoutPopup::GetPopupOffsetForTarget(__int64 a1, int a2, _DWORD *a3, _DWORD *a4)
{
  char v4; // cl
  double v5; // xmm0_8
  int v7; // edx
  int v8; // edx
  int v9; // edx
  int v10; // edx
  int v11; // edx
  int v12; // edx
  double v13; // xmm0_8
  int v14; // edx
  int v15; // edx
  int v16; // edx

  v4 = 0;
  *a3 = 0;
  *a4 = 0;
  if ( a2 > 79 )
  {
    v7 = a2 - 80;
    if ( v7 )
    {
      v14 = v7 - 8;
      if ( !v14 )
        goto LABEL_19;
      v15 = v14 - 1;
      if ( !v15 )
      {
LABEL_15:
        v13 = *((double *)CDesktopManager::s_pDesktopManagerInstance + 55) * -80.0;
LABEL_20:
        *a3 = (int)v13;
        return 1;
      }
      v16 = v15 - 1;
      if ( !v16 )
        goto LABEL_3;
      if ( v16 != 1 )
        return v4;
    }
    v5 = *((double *)CDesktopManager::s_pDesktopManagerInstance + 55) * -80.0;
    goto LABEL_4;
  }
  if ( a2 != 79 )
  {
    v8 = a2 - 12;
    if ( !v8 )
    {
      v13 = *((double *)CDesktopManager::s_pDesktopManagerInstance + 55) * 40.0;
      goto LABEL_20;
    }
    v9 = v8 - 1;
    if ( !v9 )
    {
      v13 = *((double *)CDesktopManager::s_pDesktopManagerInstance + 55) * -40.0;
      goto LABEL_20;
    }
    v10 = v9 - 1;
    if ( !v10 )
    {
      v5 = *((double *)CDesktopManager::s_pDesktopManagerInstance + 55) * 40.0;
      goto LABEL_4;
    }
    v11 = v10 - 1;
    if ( !v11 )
    {
      v5 = *((double *)CDesktopManager::s_pDesktopManagerInstance + 55) * -40.0;
      goto LABEL_4;
    }
    v12 = v11 - 62;
    if ( v12 )
    {
      if ( v12 != 1 )
        return v4;
      goto LABEL_15;
    }
LABEL_19:
    v13 = *((double *)CDesktopManager::s_pDesktopManagerInstance + 55) * 80.0;
    goto LABEL_20;
  }
LABEL_3:
  v5 = *((double *)CDesktopManager::s_pDesktopManagerInstance + 55) * 80.0;
LABEL_4:
  *a4 = (int)v5;
  return 1;
}
