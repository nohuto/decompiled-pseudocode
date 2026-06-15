/*
 * XREFs of ?str@?$basic_stringbuf@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@XZ @ 0x18001A510
 * Callers:
 *     ?str@?$basic_stringstream@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@XZ @ 0x18001A38C (-str@-$basic_stringstream@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEBA-AV-$basic_string@DU.c)
 * Callees:
 *     __security_check_cookie @ 0x180048BE0 (__security_check_cookie.c)
 *     memcpy_0 @ 0x180057FA0 (memcpy_0.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@$$QEAV01@@Z @ 0x18007AE3C (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@$$QEAV01@@Z.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD_K@Z @ 0x18007AEAC (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD_K@Z.c)
 *     ?_Tidy_deallocate_only@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAXXZ @ 0x18007AEF8 (-_Tidy_deallocate_only@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAXXZ.c)
 *     ?_Copy@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAX_K@Z @ 0x18007FD1C (-_Copy@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall std::stringbuf::str(__int64 a1, _QWORD *a2)
{
  unsigned __int64 v4; // rdi
  size_t v5; // rdi
  const void *v6; // r14
  unsigned __int64 v7; // rsi
  _QWORD *v8; // rcx
  _QWORD *v9; // rax
  size_t v10; // rdi
  __int64 v12; // rdi
  __int64 v13; // rsi
  __int64 v14; // rax
  _QWORD Src[2]; // [rsp+30h] [rbp-30h] BYREF
  size_t v16; // [rsp+40h] [rbp-20h]
  unsigned __int64 v17; // [rsp+48h] [rbp-18h]

  if ( (*(_BYTE *)(a1 + 112) & 2) != 0 || !std::streambuf::pptr(a1) )
  {
    if ( (*(_BYTE *)(a1 + 112) & 4) != 0 || !std::streambuf::gptr(a1) )
    {
      v16 = 0LL;
      v17 = 15LL;
      LOBYTE(Src[0]) = 0;
    }
    else
    {
      v12 = std::streambuf::eback(a1);
      v13 = std::streambuf::egptr(a1) - v12;
      v14 = std::streambuf::eback(a1);
      std::string::string(Src, v14, v13);
    }
    std::string::string(a2, Src);
    std::string::_Tidy_deallocate_only(Src);
  }
  else
  {
    v4 = *(_QWORD *)(a1 + 104);
    if ( v4 < std::streambuf::pptr(a1) )
      v4 = std::streambuf::pptr(a1);
    v5 = v4 - std::streambuf::pbase(a1);
    v6 = (const void *)std::streambuf::pbase(a1);
    v16 = 0LL;
    v7 = 15LL;
    v17 = 15LL;
    LOBYTE(Src[0]) = 0;
    if ( v5 )
    {
      if ( v5 <= 0xF || (std::string::_Copy(Src), v8 = (_QWORD *)Src[0], v17 < 0x10) )
        v8 = Src;
      memcpy_0(v8, v6, v5);
      v16 = v5;
      if ( v17 >= 0x10 )
        v9 = (_QWORD *)Src[0];
      else
        v9 = Src;
      *((_BYTE *)v9 + v5) = 0;
      v7 = v17;
      v10 = v16;
    }
    else
    {
      v10 = 0LL;
      v16 = 0LL;
      LOBYTE(Src[0]) = 0;
    }
    a2[2] = 0LL;
    a2[3] = 15LL;
    *(_BYTE *)a2 = 0;
    if ( v7 >= 0x10 )
      *a2 = Src[0];
    else
      memcpy_0(a2, Src, v10 + 1);
    a2[2] = v10;
    a2[3] = v7;
  }
  return a2;
}
