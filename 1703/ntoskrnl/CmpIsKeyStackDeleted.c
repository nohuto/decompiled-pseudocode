/*
 * XREFs of CmpIsKeyStackDeleted @ 0x1404D4080
 * Callers:
 *     CmpDoWritethroughReparse @ 0x140448B84 (CmpDoWritethroughReparse.c)
 *     CmpCreateChild @ 0x1404D0388 (CmpCreateChild.c)
 *     CmpIsKeyDeleted @ 0x1404D4010 (CmpIsKeyDeleted.c)
 *     CmpGetSymbolicLinkTarget @ 0x1404FFA30 (CmpGetSymbolicLinkTarget.c)
 *     CmpDoParseKey @ 0x1405343E0 (CmpDoParseKey.c)
 *     CmpPromoteKey @ 0x140661A80 (CmpPromoteKey.c)
 * Callees:
 *     CmEqualTrans @ 0x1404CE678 (CmEqualTrans.c)
 *     CmListGetNextElement @ 0x1404D4148 (CmListGetNextElement.c)
 */

char __fastcall CmpIsKeyStackDeleted(__int64 a1, __int64 a2)
{
  __int16 v2; // ax
  __int64 v3; // r8
  __int64 NextElement; // rax
  __int64 v5; // r10
  __int64 v6; // r11
  int v7; // ecx
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
        goto LABEL_7;
      NextElement = CmListGetNextElement(*(_QWORD *)(a1 + 8) + 200LL, &i, 32LL);
      if ( !NextElement )
        goto LABEL_7;
      while ( 1 )
      {
        v7 = *(_DWORD *)(NextElement + 68);
        if ( v7 == 2 || v7 == 11 )
          break;
        NextElement = CmListGetNextElement(v6 + 200, &i, 32LL);
        if ( !NextElement )
          return NextElement;
      }
      if ( !CmEqualTrans(*(_QWORD *)(NextElement + 56), v5) )
      {
LABEL_7:
        LOBYTE(NextElement) = 0;
        return NextElement;
      }
      break;
    }
  }
  LOBYTE(NextElement) = 1;
  return NextElement;
}
