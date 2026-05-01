/*
 * XREFs of ?GetNextEntry@CEnumerateEntries@@UEAAJPEAPEAUIGameEntry@KnownGameList@@@Z @ 0x18003E310
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002DB4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002E30 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0CGameEntry@@QEAA@XZ @ 0x18003D65C (--0CGameEntry@@QEAA@XZ.c)
 *     ?CompleteInitialization@CGameEntry@@AEAAJXZ @ 0x18003DBA8 (-CompleteInitialization@CGameEntry@@AEAAJXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180041970 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800428B0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CEnumerateEntries::GetNextEntry(CEnumerateEntries *this, struct KnownGameList::IGameEntry **a2)
{
  CGameEntry *v4; // rbx
  int v5; // edi
  __int64 v6; // rdx
  CGameEntry *v7; // rax
  CGameEntry *v8; // r14
  int v9; // edx
  __int64 v10; // rcx
  int v11; // eax
  __int64 v12; // rax
  unsigned __int64 v13; // r9
  __int64 v14; // rdx
  int v15; // eax
  unsigned int v16; // eax
  __int64 v17; // rcx
  struct KnownGameList::IGameEntry *v18; // rax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  unsigned int v21; // [rsp+58h] [rbp+10h] BYREF
  CGameEntry *v22; // [rsp+60h] [rbp+18h]

  v4 = 0LL;
  if ( !a2 )
  {
    v5 = -2147467261;
    v6 = 1480LL;
LABEL_20:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\knowngamelist.cpp",
      (const char *)(unsigned int)v5);
    goto LABEL_22;
  }
  *a2 = 0LL;
  if ( !*((_DWORD *)this + 6) )
  {
    v5 = 1;
    goto LABEL_22;
  }
  v4 = 0LL;
  v22 = 0LL;
  v7 = (CGameEntry *)operator new(0x50uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( !v7 )
  {
    v5 = -2147024882;
LABEL_14:
    v13 = (unsigned int)v5;
    v14 = 1489LL;
LABEL_17:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v14,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\knowngamelist.cpp",
      (const char *)v13);
    goto LABEL_22;
  }
  v8 = CGameEntry::CGameEntry(v7);
  v9 = *((_DWORD *)this + 6);
  v10 = *((_QWORD *)this + 2);
  *((_QWORD *)v8 + 2) = v10;
  *((_QWORD *)v8 + 3) = v10;
  *((_DWORD *)v8 + 8) = v9;
  v11 = CGameEntry::CompleteInitialization(v8);
  v5 = v11;
  if ( v11 >= 0 )
    v5 = 0;
  else
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x47E,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\knowngamelist.cpp",
      (const char *)(unsigned int)v11);
  v12 = *(_QWORD *)v8;
  if ( v5 >= 0 )
  {
    (*(void (__fastcall **)(CGameEntry *))(v12 + 8))(v8);
    v4 = v8;
    v22 = v8;
    (*(void (__fastcall **)(CGameEntry *))(*(_QWORD *)v8 + 16LL))(v8);
    v5 = 0;
  }
  else
  {
    (*(void (__fastcall **)(CGameEntry *))(v12 + 16))(v8);
  }
  if ( v5 < 0 )
    goto LABEL_14;
  v15 = (*(__int64 (__fastcall **)(CGameEntry *, unsigned int *))(*(_QWORD *)v4 + 80LL))(v4, &v21);
  v5 = v15;
  if ( v15 < 0 )
  {
    v13 = (unsigned int)v15;
    v14 = 1491LL;
    goto LABEL_17;
  }
  v16 = *((_DWORD *)this + 6);
  v17 = v21;
  if ( v21 > v16 )
  {
    v5 = -2147024883;
    v6 = 1493LL;
    goto LABEL_20;
  }
  *((_DWORD *)this + 6) = v16 - v21;
  *((_QWORD *)this + 2) += v17;
  v18 = v4;
  v4 = 0LL;
  *a2 = v18;
  v5 = 0;
LABEL_22:
  if ( v4 )
    (*(void (__fastcall **)(CGameEntry *))(*(_QWORD *)v4 + 16LL))(v4);
  return (unsigned int)v5;
}
