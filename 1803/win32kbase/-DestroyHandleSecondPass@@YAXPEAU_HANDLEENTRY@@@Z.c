/*
 * XREFs of ?DestroyHandleSecondPass@@YAXPEAU_HANDLEENTRY@@@Z @ 0x1C00A8E80
 * Callers:
 *     <none>
 * Callees:
 *     HMDestroyUnlockedObject @ 0x1C0034DD0 (HMDestroyUnlockedObject.c)
 */

void __fastcall DestroyHandleSecondPass(struct _HANDLEENTRY *a1)
{
  __int64 v1; // r8

  v1 = *((_QWORD *)gpKernelHandleTable + 3 * (unsigned int)((a1 - (struct _HANDLEENTRY *)qword_1C01A0E28) >> 5));
  if ( *(_DWORD *)(v1 + 8) )
    *(_DWORD *)(v1 + 8) = 0;
  HMDestroyUnlockedObject(a1);
}
