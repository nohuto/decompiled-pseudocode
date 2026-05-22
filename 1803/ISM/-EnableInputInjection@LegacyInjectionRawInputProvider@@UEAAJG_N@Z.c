/*
 * XREFs of ?EnableInputInjection@LegacyInjectionRawInputProvider@@UEAAJG_N@Z @ 0x18006B750
 * Callers:
 *     <none>
 * Callees:
 *     ?FindRemoteProxy@LegacyInjectionRawInputProvider@@AEAAJXZ @ 0x18006BDD0 (-FindRemoteProxy@LegacyInjectionRawInputProvider@@AEAAJXZ.c)
 *     memset_0 @ 0x1800E1A3C (memset_0.c)
 *     ??2@YAPEAX_K@Z @ 0x1800E20D0 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall LegacyInjectionRawInputProvider::EnableInputInjection(
        LegacyInjectionRawInputProvider *this,
        char a2,
        char a3)
{
  int RemoteProxy; // ebx
  _DWORD *v5; // rbx
  __int64 v6; // rcx
  HANDLE v7; // rax
  void *v8; // rsi

  RemoteProxy = 0;
  if ( (a2 & 1) != 0 )
  {
    return (unsigned int)-2147467263;
  }
  else if ( (a2 & 4) != 0 )
  {
    if ( a3 )
    {
      *((_BYTE *)this + 88) = 1;
      if ( *((_QWORD *)this + 12) )
        goto LABEL_9;
      v5 = operator new(0x3D8uLL);
      memset_0(v5, 0, 0x3D8uLL);
      v5[2] = 984;
      v6 = *((_QWORD *)this + 5);
      *((_QWORD *)this + 12) = v5;
      **((_DWORD **)this + 12) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 32LL))(v6);
      *(_DWORD *)(*((_QWORD *)this + 12) + 4LL) = 128;
      RemoteProxy = (*(__int64 (__fastcall **)(_QWORD, _QWORD, char *))(**((_QWORD **)this + 5) + 40LL))(
                      *((_QWORD *)this + 5),
                      *((_QWORD *)this + 12),
                      (char *)this + 16);
      if ( RemoteProxy >= 0 )
      {
        if ( !*((_BYTE *)this + 72)
          || (RemoteProxy = LegacyInjectionRawInputProvider::FindRemoteProxy(this), RemoteProxy >= 0) )
        {
LABEL_9:
          ++*((_BYTE *)this + 104);
        }
      }
    }
    else if ( *((_BYTE *)this + 88) )
    {
      if ( *((_BYTE *)this + 104) == 1 )
        *((_BYTE *)this + 88) = 0;
      v7 = OpenEventW(2u, 0, L"Test_Keyboard_Disconnect_Sync_Event");
      v8 = v7;
      if ( v7 )
      {
        SetEvent(v7);
        CloseHandle(v8);
      }
      --*((_BYTE *)this + 104);
    }
    else
    {
      return (unsigned int)-2147418113;
    }
  }
  return (unsigned int)RemoteProxy;
}
