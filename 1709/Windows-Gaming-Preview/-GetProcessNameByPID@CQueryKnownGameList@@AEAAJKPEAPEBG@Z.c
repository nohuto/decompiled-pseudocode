/*
 * XREFs of ?GetProcessNameByPID@CQueryKnownGameList@@AEAAJKPEAPEBG@Z @ 0x18003CDD0
 * Callers:
 *     ?GetGameEntryFromPID@CQueryKnownGameList@@UEAAJKPEAPEAUIGameEntry@KnownGameList@@@Z @ 0x18003B900 (-GetGameEntryFromPID@CQueryKnownGameList@@UEAAJKPEAPEAUIGameEntry@KnownGameList@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002DB4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002E30 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetProcessImageInfoByPID@Common@@YAJKPEAGPEAK01@Z @ 0x18003AEE0 (-GetProcessImageInfoByPID@Common@@YAJKPEAGPEAK01@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800415E4 (--3@YAXPEAX_K@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180041990 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800428B0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CQueryKnownGameList::GetProcessNameByPID(CQueryKnownGameList *this, __int64 a2, char **a3)
{
  DWORD v4; // ebp
  __int64 result; // rax
  __int64 v7; // rcx
  unsigned __int64 v8; // rax
  char *v9; // rax
  char *v10; // rbx
  int ProcessImageInfoByPID; // edi
  unsigned __int64 v12; // rdx
  char *v13; // rax
  __int64 v14; // rdx
  char *v15; // rdi
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  unsigned int v19; // [rsp+70h] [rbp+18h] BYREF
  char *v20; // [rsp+78h] [rbp+20h]

  v4 = a2;
  if ( !a3 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x34F,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\knowngamelist.cpp",
      (const char *)0x80004003LL);
    return 2147500035LL;
  }
  v7 = *((_QWORD *)this + 93);
  if ( !v7 )
  {
    v19 = 260;
    v13 = (char *)operator new[](0x208uLL, (const struct std::nothrow_t *)&std::nothrow);
    v10 = v13;
    if ( !v13 )
    {
      v14 = 869LL;
LABEL_23:
      ProcessImageInfoByPID = -2147024882;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v14,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\knowngamelist.cpp",
        (const char *)0x8007000ELL);
      return (unsigned int)ProcessImageInfoByPID;
    }
    ProcessImageInfoByPID = Common::GetProcessImageInfoByPID(v4, v13, (unsigned __int16 *)&v19, 0LL, 0LL);
    if ( ProcessImageInfoByPID == -2147024774 )
    {
      v15 = v10;
      v16 = 2LL * v19;
      if ( !is_mul_ok(v19, 2uLL) )
        v16 = -1LL;
      v10 = (char *)operator new[](v16, (const struct std::nothrow_t *)&std::nothrow);
      if ( v15 )
        operator delete(v15, v17);
      if ( !v10 )
      {
        v14 = 875LL;
        goto LABEL_23;
      }
      ProcessImageInfoByPID = Common::GetProcessImageInfoByPID(v4, v10, (unsigned __int16 *)&v19, 0LL, 0LL);
    }
    if ( ProcessImageInfoByPID < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x36F,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\knowngamelist.cpp",
        (const char *)(unsigned int)ProcessImageInfoByPID);
      goto LABEL_11;
    }
    *a3 = v10;
    return 0LL;
  }
  result = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, unsigned int *))(*(_QWORD *)v7 + 24LL))(
             v7,
             a2,
             0LL,
             &v19);
  if ( (int)result < 0 )
    return result;
  v8 = 2LL * v19;
  if ( !is_mul_ok(v19, 2uLL) )
    v8 = -1LL;
  v9 = (char *)operator new[](v8, (const struct std::nothrow_t *)&std::nothrow);
  v10 = v9;
  v20 = v9;
  if ( !v9 )
  {
    ProcessImageInfoByPID = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x358,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\knowngamelist.cpp",
      (const char *)0x8007000ELL);
    goto LABEL_10;
  }
  ProcessImageInfoByPID = (*(__int64 (__fastcall **)(_QWORD, _QWORD, char *, unsigned int *))(**((_QWORD **)this + 93)
                                                                                            + 24LL))(
                            *((_QWORD *)this + 93),
                            v4,
                            v9,
                            &v19);
  if ( ProcessImageInfoByPID < 0 )
  {
LABEL_10:
    if ( !v10 )
      return (unsigned int)ProcessImageInfoByPID;
LABEL_11:
    operator delete(v10, v12);
    return (unsigned int)ProcessImageInfoByPID;
  }
  *a3 = v10;
  return 0LL;
}
