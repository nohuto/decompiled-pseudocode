/*
 * XREFs of IopLiveDumpFreeMappingResources @ 0x1406BADE4
 * Callers:
 *     IopLiveDumpAllocateMappingResources @ 0x1406BAB9C (IopLiveDumpAllocateMappingResources.c)
 *     IopLiveDumpReleaseResources @ 0x1406BB07C (IopLiveDumpReleaseResources.c)
 * Callees:
 *     IoFreeMdl @ 0x1400E6070 (IoFreeMdl.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     MmReleaseDumpHibernateResources @ 0x1406E2588 (MmReleaseDumpHibernateResources.c)
 */

void __fastcall IopLiveDumpFreeMappingResources(__int64 a1)
{
  unsigned int i; // edi
  _QWORD *v3; // rsi
  struct _MDL *v4; // rcx

  if ( *(_QWORD *)(a1 + 568) )
  {
    for ( i = 0; i < *(_DWORD *)(a1 + 560); ++i )
    {
      v3 = (_QWORD *)(*(_QWORD *)(a1 + 568) + 16LL * i);
      if ( *v3 )
        MmReleaseDumpHibernateResources(*v3, 0x10000LL);
      v4 = (struct _MDL *)v3[1];
      if ( v4 )
        IoFreeMdl(v4);
    }
    ExFreePoolWithTag(*(PVOID *)(a1 + 568), 0x706D644Cu);
    *(_QWORD *)(a1 + 568) = 0LL;
    *(_DWORD *)(a1 + 560) = 0;
  }
}
