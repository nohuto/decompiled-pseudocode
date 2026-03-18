/*
 * XREFs of CmpInitializeLightWeightTransactionType @ 0x140620AD0
 * Callers:
 *     CmInitSystem1 @ 0x1408B04E0 (CmInitSystem1.c)
 * Callees:
 *     memset @ 0x1401BCC40 (memset.c)
 *     ObCreateObjectTypeEx @ 0x14062189C (ObCreateObjectTypeEx.c)
 */

__int64 CmpInitializeLightWeightTransactionType()
{
  __int128 v1; // [rsp+30h] [rbp-39h]
  _QWORD v2[15]; // [rsp+40h] [rbp-29h] BYREF

  *(_QWORD *)&v1 = 0x12003E00120001LL;
  *((_QWORD *)&v1 + 1) = 0x1F003F00120018LL;
  memset(v2, 0, sizeof(v2));
  v2[6] = 0LL;
  LOWORD(v2[0]) = 120;
  v2[7] = 0LL;
  BYTE2(v2[0]) = BYTE2(v2[0]) & 0xE3 | 0xC;
  v2[8] = CmpCloseLightWeightTransaction;
  v2[9] = CmpDeleteLightWeightTransaction;
  LODWORD(v2[1]) = 48;
  *(_OWORD *)((char *)&v2[1] + 4) = v1;
  HIDWORD(v2[3]) = 2031679;
  LODWORD(v2[5]) = 24;
  HIDWORD(v2[4]) = 1;
  return ObCreateObjectTypeEx(&CmpTransactionTypeNameString, (__int64)&CmRegistryTransactionType);
}
