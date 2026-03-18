/*
 * XREFs of CmpIsKeyStackDeleted @ 0x140569C20
 * Callers:
 *     CmpCreateChild @ 0x140475B90 (CmpCreateChild.c)
 *     CmpGetSymbolicLinkTarget @ 0x14047EAB0 (CmpGetSymbolicLinkTarget.c)
 *     CmpDoParseKey @ 0x1404B47B0 (CmpDoParseKey.c)
 *     CmpIsKeyDeleted @ 0x140569BB0 (CmpIsKeyDeleted.c)
 *     CmpDoWritethroughReparse @ 0x140581B10 (CmpDoWritethroughReparse.c)
 *     CmpPromoteKey @ 0x14068AD7C (CmpPromoteKey.c)
 * Callees:
 *     CmEqualTrans @ 0x14056959C (CmEqualTrans.c)
 *     CmListGetNextElement @ 0x14056A314 (CmListGetNextElement.c)
 */

bool __fastcall CmpIsKeyStackDeleted(__int64 a1, __int64 a2)
{
  __int16 v2; // ax
  __int64 v3; // r8
  __int64 NextElement; // rax
  __int64 v6; // r9
  __int64 v7; // r10
  int v8; // ecx
  __int64 i; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_WORD *)(a1 + 2);
  for ( i = 0LL; v2 >= 0; --v2 )
  {
    v3 = v2 >= 2 ? *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL * (v2 - 2)) : *(_QWORD *)(a1 + 8LL * v2 + 8);
    if ( *(_WORD *)(v3 + 58) && *(_BYTE *)(v3 + 57) == 1 )
      break;
    if ( *(_DWORD *)(v3 + 32) != -1 )
    {
      if ( !a2 )
        return 0;
      NextElement = CmListGetNextElement(*(_QWORD *)(a1 + 8) + 200LL, &i, 32LL);
      if ( !NextElement )
        return 0;
      while ( 1 )
      {
        v8 = *(_DWORD *)(NextElement + 68);
        if ( v8 == 2 || v8 == 11 )
          break;
        NextElement = CmListGetNextElement(v6 + 200, &i, 32LL);
        if ( !NextElement )
          return 0;
      }
      return CmEqualTrans(*(_QWORD *)(NextElement + 56), v7) != 0;
    }
  }
  return 1;
}
