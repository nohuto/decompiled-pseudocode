/*
 * XREFs of ?GetProcessWorkingDirectoryByPID@CQueryKnownGameList@@AEAAJKPEAPEBG@Z @ 0x18003D158
 * Callers:
 *     ?GetGameEntryByIdentifier@CQueryKnownGameList@@AEAAJPEBGKPEAPEAUIGameEntry@KnownGameList@@@Z @ 0x18003C5C4 (-GetGameEntryByIdentifier@CQueryKnownGameList@@AEAAJPEBGKPEAPEAUIGameEntry@KnownGameList@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002DB4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002E30 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetProcessWorkingDirectoryByPID@Common@@YAJK_NPEAGPEAK@Z @ 0x18003B0F4 (-GetProcessWorkingDirectoryByPID@Common@@YAJK_NPEAGPEAK@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800415E4 (--3@YAXPEAX_K@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180041990 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800428B0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CQueryKnownGameList::GetProcessWorkingDirectoryByPID(
        CQueryKnownGameList *this,
        __int64 a2,
        char **a3)
{
  DWORD v4; // ebp
  __int64 result; // rax
  __int64 v7; // rcx
  unsigned __int64 v8; // rax
  char *v9; // rax
  char *v10; // rbx
  int ProcessWorkingDirectoryByPID; // edi
  unsigned __int64 v12; // rdx
  char *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rdx
  char *v16; // rdi
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  unsigned int v20; // [rsp+70h] [rbp+18h] BYREF
  char *v21; // [rsp+78h] [rbp+20h]

  v4 = a2;
  if ( !a3 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x39B,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\knowngamelist.cpp",
      (const char *)0x80004003LL);
    return 2147500035LL;
  }
  v7 = *((_QWORD *)this + 93);
  if ( !v7 )
  {
    v20 = 260;
    v13 = (char *)operator new[](0x208uLL, (const struct std::nothrow_t *)&std::nothrow);
    v10 = v13;
    if ( !v13 )
    {
      v15 = 945LL;
LABEL_23:
      ProcessWorkingDirectoryByPID = -2147024882;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v15,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\knowngamelist.cpp",
        (const char *)0x8007000ELL);
      return (unsigned int)ProcessWorkingDirectoryByPID;
    }
    ProcessWorkingDirectoryByPID = Common::GetProcessWorkingDirectoryByPID(v4, v14, v13, (unsigned __int16 *)&v20);
    if ( ProcessWorkingDirectoryByPID == -2147024774 )
    {
      v16 = v10;
      v17 = 2LL * v20;
      if ( !is_mul_ok(v20, 2uLL) )
        v17 = -1LL;
      v10 = (char *)operator new[](v17, (const struct std::nothrow_t *)&std::nothrow);
      if ( v16 )
        operator delete(v16, v18);
      if ( !v10 )
      {
        v15 = 953LL;
        goto LABEL_23;
      }
      ProcessWorkingDirectoryByPID = Common::GetProcessWorkingDirectoryByPID(v4, v18, v10, (unsigned __int16 *)&v20);
    }
    if ( ProcessWorkingDirectoryByPID < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x3BF,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\knowngamelist.cpp",
        (const char *)(unsigned int)ProcessWorkingDirectoryByPID);
      goto LABEL_11;
    }
    *a3 = v10;
    return 0LL;
  }
  result = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, unsigned int *))(*(_QWORD *)v7 + 40LL))(
             v7,
             a2,
             0LL,
             &v20);
  if ( (int)result < 0 )
    return result;
  v8 = 2LL * v20;
  if ( !is_mul_ok(v20, 2uLL) )
    v8 = -1LL;
  v9 = (char *)operator new[](v8, (const struct std::nothrow_t *)&std::nothrow);
  v10 = v9;
  v21 = v9;
  if ( !v9 )
  {
    ProcessWorkingDirectoryByPID = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3A4,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\knowngamelist.cpp",
      (const char *)0x8007000ELL);
    goto LABEL_10;
  }
  ProcessWorkingDirectoryByPID = (*(__int64 (__fastcall **)(_QWORD, _QWORD, char *, unsigned int *))(**((_QWORD **)this + 93) + 40LL))(
                                   *((_QWORD *)this + 93),
                                   v4,
                                   v9,
                                   &v20);
  if ( ProcessWorkingDirectoryByPID < 0 )
  {
LABEL_10:
    if ( !v10 )
      return (unsigned int)ProcessWorkingDirectoryByPID;
LABEL_11:
    operator delete(v10, v12);
    return (unsigned int)ProcessWorkingDirectoryByPID;
  }
  *a3 = v10;
  return 0LL;
}
