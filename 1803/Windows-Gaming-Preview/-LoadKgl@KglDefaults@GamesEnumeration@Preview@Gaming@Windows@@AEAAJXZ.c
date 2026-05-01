/*
 * XREFs of ?LoadKgl@KglDefaults@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x18003B120
 * Callers:
 *     ?LoadKglThreadProc@KglDefaults@GamesEnumeration@Preview@Gaming@Windows@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18003AF30 (-LoadKglThreadProc@KglDefaults@GamesEnumeration@Preview@Gaming@Windows@@CAXPEAU_TP_CALLBACK_INST.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002F8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010E8C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetKnownFolderSubFolder@KglDefaults@GamesEnumeration@Preview@Gaming@Windows@@AEAAJAEBU_GUID@@PEBG1PEAVString@Internal@5@@Z @ 0x18003AFA0 (-GetKnownFolderSubFolder@KglDefaults@GamesEnumeration@Preview@Gaming@Windows@@AEAAJAEBU_GUID@@PE.c)
 *     ?CreateQueryKnownGameListInstance@KnownGameList@@YAJPEAPEAUIQueryKnownGameList@1@PEBG@Z @ 0x18003D4A0 (-CreateQueryKnownGameListInstance@KnownGameList@@YAJPEAPEAUIQueryKnownGameList@1@PEBG@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180043940 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::KglDefaults::LoadKgl(
        RTL_SRWLOCK *this,
        const struct _GUID *a2,
        __int64 a3,
        const unsigned __int16 *a4)
{
  HSTRING v5; // rbx
  int KnownFolderSubFolder; // eax
  unsigned int v7; // esi
  const WCHAR *StringRawBuffer; // rax
  const struct _GUID *v9; // rdx
  Windows::Gaming::Preview::GamesEnumeration::KglDefaults *v10; // rcx
  const unsigned __int16 *v11; // r9
  int v12; // eax
  struct KnownGameList::IQueryKnownGameList **v13; // rbp
  const unsigned __int16 *v14; // r8
  RTL_SRWLOCK *v15; // r14
  PVOID Ptr; // rcx
  int QueryKnownGameListInstance; // ebp
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  HSTRING string; // [rsp+78h] [rbp+10h] BYREF
  HSTRING v21; // [rsp+80h] [rbp+18h] BYREF
  RTL_SRWLOCK *v22; // [rsp+88h] [rbp+20h]

  v5 = 0LL;
  v21 = 0LL;
  string = 0LL;
  KnownFolderSubFolder = Windows::Gaming::Preview::GamesEnumeration::KglDefaults::GetKnownFolderSubFolder(
                           (Windows::Gaming::Preview::GamesEnumeration::KglDefaults *)this,
                           a2,
                           L"Microsoft\\GameDVR",
                           a4,
                           &string);
  v7 = KnownFolderSubFolder;
  if ( KnownFolderSubFolder >= 0 )
  {
    StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
    CreateDirectoryW(StringRawBuffer, 0LL);
    v12 = Windows::Gaming::Preview::GamesEnumeration::KglDefaults::GetKnownFolderSubFolder(
            v10,
            v9,
            L"Microsoft\\GameDVR\\KnownGameList.bin",
            v11,
            &v21);
    v7 = v12;
    if ( v12 >= 0 )
    {
      v22 = this + 2;
      AcquireSRWLockExclusive(this + 2);
      v5 = v21;
      v13 = (struct KnownGameList::IQueryKnownGameList **)WindowsGetStringRawBuffer(v21, 0LL);
      v15 = this + 1;
      Ptr = this[1].Ptr;
      if ( Ptr )
      {
        v15->Ptr = 0LL;
        (*(void (__fastcall **)(PVOID))(*(_QWORD *)Ptr + 16LL))(Ptr);
      }
      QueryKnownGameListInstance = KnownGameList::CreateQueryKnownGameListInstance((KnownGameList *)&this[1], v13, v14);
      if ( (unsigned int)(QueryKnownGameListInstance + 2147024894) > 1 && QueryKnownGameListInstance < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0xB2,
          (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\kgldefaults.cpp",
          (const char *)(unsigned int)QueryKnownGameListInstance);
      ReleaseSRWLockExclusive(this + 2);
      if ( QueryKnownGameListInstance >= 0 )
      {
        v22 = this + 2;
        AcquireSRWLockShared(this + 2);
        (*(void (__fastcall **)(PVOID, RTL_SRWLOCK *))(*(_QWORD *)v15->Ptr + 80LL))(v15->Ptr, this + 3);
        ReleaseSRWLockShared(this + 2);
      }
      v7 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xA9,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\kgldefaults.cpp",
        (const char *)(unsigned int)v12);
      v5 = v21;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA2,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\kgldefaults.cpp",
      (const char *)(unsigned int)KnownFolderSubFolder);
  }
  if ( string )
    WindowsDeleteString(string);
  if ( v5 )
    WindowsDeleteString(v5);
  return v7;
}
