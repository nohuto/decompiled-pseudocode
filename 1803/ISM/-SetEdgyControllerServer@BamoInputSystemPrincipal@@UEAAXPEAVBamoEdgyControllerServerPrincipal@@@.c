/*
 * XREFs of ?SetEdgyControllerServer@BamoInputSystemPrincipal@@UEAAXPEAVBamoEdgyControllerServerPrincipal@@@Z @ 0x1800215C0
 * Callers:
 *     ??0InputSystem@@QEAA@PEAVBamoConnection@Bamo@Microsoft@@@Z @ 0x180022894 (--0InputSystem@@QEAA@PEAVBamoConnection@Bamo@Microsoft@@@Z.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030F8 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003148 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$EnumerateStubs@PEAVBamoInputSystemPrincipalImpl@BamoImpl@@@BamoPrincipalImpl@BamoImpl@Microsoft@@QEAAJP6AJPEAVBamoStubImpl@12@PEAVBamoInputSystemPrincipalImpl@1@@Z1@Z @ 0x180022B78 (--$EnumerateStubs@PEAVBamoInputSystemPrincipalImpl@BamoImpl@@@BamoPrincipalImpl@BamoImpl@Microso.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall BamoInputSystemPrincipal::SetEdgyControllerServer(
        BamoInputSystemPrincipal *this,
        struct BamoEdgyControllerServerPrincipal *a2)
{
  __int64 v4; // rdi
  __int64 v5; // rbx
  char *v6; // rdi
  __int64 v7; // rsi
  int v8; // eax
  const char *v9; // r9
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v4 = *(_QWORD *)(*((_QWORD *)this + 3) + 24LL);
  v5 = 0LL;
  if ( *(_DWORD *)(v4 + 136) != GetCurrentThreadId() )
  {
    v5 = v4;
    EnterCriticalSection((LPCRITICAL_SECTION)(v4 + 96));
    *(_DWORD *)(v4 + 136) = GetCurrentThreadId();
  }
  v6 = (char *)this + 8;
  v7 = *((_QWORD *)this + 7);
  *((_QWORD *)v6 + 6) = a2;
  if ( a2 )
    (**(void (__fastcall ***)(struct BamoEdgyControllerServerPrincipal *))a2)(a2);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
  v8 = Microsoft::BamoImpl::BamoPrincipalImpl::EnumerateStubs<BamoImpl::BamoInputSystemPrincipalImpl *>(
         v6,
         BamoImpl::BamoInputSystemPrincipalImpl::UpdateEdgyControllerServerRemoteCacheStatic,
         v6);
  if ( v8 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x1EE6,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\bamos\\codegen\\objfre\\amd64\\bamo\\ismbamos.bamo.details.inl",
      (const char *)(unsigned int)v8);
    goto LABEL_13;
  }
  if ( !v5 )
    return;
  if ( *(_DWORD *)(v5 + 136) != GetCurrentThreadId() )
  {
LABEL_13:
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x574,
      (__int64)"internal\\mincore\\priv_sdk\\inc\\bamoconnection.inl",
      v9);
    JUMPOUT(0x1800216D3LL);
  }
  *(_DWORD *)(v5 + 136) = 0;
  LeaveCriticalSection((LPCRITICAL_SECTION)(v5 + 96));
}
