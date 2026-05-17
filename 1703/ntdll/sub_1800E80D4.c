/*
 * XREFs of sub_1800E80D4 @ 0x1800E80D4
 * Callers:
 *     RtlAddAccessAllowedObjectAce @ 0x1800E7640 (RtlAddAccessAllowedObjectAce.c)
 *     RtlAddAccessDeniedObjectAce @ 0x1800E76A0 (RtlAddAccessDeniedObjectAce.c)
 *     RtlAddAuditAccessObjectAce @ 0x1800E7910 (RtlAddAuditAccessObjectAce.c)
 * Callees:
 *     RtlValidAcl @ 0x180044810 (RtlValidAcl.c)
 *     RtlValidSid @ 0x1800449F0 (RtlValidSid.c)
 *     RtlFirstFreeAce @ 0x180049B80 (RtlFirstFreeAce.c)
 *     RtlCopySid @ 0x18004C1E0 (RtlCopySid.c)
 */

__int64 sub_1800E80D4(__int64 a1, int a2, int a3, int a4, _OWORD *a5, _OWORD *a6, unsigned __int8 *a7, char a8, ...)
{
  int v12; // esi
  __int64 result; // rax
  unsigned int v14; // eax
  int v15; // eax
  unsigned __int16 v16; // dx
  __int64 v17; // r8
  _OWORD *v18; // rdx
  _QWORD v19[7]; // [rsp+20h] [rbp-38h] BYREF

  v12 = 0;
  if ( !RtlValidSid(a7) )
    return 3221225592LL;
  if ( *(_BYTE *)a1 > 4u || a2 != 4 )
    return 3221225561LL;
  v14 = a3 & 0xFFFFFFE0;
  if ( (a3 & 0xFFFFFFE0) != 0 )
  {
    if ( a8 == 7 )
      v14 = a3 & 0xFFFFFF20;
    if ( v14 )
      return 3221225485LL;
  }
  if ( !RtlValidAcl(a1) || !RtlFirstFreeAce(a1, v19) )
    return 3221225591LL;
  v15 = a7[1];
  v16 = 4 * v15 + 20;
  if ( a5 )
  {
    v12 = 1;
    v16 = 4 * v15 + 36;
  }
  if ( a6 )
  {
    v12 |= 2u;
    v16 += 16;
  }
  v17 = v19[0];
  if ( !v19[0] || v19[0] + (unsigned __int64)v16 > a1 + (unsigned __int64)*(unsigned __int16 *)(a1 + 2) )
    return 3221225625LL;
  *(_WORD *)(v19[0] + 2LL) = v16;
  v18 = (_OWORD *)(v17 + 12);
  *(_BYTE *)(v17 + 1) = a3;
  *(_BYTE *)v17 = a8;
  *(_DWORD *)(v17 + 4) = a4;
  *(_DWORD *)(v17 + 8) = v12;
  if ( a5 )
  {
    *v18 = *a5;
    v18 = (_OWORD *)(v17 + 28);
  }
  if ( a6 )
    *v18++ = *a6;
  RtlCopySid(4 * v15 + 8, v18, a7);
  ++*(_WORD *)(a1 + 4);
  result = 0LL;
  *(_BYTE *)a1 = 4;
  return result;
}
