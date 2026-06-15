/*
 * XREFs of ??1CFormatConverterPipe@@QEAA@XZ @ 0x140030CE8
 * Callers:
 *     _CSubmixImpl::_CSubmixImpl_::_1_::dtor$8 @ 0x1400215FC (_CSubmixImpl--_CSubmixImpl_--_1_--dtor$8.c)
 * Callees:
 *     <none>
 */

void __fastcall CFormatConverterPipe::~CFormatConverterPipe(CFormatConverterPipe *this)
{
  void *v2; // rcx

  v2 = (void *)*((_QWORD *)this + 1);
  if ( v2 )
    CoTaskMemFree(v2);
  ATL::CAutoPtr<CPipeInstance>::Free((LPVOID **)this);
}
