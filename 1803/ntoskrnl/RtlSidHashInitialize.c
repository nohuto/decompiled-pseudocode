/*
 * XREFs of RtlSidHashInitialize @ 0x14005C860
 * Callers:
 *     SepCreateTokenEx @ 0x14009FEE4 (SepCreateTokenEx.c)
 *     SepTokenFromAccessInformation @ 0x1400D48E4 (SepTokenFromAccessInformation.c)
 *     SepDuplicateToken @ 0x1404C28D0 (SepDuplicateToken.c)
 *     SepFilterToken @ 0x140542044 (SepFilterToken.c)
 *     SepSetTokenCapabilities @ 0x140543800 (SepSetTokenCapabilities.c)
 *     SepCopyTokenAccessInformation @ 0x14054405C (SepCopyTokenAccessInformation.c)
 *     SepCreateClaimAttributes @ 0x14054487C (SepCreateClaimAttributes.c)
 *     CmpBuildAdminInformation @ 0x1406F46D0 (CmpBuildAdminInformation.c)
 *     SepDuplicateClaimAttributes @ 0x140794980 (SepDuplicateClaimAttributes.c)
 * Callees:
 *     memset @ 0x1401BCC40 (memset.c)
 */

__int64 __fastcall RtlSidHashInitialize(__int64 *a1, unsigned int a2, _QWORD *a3)
{
  __int64 v6; // rax
  __int64 v7; // r9
  __int64 v8; // rdx
  unsigned int v9; // r8d
  __int64 v10; // rcx

  if ( !a3 )
    return 3221225485LL;
  memset(a3, 0, 0x110uLL);
  if ( a1 && a2 )
  {
    a3[1] = a1;
    *(_DWORD *)a3 = a2;
    if ( a2 > 0x40 )
      a2 = 64;
    v6 = 1LL;
    v7 = a2;
    do
    {
      v8 = *a1;
      a1 += 2;
      v9 = *(unsigned __int8 *)(v8 + 4LL * *(unsigned __int8 *)(v8 + 1) + 4);
      v10 = *(_BYTE *)(v8 + 4LL * *(unsigned __int8 *)(v8 + 1) + 4) & 0xF;
      a3[v10 + 2] |= v6;
      a3[(v9 >> 4) + 18] |= v6;
      v6 = __ROL8__(v6, 1);
      --v7;
    }
    while ( v7 );
  }
  return 0LL;
}
