/*
 * XREFs of GlobalsUtility::CGlobals_ApplicationViewManagement::CGlobals_::Get__lambda_1b0c182535871ea6c5139e310f080a01___ @ 0x18008563C
 * Callers:
 *     ?RuntimeClassInitialize@CApplicationViewBase@@QEAAJXZ @ 0x18008492C (-RuntimeClassInitialize@CApplicationViewBase@@QEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Get@?$CGlobals@V0ApplicationViewManagement@@@GlobalsUtility@@SA?AV?$ComPtr@VCGlobals@ApplicationViewManagement@@@WRL@Microsoft@@XZ @ 0x18007888C (-Get@-$CGlobals@V0ApplicationViewManagement@@@GlobalsUtility@@SA-AV-$ComPtr@VCGlobals@Applicatio.c)
 *     ?_ReadPersistedData@CPersistence@ApplicationViewManagement@@AEAAJPEBG0PEAXK@Z @ 0x180084620 (-_ReadPersistedData@CPersistence@ApplicationViewManagement@@AEAAJPEBG0PEAXK@Z.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall GlobalsUtility::CGlobals_ApplicationViewManagement::CGlobals_::Get__lambda_1b0c182535871ea6c5139e310f080a01___(
        __int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rbx
  int PersistedData; // eax
  __int128 v5; // xmm0
  __int64 v6; // rdx
  __int128 v7; // [rsp+38h] [rbp-40h] BYREF
  _DWORD v8[2]; // [rsp+48h] [rbp-30h] BYREF
  __int128 v9; // [rsp+50h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  result = (__int64)GlobalsUtility::CGlobals<ApplicationViewManagement::CGlobals>::Get((__int64 *)&v7);
  v3 = v7;
  if ( !(_QWORD)v7 )
    return result;
  PersistedData = ApplicationViewManagement::CPersistence::_ReadPersistedData(
                    (HKEY *)(v7 + 48),
                    **(const unsigned __int16 ***)a1,
                    L"VirtualDesktop",
                    v8,
                    0x18u);
  if ( PersistedData < 0 )
  {
    v5 = v7;
    goto LABEL_10;
  }
  if ( v8[0] == 16 )
  {
    if ( v8[1] == 1447309360 )
    {
      v5 = v9;
      PersistedData = 0;
LABEL_10:
      if ( PersistedData >= 0 )
        *(_OWORD *)(*(_QWORD *)(a1 + 8) + 104LL) = v5;
      goto LABEL_12;
    }
    v6 = 62LL;
  }
  else
  {
    v6 = 61LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v6,
    (__int64)"pcshell\\twinui\\appviewmanager\\lib\\Persistence.h",
    (const char *)0x8007000DLL);
LABEL_12:
  result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(v3 + 44), 0xFFFFFFFF);
  if ( (_DWORD)result == 1 )
  {
    result = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)v7 + 72LL))(v7, 1LL);
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      return (*(__int64 (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                                     + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
  }
  return result;
}
