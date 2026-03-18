/*
 * XREFs of ACPIQuerySpareDsm @ 0x1C00A0184
 * Callers:
 *     ACPIInternalSetSpare @ 0x1C008C9C0 (ACPIInternalSetSpare.c)
 *     ACPIModuleGetSpareProperties @ 0x1C009FFC0 (ACPIModuleGetSpareProperties.c)
 * Callees:
 *     AMLIGetNamedChild @ 0x1C000E580 (AMLIGetNamedChild.c)
 *     AMLIDereferenceHandleEx @ 0x1C00142C0 (AMLIDereferenceHandleEx.c)
 *     AMLIFreeDataBuffs @ 0x1C001DB68 (AMLIFreeDataBuffs.c)
 *     memmove @ 0x1C002C840 (memmove.c)
 *     memset @ 0x1C002CB80 (memset.c)
 *     ACPIEvaluateSpareDsm @ 0x1C009FDE4 (ACPIEvaluateSpareDsm.c)
 */

__int64 __fastcall ACPIQuerySpareDsm(__int64 a1, void *a2)
{
  __int64 *v4; // rax
  volatile signed __int32 *v5; // rdi
  int v6; // ebx
  __int64 v7; // rdx
  size_t v8; // r8
  size_t v10[7]; // [rsp+20h] [rbp-38h] BYREF

  memset(v10, 0, 0x28uLL);
  v4 = AMLIGetNamedChild(*(__int64 **)(a1 + 712), 1297302623);
  v5 = (volatile signed __int32 *)v4;
  if ( v4 )
  {
    v6 = ACPIEvaluateSpareDsm(v4, 0, 0LL, v10);
    AMLIDereferenceHandleEx(v5, v7);
    if ( v6 >= 0 )
    {
      if ( WORD1(v10[0]) == 3 && v10[4] )
      {
        v8 = 4LL;
        if ( LODWORD(v10[3]) < 4 )
          v8 = LODWORD(v10[3]);
        memmove(a2, (const void *)v10[4], v8);
        v6 = 0;
      }
      else
      {
        v6 = -1073741701;
      }
    }
  }
  else
  {
    v6 = -1073741275;
  }
  AMLIFreeDataBuffs((__int64)v10);
  return (unsigned int)v6;
}
