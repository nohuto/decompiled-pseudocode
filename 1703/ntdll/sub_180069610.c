/*
 * XREFs of sub_180069610 @ 0x180069610
 * Callers:
 *     RtlInsertElementGenericTableFullAvl @ 0x180069260 (RtlInsertElementGenericTableFullAvl.c)
 *     sub_180069484 @ 0x180069484 (sub_180069484.c)
 * Callees:
 *     sub_1800696D0 @ 0x1800696D0 (sub_1800696D0.c)
 */

__int64 __fastcall sub_180069610(__int64 a1)
{
  char v1; // r9
  __int64 v2; // r10
  __int64 v3; // r10
  __int64 v4; // r11
  __int64 result; // rax
  int v6; // edi
  char v7; // r9
  __int64 v8; // r10
  __int64 v9; // rbx
  __int64 v10; // rcx
  char v11; // r9
  __int64 v12; // r10
  __int64 v13; // r11
  char v14; // dl

  v1 = *(_BYTE *)(a1 + 24);
  if ( v1 == 1 )
    v2 = *(_QWORD *)(a1 + 16);
  else
    v2 = *(_QWORD *)(a1 + 8);
  if ( *(_BYTE *)(v2 + 24) == v1 )
  {
    sub_1800696D0(v2);
    *(_BYTE *)(v3 + 24) = 0;
    *(_BYTE *)(v4 + 24) = 0;
    return 0LL;
  }
  v6 = -v1;
  if ( *(char *)(v2 + 24) == v6 )
  {
    if ( v1 == 1 )
      v9 = *(_QWORD *)(v2 + 8);
    else
      v9 = *(_QWORD *)(v2 + 16);
    sub_1800696D0(v9);
    sub_1800696D0(v10);
    *(_BYTE *)(v13 + 24) = 0;
    *(_BYTE *)(v12 + 24) = 0;
    if ( *(_BYTE *)(v9 + 24) == v11 )
    {
      *(_BYTE *)(v13 + 24) = -v11;
    }
    else
    {
      v14 = 0;
      if ( *(char *)(v9 + 24) == v6 )
        v14 = v11;
      *(_BYTE *)(v12 + 24) = v14;
    }
    *(_BYTE *)(v9 + 24) = 0;
    return 0LL;
  }
  sub_1800696D0(v2);
  result = 1LL;
  *(_BYTE *)(v8 + 24) = -v7;
  return result;
}
