/*
 * XREFs of ?GetEnabled@BamoControllerNavigationManagerProxy@@UEAA_NXZ @ 0x18001C0E0
 * Callers:
 *     ?GetEnabled@ControllerNavigationClientProxy@@UEAA_NXZ @ 0x180030AF0 (-GetEnabled@ControllerNavigationClientProxy@@UEAA_NXZ.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003148 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

char __fastcall BamoControllerNavigationManagerProxy::GetEnabled(BamoControllerNavigationManagerProxy *this)
{
  __int64 v2; // rbx
  __int64 v3; // rdi
  char v4; // di
  const char *v5; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = 0LL;
  v3 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 3) + 24LL) + 24LL);
  if ( *(_DWORD *)(v3 + 136) != GetCurrentThreadId() )
  {
    v2 = v3;
    EnterCriticalSection((LPCRITICAL_SECTION)(v3 + 96));
    *(_DWORD *)(v3 + 136) = GetCurrentThreadId();
  }
  v4 = *((_BYTE *)this + 40);
  if ( v2 )
  {
    if ( *(_DWORD *)(v2 + 136) != GetCurrentThreadId() )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x574,
        (__int64)"internal\\mincore\\priv_sdk\\inc\\bamoconnection.inl",
        v5);
      JUMPOUT(0x18001C178LL);
    }
    *(_DWORD *)(v2 + 136) = 0;
    LeaveCriticalSection((LPCRITICAL_SECTION)(v2 + 96));
  }
  return v4;
}
