/*
 * XREFs of IopSymlinkProcessReparse @ 0x14057C25C
 * Callers:
 *     IopParseDevice @ 0x1405385E0 (IopParseDevice.c)
 * Callees:
 *     IopSymlinkGetECP @ 0x140100CB0 (IopSymlinkGetECP.c)
 *     IopSymlinkGetMostRecentlyUsedName @ 0x14013FF24 (IopSymlinkGetMostRecentlyUsedName.c)
 *     IopSymlinkRememberJunction @ 0x14057BD70 (IopSymlinkRememberJunction.c)
 *     IopGraftName @ 0x14057C2B8 (IopGraftName.c)
 *     IopFindMatchingComponentsLengthR @ 0x14069187C (IopFindMatchingComponentsLengthR.c)
 */

int __fastcall IopSymlinkProcessReparse(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  unsigned __int64 v4; // rax
  __int64 v7; // rdx
  __int64 MostRecentlyUsedName; // rax
  unsigned __int16 MatchingComponentsLengthR; // ax
  UNICODE_STRING *v11; // [rsp+30h] [rbp+8h] BYREF

  v4 = *(_QWORD *)(a1 + 56);
  if ( v4 - 2684354563u <= 0x16 && (v7 = 4194817LL, _bittest64(&v7, v4 - 2684354563u)) )
  {
    if ( !a4 )
      LODWORD(v4) = IopGraftName(a1, a2);
  }
  else if ( v4 > 2 )
  {
    LODWORD(v4) = IopSymlinkGetECP(*(struct _ECP_LIST **)(a1 + 112), (PVOID *)&v11);
    if ( (v4 & 0x80000000) != 0LL
      || (MostRecentlyUsedName = IopSymlinkGetMostRecentlyUsedName((__int64)v11),
          MatchingComponentsLengthR = IopFindMatchingComponentsLengthR(a2 + 88, MostRecentlyUsedName + 16),
          LODWORD(v4) = IopSymlinkRememberJunction(MatchingComponentsLengthR, a2, a1, v11),
          (v4 & 0x80000000) != 0LL) )
    {
      *(_DWORD *)(a1 + 48) = v4;
    }
  }
  return v4;
}
