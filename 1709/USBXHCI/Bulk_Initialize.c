/*
 * XREFs of Bulk_Initialize @ 0x1C005F0C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Bulk_Initialize(__int64 a1)
{
  __int64 v1; // r8
  __int64 v2; // rdx
  __int64 v3; // rax

  *(_QWORD *)(a1 + 376) = a1 + 368;
  *(_QWORD *)(a1 + 368) = a1 + 368;
  *(_QWORD *)(a1 + 392) = a1 + 384;
  *(_QWORD *)(a1 + 384) = a1 + 384;
  *(_QWORD *)(a1 + 408) = a1 + 400;
  *(_QWORD *)(a1 + 400) = a1 + 400;
  v1 = *(_QWORD *)(a1 + 40);
  *(_BYTE *)(a1 + 320) = (*(_QWORD *)(v1 + 272) & 0x20000LL) == 0
                      && (v2 = *(_QWORD *)(a1 + 56), (*(_WORD *)(v2 + 100) & 0x7FFu) >= 8)
                      && *(char *)(v2 + 98) >= 0;
  v3 = *(_QWORD *)(v1 + 272);
  if ( (v3 & 0x8000000000LL) != 0 || (v3 & 8) != 0 )
    *(_DWORD *)(a1 + 344) = 1;
  else
    *(_DWORD *)(a1 + 344) = 5;
  return 0LL;
}
