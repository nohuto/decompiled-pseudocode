/*
 * XREFs of ?_GetSelectedItem@CWRLExecuteCommandBase@@IEAAJKAEBU_GUID@@PEAPEAX@Z @ 0x180224E38
 * Callers:
 *     ?Execute@VirtualTouchpadUriHandler@@UEAAJXZ @ 0x180224640 (-Execute@VirtualTouchpadUriHandler@@UEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWRLExecuteCommandBase::_GetSelectedItem(
        CWRLExecuteCommandBase *this,
        __int64 a2,
        const struct _GUID *a3,
        void **a4)
{
  int v6; // ebx
  const struct _GUID *v8; // [rsp+40h] [rbp+18h] BYREF

  v8 = a3;
  *a4 = 0LL;
  v6 = -2147024809;
  if ( *((_QWORD *)this + 15) )
  {
    v8 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v8);
    v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, const struct _GUID **))(**((_QWORD **)this + 15) + 64LL))(
           *((_QWORD *)this + 15),
           0LL,
           &v8);
    if ( v6 >= 0 )
      v6 = (**(__int64 (__fastcall ***)(const struct _GUID *, GUID *, void **))&v8->Data1)(
             v8,
             &GUID_7e9fb0d3_919f_4307_ab2e_9b1860310c93,
             a4);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v8);
  }
  return (unsigned int)v6;
}
