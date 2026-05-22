/*
 * XREFs of ?Create@GestureTargetingComponent@@SAJPEAPEAV1@@Z @ 0x18001316C
 * Callers:
 *     ?Initialize@DWMInputRouter@@IEAAJXZ @ 0x18001789C (-Initialize@DWMInputRouter@@IEAAJXZ.c)
 *     ?EnsureInputTargeting@CShellEdgyImpl@@QEAAJPEAW4InputBufferingDecision@@@Z @ 0x18002C0E0 (-EnsureInputTargeting@CShellEdgyImpl@@QEAAJPEAW4InputBufferingDecision@@@Z.c)
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     ?Create@RegistryWatcher@@SAJPEAUHKEY__@@PEBGPEAXP6AX20@ZPEAPEAV1@@Z @ 0x180009738 (-Create@RegistryWatcher@@SAJPEAUHKEY__@@PEBGPEAXP6AX20@ZPEAPEAV1@@Z.c)
 *     ??0GestureTargetingComponent@@IEAA@XZ @ 0x180012FBC (--0GestureTargetingComponent@@IEAA@XZ.c)
 *     ??0PointerInfoAdapter@@QEAA@PEAUIPointerInfoAdapterClient@@_N@Z @ 0x18006F61C (--0PointerInfoAdapter@@QEAA@PEAUIPointerInfoAdapterClient@@_N@Z.c)
 *     memset @ 0x1800CAA5E (memset.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall GestureTargetingComponent::Create(struct GestureTargetingComponent **a1)
{
  int v2; // ebx
  GestureTargetingComponent *v3; // rdi
  int v4; // r9d
  struct GestureTargetingComponent *v5; // rax
  int v6; // eax
  __int64 v7; // rcx
  GestureTargetingComponent *v8; // rax
  __int64 v9; // rcx
  GestureTargetingComponent *v10; // rbx
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // rcx
  PointerInfoAdapter *v14; // rax
  bool v15; // r8
  PointerInfoAdapter *v16; // rsi
  GestureTargetingComponent *v17; // rcx

  v2 = 0;
  v3 = 0LL;
  if ( a1 )
  {
    v5 = GestureTargetingComponent::s_pTargetingComponent;
    if ( GestureTargetingComponent::s_pTargetingComponent )
      goto LABEL_45;
    if ( GestureTargetingComponent::s_pMessageSession )
    {
      v2 = -2147418113;
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
        return (unsigned int)v2;
      v4 = (_DWORD)GestureTargetingComponent::s_pTargetingComponent + 88;
      goto LABEL_4;
    }
    v6 = CoreUICreate(&GestureTargetingComponent::s_pMessageSession);
    v2 = v6;
    if ( v6 < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
        McTemplateU0qqq(v7, &MinInput_Warning_CheckResult, 4, 91, v6);
      goto LABEL_47;
    }
    v8 = (GestureTargetingComponent *)malloc(0x68uLL);
    v10 = v8;
    if ( v8 )
      memset(v8, 0, 0x68uLL);
    if ( v10 )
      v3 = GestureTargetingComponent::GestureTargetingComponent(v10);
    else
      v3 = 0LL;
    if ( !v3 )
    {
      v2 = -2147024882;
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
        McTemplateU0qqq(v9, &MinInput_Warning_CheckResult, 4, 97, 14);
LABEL_48:
      if ( v3 )
        (*(void (__fastcall **)(__int64, __int64))(*((_QWORD *)v3 + 2) + 24LL))((__int64)v3 + 16, 1LL);
      return (unsigned int)v2;
    }
    v11 = *((_QWORD *)v3 + 4);
    if ( v11 )
    {
      *((_QWORD *)v3 + 4) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    }
    v12 = RegistryWatcher::Create(
            v11,
            L"System\\Input",
            v3,
            GestureTargetingComponent::OnGestureTargetingRegistryKeyChangeStatic,
            (struct RegistryWatcher **)v3 + 4);
    v2 = v12;
    if ( v12 >= 0 )
    {
      v14 = (PointerInfoAdapter *)malloc(0x60uLL);
      v16 = v14;
      if ( v14 )
        memset(v14, 0, 0x60uLL);
      if ( v16 )
        v16 = PointerInfoAdapter::PointerInfoAdapter(v16, (GestureTargetingComponent *)((char *)v3 + 8), v15);
      if ( *((PointerInfoAdapter **)v3 + 6) != v16 )
      {
        if ( v16 )
          (*(void (__fastcall **)(PointerInfoAdapter *))(*(_QWORD *)v16 + 8LL))(v16);
        v13 = *((_QWORD *)v3 + 6);
        *((_QWORD *)v3 + 6) = v16;
        if ( v13 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
      }
      if ( !*((_QWORD *)v3 + 6) )
      {
        v2 = -2147024882;
        if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
          goto LABEL_47;
        McTemplateU0qqq(v13, &MinInput_Warning_CheckResult, 4, 65, 14);
        goto LABEL_39;
      }
    }
    else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      McTemplateU0qqq(v13, &MinInput_Warning_CheckResult, 4, 54, v12);
    }
    if ( v2 < 0 )
    {
LABEL_39:
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
        McTemplateU0qqq(v13, &MinInput_Warning_CheckResult, 4, 100, v2);
LABEL_47:
      if ( v2 >= 0 )
        return (unsigned int)v2;
      goto LABEL_48;
    }
    v5 = GestureTargetingComponent::s_pTargetingComponent;
    if ( GestureTargetingComponent::s_pTargetingComponent != v3 )
    {
      (*(void (__fastcall **)(GestureTargetingComponent *))(*(_QWORD *)v3 + 8LL))(v3);
      v17 = GestureTargetingComponent::s_pTargetingComponent;
      v5 = v3;
      GestureTargetingComponent::s_pTargetingComponent = v3;
      if ( v17 )
      {
        (*(void (__fastcall **)(GestureTargetingComponent *))(*(_QWORD *)v17 + 16LL))(v17);
        v5 = GestureTargetingComponent::s_pTargetingComponent;
      }
    }
    if ( v5 )
    {
LABEL_45:
      (*(void (__fastcall **)(struct GestureTargetingComponent *))(*(_QWORD *)v5 + 8LL))(v5);
      v5 = GestureTargetingComponent::s_pTargetingComponent;
    }
    *a1 = v5;
    goto LABEL_47;
  }
  v2 = -2147024809;
  if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
  {
    v4 = 81;
LABEL_4:
    McTemplateU0qqq((__int64)a1, &MinInput_Warning_CheckResult, 4, v4, v2);
  }
  return (unsigned int)v2;
}
