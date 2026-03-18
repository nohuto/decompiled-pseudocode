/*
 * XREFs of WmipMRCleanup @ 0x14064AD40
 * Callers:
 *     <none>
 * Callees:
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     WmipGenerateMofResourceNotification @ 0x14064ADB0 (WmipGenerateMofResourceNotification.c)
 */

void __fastcall WmipMRCleanup(__int64 a1)
{
  void *v2; // rcx
  void *v3; // rdx
  void *v4; // rcx

  v2 = *(void **)(a1 + 40);
  if ( v2 )
  {
    v3 = *(void **)(a1 + 48);
    if ( v3 )
    {
      if ( (*(_DWORD *)(a1 + 16) & 1) == 0 )
      {
        WmipGenerateMofResourceNotification(v2, v3);
        v2 = *(void **)(a1 + 40);
      }
    }
  }
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0);
    *(_QWORD *)(a1 + 40) = 0LL;
  }
  v4 = *(void **)(a1 + 48);
  if ( v4 )
  {
    ExFreePoolWithTag(v4, 0);
    *(_QWORD *)(a1 + 48) = 0LL;
  }
}
