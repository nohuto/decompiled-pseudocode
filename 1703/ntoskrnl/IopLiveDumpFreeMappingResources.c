/*
 * XREFs of IopLiveDumpFreeMappingResources @ 0x14068F120
 * Callers:
 *     IopLiveDumpAllocateMappingResources @ 0x14068EED8 (IopLiveDumpAllocateMappingResources.c)
 *     IopLiveDumpReleaseResources @ 0x14068F3B0 (IopLiveDumpReleaseResources.c)
 * Callees:
 *     IoFreeMdl @ 0x1401148E0 (IoFreeMdl.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     MmReleaseDumpHibernateResources @ 0x140577870 (MmReleaseDumpHibernateResources.c)
 */

void __fastcall IopLiveDumpFreeMappingResources(__int64 a1)
{
  unsigned int i; // edi
  unsigned __int64 *v3; // rsi
  struct _MDL *v4; // rcx

  if ( *(_QWORD *)(a1 + 568) )
  {
    for ( i = 0; i < *(_DWORD *)(a1 + 560); ++i )
    {
      v3 = (unsigned __int64 *)(*(_QWORD *)(a1 + 568) + 16LL * i);
      if ( *v3 )
        MmReleaseDumpHibernateResources(*v3);
      v4 = (struct _MDL *)v3[1];
      if ( v4 )
        IoFreeMdl(v4);
    }
    ExFreePoolWithTag(*(PVOID *)(a1 + 568), 0x706D644Cu);
    *(_QWORD *)(a1 + 568) = 0LL;
    *(_DWORD *)(a1 + 560) = 0;
  }
}
