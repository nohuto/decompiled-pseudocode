/*
 * XREFs of ?CompleteInitialization@CGameEntry@@AEAAJXZ @ 0x18003FCE8
 * Callers:
 *     ?RuntimeClassInitialize@CGameEntry@@QEAAJPEAUIGameEntry@KnownGameList@@@Z @ 0x18003F88C (-RuntimeClassInitialize@CGameEntry@@QEAAJPEAUIGameEntry@KnownGameList@@@Z.c)
 *     ?GetNextEntry@CEnumerateEntries@@UEAAJPEAPEAUIGameEntry@KnownGameList@@@Z @ 0x180040420 (-GetNextEntry@CEnumerateEntries@@UEAAJPEAPEAUIGameEntry@KnownGameList@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002F8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?MarkConsumed@CGameEntry@@AEAAJK_N@Z @ 0x180040110 (-MarkConsumed@CGameEntry@@AEAAJK_N@Z.c)
 *     ?VerifyAvailable@CGameEntry@@AEAAJK@Z @ 0x1800401C0 (-VerifyAvailable@CGameEntry@@AEAAJK@Z.c)
 *     ?ReadUShort@CGameEntry@@AEAAJPEAG_N@Z @ 0x1800401F4 (-ReadUShort@CGameEntry@@AEAAJPEAG_N@Z.c)
 *     ?ReadDWORD@CGameEntry@@AEAAJPEAK@Z @ 0x180040270 (-ReadDWORD@CGameEntry@@AEAAJPEAK@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180042940 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x180042948 (--3@YAXPEAX_K@Z.c)
 */

__int64 __fastcall CGameEntry::CompleteInitialization(CGameEntry *this)
{
  signed int DWORD; // edi
  bool v3; // r8
  __int64 v4; // rdx
  unsigned __int64 v6; // rcx
  unsigned int v7; // ebx
  __int64 v8; // rdx
  int v9; // eax
  int v10; // ebp
  unsigned __int16 *v11; // rsi
  unsigned int v12; // edx
  bool v13; // r8
  _WORD *v14; // rsi
  bool v15; // r8
  __int64 v16; // rax
  __int64 v17; // rdx
  _WORD *v18; // r15
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rax
  void *v21; // rax
  void *v22; // rcx
  void *v23; // rdi
  unsigned int v24; // r14d
  __int64 v25; // rdi
  unsigned __int64 v26; // rax
  void *v27; // rax
  void *v28; // rcx
  void *v29; // rdi
  bool v30; // cf
  unsigned int v31; // esi
  __int64 v32; // rdi
  __int64 v33; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  DWORD = CGameEntry::ReadDWORD(this, (unsigned int *)this + 9);
  if ( DWORD < 0 )
  {
    v4 = 1299LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v4,
      (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      (const char *)(unsigned int)DWORD);
    return (unsigned int)DWORD;
  }
  v6 = *((unsigned int *)this + 9);
  if ( v6 > (unsigned __int64)*((unsigned int *)this + 8) + 4 )
  {
    v7 = -2147483637;
    v8 = 1303LL;
LABEL_6:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      (const char *)v7);
    return v7;
  }
  v9 = v6 - 4;
  if ( (unsigned int)v6 < 4 )
    v9 = -1;
  *((_DWORD *)this + 8) = v9;
  v10 = -2147024362;
  DWORD = (unsigned int)v6 < 4 ? 0x80070216 : 0;
  if ( (unsigned int)v6 < 4 )
  {
    v4 = 1307LL;
    goto LABEL_3;
  }
  v11 = (unsigned __int16 *)((char *)this + 48);
  DWORD = CGameEntry::ReadUShort(this, (unsigned __int16 *)this + 24, v3);
  if ( DWORD < 0 )
  {
    v4 = 1311LL;
    goto LABEL_3;
  }
  DWORD = CGameEntry::VerifyAvailable(this, *v11);
  if ( DWORD < 0 )
  {
    v4 = 1313LL;
    goto LABEL_3;
  }
  v12 = *v11;
  *((_QWORD *)this + 5) = *((_QWORD *)this + 2);
  DWORD = CGameEntry::MarkConsumed(this, v12, 1);
  if ( DWORD < 0 )
  {
    v4 = 1317LL;
    goto LABEL_3;
  }
  v14 = (_WORD *)((char *)this + 50);
  DWORD = CGameEntry::ReadUShort(this, (unsigned __int16 *)this + 25, v13);
  if ( DWORD < 0 )
  {
    v4 = 1319LL;
    goto LABEL_3;
  }
  v16 = (unsigned __int16)*v14;
  if ( (unsigned __int64)(12 * v16) > 0xFFFFFFFF )
  {
    v17 = 1320LL;
LABEL_21:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v17,
      (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      (const char *)(unsigned int)v10);
    return (unsigned int)v10;
  }
  if ( (unsigned int)(12 * v16) > *((_DWORD *)this + 8) )
  {
    v7 = -2147024809;
    v8 = 1321LL;
    goto LABEL_6;
  }
  v18 = (_WORD *)((char *)this + 52);
  DWORD = CGameEntry::ReadUShort(this, (unsigned __int16 *)this + 26, v15);
  if ( DWORD < 0 )
  {
    v4 = 1323LL;
    goto LABEL_3;
  }
  v19 = 4LL * (unsigned __int16)*v18;
  if ( v19 > 0xFFFFFFFF )
  {
    v17 = 1324LL;
    goto LABEL_21;
  }
  if ( (unsigned int)v19 > *((_DWORD *)this + 8) )
  {
    v7 = -2147024809;
    v8 = 1325LL;
    goto LABEL_6;
  }
  if ( *v14 )
  {
    v20 = 16LL * (unsigned __int16)*v14;
    if ( !is_mul_ok((unsigned __int16)*v14, 0x10uLL) )
      v20 = -1LL;
    v21 = operator new[](v20, (const struct std::nothrow_t *)&std::nothrow);
    v22 = (void *)*((_QWORD *)this + 7);
    v23 = v21;
    if ( v21 != v22 )
    {
      operator delete(v22);
      v22 = v23;
      *((_QWORD *)this + 7) = v23;
    }
    if ( !v22 )
    {
      v7 = -2147024882;
      v8 = 1331LL;
      goto LABEL_6;
    }
    v24 = 0;
    if ( *v14 )
    {
      while ( 1 )
      {
        v25 = 16LL * v24;
        v10 = CGameEntry::ReadDWORD(this, (unsigned int *)(v25 + *((_QWORD *)this + 7)));
        if ( v10 < 0 )
          break;
        v10 = CGameEntry::ReadDWORD(this, (unsigned int *)(v25 + *((_QWORD *)this + 7) + 4LL));
        if ( v10 < 0 )
        {
          v17 = 1337LL;
          goto LABEL_21;
        }
        v10 = CGameEntry::VerifyAvailable(this, *(_DWORD *)(*((_QWORD *)this + 7) + v25 + 4));
        if ( v10 < 0 )
        {
          v17 = 1339LL;
          goto LABEL_21;
        }
        *(_QWORD *)(*((_QWORD *)this + 7) + v25 + 8) = *((_QWORD *)this + 2);
        DWORD = CGameEntry::MarkConsumed(this, *(_DWORD *)(*((_QWORD *)this + 7) + v25 + 4), 1);
        if ( DWORD < 0 )
        {
          v4 = 1343LL;
          goto LABEL_3;
        }
        if ( ++v24 >= (unsigned __int16)*v14 )
          goto LABEL_43;
      }
      v17 = 1335LL;
      goto LABEL_21;
    }
  }
LABEL_43:
  if ( *v18 )
  {
    v26 = 16LL * (unsigned __int16)*v18;
    if ( !is_mul_ok((unsigned __int16)*v18, 0x10uLL) )
      v26 = -1LL;
    v27 = operator new[](v26, (const struct std::nothrow_t *)&std::nothrow);
    v28 = (void *)*((_QWORD *)this + 8);
    v29 = v27;
    if ( v27 != v28 )
    {
      operator delete(v28);
      v28 = v29;
      *((_QWORD *)this + 8) = v29;
    }
    if ( !v28 )
    {
      v7 = -2147024882;
      v8 = 1351LL;
      goto LABEL_6;
    }
    v30 = *v18 != 0;
    v31 = 0;
    while ( v30 )
    {
      v32 = 16LL * v31;
      *(_DWORD *)(*((_QWORD *)this + 8) + v32 + 4) = 0;
      *(_QWORD *)(*((_QWORD *)this + 8) + v32 + 8) = 0LL;
      v10 = CGameEntry::ReadDWORD(this, (unsigned int *)(v32 + *((_QWORD *)this + 8)));
      if ( v10 < 0 )
      {
        v17 = 1358LL;
        goto LABEL_21;
      }
      v33 = *((_QWORD *)this + 8);
      if ( (*(_DWORD *)(v33 + 16LL * v31) & 0x10000000) == 0 )
      {
        v10 = CGameEntry::ReadDWORD(this, (unsigned int *)(v32 + v33 + 4));
        if ( v10 < 0 )
        {
          v17 = 1364LL;
          goto LABEL_21;
        }
        v10 = CGameEntry::VerifyAvailable(this, *(_DWORD *)(*((_QWORD *)this + 8) + v32 + 4));
        if ( v10 < 0 )
        {
          v17 = 1366LL;
          goto LABEL_21;
        }
        *(_QWORD *)(*((_QWORD *)this + 8) + v32 + 8) = *((_QWORD *)this + 2);
        DWORD = CGameEntry::MarkConsumed(this, *(_DWORD *)(*((_QWORD *)this + 8) + v32 + 4), 1);
        if ( DWORD < 0 )
        {
          v4 = 1370LL;
          goto LABEL_3;
        }
      }
      v30 = ++v31 < (unsigned __int16)*v18;
    }
  }
  return 0LL;
}
