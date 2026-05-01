/*
 * XREFs of ?get_UniqueId@ApplicationViewBackedViewHostItem@@UEAAJPEAI@Z @ 0x1801BE2F0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ApplicationViewBackedViewHostItem::get_UniqueId(
        ApplicationViewBackedViewHostItem *this,
        unsigned int *a2)
{
  unsigned int v4; // eax
  __int64 v5; // rbx
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v11; // [rsp+50h] [rbp+8h] BYREF
  __int64 v12; // [rsp+58h] [rbp+10h] BYREF

  *a2 = 0;
  v4 = *((_DWORD *)this + 36);
  if ( !v4 )
  {
    v11 = 0LL;
    v5 = *((_QWORD *)this + 14);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v11);
    v6 = (*(__int64 (__fastcall **)(__int64, __int64, GUID *, __int64 *))(*(_QWORD *)v5 + 24LL))(
           v5,
           5LL,
           &GUID_c6636ec2_eba1_4e6d_a995_8fa14b8b2891,
           &v11);
    v7 = v6;
    if ( v6 < 0 )
    {
      v8 = 95LL;
LABEL_6:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v8,
        (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\applicationviewbackedviewhostitem.cpp",
        (const char *)(unsigned int)v6);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v11);
      return v7;
    }
    v12 = 0LL;
    v6 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v11 + 32LL))(v11, &v12);
    v7 = v6;
    if ( v6 < 0 )
    {
      v8 = 97LL;
      goto LABEL_6;
    }
    *((_DWORD *)this + 36) = v12;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v11);
    v4 = *((_DWORD *)this + 36);
  }
  *a2 = v4;
  return 0LL;
}
