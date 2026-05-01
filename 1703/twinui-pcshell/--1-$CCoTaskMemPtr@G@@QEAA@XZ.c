/*
 * XREFs of ??1?$CCoTaskMemPtr@G@@QEAA@XZ @ 0x180056B5C
 * Callers:
 *     _Windows::Internal::ComTaskPool::CTaskWrapper__lambda_b80a549fac08ad064d4fba4063c5e56a___::Run_::_1_::dtor$0 @ 0x18019A60E (_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_b80a549fac08ad064d4fba4063c5e56a___--Run_-.c)
 * Callees:
 *     <none>
 */

void __fastcall CCoTaskMemPtr<unsigned short>::~CCoTaskMemPtr<unsigned short>(void **a1)
{
  void *v2; // rcx

  v2 = *a1;
  *a1 = 0LL;
  CoTaskMemFree(v2);
}
