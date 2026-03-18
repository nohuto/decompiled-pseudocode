/*
 * XREFs of ACPIModuleGetSpareProperties @ 0x1C007E9E0
 * Callers:
 *     <none>
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x1C0002AF0 (AMLIDereferenceHandleEx.c)
 *     AMLIGetNamedChild @ 0x1C0002B24 (AMLIGetNamedChild.c)
 *     memset @ 0x1C0004540 (memset.c)
 *     AMLIFreeDataBuffs @ 0x1C0043994 (AMLIFreeDataBuffs.c)
 *     ACPIEvaluateSpareDsm @ 0x1C007E80C (ACPIEvaluateSpareDsm.c)
 *     ACPIQuerySpareDsm @ 0x1C007EBA4 (ACPIQuerySpareDsm.c)
 */

__int64 __fastcall ACPIModuleGetSpareProperties(__int64 a1, _DWORD *a2)
{
  __int64 *v4; // rsi
  int v5; // ebx
  _WORD v7[28]; // [rsp+20h] [rbp-38h] BYREF
  char v8; // [rsp+60h] [rbp+8h] BYREF

  *a2 = 0;
  memset(v7, 0, 0x28uLL);
  v4 = AMLIGetNamedChild(*(_QWORD **)(a1 + 712), 1297302623);
  if ( v4 )
  {
    if ( (int)ACPIQuerySpareDsm(a1, &v8) >= 0 && (v8 & 4) != 0 )
    {
      v5 = ACPIEvaluateSpareDsm(v4, 2u, 0LL, v7);
      AMLIDereferenceHandleEx((volatile signed __int32 *)v4);
      if ( v5 >= 0 )
      {
        if ( v7[1] == 1 )
        {
          if ( (v7[8] & 1) != 0 )
            *a2 |= 1u;
          if ( (v7[8] & 2) != 0 )
            *a2 |= 4u;
          v5 = 0;
        }
        else
        {
          v5 = -1073741811;
        }
      }
    }
    else
    {
      v5 = -1073741637;
    }
  }
  else
  {
    v5 = -1073741275;
  }
  AMLIFreeDataBuffs((__int64)v7);
  return (unsigned int)v5;
}
