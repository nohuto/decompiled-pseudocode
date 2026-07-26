/*
 * XREFs of ??4?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@QEAAAEAV01@$$QEAV01@@Z @ 0x1C0015924
 * Callers:
 *     ndisAddDevice @ 0x1C00F6250 (ndisAddDevice.c)
 * Callees:
 *     <none>
 */

void **__fastcall wistd::unique_ptr<Rtl::KString,wistd::default_delete<Rtl::KString>>::operator=(void **a1, void **a2)
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
        ExFreePoolWithTag(v4, 0x7274534Bu);
      *a1 = v3;
    }
  }
  return a1;
}
