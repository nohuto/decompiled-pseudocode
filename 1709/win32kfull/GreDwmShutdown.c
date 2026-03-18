/*
 * XREFs of GreDwmShutdown @ 0x1C00E3A28
 * Callers:
 *     zzzDwmStartRedirection @ 0x1C00443AC (zzzDwmStartRedirection.c)
 *     xxxDwmStopRedirection @ 0x1C00E3780 (xxxDwmStopRedirection.c)
 * Callees:
 *     ?LEAVE_GRE_DWM_CRIT@@YAXVPDEVOBJ@@H@Z @ 0x1C008AD88 (-LEAVE_GRE_DWM_CRIT@@YAXVPDEVOBJ@@H@Z.c)
 *     ?ENTER_GRE_DWM_CRIT@@YAXVPDEVOBJ@@PEAH@Z @ 0x1C008B124 (-ENTER_GRE_DWM_CRIT@@YAXVPDEVOBJ@@PEAH@Z.c)
 *     ?SpRenderHint@@YAJAEAVPDEVOBJ@@W4_RENDERHINT_NOTIFY@@_KPEAX@Z @ 0x1C008BB84 (-SpRenderHint@@YAJAEAVPDEVOBJ@@W4_RENDERHINT_NOTIFY@@_KPEAX@Z.c)
 *     ?vAccNotify@@YAXPEAU_SURFOBJ@@KPEAX@Z @ 0x1C008C12C (-vAccNotify@@YAXPEAU_SURFOBJ@@KPEAX@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall GreDwmShutdown(__int64 a1)
{
  _QWORD *v2; // rdx
  _QWORD **v3; // r8
  _QWORD *v4; // rax
  _QWORD **v5; // r8
  _QWORD *v6; // rax
  __int64 v8; // rcx
  __int64 v9; // rcx
  int v10; // [rsp+30h] [rbp+8h] BYREF
  __int64 v11; // [rsp+38h] [rbp+10h] BYREF

  v11 = a1;
  ENTER_GRE_DWM_CRIT(a1, &v10);
  if ( g_pDwmState )
  {
    ZwSetEvent(*((HANDLE *)g_pDwmState + 42), 0LL);
    ZwClose(*((HANDLE *)g_pDwmState + 42));
    GreSfmDwmShutdown();
    SpRenderHint((struct PDEVOBJ *)&v11, 0x10001u, 0LL, 0LL);
    vAccNotify(
      (struct _SURFOBJ *)((*(_QWORD *)(a1 + 2568) + 24LL) & -(__int64)(*(_QWORD *)(a1 + 2568) != 0LL)),
      6u,
      0LL);
    GreDeleteObject(*((_QWORD *)g_pDwmState + 23));
    v3 = (_QWORD **)((char *)g_pDwmState + 120);
    while ( 1 )
    {
      v4 = *v3;
      if ( *v3 == v3 )
        break;
      v8 = *v4;
      if ( *(_QWORD **)(*v4 + 8LL) != v4 || (v2 = (_QWORD *)v4[1], (_QWORD *)*v2 != v4) )
        __fastfail(3u);
      *v2 = v8;
      *(_QWORD *)(v8 + 8) = v2;
      v4[1] = v4;
      *v4 = v4;
    }
    v5 = (_QWORD **)((char *)g_pDwmState + 104);
    while ( 1 )
    {
      v6 = *v5;
      if ( *v5 == v5 )
        break;
      v9 = *v6;
      if ( *(_QWORD **)(*v6 + 8LL) != v6 || (v2 = (_QWORD *)v6[1], (_QWORD *)*v2 != v6) )
        __fastfail(3u);
      *v2 = v9;
      *(_QWORD *)(v9 + 8) = v2;
      v6[1] = v6;
      *v6 = v6;
    }
    g_pDwmState = 0LL;
    Win32FreePool(g_pDwmState, v2, v5);
    ++*(_DWORD *)(gpGdiSharedMemory + 1573020LL);
  }
  return LEAVE_GRE_DWM_CRIT(a1, v10);
}
