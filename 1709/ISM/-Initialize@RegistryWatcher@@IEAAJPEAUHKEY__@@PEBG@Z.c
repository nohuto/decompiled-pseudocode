/*
 * XREFs of ?Initialize@RegistryWatcher@@IEAAJPEAUHKEY__@@PEBG@Z @ 0x180009588
 * Callers:
 *     ?Create@RegistryWatcher@@SAJPEAUHKEY__@@PEBGPEAXP6AX20@ZPEAPEAV1@@Z @ 0x180009738 (-Create@RegistryWatcher@@SAJPEAUHKEY__@@PEBGPEAXP6AX20@ZPEAPEAV1@@Z.c)
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     ?OnKeyChange@RegistryWatcher@@AEAAJXZ @ 0x18000995C (-OnKeyChange@RegistryWatcher@@AEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RegistryWatcher::Initialize(RegistryWatcher *this, HKEY a2, const unsigned __int16 *a3)
{
  _QWORD *v3; // rsi
  __int64 v5; // rcx
  int v7; // eax
  __int64 v8; // rcx
  signed int v9; // ebx
  int v10; // r9d
  LSTATUS v11; // eax
  __int64 v12; // rcx
  HANDLE EventA; // rax
  __int64 v14; // rcx
  HKEY v15; // rcx
  void *v16; // rcx

  v3 = (_QWORD *)((char *)this + 16);
  v5 = *((_QWORD *)this + 2);
  if ( v5 )
  {
    *v3 = 0LL;
    (*(void (__fastcall **)(__int64, HKEY))(*(_QWORD *)v5 + 16LL))(v5, a2);
  }
  v7 = CoreUICreate(v3);
  v9 = v7;
  if ( v7 >= 0 )
  {
    v11 = RegOpenKeyExW(HKEY_LOCAL_MACHINE, a3, 0, 0x20019u, (PHKEY)this + 3);
    v9 = (unsigned __int16)v11 | 0x80070000;
    if ( v11 <= 0 )
      v9 = v11;
    if ( v9 < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
        McTemplateU0qqq(v12, &MinInput_Warning_CheckResult, 0, 61, v9);
      goto LABEL_25;
    }
    EventA = CreateEventA(0LL, 0, 0, 0LL);
    *((_QWORD *)this + 4) = EventA;
    if ( !EventA )
    {
      v9 = (int)GetLastError() > 0 ? (unsigned __int16)GetLastError() | 0x80070000 : GetLastError();
      if ( v9 < 0 )
      {
        if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
          McTemplateU0qqq(v14, &MinInput_Warning_CheckResult, 0, 66, v9);
        goto LABEL_25;
      }
    }
    v7 = RegistryWatcher::OnKeyChange(this);
    v9 = v7;
    if ( v7 >= 0 )
    {
      v7 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, __int64 (__fastcall *)(void *, unsigned int, void *), RegistryWatcher *))(*(_QWORD *)*v3 + 272LL))(
             *v3,
             1LL,
             *((_QWORD *)this + 4),
             RegistryWatcher::OnChangeCallbackStatic,
             this);
      v9 = v7;
      if ( v7 >= 0 )
        return (unsigned int)v9;
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      {
        v10 = 74;
        goto LABEL_24;
      }
    }
    else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v10 = 68;
      goto LABEL_24;
    }
  }
  else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
  {
    v10 = 53;
LABEL_24:
    McTemplateU0qqq(v8, &MinInput_Warning_CheckResult, 0, v10, v7);
  }
LABEL_25:
  v15 = (HKEY)*((_QWORD *)this + 3);
  if ( v15 )
  {
    RegCloseKey(v15);
    *((_QWORD *)this + 3) = 0LL;
  }
  v16 = (void *)*((_QWORD *)this + 4);
  if ( v16 )
  {
    CloseHandle(v16);
    *((_QWORD *)this + 4) = 0LL;
  }
  return (unsigned int)v9;
}
