/*
 * XREFs of ?RequestCloseAsync@CImmersiveApp@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180130140
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CImmersiveApp::RequestCloseAsync(CImmersiveApp *this, const struct _GUID *a2, void **a3)
{
  int v6; // ebx
  __int64 (__fastcall ***v8)(_QWORD, const struct _GUID *, void **); // [rsp+40h] [rbp+8h] BYREF

  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v8 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v8);
  v8 = 0LL;
  if ( *((_QWORD *)this + 42) )
    v6 = (*(__int64 (__fastcall **)(_QWORD, __int64 (__fastcall ****)(_QWORD, const struct _GUID *, void **)))(***((_QWORD ***)this + 41) + 88LL))(
           **((_QWORD **)this + 41),
           &v8);
  else
    v6 = -2147023728;
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  if ( v6 >= 0 )
    v6 = (**v8)(v8, a2, a3);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v8);
  return (unsigned int)v6;
}
