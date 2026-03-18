/*
 * XREFs of CmpIsKeyStackDeleted @ 0x1404A5D2C
 * Callers:
 *     CmpIsKeyDeleted @ 0x1404A5C40 (CmpIsKeyDeleted.c)
 *     CmpGetSymbolicLinkTarget @ 0x1404A9C80 (CmpGetSymbolicLinkTarget.c)
 *     CmpCreateChild @ 0x140514170 (CmpCreateChild.c)
 *     CmpDoWritethroughReparse @ 0x1405529F0 (CmpDoWritethroughReparse.c)
 *     CmpDoParseKey @ 0x1405A7800 (CmpDoParseKey.c)
 *     CmpPromoteKey @ 0x1406EF198 (CmpPromoteKey.c)
 * Callees:
 *     CmEqualTrans @ 0x140498AE0 (CmEqualTrans.c)
 *     CmListGetNextElement @ 0x14054F160 (CmListGetNextElement.c)
 */

bool __fastcall CmpIsKeyStackDeleted(__int64 a1, __int64 a2)
{
  __int16 v2; // r8
  __int64 v4; // rdx
  __int64 v6; // r9
  __int64 v7; // r8
  __int64 NextElement; // rax
  __int64 v9; // r10
  int v10; // r11d
  int v11; // ecx
  __int64 i; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_WORD *)(a1 + 2);
  for ( i = 0LL; v2 >= 0; --v2 )
  {
    v4 = v2 >= 2 ? *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL * (v2 - 2)) : *(_QWORD *)(a1 + 8LL * v2 + 8);
    if ( *(_WORD *)(v4 + 58) && *(_BYTE *)(v4 + 57) == 1 )
      break;
    if ( *(_DWORD *)(v4 + 32) != -1 )
    {
      if ( a2 )
      {
        v6 = *(_QWORD *)(a1 + 8);
        v7 = 32LL;
        while ( 1 )
        {
          NextElement = CmListGetNextElement(v6 + 200, &i, v7);
          if ( !NextElement )
            break;
          v11 = *(_DWORD *)(NextElement + 68);
          if ( v11 == v10 || v11 == 11 )
            return CmEqualTrans(*(_QWORD *)(NextElement + 56), v9) != 0;
        }
      }
      return 0;
    }
  }
  return 1;
}
