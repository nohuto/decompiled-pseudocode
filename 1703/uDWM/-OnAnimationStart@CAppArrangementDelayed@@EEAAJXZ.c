/*
 * XREFs of ?OnAnimationStart@CAppArrangementDelayed@@EEAAJXZ @ 0x180096C90
 * Callers:
 *     <none>
 * Callees:
 *     ?AbandonTransition@CAnimationScheduler@@QEAAJH@Z @ 0x180004BE8 (-AbandonTransition@CAnimationScheduler@@QEAAJH@Z.c)
 *     ?Abandon@CStoryboard@@QEAAXXZ @ 0x18000553C (-Abandon@CStoryboard@@QEAAXXZ.c)
 *     Template_tttt @ 0x18009C4C0 (Template_tttt.c)
 */

__int64 __fastcall CAppArrangementDelayed::OnAnimationStart(struct _GUID *this)
{
  unsigned __int8 v2; // bp
  unsigned __int8 v3; // r14
  unsigned __int8 v4; // r12
  char v5; // r15
  unsigned int v6; // esi
  unsigned int v7; // edx
  unsigned int v8; // edx
  unsigned int v9; // edx
  unsigned int v10; // edx
  unsigned int v11; // edx
  int v12; // edx

  v2 = 0;
  v3 = 1;
  v4 = 0;
  v5 = 0;
  v6 = 0;
  if ( !this[7].Data1 )
    goto LABEL_22;
  do
  {
    if ( GetPropW(*(HWND *)(*(_QWORD *)(*(_QWORD *)this[5].Data4 + 8LL * v6) + 16LL), L"ImmersiveGhostWindowProp") )
      v3 = 0;
    v7 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)this[5].Data4 + 8LL * v6) + 24LL) & 0xFFF;
    if ( v7 <= 0x1E )
    {
      if ( v7 != 30 )
      {
        v8 = v7 - 1;
        if ( v8 )
        {
          v9 = v8 - 2;
          if ( v9 )
          {
            v10 = v9 - 3;
            if ( v10 )
            {
              v11 = v10 - 15;
              if ( v11 )
              {
                if ( v11 != 2 )
                  goto LABEL_13;
LABEL_11:
                v5 = 1;
              }
            }
          }
        }
      }
LABEL_12:
      v2 = 1;
      v4 = 1;
      goto LABEL_13;
    }
    switch ( v7 )
    {
      case '"':
        goto LABEL_12;
      case '\'':
        goto LABEL_11;
      case '/':
      case 'S':
        goto LABEL_12;
    }
LABEL_13:
    ++v6;
  }
  while ( v6 < this[7].Data1 );
  if ( !v2 )
  {
LABEL_22:
    CStoryboard::Abandon(this);
    goto LABEL_23;
  }
  if ( v3 )
    CAnimationScheduler::AbandonTransition(
      *((CAnimationScheduler **)CDesktopManager::s_pDesktopManagerInstance + 22),
      75);
LABEL_23:
  CAnimationScheduler::AbandonTransition(*((CAnimationScheduler **)CDesktopManager::s_pDesktopManagerInstance + 22), 67);
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    Template_tttt(v4, v12, v2, v3, v4, v5);
  return 0LL;
}
