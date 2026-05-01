/*
 * XREFs of ?find@?$_Tree@V?$_Tmap_traits@VHString@Wrappers@WRL@Microsoft@@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@34@UstringLessIgnoreCase@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@V?$allocator@U?$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@34@@std@@@std@@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@34@@std@@@std@@@std@@@2@AEBVHString@Wrappers@WRL@Microsoft@@@Z @ 0x18000ABBC
 * Callers:
 *     ?_FilterGameConfig@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@AEAAJU_GUID@@$$QEAV?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@Z @ 0x18000A1A8 (-_FilterGameConfig@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@AEAAJU_GUID@@$$QEAV.c)
 * Callees:
 *     <none>
 */

__int64 **__fastcall std::_Tree<std::_Tmap_traits<Microsoft::WRL::Wrappers::HString,Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer>,Windows::Gaming::Preview::GamesEnumeration::FindAllOperation::stringLessIgnoreCase,std::allocator<std::pair<Microsoft::WRL::Wrappers::HString const,Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer>>>,0>>::find(
        __int64 **a1,
        __int64 **a2,
        HSTRING *a3)
{
  __int64 *v3; // rsi
  __int64 *v7; // rdi
  const WCHAR *StringRawBuffer; // rbx
  const WCHAR *v9; // rax
  const WCHAR *v10; // rbx
  const WCHAR *v11; // rax
  __int64 **result; // rax

  v3 = *a1;
  v7 = (__int64 *)(*a1)[1];
  while ( !*((_BYTE *)v7 + 25) )
  {
    StringRawBuffer = WindowsGetStringRawBuffer(*a3, 0LL);
    v9 = WindowsGetStringRawBuffer((HSTRING)v7[4], 0LL);
    if ( CompareStringOrdinal(v9, -1, StringRawBuffer, -1, 1) == 1 )
    {
      v7 = (__int64 *)v7[2];
    }
    else
    {
      v3 = v7;
      v7 = (__int64 *)*v7;
    }
  }
  if ( v3 == *a1
    || (v10 = WindowsGetStringRawBuffer((HSTRING)v3[4], 0LL),
        v11 = WindowsGetStringRawBuffer(*a3, 0LL),
        CompareStringOrdinal(v11, -1, v10, -1, 1) == 1) )
  {
    v3 = *a1;
  }
  result = a2;
  *a2 = v3;
  return result;
}
