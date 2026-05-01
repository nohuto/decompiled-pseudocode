/*
 * XREFs of ?HostViewStateOverridesChanged@ViewWrapperBase@@UEAAXAEBUHostViewStateOverrides@@@Z @ 0x1801148D0
 * Callers:
 *     <none>
 * Callees:
 *     ?PropagateViewStateOverridesToComponentsIfNecessary@ViewWrapperBase@@AEAAXAEBUAPPLICATION_VIEW_DATA@@0@Z @ 0x1801172D0 (-PropagateViewStateOverridesToComponentsIfNecessary@ViewWrapperBase@@AEAAXAEBUAPPLICATION_VIEW_D.c)
 *     ??$HostViewStateOverridesChanged@AEAIAEBW4State@HostViewStateOverrides@@AEBW4VIEW_PRESENTATION_MODE@@@ViewManagerInteropTraceLogging@@SAXAEAIAEBW4State@HostViewStateOverrides@@AEBW4VIEW_PRESENTATION_MODE@@@Z @ 0x180119BC0 (--$HostViewStateOverridesChanged@AEAIAEBW4State@HostViewStateOverrides@@AEBW4VIEW_PRESENTATION_M.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ViewWrapperBase::HostViewStateOverridesChanged(
        ViewWrapperBase *this,
        const struct HostViewStateOverrides *a2)
{
  bool v4; // zf
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  char v7; // al
  char v8; // bl
  __int128 v9; // [rsp+30h] [rbp-19h] BYREF
  __int128 v10; // [rsp+40h] [rbp-9h]
  int v11; // [rsp+50h] [rbp+7h]
  __int128 v12; // [rsp+58h] [rbp+Fh] BYREF
  __int128 v13; // [rsp+68h] [rbp+1Fh]
  int v14; // [rsp+78h] [rbp+2Fh]

  ViewManagerInteropTraceLogging::HostViewStateOverridesChanged<unsigned int &,enum HostViewStateOverrides::State const &,enum VIEW_PRESENTATION_MODE const &>(
    (char *)this + 124,
    a2,
    (char *)a2 + 4);
  v4 = *((_DWORD *)this + 56) == 1;
  v5 = *(_OWORD *)((char *)this + 188);
  v6 = *(_OWORD *)((char *)this + 204);
  v14 = *((_DWORD *)this + 55);
  v12 = v5;
  v13 = v6;
  if ( v4 )
    DWORD2(v13) = *((_DWORD *)this + 57);
  v4 = *(_DWORD *)a2 == 1;
  v11 = *((_DWORD *)this + 55);
  v9 = v5;
  v10 = v6;
  if ( v4 )
    DWORD2(v10) = *((_DWORD *)a2 + 1);
  v7 = (*(__int64 (__fastcall **)(char *, __int128 *, __int128 *))(*((_QWORD *)this - 1) + 128LL))(
         (char *)this - 8,
         &v12,
         &v9);
  *((_QWORD *)this + 28) = *(_QWORD *)a2;
  v8 = v7;
  ViewWrapperBase::PropagateViewStateOverridesToComponentsIfNecessary(
    (ViewWrapperBase *)((char *)this - 8),
    (const struct APPLICATION_VIEW_DATA *)&v12,
    (const struct APPLICATION_VIEW_DATA *)&v9);
  if ( v8 )
  {
    if ( *((_BYTE *)this + 476) )
      (*(void (__fastcall **)(_QWORD, _QWORD, char *, __int128 *))(**(_QWORD **)(*((_QWORD *)this + 18) + 448LL) + 56LL))(
        *(_QWORD *)(*((_QWORD *)this + 18) + 448LL),
        *((_QWORD *)this + 20),
        (char *)this + 168,
        &v9);
  }
}
