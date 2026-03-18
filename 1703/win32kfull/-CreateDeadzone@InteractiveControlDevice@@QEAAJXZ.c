/*
 * XREFs of ?CreateDeadzone@InteractiveControlDevice@@QEAAJXZ @ 0x1C021F414
 * Callers:
 *     ?Initialize@InteractiveControlDevice@@QEAAJPEAURawInputManagerDeviceObject@@@Z @ 0x1C021FBF4 (-Initialize@InteractiveControlDevice@@QEAAJPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?PerformInputActions@InteractiveControlDevice@@QEAAXPEAVInteractiveControlInput@@I@Z @ 0x1C0220140 (-PerformInputActions@InteractiveControlDevice@@QEAAXPEAVInteractiveControlInput@@I@Z.c)
 * Callees:
 *     ?Instance@InteractiveControlManager@@SAPEAV1@XZ @ 0x1C0108804 (-Instance@InteractiveControlManager@@SAPEAV1@XZ.c)
 *     GetUserHandedness @ 0x1C011B5E0 (GetUserHandedness.c)
 */

__int64 __fastcall InteractiveControlDevice::CreateDeadzone(InteractiveControlDevice *this)
{
  __int64 v1; // rsi
  int UserHandedness; // ebp
  unsigned int v4; // edi
  _DWORD *v5; // rax
  _DWORD *v6; // rbx
  __int64 v7; // rax
  int v8; // edx
  __int64 v9; // rax
  int v10; // edx
  __int64 i; // rsi
  __int64 v12; // rcx

  v1 = *((_QWORD *)this + 30);
  UserHandedness = GetUserHandedness();
  if ( !v1 )
    return (unsigned int)-1073741811;
  if ( !*((_DWORD *)InteractiveControlManager::Instance() + 67) )
    return 0;
  v5 = (_DWORD *)Win32AllocPool(24LL, 1819440195LL);
  v6 = v5;
  if ( !v5 )
    return (unsigned int)-1073741670;
  *v5 = 2;
  v5[4] = 1;
  if ( (UserHandedness & 0xFFFFFFFD) != 0 )
  {
    v7 = Win32AllocPool(24LL, 1819440195LL);
    *((_QWORD *)v6 + 1) = v7;
    if ( v7 )
    {
      **((_DWORD **)v6 + 1) = *((_DWORD *)InteractiveControlManager::Instance() + 69);
      *(_DWORD *)(*((_QWORD *)v6 + 1) + 4LL) = *((_DWORD *)InteractiveControlManager::Instance() + 71);
      *(_DWORD *)(*((_QWORD *)v6 + 1) + 16LL) = 1;
      *(_QWORD *)(*((_QWORD *)v6 + 1) + 8LL) = Win32AllocPool(
                                                 8LL * *(unsigned int *)(*((_QWORD *)v6 + 1) + 16LL),
                                                 1819440195LL);
      if ( *(_QWORD *)(*((_QWORD *)v6 + 1) + 8LL) )
      {
        v8 = *((_DWORD *)InteractiveControlManager::Instance() + 77);
        **(_DWORD **)(*((_QWORD *)v6 + 1) + 8LL) = 0;
        *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v6 + 1) + 8LL) + 4LL) = v8 * v8;
        *((_DWORD *)this + 82) = 1;
LABEL_15:
        v4 = RIMCreatePointerDeviceDeadzone(v1 + 64, v6, (char *)this + 336);
        goto LABEL_16;
      }
    }
  }
  else
  {
    v9 = Win32AllocPool(24LL, 1819440195LL);
    *((_QWORD *)v6 + 1) = v9;
    if ( v9 )
    {
      **((_DWORD **)v6 + 1) = *((_DWORD *)InteractiveControlManager::Instance() + 73);
      *(_DWORD *)(*((_QWORD *)v6 + 1) + 4LL) = *((_DWORD *)InteractiveControlManager::Instance() + 75);
      *(_DWORD *)(*((_QWORD *)v6 + 1) + 16LL) = 1;
      *(_QWORD *)(*((_QWORD *)v6 + 1) + 8LL) = Win32AllocPool(
                                                 8LL * *(unsigned int *)(*((_QWORD *)v6 + 1) + 16LL),
                                                 1819440195LL);
      if ( *(_QWORD *)(*((_QWORD *)v6 + 1) + 8LL) )
      {
        v10 = *((_DWORD *)InteractiveControlManager::Instance() + 77);
        **(_DWORD **)(*((_QWORD *)v6 + 1) + 8LL) = 0;
        *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v6 + 1) + 8LL) + 4LL) = v10 * v10;
        *((_DWORD *)this + 82) = 2;
        goto LABEL_15;
      }
    }
  }
  v4 = -1073741670;
LABEL_16:
  if ( *((_QWORD *)v6 + 1) )
  {
    for ( i = 0LL; (unsigned int)i < v6[4]; i = (unsigned int)(i + 1) )
    {
      v12 = *(_QWORD *)(*((_QWORD *)v6 + 1) + 24 * i + 8);
      if ( v12 )
      {
        Win32FreePool(v12);
        *(_QWORD *)(*((_QWORD *)v6 + 1) + 24 * i + 8) = 0LL;
      }
    }
    Win32FreePool(*((_QWORD *)v6 + 1));
    *((_QWORD *)v6 + 1) = 0LL;
  }
  Win32FreePool(v6);
  return v4;
}
