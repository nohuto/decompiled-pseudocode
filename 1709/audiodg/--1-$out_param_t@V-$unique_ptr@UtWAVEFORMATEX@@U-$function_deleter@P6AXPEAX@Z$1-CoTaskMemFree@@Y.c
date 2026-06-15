/*
 * XREFs of ??1?$out_param_t@V?$unique_ptr@UtWAVEFORMATEX@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@@details@wil@@QEAA@XZ @ 0x14003146C
 * Callers:
 *     _FillAPOInitSystemEffectsStructure_::_1_::dtor$12 @ 0x140021804 (_FillAPOInitSystemEffectsStructure_--_1_--dtor$12.c)
 *     _FillAPOInitSystemEffectsStructure_::_1_::dtor$17 @ 0x140021834 (_FillAPOInitSystemEffectsStructure_--_1_--dtor$17.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::details::out_param_t<wistd::unique_ptr<tWAVEFORMATEX,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<tWAVEFORMATEX,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>(
        void ***a1)
{
  void **v1; // rbx
  void **v2; // rdi
  void **v3; // rcx

  if ( *((_BYTE *)a1 + 16) )
  {
    v1 = a1[1];
    v2 = *a1;
    v3 = (void **)**a1;
    if ( v1 != v3 )
    {
      if ( v3 )
        CoTaskMemFree(v3);
      *v2 = v1;
    }
  }
}
