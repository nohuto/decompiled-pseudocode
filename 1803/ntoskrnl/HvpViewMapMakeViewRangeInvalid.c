/*
 * XREFs of HvpViewMapMakeViewRangeInvalid @ 0x140706C7C
 * Callers:
 *     HvpViewMapPromoteRangeToMapping @ 0x140566C84 (HvpViewMapPromoteRangeToMapping.c)
 *     HvpViewMapShrinkStorage @ 0x140706E50 (HvpViewMapShrinkStorage.c)
 * Callees:
 *     CmSiProtectViewOfSection @ 0x1400719A8 (CmSiProtectViewOfSection.c)
 */

__int64 __fastcall HvpViewMapMakeViewRangeInvalid(SIZE_T a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  __int64 i; // rcx
  __int64 v8; // rax
  __int64 result; // rax
  ULONG v10; // [rsp+40h] [rbp+8h] BYREF

  CmSiProtectViewOfSection(a1, *(void ***)(a1 + 24), (void *)(a3 + a2[7] - a2[3]), a4 - a3, 0x80000001, &v10);
  for ( i = a3; i < a4; *((_BYTE *)a2 + ((unsigned __int64)(v8 - a2[3]) >> 12) + 64) = 0 )
  {
    v8 = i;
    i += 4096LL;
  }
  result = a2[6];
  if ( a2[5] == a3 )
  {
    if ( result == a4 )
    {
      a2[5] = 0LL;
      a2[6] = 0LL;
    }
    else
    {
      a2[5] = a4;
    }
  }
  else if ( result == a4 )
  {
    a2[6] = a3;
  }
  return result;
}
