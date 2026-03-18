/*
 * XREFs of CmGetKCBCacheSecurity @ 0x140482BA4
 * Callers:
 *     CmpSetSecurityDescriptorInfo @ 0x140476DE8 (CmpSetSecurityDescriptorInfo.c)
 *     CmpGetSecurityCacheEntryForKcbStack @ 0x140482B3C (CmpGetSecurityCacheEntryForKcbStack.c)
 * Callees:
 *     CmEqualTrans @ 0x14056959C (CmEqualTrans.c)
 *     CmListGetPrevElement @ 0x14056A340 (CmListGetPrevElement.c)
 */

__int64 __fastcall CmGetKCBCacheSecurity(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdi
  __int64 v6; // rbp
  __int64 PrevElement; // rax
  __int64 v8; // rbx
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  v4 = *(_QWORD *)(a1 + 80);
  if ( a2 )
  {
    v9 = 0LL;
    v6 = a1 + 200;
    while ( 1 )
    {
      PrevElement = CmListGetPrevElement(v6, &v9, a3, a4);
      v8 = PrevElement;
      if ( !PrevElement )
        break;
      if ( (unsigned __int8)CmEqualTrans(*(_QWORD *)(PrevElement + 56)) && *(_DWORD *)(v8 + 68) == 9 )
        return *(_QWORD *)(v8 + 88);
    }
  }
  return v4;
}
