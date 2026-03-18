/*
 * XREFs of HMRemoveHandleForObjectWorker @ 0x1C008B60C
 * Callers:
 *     HMDestroyUnlockedObject @ 0x1C0041FC0 (HMDestroyUnlockedObject.c)
 *     HMRemoveHandleForObject @ 0x1C008B570 (HMRemoveHandleForObject.c)
 * Callees:
 *     memset @ 0x1C00A2500 (memset.c)
 *     HMCleanupGrantedHandle @ 0x1C00DE768 (HMCleanupGrantedHandle.c)
 */

__int64 __fastcall HMRemoveHandleForObjectWorker(_BYTE *a1)
{
  char *v2; // rsi
  __int16 v3; // bx
  __int16 v4; // ax
  signed __int64 v5; // rdi
  _QWORD *v6; // rdx

  --giheCount;
  v2 = (char *)gpKernelHandleTable + 16 * (unsigned int)((a1 - (_BYTE *)qword_1C0189E38) >> 5);
  if ( (a1[25] & 0x20) != 0 )
  {
    HMCleanupGrantedHandle(**(_QWORD **)v2);
    a1[25] &= ~0x20u;
  }
  v3 = *((_WORD *)a1 + 13) + 1;
  memset(a1, 0, 0x20uLL);
  *(_QWORD *)v2 = 0LL;
  *((_QWORD *)v2 + 1) = 0LL;
  v4 = 1;
  if ( v3 != -1 )
    v4 = v3;
  *((_WORD *)a1 + 13) = v4;
  v5 = (a1 - (_BYTE *)qword_1C0189E38) >> 5;
  v6 = (char *)gpKernelHandleTable + 16 * v5;
  if ( (v5 & 1) != 0 )
  {
    *v6 = qword_1C018AE28;
    qword_1C018AE28 = v5;
  }
  else
  {
    *v6 = qword_1C018AE20;
    qword_1C018AE20 = v5;
  }
  return 1LL;
}
