/*
 * XREFs of ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1400373F0
 * Callers:
 *     <none>
 * Callees:
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x14001510C (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     _guard_dispatch_icall_nop @ 0x14001E540 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::QueryInterface(
        __int64 a1,
        const struct _GUID *a2,
        _QWORD *a3)
{
  const struct _GUID *v3; // rdx
  const struct _GUID *v4; // rcx
  _QWORD *v5; // r8
  __int64 v6; // r9
  BOOL IsEqualGUID; // eax
  _QWORD *v8; // r8
  __int64 v9; // r9
  unsigned int v10; // ebx

  *a3 = 0LL;
  if ( InlineIsEqualGUID(a2, &GUID_00000000_0000_0000_c000_000000000046) )
  {
    *v5 = v6;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
    return 0;
  }
  else
  {
    IsEqualGUID = InlineIsEqualGUID(v4, v3);
    if ( IsEqualGUID )
      *v8 = v9;
    v10 = !IsEqualGUID ? 0x80004002 : 0;
    if ( IsEqualGUID )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v8 + 8LL))(*v8);
  }
  return v10;
}
