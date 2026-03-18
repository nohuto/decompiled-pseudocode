/*
 * XREFs of zzzDwmStartRedirection @ 0x1C00443AC
 * Callers:
 *     NtUserDwmKernelStartup @ 0x1C0125280 (NtUserDwmKernelStartup.c)
 * Callees:
 *     zzzDecomposeDesktop @ 0x1C0044214 (zzzDecomposeDesktop.c)
 *     zzzComposeDesktop @ 0x1C0044710 (zzzComposeDesktop.c)
 *     DwmNotifyChildrenAddRemove @ 0x1C0045400 (DwmNotifyChildrenAddRemove.c)
 *     DwmAsyncDesktopCreate @ 0x1C0045B38 (DwmAsyncDesktopCreate.c)
 *     zzzEnableDwmPointerSupport @ 0x1C00471BC (zzzEnableDwmPointerSupport.c)
 *     CreateOrGetRedirectionBitmap @ 0x1C008F848 (CreateOrGetRedirectionBitmap.c)
 *     _GetProcessWindowStation @ 0x1C00D90A0 (_GetProcessWindowStation.c)
 *     GreDwmStartup @ 0x1C00DEA90 (GreDwmStartup.c)
 *     bSetDevDragRect @ 0x1C00E35F0 (bSetDevDragRect.c)
 *     DwmAsyncDesktopFree @ 0x1C00E3988 (DwmAsyncDesktopFree.c)
 *     GreDwmShutdown @ 0x1C00E3A28 (GreDwmShutdown.c)
 *     DeleteOrSetRedirectionBitmap @ 0x1C00E3E74 (DeleteOrSetRedirectionBitmap.c)
 *     StopFade @ 0x1C013E090 (StopFade.c)
 *     memset @ 0x1C0145A00 (memset.c)
 */

__int64 zzzDwmStartRedirection()
{
  __int64 ProcessWindowStation; // rdi
  int RedirectionBitmap; // ebp
  __int64 i; // rsi
  void *v3; // rax
  __int64 j; // rbx
  void *v5; // rbx
  __int64 k; // rsi
  void *v8; // rax
  __int64 v9; // rdx
  __int64 m; // rbx
  __int64 v11; // rdx
  _DWORD v12[12]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v13; // [rsp+70h] [rbp+8h] BYREF

  v13 = 0LL;
  ProcessWindowStation = GetProcessWindowStation(0LL);
  if ( !(unsigned int)IsDwmApiPortRegistered() || (*(_DWORD *)(ProcessWindowStation + 32) & 4) != 0 )
  {
    return (unsigned int)-1073741790;
  }
  else
  {
    RedirectionBitmap = CreateOrGetRedirectionBitmap(
                          *(_QWORD *)(*(_QWORD *)(grpdeskRitInput + 8LL) + 16LL),
                          1LL,
                          0LL,
                          &v13);
    if ( RedirectionBitmap >= 0 )
    {
      *(_QWORD *)(ProcessWindowStation + 88) = v13;
      if ( grpdeskRitInput )
      {
        for ( i = *(_QWORD *)(*(_QWORD *)(grpdeskRitInput + 40LL) + 16LL); i; i = *(_QWORD *)(i + 32) )
        {
          v3 = (void *)ReferenceDwmApiPort();
          DwmAsyncDesktopCreate(v3);
          DwmNotifyChildrenAddRemove((struct tagDESKTOP *)i);
        }
      }
      if ( gfade[2] )
        StopFade();
      bSetDevDragRect(*(HDEV *)(gpDispInfo + 32LL));
      if ( (unsigned int)GreDwmStartup(*(_QWORD *)(gpDispInfo + 32LL)) )
      {
        zzzEnableDwmPointerSupport(1LL, 0LL);
        if ( grpdeskRitInput )
        {
          for ( j = *(_QWORD *)(*(_QWORD *)(grpdeskRitInput + 40LL) + 16LL); j; j = *(_QWORD *)(j + 32) )
          {
            RedirectionBitmap = zzzComposeDesktop((struct tagDESKTOP *)j);
            if ( RedirectionBitmap < 0 )
            {
              UnlockUpdatesForDwm();
              for ( k = *(_QWORD *)(*(_QWORD *)(grpdeskRitInput + 40LL) + 16LL); k; k = *(_QWORD *)(k + 32) )
              {
                zzzDecomposeDesktop((struct tagDESKTOP *)k);
                DwmNotifyChildrenAddRemove((struct tagDESKTOP *)k);
                v8 = (void *)ReferenceDwmApiPort();
                DwmAsyncDesktopFree(v8);
              }
              v9 = *(_QWORD *)(ProcessWindowStation + 88);
              if ( v9 )
                DeleteOrSetRedirectionBitmap(*(_QWORD *)(*(_QWORD *)(grpdeskRitInput + 8LL) + 16LL), v9, 1LL);
              GreDwmShutdown(*(_QWORD *)(gpDispInfo + 32LL));
              bSetDevDragRect(*(HDEV *)(gpDispInfo + 32LL));
              break;
            }
          }
        }
        v5 = (void *)ReferenceDwmApiPort();
        if ( v5 )
        {
          memset(v12, 0, 0x2CuLL);
          v12[0] = 2883588;
          LOWORD(v12[1]) = 0x8000;
          v12[10] = 1073741895;
          LpcRequestPort(v5, v12);
          ObfDereferenceObject(v5);
        }
        UnlockUpdatesForDwm();
        *(_DWORD *)(ProcessWindowStation + 32) |= 0x200u;
      }
      else
      {
        bSetDevDragRect(*(HDEV *)(gpDispInfo + 32LL));
        if ( grpdeskRitInput )
        {
          for ( m = *(_QWORD *)(*(_QWORD *)(grpdeskRitInput + 40LL) + 16LL); m; m = *(_QWORD *)(m + 32) )
            DwmNotifyChildrenAddRemove((struct tagDESKTOP *)m);
        }
        v11 = *(_QWORD *)(ProcessWindowStation + 88);
        if ( v11 )
          DeleteOrSetRedirectionBitmap(*(_QWORD *)(*(_QWORD *)(grpdeskRitInput + 8LL) + 16LL), v11, 1LL);
      }
    }
  }
  return (unsigned int)RedirectionBitmap;
}
