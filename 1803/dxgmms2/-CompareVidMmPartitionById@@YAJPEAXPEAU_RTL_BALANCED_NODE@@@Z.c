/*
 * XREFs of ?CompareVidMmPartitionById@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x1C00027B0
 * Callers:
 *     ?VidMmiOpenCurrentPartition@@YAJPEAVVIDMM_PROCESS@@PEAPEAUVIDMM_PARTITION@@@Z @ 0x1C0002574 (-VidMmiOpenCurrentPartition@@YAJPEAVVIDMM_PROCESS@@PEAPEAUVIDMM_PARTITION@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CompareVidMmPartitionById(void *a1, struct _RTL_BALANCED_NODE *a2)
{
  unsigned int v2; // r8d

  v2 = (unsigned int)a2[1].Children[0];
  if ( (unsigned int)a1 < v2 )
    return 0xFFFFFFFFLL;
  else
    return (unsigned int)a1 > v2;
}
