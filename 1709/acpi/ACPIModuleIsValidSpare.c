/*
 * XREFs of ACPIModuleIsValidSpare @ 0x1C00A2DD0
 * Callers:
 *     <none>
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x1C0002108 (AMLIDereferenceHandleEx.c)
 *     AMLIGetNamedChild @ 0x1C0003F20 (AMLIGetNamedChild.c)
 *     AMLIFreeDataBuffs @ 0x1C0023374 (AMLIFreeDataBuffs.c)
 *     memset @ 0x1C002C4C0 (memset.c)
 *     ACPIEvaluateSpareDsm @ 0x1C00A2B1C (ACPIEvaluateSpareDsm.c)
 */

char __fastcall ACPIModuleIsValidSpare(__int64 a1, __int64 a2)
{
  char v4; // di
  __int64 *v5; // rsi
  int v6; // ebx
  _QWORD v8[5]; // [rsp+20h] [rbp-58h] BYREF
  _BYTE v9[40]; // [rsp+48h] [rbp-30h] BYREF

  memset(v8, 0, sizeof(v8));
  v4 = 0;
  v5 = AMLIGetNamedChild(*(__int64 **)(a1 + 712), 1297302623);
  if ( v5 )
  {
    memset(v9, 0, sizeof(v9));
    *(_QWORD *)&v9[16] = a2;
    *(_WORD *)&v9[2] = 1;
    v6 = ACPIEvaluateSpareDsm(v5, 1u, (__int128 *)v9, v8);
    AMLIDereferenceHandleEx((__int64)v5);
    if ( v6 >= 0 && (WORD1(v8[0]) == 1 && !v8[2] || WORD1(v8[0]) == 2 && *(_BYTE *)v8[4] == 48) )
      v4 = 1;
  }
  AMLIFreeDataBuffs((__int64)v8);
  return v4;
}
