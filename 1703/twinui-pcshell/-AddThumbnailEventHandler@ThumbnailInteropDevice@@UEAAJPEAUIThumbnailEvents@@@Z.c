/*
 * XREFs of ?AddThumbnailEventHandler@ThumbnailInteropDevice@@UEAAJPEAUIThumbnailEvents@@@Z @ 0x180166B50
 * Callers:
 *     <none>
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004108 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$verify_hresult@J@wil@@YAJJ@Z @ 0x180005F38 (--$verify_hresult@J@wil@@YAJJ@Z.c)
 *     ??$emplace_back@AEAPEAUIThumbnailEvents@@@?$vector@V?$com_ptr_t@UIThumbnailEvents@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIThumbnailEvents@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAAXAEAPEAUIThumbnailEvents@@@Z @ 0x180167334 (--$emplace_back@AEAPEAUIThumbnailEvents@@@-$vector@V-$com_ptr_t@UIThumbnailEvents@@Uerr_exceptio.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1 #try_helpers=1
__int64 __fastcall ThumbnailInteropDevice::AddThumbnailEventHandler(
        ThumbnailInteropDevice *this,
        struct IThumbnailEvents *a2)
{
  struct IThumbnailEvents **i; // rax
  unsigned int v6; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct IThumbnailEvents *v8; // [rsp+48h] [rbp+10h] BYREF

  v8 = a2;
  if ( a2 )
    (*(void (__fastcall **)(struct IThumbnailEvents *))(*(_QWORD *)a2 + 8LL))(a2);
  for ( i = (struct IThumbnailEvents **)*((_QWORD *)this + 3);
        i != *((struct IThumbnailEvents ***)this + 4) && *i != a2;
        ++i )
  {
    ;
  }
  if ( i == *((struct IThumbnailEvents ***)this + 4) )
  {
    std::vector<wil::com_ptr_t<IThumbnailEvents,wil::err_exception_policy>>::emplace_back<IThumbnailEvents * &>(
      (char *)this + 24,
      &v8);
    if ( a2 )
      (*(void (__fastcall **)(struct IThumbnailEvents *))(*(_QWORD *)a2 + 16LL))(a2);
    return 0LL;
  }
  else
  {
    v6 = wil::verify_hresult<long>(0x80070057);
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x64,
      (__int64)"pcshell\\twinui\\thumbnailinterop\\lib\\device.cpp",
      (const char *)v6);
    return (unsigned int)v8;
  }
}
