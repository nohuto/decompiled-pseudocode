/*
 * XREFs of ?RuntimeClassInitialize@CGameEntry@@QEAAJPEAUIGameEntry@KnownGameList@@@Z @ 0x18003F88C
 * Callers:
 *     ??$MakeAndInitialize@VCGameEntry@@UIGameEntry@KnownGameList@@PEAU23@@Details@WRL@Microsoft@@YAJPEAPEAUIGameEntry@KnownGameList@@$$QEAPEAU34@@Z @ 0x180040C60 (--$MakeAndInitialize@VCGameEntry@@UIGameEntry@KnownGameList@@PEAU23@@Details@WRL@Microsoft@@YAJP.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002F8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CompleteInitialization@CGameEntry@@AEAAJXZ @ 0x18003FCE8 (-CompleteInitialization@CGameEntry@@AEAAJXZ.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180042940 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x180042948 (--3@YAXPEAX_K@Z.c)
 *     memcpy_0 @ 0x180043927 (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x180043940 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CGameEntry::RuntimeClassInitialize(CGameEntry *this, struct KnownGameList::IGameEntry *a2)
{
  int v4; // edi
  __int64 v5; // rdx
  void *v7; // rax
  void *v8; // rcx
  void *v9; // rdi
  int v10; // ebx
  __int64 v11; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  size_t Size; // [rsp+38h] [rbp+10h] BYREF
  void *Src; // [rsp+40h] [rbp+18h] BYREF

  v4 = (*(__int64 (__fastcall **)(struct KnownGameList::IGameEntry *, void **))(*(_QWORD *)a2 + 72LL))(a2, &Src);
  if ( v4 < 0 )
  {
    v5 = 1175LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      (const char *)(unsigned int)v4);
    return (unsigned int)v4;
  }
  v4 = (*(__int64 (__fastcall **)(struct KnownGameList::IGameEntry *, size_t *))(*(_QWORD *)a2 + 80LL))(a2, &Size);
  if ( v4 < 0 )
  {
    v5 = 1177LL;
    goto LABEL_3;
  }
  v7 = operator new[]((unsigned int)Size, (const struct std::nothrow_t *)&std::nothrow);
  v8 = (void *)*((_QWORD *)this + 9);
  v9 = v7;
  if ( v7 != v8 )
  {
    if ( v8 )
      operator delete(v8);
    *((_QWORD *)this + 9) = v9;
    v8 = v9;
  }
  if ( !v8 )
  {
    v10 = -2147024882;
    v11 = 1180LL;
LABEL_12:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      (const char *)(unsigned int)v10);
    return (unsigned int)v10;
  }
  memcpy_0(v8, Src, (unsigned int)Size);
  *((_QWORD *)this + 2) = *((_QWORD *)this + 9);
  *((_QWORD *)this + 3) = *((_QWORD *)this + 9);
  *((_DWORD *)this + 8) = Size;
  v10 = CGameEntry::CompleteInitialization(this);
  if ( v10 < 0 )
  {
    v11 = 1189LL;
    goto LABEL_12;
  }
  return 0LL;
}
