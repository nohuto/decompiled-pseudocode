/*
 * XREFs of ?CompleteInitialization@CGameEntry@@AEAAJXZ @ 0x18003DBA8
 * Callers:
 *     ?RuntimeClassInitialize@CGameEntry@@QEAAJPEAUIGameEntry@KnownGameList@@@Z @ 0x18003D72C (-RuntimeClassInitialize@CGameEntry@@QEAAJPEAUIGameEntry@KnownGameList@@@Z.c)
 *     ?GetNextEntry@CEnumerateEntries@@UEAAJPEAPEAUIGameEntry@KnownGameList@@@Z @ 0x18003E310 (-GetNextEntry@CEnumerateEntries@@UEAAJPEAPEAUIGameEntry@KnownGameList@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002DB4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002E30 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?MarkConsumed@CGameEntry@@AEAAJK_N@Z @ 0x18003DFE4 (-MarkConsumed@CGameEntry@@AEAAJK_N@Z.c)
 *     ?VerifyAvailable@CGameEntry@@AEAAJK@Z @ 0x18003E094 (-VerifyAvailable@CGameEntry@@AEAAJK@Z.c)
 *     ?ReadUShort@CGameEntry@@AEAAJPEAG_N@Z @ 0x18003E0C8 (-ReadUShort@CGameEntry@@AEAAJPEAG_N@Z.c)
 *     ?ReadDWORD@CGameEntry@@AEAAJPEAK@Z @ 0x18003E144 (-ReadDWORD@CGameEntry@@AEAAJPEAK@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800415E4 (--3@YAXPEAX_K@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180041990 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall CGameEntry::CompleteInitialization(CGameEntry *this)
{
  int DWORD; // edi
  bool v3; // r8
  __int64 v4; // rdx
  unsigned __int64 v6; // rcx
  unsigned int v7; // ebx
  __int64 v8; // rdx
  unsigned __int16 *v9; // rsi
  unsigned int v10; // edx
  bool v11; // r8
  _WORD *v12; // r14
  bool v13; // r8
  unsigned __int64 v14; // rcx
  __int64 v15; // rdx
  _WORD *v16; // r15
  int UShort; // esi
  __int64 v18; // rdx
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rax
  void *v21; // rax
  unsigned __int64 v22; // rdx
  void *v23; // rcx
  unsigned int v24; // ebp
  __int64 v25; // rdi
  unsigned __int64 v26; // rax
  void *v27; // rax
  unsigned __int64 v28; // rdx
  void *v29; // rcx
  bool v30; // cf
  unsigned int i; // esi
  __int64 v32; // rdi
  int v33; // ebp
  __int64 v34; // rax
  __int64 v35; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  DWORD = CGameEntry::ReadDWORD(this, (unsigned int *)this + 9);
  if ( DWORD < 0 )
  {
    v4 = 1284LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v4,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\knowngamelist.cpp",
      (const char *)(unsigned int)DWORD);
    return (unsigned int)DWORD;
  }
  v6 = *((unsigned int *)this + 9);
  if ( v6 <= (unsigned __int64)*((unsigned int *)this + 8) + 4 )
  {
    if ( (unsigned int)v6 < 4 )
    {
      v15 = 1292LL;
      *((_DWORD *)this + 8) = -1;
      goto LABEL_66;
    }
    v9 = (unsigned __int16 *)((char *)this + 48);
    *((_DWORD *)this + 8) = v6 - 4;
    DWORD = CGameEntry::ReadUShort(this, (unsigned __int16 *)this + 24, v3);
    if ( DWORD < 0 )
    {
      v4 = 1296LL;
      goto LABEL_3;
    }
    DWORD = CGameEntry::VerifyAvailable(this, *v9);
    if ( DWORD < 0 )
    {
      v4 = 1298LL;
      goto LABEL_3;
    }
    v10 = *v9;
    *((_QWORD *)this + 5) = *((_QWORD *)this + 2);
    DWORD = CGameEntry::MarkConsumed(this, v10, 1);
    if ( DWORD < 0 )
    {
      v4 = 1302LL;
      goto LABEL_3;
    }
    v12 = (_WORD *)((char *)this + 50);
    DWORD = CGameEntry::ReadUShort(this, (unsigned __int16 *)this + 25, v11);
    if ( DWORD < 0 )
    {
      v4 = 1304LL;
      goto LABEL_3;
    }
    v14 = 12LL * (unsigned __int16)*v12;
    if ( v14 > 0xFFFFFFFF )
    {
      v15 = 1305LL;
LABEL_66:
      v7 = -2147024362;
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)v15,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\knowngamelist.cpp",
        (const char *)0x80070216LL);
      return v7;
    }
    if ( (unsigned int)v14 > *((_DWORD *)this + 8) )
    {
      v7 = -2147024809;
      v8 = 1306LL;
      goto LABEL_6;
    }
    v16 = (_WORD *)((char *)this + 52);
    UShort = CGameEntry::ReadUShort(this, (unsigned __int16 *)this + 26, v13);
    if ( UShort >= 0 )
    {
      v19 = 4LL * (unsigned __int16)*v16;
      if ( v19 > 0xFFFFFFFF )
      {
        v15 = 1309LL;
        goto LABEL_66;
      }
      if ( (unsigned int)v19 > *((_DWORD *)this + 8) )
      {
        v7 = -2147024809;
        v8 = 1310LL;
        goto LABEL_6;
      }
      if ( !*v12 )
        goto LABEL_40;
      v20 = 16LL * (unsigned __int16)*v12;
      if ( !is_mul_ok((unsigned __int16)*v12, 0x10uLL) )
        v20 = -1LL;
      v21 = operator new[](v20, (const struct std::nothrow_t *)&std::nothrow);
      v23 = (void *)*((_QWORD *)this + 7);
      *((_QWORD *)this + 7) = v21;
      if ( v23 )
        operator delete(v23, v22);
      if ( !*((_QWORD *)this + 7) )
      {
        v7 = -2147024882;
        v8 = 1316LL;
        goto LABEL_6;
      }
      v24 = 0;
      if ( !*v12 )
      {
LABEL_40:
        if ( !*v16 )
          return 0LL;
        v26 = 16LL * (unsigned __int16)*v16;
        if ( !is_mul_ok((unsigned __int16)*v16, 0x10uLL) )
          v26 = -1LL;
        v27 = operator new[](v26, (const struct std::nothrow_t *)&std::nothrow);
        v29 = (void *)*((_QWORD *)this + 8);
        *((_QWORD *)this + 8) = v27;
        if ( v29 )
          operator delete(v29, v28);
        if ( *((_QWORD *)this + 8) )
        {
          v30 = *v16 != 0;
          for ( i = 0; ; v30 = i < (unsigned __int16)*v16 )
          {
            if ( !v30 )
              return 0LL;
            v32 = 16LL * i;
            *(_DWORD *)(*((_QWORD *)this + 8) + v32 + 4) = 0;
            *(_QWORD *)(*((_QWORD *)this + 8) + v32 + 8) = 0LL;
            v33 = CGameEntry::ReadDWORD(this, (unsigned int *)(v32 + *((_QWORD *)this + 8)));
            if ( v33 < 0 )
            {
              v35 = 1343LL;
              goto LABEL_63;
            }
            v34 = *((_QWORD *)this + 8);
            if ( (*(_DWORD *)(v34 + 16LL * i) & 0x10000000) == 0 )
            {
              v33 = CGameEntry::ReadDWORD(this, (unsigned int *)(v32 + v34 + 4));
              if ( v33 < 0 )
              {
                v35 = 1349LL;
                goto LABEL_63;
              }
              v33 = CGameEntry::VerifyAvailable(this, *(_DWORD *)(*((_QWORD *)this + 8) + v32 + 4));
              if ( v33 < 0 )
              {
                v35 = 1351LL;
LABEL_63:
                wil::details::in1diag3::Return_Hr_NoOriginate(
                  retaddr,
                  (void *)v35,
                  (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\knowngamelist.cpp",
                  (const char *)(unsigned int)v33);
                return (unsigned int)v33;
              }
              *(_QWORD *)(*((_QWORD *)this + 8) + v32 + 8) = *((_QWORD *)this + 2);
              DWORD = CGameEntry::MarkConsumed(this, *(_DWORD *)(*((_QWORD *)this + 8) + v32 + 4), 1);
              if ( DWORD < 0 )
              {
                v4 = 1355LL;
                goto LABEL_3;
              }
            }
            ++i;
          }
        }
        v7 = -2147024882;
        v8 = 1336LL;
        goto LABEL_6;
      }
      while ( 1 )
      {
        v25 = 16LL * v24;
        UShort = CGameEntry::ReadDWORD(this, (unsigned int *)(v25 + *((_QWORD *)this + 7)));
        if ( UShort < 0 )
          break;
        UShort = CGameEntry::ReadDWORD(this, (unsigned int *)(v25 + *((_QWORD *)this + 7) + 4LL));
        if ( UShort < 0 )
        {
          v18 = 1322LL;
          goto LABEL_22;
        }
        UShort = CGameEntry::VerifyAvailable(this, *(_DWORD *)(*((_QWORD *)this + 7) + v25 + 4));
        if ( UShort < 0 )
        {
          v18 = 1324LL;
          goto LABEL_22;
        }
        *(_QWORD *)(*((_QWORD *)this + 7) + v25 + 8) = *((_QWORD *)this + 2);
        DWORD = CGameEntry::MarkConsumed(this, *(_DWORD *)(*((_QWORD *)this + 7) + v25 + 4), 1);
        if ( DWORD < 0 )
        {
          v4 = 1328LL;
          goto LABEL_3;
        }
        if ( ++v24 >= (unsigned __int16)*v12 )
          goto LABEL_40;
      }
      v18 = 1320LL;
    }
    else
    {
      v18 = 1308LL;
    }
LABEL_22:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v18,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\knowngamelist.cpp",
      (const char *)(unsigned int)UShort);
    return (unsigned int)UShort;
  }
  v7 = -2147483637;
  v8 = 1288LL;
LABEL_6:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v8,
    (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\knowngamelist.cpp",
    (const char *)v7);
  return v7;
}
