/*
 * XREFs of HMRemoveHandleForObjectWorker @ 0x1C0092008
 * Callers:
 *     HMRemoveHandleForObject @ 0x1C0091F70 (HMRemoveHandleForObject.c)
 *     HMDestroyUnlockedObject @ 0x1C009E950 (HMDestroyUnlockedObject.c)
 * Callees:
 *     memset @ 0x1C00ABB80 (memset.c)
 *     HMCleanupGrantedHandle @ 0x1C00E4D28 (HMCleanupGrantedHandle.c)
 */

__int64 __fastcall HMRemoveHandleForObjectWorker(_BYTE *a1)
{
  _QWORD *v2; // r14
  __int64 v3; // rax
  __int64 v4; // rsi
  __int16 v5; // bx
  __int16 v6; // ax
  signed __int64 v7; // rdi

  --giheCount;
  v2 = gpKernelHandleTable;
  v3 = (unsigned int)((a1 - (_BYTE *)qword_1C018E9B8) >> 5);
  v4 = 3 * v3;
  if ( (a1[25] & 0x20) != 0 )
  {
    HMCleanupGrantedHandle(**((_QWORD **)gpKernelHandleTable + 3 * v3));
    a1[25] &= ~0x20u;
  }
  v5 = *((_WORD *)a1 + 13) + 1;
  memset(a1, 0, 0x20uLL);
  v2[v4] = 0LL;
  v2[v4 + 1] = 0LL;
  v2[v4 + 2] = 0LL;
  v6 = 1;
  if ( v5 != -1 )
    v6 = v5;
  *((_WORD *)a1 + 13) = v6;
  v7 = (a1 - (_BYTE *)qword_1C018E9B8) >> 5;
  if ( (v7 & 1) != 0 )
  {
    *((_QWORD *)gpKernelHandleTable + 3 * v7) = qword_1C018FA78;
    qword_1C018FA78 = v7;
  }
  else
  {
    *((_QWORD *)gpKernelHandleTable + 3 * v7) = qword_1C018FA70;
    qword_1C018FA70 = v7;
  }
  return 1LL;
}
