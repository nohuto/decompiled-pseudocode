/*
 * XREFs of ?GetProcessWorkingDirectoryByPID@CQueryKnownGameList@@AEAAJKPEAPEBG@Z @ 0x18003F2A4
 * Callers:
 *     ?GetGameEntryByIdentifier@CQueryKnownGameList@@AEAAJPEBGKPEAPEAUIGameEntry@KnownGameList@@@Z @ 0x18003E6FC (-GetGameEntryByIdentifier@CQueryKnownGameList@@AEAAJPEBGKPEAPEAUIGameEntry@KnownGameList@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002F8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetProcessWorkingDirectoryByPID@Common@@YAJK_NPEAGPEAK@Z @ 0x18003D280 (-GetProcessWorkingDirectoryByPID@Common@@YAJK_NPEAGPEAK@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180042940 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x180042948 (--3@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180043940 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
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
  char *v12; // rsi
  __int64 v13; // rdx
  unsigned __int64 v14; // rax
  __int64 v15; // rdx
  char *v16; // rdi
  __int64 v17; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  unsigned int v19; // [rsp+70h] [rbp+18h] BYREF
  char *v20; // [rsp+78h] [rbp+20h]

  v4 = a2;
  if ( !a3 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3AA,
      (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      (const char *)0x80004003LL);
    return 2147500035LL;
  }
  v7 = *((_QWORD *)this + 94);
  if ( !v7 )
  {
    v19 = 260;
    v10 = 0LL;
    v12 = (char *)operator new[](0x208uLL, (const struct std::nothrow_t *)&std::nothrow);
    if ( v12 )
    {
      operator delete(0LL);
      v10 = v12;
      v20 = v12;
      ProcessWorkingDirectoryByPID = Common::GetProcessWorkingDirectoryByPID(v4, v13, v12, (unsigned __int16 *)&v19);
      if ( ProcessWorkingDirectoryByPID == -2147024774 )
      {
        v14 = 2LL * v19;
        if ( !is_mul_ok(v19, 2uLL) )
          v14 = -1LL;
        v16 = (char *)operator new[](v14, (const struct std::nothrow_t *)&std::nothrow);
        if ( v16 != v12 )
        {
          operator delete(v12);
          v10 = v16;
          v20 = v16;
        }
        if ( !v10 )
        {
          v17 = 968LL;
LABEL_25:
          ProcessWorkingDirectoryByPID = -2147024882;
          goto LABEL_26;
        }
        ProcessWorkingDirectoryByPID = Common::GetProcessWorkingDirectoryByPID(v4, v15, v10, (unsigned __int16 *)&v19);
      }
      if ( ProcessWorkingDirectoryByPID >= 0 )
      {
        *a3 = v10;
        goto LABEL_23;
      }
      v17 = 974LL;
LABEL_26:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v17,
        (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
        (const char *)(unsigned int)ProcessWorkingDirectoryByPID);
      goto LABEL_27;
    }
    v17 = 960LL;
    goto LABEL_25;
  }
  result = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, unsigned int *))(*(_QWORD *)v7 + 40LL))(
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
  if ( v9 )
  {
    ProcessWorkingDirectoryByPID = (*(__int64 (__fastcall **)(_QWORD, _QWORD, char *, unsigned int *))(**((_QWORD **)this + 94) + 40LL))(
                                     *((_QWORD *)this + 94),
                                     v4,
                                     v9,
                                     &v19);
    if ( ProcessWorkingDirectoryByPID < 0 )
      goto LABEL_27;
    *a3 = v10;
LABEL_23:
    operator delete(0LL);
    return 0LL;
  }
  ProcessWorkingDirectoryByPID = -2147024882;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x3B3,
    (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
    (const char *)0x8007000ELL);
LABEL_27:
  operator delete(v10);
  return (unsigned int)ProcessWorkingDirectoryByPID;
}
