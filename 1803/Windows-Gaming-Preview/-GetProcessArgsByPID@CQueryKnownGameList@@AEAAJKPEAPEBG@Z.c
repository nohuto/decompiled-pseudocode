/*
 * XREFs of ?GetProcessArgsByPID@CQueryKnownGameList@@AEAAJKPEAPEBG@Z @ 0x18003F120
 * Callers:
 *     ?GetGameEntryByIdentifier@CQueryKnownGameList@@AEAAJPEBGKPEAPEAUIGameEntry@KnownGameList@@@Z @ 0x18003E6FC (-GetGameEntryByIdentifier@CQueryKnownGameList@@AEAAJPEBGKPEAPEAUIGameEntry@KnownGameList@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002F8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetProcessArgsByPID@Common@@YAJKPEAGPEAK@Z @ 0x18003CE34 (-GetProcessArgsByPID@Common@@YAJKPEAGPEAK@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180042940 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x180042948 (--3@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180043940 (_guard_dispatch_icall_nop.c)
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
  unsigned __int16 *v9; // rax
  unsigned __int16 *v10; // rbx
  int v11; // edi
  char *v12; // rsi
  unsigned int *v13; // r9
  int ProcessArgsByPID; // eax
  __int64 v15; // r9
  __int64 v16; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  unsigned int v18; // [rsp+70h] [rbp+18h] BYREF
  unsigned __int16 *v19; // [rsp+78h] [rbp+20h]

  v4 = a2;
  if ( !a3 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x388,
      (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      (const char *)0x80004003LL);
    return 2147500035LL;
  }
  v7 = *((_QWORD *)this + 94);
  if ( !v7 )
  {
    v18 = 4096;
    v10 = 0LL;
    v12 = (char *)operator new[](0x2000uLL, (const struct std::nothrow_t *)&std::nothrow);
    if ( v12 )
    {
      operator delete(0LL);
      v10 = (unsigned __int16 *)v12;
      ProcessArgsByPID = Common::GetProcessArgsByPID(v4, v12, (unsigned __int16 *)&v18, v13);
      v11 = ProcessArgsByPID;
      if ( ProcessArgsByPID >= 0 )
      {
        *a3 = (const unsigned __int16 *)v12;
        goto LABEL_15;
      }
      v15 = (unsigned int)ProcessArgsByPID;
      v16 = 928LL;
    }
    else
    {
      v11 = -2147024882;
      v15 = 2147942414LL;
      v16 = 925LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v16,
      (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      (const char *)v15);
    goto LABEL_18;
  }
  result = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, unsigned int *))(*(_QWORD *)v7 + 32LL))(
             v7,
             a2,
             0LL,
             &v18);
  if ( (int)result < 0 )
    return result;
  v8 = 2LL * v18;
  if ( !is_mul_ok(v18, 2uLL) )
    v8 = -1LL;
  v9 = (unsigned __int16 *)operator new[](v8, (const struct std::nothrow_t *)&std::nothrow);
  v10 = v9;
  v19 = v9;
  if ( v9 )
  {
    v11 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, unsigned __int16 *, unsigned int *))(**((_QWORD **)this + 94) + 32LL))(
            *((_QWORD *)this + 94),
            v4,
            v9,
            &v18);
    if ( v11 < 0 )
      goto LABEL_18;
    *a3 = v10;
LABEL_15:
    operator delete(0LL);
    return 0LL;
  }
  v11 = -2147024882;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x391,
    (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
    (const char *)0x8007000ELL);
LABEL_18:
  operator delete(v10);
  return (unsigned int)v11;
}
