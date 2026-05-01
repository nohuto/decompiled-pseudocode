/*
 * XREFs of ?get_Window@CImmersiveApp@@UEAAJPEAI@Z @ 0x180132580
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CImmersiveApp::get_Window(CImmersiveApp *this, unsigned int *a2)
{
  int v4; // ebx
  __int64 v6; // [rsp+40h] [rbp+8h] BYREF
  __int64 v7; // [rsp+48h] [rbp+10h] BYREF

  v7 = 0LL;
  v6 = 0LL;
  AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v6);
  v4 = (*(__int64 (__fastcall **)(char *, __int64 *))(*((_QWORD *)this - 1) + 496LL))((char *)this - 8, &v6);
  if ( v4 >= 0 )
    v4 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v6 + 24LL))(v6, &v7);
  ReleaseSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  *a2 = v7;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v6);
  return (unsigned int)v4;
}
