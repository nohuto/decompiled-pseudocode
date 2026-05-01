/*
 * XREFs of _lambda_4dbb30731e1cb4b517ffd4972428404c_::operator() @ 0x18006A540
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_e97912004d4e96f3bec37740b2aa1798___::Run @ 0x18006E890 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_e97912004d4e96f3bec37740b2aa1798___--Run.c)
 * Callees:
 *     ?IImmersiveApplication_GetNormalDisplayNameWithTitle@@YAJPEAUIImmersiveApplication@@PEAPEAG@Z @ 0x1801C97D8 (-IImmersiveApplication_GetNormalDisplayNameWithTitle@@YAJPEAUIImmersiveApplication@@PEAPEAG@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall lambda_4dbb30731e1cb4b517ffd4972428404c_::operator()(struct IImmersiveApplication **a1)
{
  char v2; // bl
  __int64 v3; // rcx
  __int64 v4; // rcx
  LPVOID pv[3]; // [rsp+28h] [rbp-18h] BYREF
  __int64 v6; // [rsp+50h] [rbp+10h] BYREF
  __int64 v7; // [rsp+58h] [rbp+18h] BYREF

  v6 = 0LL;
  if ( (*(int (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)*a1 + 16) + 144LL))(*((_QWORD *)*a1 + 16), &v6) >= 0 )
  {
    pv[0] = 0LL;
    pv[1] = (LPVOID)-1LL;
    pv[2] = (LPVOID)-1LL;
    if ( (int)IImmersiveApplication_GetNormalDisplayNameWithTitle(a1[1], (unsigned __int16 **)pv) >= 0 )
      (*(void (__fastcall **)(__int64, LPVOID))(*(_QWORD *)v6 + 24LL))(v6, pv[0]);
    v7 = 0LL;
    if ( (**(int (__fastcall ***)(struct IImmersiveApplication *, GUID *, __int64 *))a1[1])(
           a1[1],
           &GUID_c9301630_27da_428e_a432_0a5e49c0ffee,
           &v7) >= 0 )
    {
      AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
      v2 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 216LL))(v7);
      ReleaseSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
      (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v6 + 88LL))(v6, 128LL, v2 != 0 ? 0x80 : 0);
    }
    v3 = v7;
    if ( v7 )
    {
      v7 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
    }
    if ( pv[0] )
      CoTaskMemFree(pv[0]);
  }
  v4 = v6;
  if ( v6 )
  {
    v6 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
}
