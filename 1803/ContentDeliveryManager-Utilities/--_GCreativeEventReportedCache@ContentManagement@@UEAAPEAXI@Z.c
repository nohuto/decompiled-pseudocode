/*
 * XREFs of ??_GCreativeEventReportedCache@ContentManagement@@UEAAPEAXI@Z @ 0x18003B730
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWnfNameResolver@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180016CE0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWnfNameResolver.c)
 *     _guard_dispatch_icall_nop @ 0x1800C1AD0 (_guard_dispatch_icall_nop.c)
 */

ContentManagement::CreativeEventReportedCache *__fastcall ContentManagement::CreativeEventReportedCache::`scalar deleting destructor'(
        ContentManagement::CreativeEventReportedCache *this,
        char a2)
{
  void *v4; // rcx
  void *v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx

  v4 = (void *)*((_QWORD *)this + 12);
  if ( v4 )
  {
    CoTaskMemFree(v4);
    *((_QWORD *)this + 12) = 0LL;
  }
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  v5 = (void *)*((_QWORD *)this + 9);
  if ( v5 )
  {
    CoTaskMemFree(v5);
    *((_QWORD *)this + 9) = 0LL;
  }
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  v6 = *((_QWORD *)this + 8);
  if ( v6 < 0 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IWnfNameResolver>::Release((volatile signed __int32 *)(2 * v6));
  v7 = *((_QWORD *)this + 4);
  if ( v7 )
  {
    *((_QWORD *)this + 4) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
