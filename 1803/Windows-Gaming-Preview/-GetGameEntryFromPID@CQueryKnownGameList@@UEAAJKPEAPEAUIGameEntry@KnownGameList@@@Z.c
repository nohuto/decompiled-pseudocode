/*
 * XREFs of ?GetGameEntryFromPID@CQueryKnownGameList@@UEAAJKPEAPEAUIGameEntry@KnownGameList@@@Z @ 0x18003DAD0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002F8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetGameEntryByIdentifier@CQueryKnownGameList@@AEAAJPEBGKPEAPEAUIGameEntry@KnownGameList@@@Z @ 0x18003E6FC (-GetGameEntryByIdentifier@CQueryKnownGameList@@AEAAJPEBGKPEAPEAUIGameEntry@KnownGameList@@@Z.c)
 *     ?GetProcessNameByPID@CQueryKnownGameList@@AEAAJKPEAPEBG@Z @ 0x18003EF10 (-GetProcessNameByPID@CQueryKnownGameList@@AEAAJKPEAPEBG@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x180042948 (--3@YAXPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CQueryKnownGameList::GetGameEntryFromPID(
        CQueryKnownGameList *this,
        unsigned int a2,
        struct KnownGameList::IGameEntry **a3)
{
  unsigned int ProcessNameByPID; // ebx
  __int64 v7; // rdx
  void *v8; // rsi
  int GameEntryByIdentifier; // eax
  unsigned int v10; // edi
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  void *Block; // [rsp+60h] [rbp+18h] BYREF

  Block = 0LL;
  if ( !a3 )
  {
    ProcessNameByPID = -2147467261;
    v7 = 306LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      (const char *)ProcessNameByPID);
    return ProcessNameByPID;
  }
  *a3 = 0LL;
  ProcessNameByPID = CQueryKnownGameList::GetProcessNameByPID(this, a2, (const unsigned __int16 **)&Block);
  if ( (ProcessNameByPID & 0x80000000) != 0 )
  {
    v7 = 310LL;
    goto LABEL_3;
  }
  v8 = Block;
  GameEntryByIdentifier = CQueryKnownGameList::GetGameEntryByIdentifier(this, (const unsigned __int16 *)Block, a2, a3);
  v10 = GameEntryByIdentifier;
  ProcessNameByPID = -2147023728;
  if ( GameEntryByIdentifier != -2147023728 )
  {
    if ( GameEntryByIdentifier >= 0 )
    {
      ProcessNameByPID = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x13B,
        (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
        (const char *)(unsigned int)GameEntryByIdentifier);
      ProcessNameByPID = v10;
    }
  }
  operator delete(v8);
  return ProcessNameByPID;
}
