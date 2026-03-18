/*
 * XREFs of ObpPostInterceptHandleDuplicate @ 0x1406F0B94
 * Callers:
 *     ObCompleteObjectDuplication @ 0x140506594 (ObCompleteObjectDuplication.c)
 *     ObDuplicateObject @ 0x140507760 (ObDuplicateObject.c)
 * Callees:
 *     memset @ 0x140192F40 (memset.c)
 *     ObpCallPostOperationCallbacks @ 0x1406F0A30 (ObpCallPostOperationCallbacks.c)
 */

__int64 __fastcall ObpPostInterceptHandleDuplicate(__int64 a1, unsigned __int8 a2, int a3, int a4, _QWORD *a5)
{
  unsigned __int64 v9; // rcx
  _QWORD v11[6]; // [rsp+20h] [rbp-48h] BYREF
  int v12; // [rsp+78h] [rbp+10h] BYREF

  memset(v11, 0, sizeof(v11));
  LODWORD(v11[0]) = 2;
  v11[5] = &v12;
  v11[1] = a1;
  LODWORD(v11[4]) = a3;
  HIDWORD(v11[0]) ^= (BYTE4(v11[0]) ^ a2) & 1;
  v9 = *(unsigned __int8 *)(a1 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(a1 - 48) >> 8);
  v12 = a4;
  v11[2] = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ v9];
  ObpCallPostOperationCallbacks((__int64)v11, a5);
  return 0LL;
}
