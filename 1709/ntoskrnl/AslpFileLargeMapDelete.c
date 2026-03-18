/*
 * XREFs of AslpFileLargeMapDelete @ 0x140776564
 * Callers:
 *     AslpFileLargeEnsureLargeFileMapping @ 0x140775DEC (AslpFileLargeEnsureLargeFileMapping.c)
 *     AslpFileLargeMapCreate @ 0x1407762FC (AslpFileLargeMapCreate.c)
 * Callees:
 *     ZwClose @ 0x14017DAA0 (ZwClose.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     AslpFilePartialViewFree @ 0x1407765C0 (AslpFilePartialViewFree.c)
 */

void __fastcall AslpFileLargeMapDelete(_QWORD **a1)
{
  _QWORD *v1; // rbx
  void *v3; // rcx

  if ( a1 )
  {
    v1 = *a1;
    if ( *a1 )
    {
      AslpFilePartialViewFree(v1 + 6);
      AslpFilePartialViewFree(v1 + 2);
      v3 = (void *)v1[1];
      if ( v3 )
        ZwClose(v3);
      ExFreePoolWithTag(v1, 0x74705041u);
      *a1 = 0LL;
    }
  }
}
