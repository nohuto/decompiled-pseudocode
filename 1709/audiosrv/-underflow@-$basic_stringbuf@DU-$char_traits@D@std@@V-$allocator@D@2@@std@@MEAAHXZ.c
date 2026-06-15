/*
 * XREFs of ?underflow@?$basic_stringbuf@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@MEAAHXZ @ 0x18007DB20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall std::stringbuf::underflow(__int64 a1)
{
  unsigned __int64 v2; // rbx
  unsigned __int64 v4; // rbx
  __int64 v5; // rbx
  __int64 v6; // rax

  if ( std::streambuf::gptr(a1) )
  {
    v2 = std::streambuf::egptr(a1);
    if ( std::streambuf::gptr(a1) < v2 )
      return *(unsigned __int8 *)std::streambuf::gptr(a1);
    if ( (*(_BYTE *)(a1 + 112) & 4) == 0 )
    {
      if ( std::streambuf::pptr(a1) )
      {
        v4 = std::streambuf::pptr(a1);
        if ( v4 > std::streambuf::gptr(a1) || *(_QWORD *)(a1 + 104) > (unsigned __int64)std::streambuf::gptr(a1) )
        {
          if ( *(_QWORD *)(a1 + 104) < (unsigned __int64)std::streambuf::pptr(a1) )
            *(_QWORD *)(a1 + 104) = std::streambuf::pptr(a1);
          v5 = std::streambuf::gptr(a1);
          v6 = std::streambuf::eback(a1);
          std::streambuf::setg(a1, v6, v5, *(_QWORD *)(a1 + 104));
          return *(unsigned __int8 *)std::streambuf::gptr(a1);
        }
      }
    }
  }
  return 0xFFFFFFFFLL;
}
