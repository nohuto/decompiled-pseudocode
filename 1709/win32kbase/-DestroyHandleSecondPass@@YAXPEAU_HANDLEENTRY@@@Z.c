/*
 * XREFs of ?DestroyHandleSecondPass@@YAXPEAU_HANDLEENTRY@@@Z @ 0x1C00DEF80
 * Callers:
 *     <none>
 * Callees:
 *     HMDestroyUnlockedObject @ 0x1C009E950 (HMDestroyUnlockedObject.c)
 */

void __fastcall DestroyHandleSecondPass(struct _HANDLEENTRY *a1)
{
  __int64 v1; // r8

  v1 = *((_QWORD *)gpKernelHandleTable + 3 * (unsigned int)((a1 - (struct _HANDLEENTRY *)qword_1C018E9B8) >> 5));
  if ( *(_DWORD *)(v1 + 8) )
    *(_DWORD *)(v1 + 8) = 0;
  HMDestroyUnlockedObject(a1);
}
