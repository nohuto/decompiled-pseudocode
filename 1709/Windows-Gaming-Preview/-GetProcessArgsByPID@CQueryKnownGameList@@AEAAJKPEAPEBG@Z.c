/*
 * XREFs of ?GetProcessArgsByPID@CQueryKnownGameList@@AEAAJKPEAPEBG@Z @ 0x18003CFD0
 * Callers:
 *     ?GetGameEntryByIdentifier@CQueryKnownGameList@@AEAAJPEBGKPEAPEAUIGameEntry@KnownGameList@@@Z @ 0x18003C5C4 (-GetGameEntryByIdentifier@CQueryKnownGameList@@AEAAJPEBGKPEAPEAUIGameEntry@KnownGameList@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002DB4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002E30 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetProcessArgsByPID@Common@@YAJKPEAGPEAK@Z @ 0x18003ACA8 (-GetProcessArgsByPID@Common@@YAJKPEAGPEAK@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800415E4 (--3@YAXPEAX_K@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180041990 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800428B0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CQueryKnownGameList::GetProcessArgsByPID(
        CQueryKnownGameList *this,
        __int64 a2,
        const unsigned __int16 **a3)
{
  DWORD v4; // edi
  __int64 result; // rax
  __int64 v7; // rcx
  unsigned __int64 v8; // rax
  void *v9; // rax
  void *v10; // rbx
  unsigned int v11; // edi
  unsigned __int64 v12; // rdx
  _WORD *v13; // rax
  unsigned int *v14; // r9
  int ProcessArgsByPID; // eax
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  unsigned int v17; // [rsp+70h] [rbp+18h] BYREF
  void *v18; // [rsp+78h] [rbp+20h]

  v4 = a2;
  if ( !a3 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x379,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\knowngamelist.cpp",
      (const char *)0x80004003LL);
    return 2147500035LL;
  }
  v7 = *((_QWORD *)this + 93);
  if ( v7 )
  {
    result = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, unsigned int *))(*(_QWORD *)v7 + 32LL))(
               v7,
               a2,
               0LL,
               &v17);
    if ( (int)result < 0 )
      return result;
    v8 = 2LL * v17;
    if ( !is_mul_ok(v17, 2uLL) )
      v8 = -1LL;
    v9 = operator new[](v8, (const struct std::nothrow_t *)&std::nothrow);
    v10 = v9;
    v18 = v9;
    if ( !v9 )
    {
      v11 = -2147024882;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x382,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\knowngamelist.cpp",
        (const char *)0x8007000ELL);
      goto LABEL_10;
    }
    v11 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, void *, unsigned int *))(**((_QWORD **)this + 93) + 32LL))(
            *((_QWORD *)this + 93),
            v4,
            v9,
            &v17);
    if ( (v11 & 0x80000000) != 0 )
    {
LABEL_10:
      if ( !v10 )
        return v11;
LABEL_11:
      operator delete(v10, v12);
      return v11;
    }
    *a3 = (const unsigned __int16 *)v10;
  }
  else
  {
    v17 = 4096;
    v13 = operator new[](0x2000uLL, (const struct std::nothrow_t *)&std::nothrow);
    v10 = v13;
    if ( !v13 )
    {
      v11 = -2147024882;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x38E,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\knowngamelist.cpp",
        (const char *)0x8007000ELL);
      return v11;
    }
    ProcessArgsByPID = Common::GetProcessArgsByPID(v4, v13, (unsigned __int16 *)&v17, v14);
    v11 = ProcessArgsByPID;
    if ( ProcessArgsByPID < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x391,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\knowngamelist.cpp",
        (const char *)(unsigned int)ProcessArgsByPID);
      goto LABEL_11;
    }
    *a3 = (const unsigned __int16 *)v10;
  }
  return 0LL;
}
