/*
 * XREFs of SrbShimHookDeviceControl @ 0x1C001E160
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001ED80 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_ @ 0x1C0030340 (WPP_SF_.c)
 */

__int64 __fastcall SrbShimHookDeviceControl(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int8 *v4; // r8
  unsigned __int8 v7; // si
  _DWORD *v8; // rax
  __int64 v9; // rax

  v4 = *(unsigned __int8 **)(a2 + 184);
  v7 = *v4;
  if ( *((_DWORD *)v4 + 6) == 2954240 )
  {
    v8 = *(_DWORD **)(a2 + 24);
    if ( v8 )
    {
      if ( !v8[1] && *v8 == 1 && *((_DWORD *)v4 + 2) >= 0x20u )
      {
        if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
          && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
        {
          WPP_SF_(WPP_GLOBAL_Control->AttachedDevice, 14LL, &WPP_b8aa5dc78a713cf38c391f4110a2b647_Traceguids, a4);
        }
        (*(void (__fastcall **)(__int64, __int64, __int64 (__fastcall *)(), _QWORD))(qword_1C00550E8 + 8))(
          a1,
          a2,
          SrbShimStorageAdapterPropertyCompletionHook,
          0LL);
      }
    }
  }
  v9 = (*(__int64 (__fastcall **)(_QWORD))qword_1C00550E8)(*(_QWORD *)(a1 + 8));
  return (*(__int64 (__fastcall **)(__int64, __int64))(v9 + 8LL * v7 + 32))(a1, a2);
}
