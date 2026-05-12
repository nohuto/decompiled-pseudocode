/*
 * XREFs of DeviceIdShimHookDeviceControl @ 0x1C0046650
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001ED80 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_ @ 0x1C0030340 (WPP_SF_.c)
 */

__int64 __fastcall DeviceIdShimHookDeviceControl(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned __int8 *v5; // r8
  _BYTE *v6; // rdx
  unsigned __int8 v7; // bp
  _DWORD *v8; // rax
  __int64 v9; // rdi
  __int64 v10; // rax

  v2 = *(_QWORD *)(a1 + 64);
  v5 = *(unsigned __int8 **)(a2 + 184);
  v6 = *(_BYTE **)(v2 + 96);
  v7 = *v5;
  if ( *(_DWORD *)v2 == 1 )
  {
    if ( v6 )
    {
      if ( (*v6 & 0x1F) == 0xD && *((_DWORD *)v5 + 6) == 2954240 )
      {
        v8 = *(_DWORD **)(a2 + 24);
        v9 = *((unsigned int *)v5 + 2);
        if ( v8 )
        {
          if ( !v8[1] && *v8 == 2 && (unsigned int)v9 >= 8 )
          {
            if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
            {
              WPP_SF_(
                (__int64)WPP_GLOBAL_Control->AttachedDevice,
                0x10u,
                (__int64)&WPP_b8aa5dc78a713cf38c391f4110a2b647_Traceguids);
            }
            (*(void (__fastcall **)(__int64, __int64, void *, __int64))(qword_1C00550B0 + 8))(
              a1,
              a2,
              &DeviceIdShimStorageDeviceIdCompletionHook,
              v9);
          }
        }
      }
    }
  }
  v10 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))qword_1C00550B0)(*(_QWORD *)(a1 + 8), v6);
  return (*(__int64 (__fastcall **)(__int64, __int64))(v10 + 8LL * v7 + 32))(a1, a2);
}
