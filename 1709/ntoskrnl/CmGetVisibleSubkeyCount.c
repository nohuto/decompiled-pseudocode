/*
 * XREFs of CmGetVisibleSubkeyCount @ 0x140472B8C
 * Callers:
 *     CmDeleteKey @ 0x140472480 (CmDeleteKey.c)
 *     CmpQueryKeyDataFromNode @ 0x140482830 (CmpQueryKeyDataFromNode.c)
 *     CmpQueryKeyDataFromCache @ 0x140569F50 (CmpQueryKeyDataFromCache.c)
 * Callees:
 *     CmEqualTrans @ 0x14056959C (CmEqualTrans.c)
 *     CmListGetNextElement @ 0x14056A314 (CmListGetNextElement.c)
 */

__int64 __fastcall CmGetVisibleSubkeyCount(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx
  __int64 v5; // rbp
  __int64 NextElement; // rax
  __int64 v7; // rdi
  int v8; // eax
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  v3 = *(_DWORD *)(a2 + 20) + *(_DWORD *)(a2 + 24);
  v9 = 0LL;
  if ( a1 && a3 )
  {
    v5 = a1 + 200;
    while ( 1 )
    {
      NextElement = CmListGetNextElement(v5, &v9, 32LL);
      v7 = NextElement;
      if ( !NextElement )
        break;
      if ( (unsigned __int8)CmEqualTrans(*(_QWORD *)(NextElement + 56)) )
      {
        v8 = *(_DWORD *)(v7 + 68);
        if ( v8 == 1 )
        {
          ++v3;
        }
        else if ( v8 == 3 )
        {
          --v3;
        }
      }
    }
  }
  return v3;
}
