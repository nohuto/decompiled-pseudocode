/*
 * XREFs of ?get_TitleId@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x18002AEE0
 * Callers:
 *     ?_FilterTile@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@AEAAJPEAUIUnifiedTile@UnifiedTile@Shell@WindowsInternal@@@Z @ 0x1800099CC (-_FilterTile@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@AEAAJPEAUIUnifiedTile@Uni.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002E30 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::get_TitleId(
        Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer *this,
        HSTRING *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rsi
  HRESULT v5; // eax
  unsigned int v6; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *a2 = 0LL;
  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 160);
  EnterCriticalSection((LPCRITICAL_SECTION)this + 4);
  v5 = WindowsDuplicateString(*((HSTRING *)this + 18), a2);
  v6 = v5;
  if ( v5 >= 0 )
  {
    if ( v2 )
      LeaveCriticalSection(v2);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x621,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
      (const char *)(unsigned int)v5);
    if ( v2 )
      LeaveCriticalSection(v2);
    return v6;
  }
}
