/*
 * XREFs of KiVerifyXcpt11 @ 0x140818C50
 * Callers:
 *     <none>
 * Callees:
 *     KiVerifyXcptFilter @ 0x140818DB8 (KiVerifyXcptFilter.c)
 */

__int64 __fastcall KiVerifyXcpt11(__int64 a1)
{
  __int64 v1; // rdx
  __int64 result; // rax
  int v3; // eax

  v1 = a1;
  if ( *(_DWORD *)(a1 + 8) == 1 )
  {
    ++**(_DWORD **)a1;
    v3 = *(_DWORD *)(a1 + 12) + 12;
    *(_DWORD *)(a1 + 12) = v3;
    if ( v3 == 36 )
      KiVerifyXcptFilter(a1);
  }
  else
  {
    *(_DWORD *)(a1 + 12) = -1;
    *(_DWORD *)(a1 + 16) = 1;
  }
  result = *(int *)(v1 + 12);
  *(_QWORD *)(v1 + 24) += result;
  return result;
}
