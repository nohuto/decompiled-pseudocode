/*
 * XREFs of ?SetPaused@BamoControllerNavigationManagerPrincipal@@UEAAX_N@Z @ 0x180030180
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030F8 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003148 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$EnumerateStubs@PEAVBamoControllerNavigationManagerPrincipalImpl@BamoImpl@@@BamoPrincipalImpl@BamoImpl@Microsoft@@QEAAJP6AJPEAVBamoStubImpl@12@PEAVBamoControllerNavigationManagerPrincipalImpl@1@@Z1@Z @ 0x1800300E8 (--$EnumerateStubs@PEAVBamoControllerNavigationManagerPrincipalImpl@BamoImpl@@@BamoPrincipalImpl@.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall BamoControllerNavigationManagerPrincipal::SetPaused(
        BamoControllerNavigationManagerPrincipal *this,
        char a2)
{
  __int64 v4; // rdi
  __int64 v5; // rbx
  int v6; // eax
  const char *v7; // r9
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v4 = *(_QWORD *)(*((_QWORD *)this + 3) + 24LL);
  v5 = 0LL;
  if ( *(_DWORD *)(v4 + 136) != GetCurrentThreadId() )
  {
    v5 = v4;
    EnterCriticalSection((LPCRITICAL_SECTION)(v4 + 96));
    *(_DWORD *)(v4 + 136) = GetCurrentThreadId();
  }
  *((_BYTE *)this + 49) = a2;
  v6 = Microsoft::BamoImpl::BamoPrincipalImpl::EnumerateStubs<BamoImpl::BamoControllerNavigationManagerPrincipalImpl *>(
         (__int64)this + 8,
         (__int64 (__fastcall *)(__int64, __int64))BamoImpl::BamoControllerNavigationManagerPrincipalImpl::UpdatePausedRemoteCacheStatic,
         (__int64)this + 8);
  if ( v6 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x7AB,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\bamos\\codegen\\objfre\\amd64\\bamo\\ISMBamos.bamo.details.inl",
      (const char *)(unsigned int)v6);
    goto LABEL_9;
  }
  if ( !v5 )
    return;
  if ( *(_DWORD *)(v5 + 136) != GetCurrentThreadId() )
  {
LABEL_9:
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x574,
      (__int64)"internal\\mincore\\priv_sdk\\inc\\bamoconnection.inl",
      v7);
    JUMPOUT(0x180030261LL);
  }
  *(_DWORD *)(v5 + 136) = 0;
  LeaveCriticalSection((LPCRITICAL_SECTION)(v5 + 96));
}
