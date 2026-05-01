/*
 * XREFs of ??_GVirtualDesktop@@UEAAPEAXI@Z @ 0x1801B9680
 * Callers:
 *     <none>
 * Callees:
 *     ??1SmartCookie@@QEAA@XZ @ 0x18007B2F8 (--1SmartCookie@@QEAA@XZ.c)
 *     ??1?$RuntimeClassImpl@U?$RuntimeClassFlags@$0BD@@WRL@Microsoft@@$00$00$0A@UIBuffer@Streams@Storage@Windows@@U?$CloakedIid@UIBufferByteAccess@Streams@Storage@Windows@@@23@U?$CloakedIid@UIMarshal@@@23@VFtmBase@23@@Details@WRL@Microsoft@@UEAA@XZ @ 0x1801396E8 (--1-$RuntimeClassImpl@U-$RuntimeClassFlags@$0BD@@WRL@Microsoft@@$00$00$0A@UIBuffer@Streams@Stora.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1801E3060 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
SmartCookie **__fastcall VirtualDesktop::`scalar deleting destructor'(SmartCookie **this, char a2)
{
  SmartCookie *v4; // rcx
  SmartCookie *v5; // rcx
  SmartCookie *v6; // rcx
  volatile signed __int32 *v7; // rcx

  SmartCookie::~SmartCookie(this + 18);
  v4 = this[16];
  if ( v4 )
  {
    this[16] = 0LL;
    (*(void (__fastcall **)(SmartCookie *))(*(_QWORD *)v4 + 16LL))(v4);
  }
  v5 = this[15];
  if ( v5 )
  {
    this[15] = 0LL;
    (*(void (__fastcall **)(SmartCookie *))(*(_QWORD *)v5 + 16LL))(v5);
  }
  v6 = this[14];
  if ( v6 )
  {
    this[14] = 0LL;
    (*(void (__fastcall **)(SmartCookie *))(*(_QWORD *)v6 + 16LL))(v6);
  }
  v7 = (volatile signed __int32 *)this[11];
  if ( v7 )
  {
    this[11] = 0LL;
    if ( _InterlockedExchangeAdd(v7 + 3, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v7 + 24LL))(v7, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
  }
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<19>,1,1,0,Windows::Storage::Streams::IBuffer,Microsoft::WRL::CloakedIid<Windows::Storage::Streams::IBufferByteAccess>,Microsoft::WRL::CloakedIid<IMarshal>,Microsoft::WRL::FtmBase>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<19>,1,1,0,Windows::Storage::Streams::IBuffer,Microsoft::WRL::CloakedIid<Windows::Storage::Streams::IBufferByteAccess>,Microsoft::WRL::CloakedIid<IMarshal>,Microsoft::WRL::FtmBase>((__int64)this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
