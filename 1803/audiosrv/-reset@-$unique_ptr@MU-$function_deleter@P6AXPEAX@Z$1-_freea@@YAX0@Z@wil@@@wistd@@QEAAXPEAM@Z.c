/*
 * XREFs of ?reset@?$unique_ptr@MU?$function_deleter@P6AXPEAX@Z$1?_freea@@YAX0@Z@wil@@@wistd@@QEAAXPEAM@Z @ 0x18001832C
 * Callers:
 *     _lambda_041b38cc9b1c9530af273109c15771c6_::operator() @ 0x1800635C8 (_lambda_041b38cc9b1c9530af273109c15771c6_--operator().c)
 * Callees:
 *     _freea @ 0x1800183EC (_freea.c)
 */

void __fastcall wistd::unique_ptr<float,wil::function_deleter<void (*)(void *),&void _freea(void *)>>::reset(
        void **a1,
        void *a2)
{
  void *v4; // rcx

  v4 = *a1;
  if ( a2 != v4 )
  {
    if ( v4 )
      freea(v4);
    *a1 = a2;
  }
}
