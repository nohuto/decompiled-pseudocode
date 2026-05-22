/*
 * XREFs of ?Create@RegistryWatcher@@SAJPEAUHKEY__@@PEBGPEAXP6AX20@ZPEAPEAV1@@Z @ 0x180009460
 * Callers:
 *     ?Initialize@InputStateManager@@IEAAJXZ @ 0x1800063BC (-Initialize@InputStateManager@@IEAAJXZ.c)
 *     ?Initialize@ControllerProcessor@@IEAAJXZ @ 0x18003254C (-Initialize@ControllerProcessor@@IEAAJXZ.c)
 *     ?Initialize@MouseProcessor@@IEAAJXZ @ 0x18006A2DC (-Initialize@MouseProcessor@@IEAAJXZ.c)
 *     ?Create@ButtonProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x1800913C0 (-Create@ButtonProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z.c)
 * Callees:
 *     ?OnKeyChange@RegistryWatcher@@AEAAJXZ @ 0x1800096B0 (-OnKeyChange@RegistryWatcher@@AEAAJXZ.c)
 *     memset_0 @ 0x1800E1A3C (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RegistryWatcher::Create(
        HKEY a1,
        const unsigned __int16 *a2,
        void *a3,
        void (*a4)(void *, HKEY),
        struct RegistryWatcher **a5)
{
  signed int LastError; // edi
  char *v9; // rax
  char *v10; // rbx
  _QWORD *v11; // rsi
  __int64 v12; // rcx
  LSTATUS v13; // eax
  HANDLE EventW; // rax
  HKEY v15; // rcx
  void *v16; // rcx

  if ( a5 )
  {
    v9 = (char *)malloc(0x38uLL);
    v10 = v9;
    if ( v9 )
      memset_0(v9, 0, 0x38uLL);
    if ( v10 )
    {
      *(_QWORD *)v10 = &RefCountedObject::`vftable';
      *(_QWORD *)v10 = &RegistryWatcher::`vftable';
      *((_DWORD *)v10 + 2) = 1;
      *((_QWORD *)v10 + 2) = 0LL;
      *((_QWORD *)v10 + 5) = a3;
      *((_QWORD *)v10 + 6) = a4;
      v11 = v10 + 16;
      v12 = *((_QWORD *)v10 + 2);
      if ( v12 )
      {
        *v11 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
      }
      LastError = CoreUICreate(v10 + 16);
      if ( LastError < 0 )
        goto LABEL_21;
      v13 = RegOpenKeyExW(HKEY_LOCAL_MACHINE, a2, 0, 0x20019u, (PHKEY)v10 + 3);
      LastError = (unsigned __int16)v13 | 0x80070000;
      if ( v13 <= 0 )
        LastError = v13;
      if ( LastError < 0
        || (EventW = CreateEventW(0LL, 0, 0, 0LL), (*((_QWORD *)v10 + 4) = EventW) == 0LL)
        && ((int)GetLastError() > 0
          ? (LastError = (unsigned __int16)GetLastError() | 0x80070000)
          : (LastError = GetLastError()),
            LastError < 0)
        || (LastError = RegistryWatcher::OnKeyChange((RegistryWatcher *)v10), LastError < 0)
        || (LastError = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, __int64 (__fastcall *)(void *, unsigned int, void *), char *))(*(_QWORD *)*v11 + 272LL))(
                          *v11,
                          1LL,
                          *((_QWORD *)v10 + 4),
                          RegistryWatcher::OnChangeCallbackStatic,
                          v10),
            LastError < 0) )
      {
LABEL_21:
        v15 = (HKEY)*((_QWORD *)v10 + 3);
        if ( v15 )
        {
          RegCloseKey(v15);
          *((_QWORD *)v10 + 3) = 0LL;
        }
        v16 = (void *)*((_QWORD *)v10 + 4);
        if ( v16 )
        {
          CloseHandle(v16);
          *((_QWORD *)v10 + 4) = 0LL;
        }
      }
      if ( LastError < 0 )
        (*(void (__fastcall **)(char *, __int64))(*(_QWORD *)v10 + 24LL))(v10, 1LL);
      else
        *a5 = (struct RegistryWatcher *)v10;
    }
    else
    {
      return (unsigned int)-2147024882;
    }
  }
  else
  {
    return (unsigned int)-2147024809;
  }
  return (unsigned int)LastError;
}
