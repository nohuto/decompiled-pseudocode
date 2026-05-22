/*
 * XREFs of ?OnUserProfileChanged@WGIRawInputProvider@@AEAAJPEAUIInspectable@@PEAUIUserProfileEventArgs@Internal@System@Windows@@@Z @ 0x18009DE40
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     ?OnUserProfileChanged_impl@WGIRawInputProvider@@AEAAJPEAUIUserProfile@Internal@System@Windows@@@Z @ 0x18009DD64 (-OnUserProfileChanged_impl@WGIRawInputProvider@@AEAAJPEAUIUserProfile@Internal@System@Windows@@@.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall WGIRawInputProvider::OnUserProfileChanged(
        WGIRawInputProvider *this,
        struct IInspectable *a2,
        struct Windows::System::Internal::IUserProfileEventArgs *a3)
{
  int v4; // eax
  __int64 v5; // rcx
  unsigned int v6; // ebx
  int v7; // r9d
  struct Windows::System::Internal::IUserProfile *v8; // rcx
  struct Windows::System::Internal::IUserProfile *v10; // [rsp+60h] [rbp+18h] BYREF

  v10 = 0LL;
  v4 = (*(__int64 (__fastcall **)(struct Windows::System::Internal::IUserProfileEventArgs *, struct Windows::System::Internal::IUserProfile **))(*(_QWORD *)a3 + 48LL))(
         a3,
         &v10);
  v6 = v4;
  if ( v4 < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      goto LABEL_8;
    v7 = 293;
    goto LABEL_7;
  }
  v4 = WGIRawInputProvider::OnUserProfileChanged_impl(this, v10);
  v6 = v4;
  if ( v4 < 0 && (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
  {
    v7 = 294;
LABEL_7:
    McTemplateU0qqq(v5, &MinInput_Warning_CheckResult, 0, v7, v4);
  }
LABEL_8:
  v8 = v10;
  if ( v10 )
  {
    v10 = 0LL;
    (*(void (__fastcall **)(struct Windows::System::Internal::IUserProfile *))(*(_QWORD *)v8 + 16LL))(v8);
  }
  return v6;
}
