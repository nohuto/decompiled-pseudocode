/*
 * XREFs of GreDesktopSwitch @ 0x1C00BAF04
 * Callers:
 *     xxxSwitchDesktop @ 0x1C00B8B10 (xxxSwitchDesktop.c)
 * Callees:
 *     ?SpRenderHint@@YAJAEAVPDEVOBJ@@W4_RENDERHINT_NOTIFY@@_KPEAX@Z @ 0x1C001521C (-SpRenderHint@@YAJAEAVPDEVOBJ@@W4_RENDERHINT_NOTIFY@@_KPEAX@Z.c)
 *     ?LEAVE_GRE_DWM_CRIT@@YAXVPDEVOBJ@@H@Z @ 0x1C00BC760 (-LEAVE_GRE_DWM_CRIT@@YAXVPDEVOBJ@@H@Z.c)
 *     ?ENTER_GRE_DWM_CRIT@@YAXVPDEVOBJ@@PEAH@Z @ 0x1C00BC880 (-ENTER_GRE_DWM_CRIT@@YAXVPDEVOBJ@@PEAH@Z.c)
 */

__int64 __fastcall GreDesktopSwitch(__int64 a1, int a2, int a3, __int64 a4, int a5)
{
  _QWORD *i; // rdx
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // [rsp+30h] [rbp+8h] BYREF

  v13 = a1;
  ENTER_GRE_DWM_CRIT(a1, &a5);
  if ( g_pDwmState && !a3 )
    SpRenderHint((struct PDEVOBJ *)&v13, 65539 - (a2 != 0), 0LL, 0LL);
  LEAVE_GRE_DWM_CRIT(a1, 0LL);
  if ( a1 )
  {
    if ( (*(_DWORD *)(a1 + 32) & 0x20000) != 0 )
    {
      for ( i = **(_QWORD ***)(a1 + 1816); i; i = (_QWORD *)*i )
      {
        v11 = i[6];
        if ( v11 )
        {
          if ( (*(_DWORD *)(v11 + 32) & 1) != 0 )
          {
            v12 = *(_QWORD *)(v11 + 2568);
            if ( v12 )
              *(_QWORD *)(v12 + 584) = a4;
          }
        }
      }
    }
    else
    {
      *(_QWORD *)(*(_QWORD *)(a1 + 2568) + 584LL) = a4;
    }
  }
  if ( a5 )
  {
    EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
    GreReleaseSemaphoreInternal(ghsemDynamicModeChange);
  }
  return 0LL;
}
