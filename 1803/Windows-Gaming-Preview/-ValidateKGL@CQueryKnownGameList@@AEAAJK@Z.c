/*
 * XREFs of ?ValidateKGL@CQueryKnownGameList@@AEAAJK@Z @ 0x18003ECE0
 * Callers:
 *     ?RuntimeClassInitialize@CQueryKnownGameList@@QEAAJPEBG@Z @ 0x18003D618 (-RuntimeClassInitialize@CQueryKnownGameList@@QEAAJPEBG@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002F8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?StrCmpInsensitive@KnownGameList@@YAHPEBGK0K@Z @ 0x18004073C (-StrCmpInsensitive@KnownGameList@@YAHPEBGK0K@Z.c)
 *     __security_check_cookie @ 0x180041F40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180043940 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CQueryKnownGameList::ValidateKGL(CQueryKnownGameList *this, unsigned int a2)
{
  __int64 v4; // rdx
  unsigned int v5; // ebx
  unsigned int v7; // edx
  unsigned int v8; // ecx
  unsigned int v9; // eax
  unsigned int v10; // r14d
  unsigned int v11; // esi
  int v12; // eax
  unsigned int v13; // ebp
  __int64 v14; // rax
  unsigned int v15[2]; // [rsp+20h] [rbp-48h] BYREF
  unsigned int v16; // [rsp+28h] [rbp-40h]
  unsigned int v17; // [rsp+2Ch] [rbp-3Ch]
  __int64 v18; // [rsp+30h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  if ( !*((_DWORD *)this + 10) )
  {
    v4 = 801LL;
LABEL_3:
    v5 = -2147024809;
LABEL_4:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v4,
      (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      (const char *)v5);
    return v5;
  }
  v7 = *((_DWORD *)this + 11);
  if ( v7 >= a2 )
  {
    v4 = 802LL;
    goto LABEL_3;
  }
  v8 = *((_DWORD *)this + 12);
  if ( v8 >= a2 )
  {
    v4 = 803LL;
    goto LABEL_3;
  }
  if ( *((_DWORD *)this + 9) == 5 )
  {
    if ( *((_DWORD *)this + 13) != 16 )
    {
      v4 = 807LL;
      goto LABEL_3;
    }
  }
  else
  {
    if ( *((_DWORD *)this + 13) < 0x10u )
    {
      v4 = 812LL;
      goto LABEL_3;
    }
    if ( *((_DWORD *)this + 9) < 2u )
      goto LABEL_17;
  }
  if ( *((_DWORD *)this + 15) > 2u )
  {
    v4 = 818LL;
    goto LABEL_3;
  }
LABEL_17:
  if ( *((_DWORD *)this + 9) >= 3u && (unsigned __int16)(*((_WORD *)this + 33) - 1) > 8u )
  {
    v4 = 824LL;
    goto LABEL_3;
  }
  v9 = v7 + v8;
  if ( v7 + v8 < v8 )
  {
    v4 = 827LL;
    v5 = v9 < v8 ? 0x80070216 : 0;
    goto LABEL_4;
  }
  if ( v9 >= a2 )
  {
    v4 = 828LL;
    goto LABEL_3;
  }
  v10 = v8 / *((_DWORD *)this + 13);
  if ( v8 % *((_DWORD *)this + 13) )
  {
    v4 = 829LL;
    goto LABEL_3;
  }
  v11 = 0;
  if ( !v10 )
    return 0LL;
  while ( 1 )
  {
    v12 = (*(__int64 (__fastcall **)(CQueryKnownGameList *, _QWORD, unsigned int *))(*(_QWORD *)this + 88LL))(
            this,
            v11,
            v15);
    v13 = v12;
    if ( v12 < 0 )
      break;
    if ( v16 >= a2 )
    {
      v4 = 842LL;
      goto LABEL_3;
    }
    if ( v17 >= a2 )
    {
      v4 = 843LL;
      goto LABEL_3;
    }
    if ( v17 + v16 < v16 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x34C,
        (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
        (const char *)0x80070216LL);
      return 2147942934LL;
    }
    if ( v17 + v16 > a2 )
    {
      v4 = 845LL;
      goto LABEL_3;
    }
    if ( !v11 )
      goto LABEL_35;
    v14 = *(_QWORD *)v15;
    if ( LOWORD(v15[0]) )
    {
      if ( (int)KnownGameList::StrCmpInsensitive(
                  (KnownGameList *)&v18,
                  (const unsigned __int16 *)4,
                  (unsigned int)v15,
                  (const unsigned __int16 *)4,
                  v15[0]) >= 0 )
      {
        v4 = 852LL;
        goto LABEL_3;
      }
LABEL_35:
      v14 = *(_QWORD *)v15;
    }
    ++v11;
    v18 = v14;
    if ( v11 >= v10 )
      return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x348,
    (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
    (const char *)(unsigned int)v12);
  return v13;
}
