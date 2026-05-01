/*
 * XREFs of ?GetGameConfigFromPID@CQueryKnownGameList@@UEAAJKPEAUKGLGameConfig@KnownGameList@@@Z @ 0x18003BA60
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002DB4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002E30 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InitGameConfigFromEntry@@YAJPEAUIGameEntry@KnownGameList@@PEAUKGLGameConfig@2@@Z @ 0x18003E4B4 (-InitGameConfigFromEntry@@YAJPEAUIGameEntry@KnownGameList@@PEAUKGLGameConfig@2@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800428B0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CQueryKnownGameList::GetGameConfigFromPID(
        CQueryKnownGameList *this,
        __int64 a2,
        struct KnownGameList::KGLGameConfig *a3)
{
  int v4; // ebx
  int inited; // eax
  struct KnownGameList::IGameEntry *v6; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct KnownGameList::IGameEntry *v9; // [rsp+50h] [rbp+18h] BYREF

  v9 = 0LL;
  if ( a3 )
  {
    v4 = (*(__int64 (__fastcall **)(CQueryKnownGameList *, __int64, struct KnownGameList::IGameEntry **))(*(_QWORD *)this + 48LL))(
           this,
           a2,
           &v9);
    if ( v4 >= 0 )
    {
      inited = InitGameConfigFromEntry(v9, a3);
      v4 = inited;
      if ( inited >= 0 )
        v4 = 0;
      else
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)0x154,
          (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\knowngamelist.cpp",
          (const char *)(unsigned int)inited);
    }
  }
  else
  {
    v4 = -2147467261;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x14E,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\knowngamelist.cpp",
      (const char *)0x80004003LL);
  }
  v6 = v9;
  if ( v9 )
  {
    v9 = 0LL;
    (*(void (__fastcall **)(struct KnownGameList::IGameEntry *))(*(_QWORD *)v6 + 16LL))(v6);
  }
  return (unsigned int)v4;
}
