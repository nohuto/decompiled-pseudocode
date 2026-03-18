/*
 * XREFs of zzzDwmStartRedirection @ 0x1C0016490
 * Callers:
 *     NtUserDwmKernelStartup @ 0x1C011B410 (NtUserDwmKernelStartup.c)
 * Callees:
 *     _GetProcessWindowStation @ 0x1C0010D60 (_GetProcessWindowStation.c)
 *     GreDwmStartup @ 0x1C00148E8 (GreDwmStartup.c)
 *     DwmAsyncDesktopCreate @ 0x1C0015D6C (DwmAsyncDesktopCreate.c)
 *     DwmNotifyChildrenAddRemove @ 0x1C0015E14 (DwmNotifyChildrenAddRemove.c)
 *     zzzComposeDesktop @ 0x1C0016E24 (zzzComposeDesktop.c)
 *     DeleteOrSetRedirectionBitmap @ 0x1C001C1A4 (DeleteOrSetRedirectionBitmap.c)
 *     CreateOrGetRedirectionBitmap @ 0x1C0026184 (CreateOrGetRedirectionBitmap.c)
 *     DwmAsyncDesktopFree @ 0x1C00A1814 (DwmAsyncDesktopFree.c)
 *     zzzDecomposeDesktop @ 0x1C00A18B4 (zzzDecomposeDesktop.c)
 *     GreDwmShutdown @ 0x1C00A2448 (GreDwmShutdown.c)
 *     bSetDevDragRect @ 0x1C00A2540 (bSetDevDragRect.c)
 *     zzzEnableDwmPointerSupport @ 0x1C00B9A10 (zzzEnableDwmPointerSupport.c)
 *     memset @ 0x1C0140500 (memset.c)
 *     StopFade @ 0x1C01C2190 (StopFade.c)
 */

__int64 zzzDwmStartRedirection()
{
  __int64 ProcessWindowStation; // rdi
  int RedirectionBitmap; // ebp
  __int64 i; // rsi
  __int64 v3; // rbx
  void *v4; // rax
  __int64 j; // rbx
  void *v6; // rbx
  __int64 v8; // rdx
  __int64 v9; // rsi
  void *v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rbx
  __int64 v13; // rdx
  _DWORD v14[12]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v15; // [rsp+70h] [rbp+8h] BYREF

  v15 = 0LL;
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
                          &v15);
    if ( RedirectionBitmap >= 0 )
    {
      *(_QWORD *)(ProcessWindowStation + 88) = v15;
      if ( grpdeskRitInput )
      {
        for ( i = *(_QWORD *)(*(_QWORD *)(grpdeskRitInput + 40LL) + 16LL); i; i = *(_QWORD *)(i + 32) )
        {
          v3 = ***(_QWORD ***)(i + 8);
          v4 = (void *)ReferenceDwmApiPort();
          DwmAsyncDesktopCreate(v4, v3);
          DwmNotifyChildrenAddRemove((struct tagDESKTOP *)i, 1);
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
              v8 = grpdeskRitInput;
              v9 = *(_QWORD *)(*(_QWORD *)(grpdeskRitInput + 40LL) + 16LL);
              if ( v9 )
              {
                do
                {
                  zzzDecomposeDesktop((struct tagDESKTOP *)v9);
                  DwmNotifyChildrenAddRemove((struct tagDESKTOP *)v9, 0);
                  v10 = (void *)ReferenceDwmApiPort();
                  DwmAsyncDesktopFree(v10);
                  v9 = *(_QWORD *)(v9 + 32);
                }
                while ( v9 );
                v8 = grpdeskRitInput;
              }
              if ( *(_QWORD *)(ProcessWindowStation + 88) )
                DeleteOrSetRedirectionBitmap(
                  *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v8 + 8LL) + 16LL),
                  *(_QWORD *)(ProcessWindowStation + 88),
                  1LL);
              GreDwmShutdown(*(_QWORD *)(gpDispInfo + 32LL));
              bSetDevDragRect(*(HDEV *)(gpDispInfo + 32LL));
              break;
            }
          }
        }
        v6 = (void *)ReferenceDwmApiPort();
        if ( v6 )
        {
          memset((char *)v14 + 2, 0, 0x2AuLL);
          v14[0] = 2883588;
          LOWORD(v14[1]) = 0x8000;
          v14[10] = 1073741895;
          LpcRequestPort(v6, v14);
          ObfDereferenceObject(v6);
        }
        UnlockUpdatesForDwm();
        *(_DWORD *)(ProcessWindowStation + 32) |= 0x200u;
      }
      else
      {
        bSetDevDragRect(*(HDEV *)(gpDispInfo + 32LL));
        v11 = grpdeskRitInput;
        if ( grpdeskRitInput )
        {
          v12 = *(_QWORD *)(*(_QWORD *)(grpdeskRitInput + 40LL) + 16LL);
          if ( v12 )
          {
            do
            {
              DwmNotifyChildrenAddRemove((struct tagDESKTOP *)v12, 0);
              v12 = *(_QWORD *)(v12 + 32);
            }
            while ( v12 );
            v11 = grpdeskRitInput;
          }
        }
        v13 = *(_QWORD *)(ProcessWindowStation + 88);
        if ( v13 )
          DeleteOrSetRedirectionBitmap(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v11 + 8LL) + 16LL), v13, 1LL);
      }
    }
  }
  return (unsigned int)RedirectionBitmap;
}
