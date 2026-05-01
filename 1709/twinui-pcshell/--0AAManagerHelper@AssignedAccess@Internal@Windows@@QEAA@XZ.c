/*
 * XREFs of ??0AAManagerHelper@AssignedAccess@Internal@Windows@@QEAA@XZ @ 0x1801DED78
 * Callers:
 *     GetAssignedAccessTypeForUser @ 0x1801DE920 (GetAssignedAccessTypeForUser.c)
 * Callees:
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18002754C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

Windows::Internal::AssignedAccess::AAManagerHelper *__fastcall Windows::Internal::AssignedAccess::AAManagerHelper::AAManagerHelper(
        Windows::Internal::AssignedAccess::AAManagerHelper *this)
{
  HRESULT v2; // eax
  HSTRING v3; // rcx
  int v4; // edi
  __int64 v6; // [rsp+20h] [rbp-38h] BYREF
  HSTRING_HEADER v7; // [rsp+28h] [rbp-30h] BYREF
  HSTRING v8; // [rsp+40h] [rbp-18h] BYREF

  *(_QWORD *)this = 0LL;
  v8 = 0LL;
  v2 = WindowsCreateStringReference(L"Windows.Internal.AssignedAccess.AssignedAccessManager", 0x35u, &v7, &v8);
  if ( v2 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v2);
    JUMPOUT(0x1801DEE59LL);
  }
  v3 = v8;
  *(_QWORD *)this = 0LL;
  v4 = RoActivateInstance(v3, &v6);
  if ( v4 >= 0 )
  {
    if ( *(_QWORD *)&GUID_3ea0718b_7dc4_4cb2_83fa_9f86d639fc6a.Data1 == *(_QWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data1
      && *(_QWORD *)GUID_3ea0718b_7dc4_4cb2_83fa_9f86d639fc6a.Data4 == *(_QWORD *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4 )
    {
      *(_QWORD *)this = v6;
    }
    else
    {
      v4 = (**(__int64 (__fastcall ***)(__int64, GUID *, Windows::Internal::AssignedAccess::AAManagerHelper *))v6)(
             v6,
             &GUID_3ea0718b_7dc4_4cb2_83fa_9f86d639fc6a,
             this);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    }
  }
  *((_DWORD *)this + 2) = v4;
  return this;
}
