/*
 * XREFs of CmGetKCBCacheSecurity @ 0x1404FCF10
 * Callers:
 *     CmpSetSecurityDescriptorInfo @ 0x1404BF12C (CmpSetSecurityDescriptorInfo.c)
 *     CmpGetSecurityCacheEntryForKcbStack @ 0x1404FCEA0 (CmpGetSecurityCacheEntryForKcbStack.c)
 * Callees:
 *     CmListGetPrevElement @ 0x140451764 (CmListGetPrevElement.c)
 *     CmEqualTrans @ 0x1404CE678 (CmEqualTrans.c)
 */

__int64 __fastcall CmGetKCBCacheSecurity(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  __int64 v5; // rbp
  __int64 PrevElement; // rax
  __int64 v7; // rbx
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a1 + 80);
  if ( a2 )
  {
    v8 = 0LL;
    v5 = a1 + 200;
    while ( 1 )
    {
      PrevElement = CmListGetPrevElement(v5, &v8);
      v7 = PrevElement;
      if ( !PrevElement )
        break;
      if ( CmEqualTrans(*(_QWORD *)(PrevElement + 56), a2) && *(_DWORD *)(v7 + 68) == 9 )
        return *(_QWORD *)(v7 + 88);
    }
  }
  return v2;
}
