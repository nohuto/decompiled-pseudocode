/*
 * XREFs of ??1?$unique_ptr@MU?$function_deleter@P6AXPEAX@Z$1?_freea@@YAX0@Z@wil@@@wistd@@QEAA@XZ @ 0x180097CFC
 * Callers:
 *     __lambda_041b38cc9b1c9530af273109c15771c6_::operator()_::_1_::dtor$0 @ 0x180063931 (__lambda_041b38cc9b1c9530af273109c15771c6_--operator()_--_1_--dtor$0.c)
 * Callees:
 *     _freea @ 0x1800183EC (_freea.c)
 */

void __fastcall wistd::unique_ptr<float,wil::function_deleter<void (*)(void *),&void _freea(void *)>>::~unique_ptr<float,wil::function_deleter<void (*)(void *),&void _freea(void *)>>(
        void **a1)
{
  void *v1; // rcx

  v1 = *a1;
  if ( v1 )
    freea(v1);
}
