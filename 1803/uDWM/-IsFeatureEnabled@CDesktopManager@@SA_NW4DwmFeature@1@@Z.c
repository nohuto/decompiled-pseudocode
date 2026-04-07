/*
 * XREFs of ?IsFeatureEnabled@CDesktopManager@@SA_NW4DwmFeature@1@@Z @ 0x18003818C
 * Callers:
 *     ?ShouldShowTransition@CTopLevelWindow3D@@AEAA_NXZ @ 0x1800231C0 (-ShouldShowTransition@CTopLevelWindow3D@@AEAA_NXZ.c)
 *     ?GetGlobalState@CWindowList@@AEAAJPEAUMILCMD_DWM_REDIRECTION_GETGLOBALSTATE@@@Z @ 0x18008498C (-GetGlobalState@CWindowList@@AEAAJPEAUMILCMD_DWM_REDIRECTION_GETGLOBALSTATE@@@Z.c)
 *     ?IsLivePreviewAllowed@CDesktopManager@@SA_NXZ @ 0x180085348 (-IsLivePreviewAllowed@CDesktopManager@@SA_NXZ.c)
 * Callees:
 *     ?SLGetHelper@@YA_NPEBG@Z @ 0x180042FD4 (-SLGetHelper@@YA_NPEBG@Z.c)
 */

char __fastcall CDesktopManager::IsFeatureEnabled(int a1)
{
  __int64 v1; // rbx
  _BYTE *v3; // rdi
  STRSAFE_PCNZWCH *v4; // rsi
  __int64 v5; // rbp

  v1 = a1;
  if ( !byte_1800C9E18 )
  {
    v3 = byte_1800CA050;
    v4 = (STRSAFE_PCNZWCH *)off_1800AE7D0;
    v5 = 3LL;
    do
    {
      *v3++ = SLGetHelper(*v4++);
      --v5;
    }
    while ( v5 );
    byte_1800C9E18 = 1;
  }
  if ( (unsigned int)v1 >= 3 )
    return SLGetHelper(off_1800AE7D0[v1]);
  else
    return byte_1800CA050[v1];
}
