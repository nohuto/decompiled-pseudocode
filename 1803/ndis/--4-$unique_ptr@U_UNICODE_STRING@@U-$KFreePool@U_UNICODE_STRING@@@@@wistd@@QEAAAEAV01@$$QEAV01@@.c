/*
 * XREFs of ??4?$unique_ptr@U_UNICODE_STRING@@U?$KFreePool@U_UNICODE_STRING@@@@@wistd@@QEAAAEAV01@$$QEAV01@@Z @ 0x1C0061E0C
 * Callers:
 *     ?ndisLWMGetServiceKeyFromServiceName@@YAJPEBU_UNICODE_STRING@@AEAV?$unique_ptr@U_UNICODE_STRING@@U?$KFreePool@U_UNICODE_STRING@@@@@wistd@@@Z @ 0x1C00EAC9C (-ndisLWMGetServiceKeyFromServiceName@@YAJPEBU_UNICODE_STRING@@AEAV-$unique_ptr@U_UNICODE_STRING@.c)
 *     ndisLWMCreateAdapterInstanceName @ 0x1C00EC6F4 (ndisLWMCreateAdapterInstanceName.c)
 * Callees:
 *     <none>
 */

void **__fastcall wistd::unique_ptr<_UNICODE_STRING,KFreePool<_UNICODE_STRING>>::operator=(void **a1, void **a2)
{
  void *v3; // rdi
  void *v4; // rcx

  if ( a1 != a2 )
  {
    v3 = *a2;
    *a2 = 0LL;
    v4 = *a1;
    if ( v3 != v4 )
    {
      if ( v4 )
        ExFreePoolWithTag(v4, 0);
      *a1 = v3;
    }
  }
  return a1;
}
