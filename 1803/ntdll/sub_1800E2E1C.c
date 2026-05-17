/*
 * XREFs of sub_1800E2E1C @ 0x1800E2E1C
 * Callers:
 *     RtlAddAccessAllowedObjectAce @ 0x1800E2350 (RtlAddAccessAllowedObjectAce.c)
 *     RtlAddAccessDeniedObjectAce @ 0x1800E23B0 (RtlAddAccessDeniedObjectAce.c)
 *     RtlAddAuditAccessObjectAce @ 0x1800E2630 (RtlAddAuditAccessObjectAce.c)
 * Callees:
 *     RtlFirstFreeAce @ 0x180037550 (RtlFirstFreeAce.c)
 *     RtlValidAcl @ 0x1800375A0 (RtlValidAcl.c)
 *     RtlValidSid @ 0x180037790 (RtlValidSid.c)
 *     RtlCopySid @ 0x18006C490 (RtlCopySid.c)
 */

__int64 sub_1800E2E1C(__int64 a1, int a2, int a3, int a4, _OWORD *a5, _OWORD *a6, unsigned __int8 *a7, char a8, ...)
{
  __int64 result; // rax
  unsigned int v13; // eax
  __int64 v14; // rdx
  unsigned int v15; // r10d
  unsigned __int16 v16; // cx
  unsigned __int16 v17; // r8
  int v18; // r9d
  _OWORD *v19; // rdx
  _QWORD v20[7]; // [rsp+20h] [rbp-38h] BYREF

  if ( !RtlValidSid(a7) )
    return 3221225592LL;
  if ( *(_BYTE *)a1 > 4u || a2 != 4 )
    return 3221225561LL;
  if ( (a3 & 0xFFFFFFE0) != 0 )
  {
    v13 = a3 & 0xFFFFFF20;
    if ( a8 != 7 )
      v13 = a3 & 0xFFFFFFE0;
    if ( v13 )
      return 3221225485LL;
  }
  if ( !RtlValidAcl(a1) || !RtlFirstFreeAce(a1, v20) )
    return 3221225591LL;
  v14 = v20[0];
  v15 = 4 * a7[1] + 8;
  v16 = 4 * a7[1] + 36;
  if ( !a5 )
    v16 = 4 * a7[1] + 20;
  v17 = v16 + 16;
  if ( !a6 )
    v17 = v16;
  v18 = (a5 != 0LL) | 2;
  if ( !a6 )
    v18 = a5 != 0LL;
  if ( !v20[0] || v20[0] + (unsigned __int64)v17 > a1 + (unsigned __int64)*(unsigned __int16 *)(a1 + 2) )
    return 3221225625LL;
  *(_BYTE *)(v20[0] + 1LL) = a3;
  *(_BYTE *)v14 = a8;
  *(_WORD *)(v14 + 2) = v17;
  *(_DWORD *)(v14 + 4) = a4;
  *(_DWORD *)(v14 + 8) = v18;
  v19 = (_OWORD *)(v14 + 12);
  if ( a5 )
    *v19++ = *a5;
  if ( a6 )
    *v19++ = *a6;
  RtlCopySid(v15, v19, a7);
  ++*(_WORD *)(a1 + 4);
  result = 0LL;
  *(_BYTE *)a1 = 4;
  return result;
}
