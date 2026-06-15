/*
 * XREFs of ??1CAudioSessionManagerProvider@@QEAA@XZ @ 0x180094DF4
 * Callers:
 *     _ATL::CComObject_CAudioSessionManagerProvider_::CComObject_CAudioSessionManagerProvider__::_1_::dtor$0 @ 0x18005C3DA (_ATL--CComObject_CAudioSessionManagerProvider_--CComObject_CAudioSessionManagerProvider__--_1_--.c)
 *     _ATL::CComObject_CAudioSessionManagerProvider_::_CComObject_CAudioSessionManagerProvider__::_1_::dtor$0 @ 0x180094DE8 (_ATL--CComObject_CAudioSessionManagerProvider_--_CComObject_CAudioSessionManagerProvider__--_1_-.c)
 * Callees:
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x180020560 (-Release@CStringData@ATL@@QEAAXXZ.c)
 */

void __fastcall CAudioSessionManagerProvider::~CAudioSessionManagerProvider(CAudioSessionManagerProvider *this)
{
  __int64 v1; // rsi
  unsigned __int64 v3; // rbp
  unsigned __int64 i; // rdi
  void *v5; // rcx

  v1 = *((_QWORD *)this + 17);
  if ( v1 )
  {
    v3 = *((_QWORD *)this + 18);
    for ( i = 0LL; i < v3; ++i )
      ATL::CStringData::Release((ATL::CStringData *)(*(_QWORD *)(v1 + 8 * i) - 24LL));
    free(*((void **)this + 17));
  }
  v5 = (void *)*((_QWORD *)this + 13);
  if ( v5 )
    free(v5);
  if ( *((_BYTE *)this + 56) )
  {
    *((_BYTE *)this + 56) = 0;
    DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  }
}
