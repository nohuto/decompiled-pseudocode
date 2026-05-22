/*
 * XREFs of ?OnUserProfileChanged@WGIRawInputProvider@@AEAAJPEAUIInspectable@@PEAUIUserProfileEventArgs@Internal@System@Windows@@@Z @ 0x180077210
 * Callers:
 *     <none>
 * Callees:
 *     ?OnUserProfileChanged_impl@WGIRawInputProvider@@AEAAJPEAUIUserProfile@Internal@System@Windows@@@Z @ 0x180077174 (-OnUserProfileChanged_impl@WGIRawInputProvider@@AEAAJPEAUIUserProfile@Internal@System@Windows@@@.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall WGIRawInputProvider::OnUserProfileChanged(
        WGIRawInputProvider *this,
        struct IInspectable *a2,
        struct Windows::System::Internal::IUserProfileEventArgs *a3)
{
  int v4; // ebx
  struct Windows::System::Internal::IUserProfile *v5; // rcx
  struct Windows::System::Internal::IUserProfile *v7; // [rsp+50h] [rbp+18h] BYREF

  v7 = 0LL;
  v4 = (*(__int64 (__fastcall **)(struct Windows::System::Internal::IUserProfileEventArgs *, struct Windows::System::Internal::IUserProfile **))(*(_QWORD *)a3 + 48LL))(
         a3,
         &v7);
  if ( v4 >= 0 )
    v4 = WGIRawInputProvider::OnUserProfileChanged_impl(this, v7);
  v5 = v7;
  if ( v7 )
  {
    v7 = 0LL;
    (*(void (__fastcall **)(struct Windows::System::Internal::IUserProfile *))(*(_QWORD *)v5 + 16LL))(v5);
  }
  return (unsigned int)v4;
}
