/*
 * XREFs of ??4CSid@ATL@@QEAAAEAV01@AEBU_SID@@@Z @ 0x18003222C
 * Callers:
 *     ?Copy@CDacl@ATL@@AEAAXAEBU_ACL@@@Z @ 0x180032894 (-Copy@CDacl@ATL@@AEAAXAEBU_ACL@@@Z.c)
 * Callees:
 *     ?Empty@?$CSimpleStringT@G$0A@@ATL@@QEAAXXZ @ 0x18000FBE0 (-Empty@-$CSimpleStringT@G$0A@@ATL@@QEAAXXZ.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18001013C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?AtlHresultFromLastError@ATL@@YAJXZ @ 0x180034A34 (-AtlHresultFromLastError@ATL@@YAJXZ.c)
 */

__int64 __fastcall ATL::CSid::operator=(__int64 a1, void *a2)
{
  DWORD LengthSid; // eax
  int Error; // eax

  if ( !*(_BYTE *)(a1 + 76) || (void *)(a1 + 8) != a2 )
  {
    *(_DWORD *)(a1 + 80) = 7;
    ATL::CSimpleStringT<unsigned short,0>::Empty((int **)(a1 + 88));
    ATL::CSimpleStringT<unsigned short,0>::Empty((int **)(a1 + 96));
    ATL::CSimpleStringT<unsigned short,0>::Empty((int **)(a1 + 104));
    ATL::CSimpleStringT<unsigned short,0>::Empty((int **)(a1 + 112));
    *(_BYTE *)(a1 + 76) = 0;
    if ( !IsValidSid(a2) )
      ATL::AtlThrowImpl(-2147024809);
    LengthSid = GetLengthSid(a2);
    if ( LengthSid > 0x44 )
      ATL::AtlThrowImpl(-2147024809);
    *(_BYTE *)(a1 + 76) = 1;
    if ( !CopySid(LengthSid, (PSID)(a1 + 8), a2) )
    {
      Error = ATL::AtlHresultFromLastError();
      *(_BYTE *)(a1 + 76) = 0;
      ATL::AtlThrowImpl(Error);
    }
    *(_DWORD *)(a1 + 80) = 8;
  }
  return a1;
}
