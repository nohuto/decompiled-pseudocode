/*
 * XREFs of ?RuntimeClassInitialize@CGameEntry@@QEAAJPEAUIGameEntry@KnownGameList@@@Z @ 0x18003D72C
 * Callers:
 *     ??$MakeAndInitialize@VCGameEntry@@UIGameEntry@KnownGameList@@PEAU23@@Details@WRL@Microsoft@@YAJPEAPEAUIGameEntry@KnownGameList@@$$QEAPEAU34@@Z @ 0x18003EB8C (--$MakeAndInitialize@VCGameEntry@@UIGameEntry@KnownGameList@@PEAU23@@Details@WRL@Microsoft@@YAJP.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002DB4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002E30 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CompleteInitialization@CGameEntry@@AEAAJXZ @ 0x18003DBA8 (-CompleteInitialization@CGameEntry@@AEAAJXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800415E4 (--3@YAXPEAX_K@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180041990 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memcpy_0 @ 0x180042897 (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800428B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CGameEntry::RuntimeClassInitialize(CGameEntry *this, struct KnownGameList::IGameEntry *a2)
{
  int v4; // edi
  __int64 v5; // rdx
  void *v7; // rax
  unsigned __int64 v8; // rdx
  void *v9; // rcx
  void *v10; // rcx
  unsigned int v11; // ebx
  int v12; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  size_t Size; // [rsp+38h] [rbp+10h] BYREF
  void *Src; // [rsp+40h] [rbp+18h] BYREF

  v4 = (*(__int64 (__fastcall **)(struct KnownGameList::IGameEntry *, void **))(*(_QWORD *)a2 + 72LL))(a2, &Src);
  if ( v4 < 0 )
  {
    v5 = 1160LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v5,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\knowngamelist.cpp",
      (const char *)(unsigned int)v4);
    return (unsigned int)v4;
  }
  v4 = (*(__int64 (__fastcall **)(struct KnownGameList::IGameEntry *, size_t *))(*(_QWORD *)a2 + 80LL))(a2, &Size);
  if ( v4 < 0 )
  {
    v5 = 1162LL;
    goto LABEL_3;
  }
  v7 = operator new[]((unsigned int)Size, (const struct std::nothrow_t *)&std::nothrow);
  v9 = (void *)*((_QWORD *)this + 9);
  *((_QWORD *)this + 9) = v7;
  if ( v9 )
    operator delete(v9, v8);
  v10 = (void *)*((_QWORD *)this + 9);
  if ( !v10 )
  {
    v11 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x48D,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\knowngamelist.cpp",
      (const char *)0x8007000ELL);
    return v11;
  }
  memcpy_0(v10, Src, (unsigned int)Size);
  *((_QWORD *)this + 2) = *((_QWORD *)this + 9);
  *((_QWORD *)this + 3) = *((_QWORD *)this + 9);
  *((_DWORD *)this + 8) = Size;
  v12 = CGameEntry::CompleteInitialization(this);
  v11 = v12;
  if ( v12 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x496,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\knowngamelist.cpp",
      (const char *)(unsigned int)v12);
    return v11;
  }
  return 0LL;
}
