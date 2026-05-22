/*
 * XREFs of ??4CursorGlyphInfo@@QEAAAEAU0@$$QEAU0@@Z @ 0x180027F4C
 * Callers:
 *     ?Initialize@DWMHardwareCursor@@IEAAJXZ @ 0x1800277FC (-Initialize@DWMHardwareCursor@@IEAAJXZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800CAD08 (--3@YAXPEAX@Z.c)
 */

__int64 __fastcall CursorGlyphInfo::operator=(__int64 a1, __int64 a2)
{
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // rax

  if ( a1 != a2 )
  {
    v4 = *(_QWORD *)(a1 + 24);
    if ( v4 >= 0x10 )
    {
      v5 = *(_QWORD *)a1;
      if ( v4 + 1 >= 0x1000 )
      {
        if ( (v5 & 0x1F) != 0 || (v6 = *(_QWORD *)(v5 - 8), v6 >= v5) || (v5 = v5 - v6 - 8, v5 > 0x1F) )
        {
          _o__invalid_parameter_noinfo_noreturn(v5);
          JUMPOUT(0x180027FE3LL);
        }
        v5 = v6;
      }
      operator delete((void *)v5);
    }
    *(_QWORD *)(a1 + 16) = 0LL;
    *(_QWORD *)(a1 + 24) = 15LL;
    *(_BYTE *)a1 = 0;
    *(_OWORD *)a1 = *(_OWORD *)a2;
    *(_OWORD *)(a1 + 16) = *(_OWORD *)(a2 + 16);
    *(_QWORD *)(a2 + 16) = 0LL;
    *(_QWORD *)(a2 + 24) = 15LL;
    *(_BYTE *)a2 = 0;
  }
  *(_DWORD *)(a1 + 32) = *(_DWORD *)(a2 + 32);
  *(_DWORD *)(a1 + 36) = *(_DWORD *)(a2 + 36);
  return a1;
}
