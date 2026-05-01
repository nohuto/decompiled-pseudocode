/*
 * XREFs of ?GetProcessNameByPID@CQueryKnownGameList@@AEAAJKPEAPEBG@Z @ 0x18003EF10
 * Callers:
 *     ?GetGameEntryFromPID@CQueryKnownGameList@@UEAAJKPEAPEAUIGameEntry@KnownGameList@@@Z @ 0x18003DAD0 (-GetGameEntryFromPID@CQueryKnownGameList@@UEAAJKPEAPEAUIGameEntry@KnownGameList@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002F8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetProcessImageInfoByPID@Common@@YAJKPEAGPEAK01@Z @ 0x18003D06C (-GetProcessImageInfoByPID@Common@@YAJKPEAGPEAK01@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180042940 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x180042948 (--3@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180043940 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CQueryKnownGameList::GetProcessNameByPID(CQueryKnownGameList *this, __int64 a2, char **a3)
{
  DWORD v4; // ebp
  __int64 result; // rax
  __int64 v7; // rcx
  unsigned __int64 v8; // rax
  char *v9; // rax
  char *v10; // rbx
  int ProcessImageInfoByPID; // edi
  char *v12; // rsi
  unsigned __int64 v13; // rax
  char *v14; // rdi
  __int64 v15; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  unsigned int v17; // [rsp+70h] [rbp+18h] BYREF
  char *v18; // [rsp+78h] [rbp+20h]

  v4 = a2;
  if ( !a3 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x35E,
      (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      (const char *)0x80004003LL);
    return 2147500035LL;
  }
  v7 = *((_QWORD *)this + 94);
  if ( !v7 )
  {
    v17 = 260;
    v10 = 0LL;
    v12 = (char *)operator new[](0x208uLL, (const struct std::nothrow_t *)&std::nothrow);
    if ( v12 )
    {
      operator delete(0LL);
      v10 = v12;
      v18 = v12;
      ProcessImageInfoByPID = Common::GetProcessImageInfoByPID(v4, v12, (unsigned __int16 *)&v17, 0LL, 0LL);
      if ( ProcessImageInfoByPID == -2147024774 )
      {
        v13 = 2LL * v17;
        if ( !is_mul_ok(v17, 2uLL) )
          v13 = -1LL;
        v14 = (char *)operator new[](v13, (const struct std::nothrow_t *)&std::nothrow);
        if ( v14 != v12 )
        {
          operator delete(v12);
          v10 = v14;
          v18 = v14;
        }
        if ( !v10 )
        {
          v15 = 890LL;
LABEL_25:
          ProcessImageInfoByPID = -2147024882;
          goto LABEL_26;
        }
        ProcessImageInfoByPID = Common::GetProcessImageInfoByPID(v4, v10, (unsigned __int16 *)&v17, 0LL, 0LL);
      }
      if ( ProcessImageInfoByPID >= 0 )
      {
        *a3 = v10;
        goto LABEL_23;
      }
      v15 = 894LL;
LABEL_26:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v15,
        (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
        (const char *)(unsigned int)ProcessImageInfoByPID);
      goto LABEL_27;
    }
    v15 = 884LL;
    goto LABEL_25;
  }
  result = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, unsigned int *))(*(_QWORD *)v7 + 24LL))(
             v7,
             a2,
             0LL,
             &v17);
  if ( (int)result < 0 )
    return result;
  v8 = 2LL * v17;
  if ( !is_mul_ok(v17, 2uLL) )
    v8 = -1LL;
  v9 = (char *)operator new[](v8, (const struct std::nothrow_t *)&std::nothrow);
  v10 = v9;
  v18 = v9;
  if ( v9 )
  {
    ProcessImageInfoByPID = (*(__int64 (__fastcall **)(_QWORD, _QWORD, char *, unsigned int *))(**((_QWORD **)this + 94)
                                                                                              + 24LL))(
                              *((_QWORD *)this + 94),
                              v4,
                              v9,
                              &v17);
    if ( ProcessImageInfoByPID < 0 )
      goto LABEL_27;
    *a3 = v10;
LABEL_23:
    operator delete(0LL);
    return 0LL;
  }
  ProcessImageInfoByPID = -2147024882;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x367,
    (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
    (const char *)0x8007000ELL);
LABEL_27:
  operator delete(v10);
  return (unsigned int)ProcessImageInfoByPID;
}
