/*
 * XREFs of ?CreateOrDestroyDesktopWindowReplacementForDesktops@CWindowList@@QEAAX_N@Z @ 0x180042214
 * Callers:
 *     ?StartupEnd@CWindowList@@AEAAJXZ @ 0x1800426D4 (-StartupEnd@CWindowList@@AEAAJXZ.c)
 *     ?NotifyRedirectionShutdown@CDesktopManager@@QEAAJXZ @ 0x180078A98 (-NotifyRedirectionShutdown@CDesktopManager@@QEAAJXZ.c)
 * Callees:
 *     ?CreateDesktopWindowForLogonDesktop@CDesktopManager@@CAH_K@Z @ 0x180015568 (-CreateDesktopWindowForLogonDesktop@CDesktopManager@@CAH_K@Z.c)
 *     ?IsLogonDesktop@CDesktopManager@@SA_N_K@Z @ 0x180015A00 (-IsLogonDesktop@CDesktopManager@@SA_N_K@Z.c)
 *     ?DestroyDesktopWindowReplacement@CDesktopManager@@SAX_K@Z @ 0x180016D78 (-DestroyDesktopWindowReplacement@CDesktopManager@@SAX_K@Z.c)
 */

void __fastcall CWindowList::CreateOrDestroyDesktopWindowReplacementForDesktops(CWindowList *this, char a2)
{
  struct _RTL_GENERIC_TABLE *i; // rcx
  __int64 v5; // rax
  __int64 *v6; // rax
  __int64 *v7; // rbx
  unsigned __int64 v8; // rcx
  PVOID RestartKey; // [rsp+30h] [rbp+8h] BYREF

  RestartKey = 0LL;
  for ( i = (struct _RTL_GENERIC_TABLE *)((char *)this + 8); ; i = (struct _RTL_GENERIC_TABLE *)((char *)this + 8) )
  {
    v6 = (__int64 *)RtlEnumerateGenericTableWithoutSplaying(i, &RestartKey);
    v7 = v6;
    if ( !v6 )
      break;
    if ( *((_BYTE *)v6 + 56) )
    {
      v8 = *v6;
      if ( a2 )
      {
        CDesktopManager::CreateDesktopWindowForLogonDesktop(v8);
        if ( !*((_QWORD *)this + 67) && CDesktopManager::IsLogonDesktop(*v7) )
        {
          *((_QWORD *)this + 67) = v7[3];
          v5 = v7[3];
          if ( v5 )
            _InterlockedIncrement((volatile signed __int32 *)(v5 + 8));
        }
      }
      else
      {
        CDesktopManager::DestroyDesktopWindowReplacement(v8);
      }
    }
  }
}
