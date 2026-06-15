/*
 * XREFs of ??1CAudioSessionManagerProvider@@QEAA@XZ @ 0x1800B48B0
 * Callers:
 *     _ATL::CComObject_CAudioSessionManagerProvider_::CComObject_CAudioSessionManagerProvider__::_1_::dtor$0 @ 0x180069C3A (_ATL--CComObject_CAudioSessionManagerProvider_--CComObject_CAudioSessionManagerProvider__--_1_--.c)
 *     ??1?$CComObject@VCAudioSessionManagerProvider@@@ATL@@UEAA@XZ @ 0x1800B4834 (--1-$CComObject@VCAudioSessionManagerProvider@@@ATL@@UEAA@XZ.c)
 * Callees:
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x180018A18 (-Release@CStringData@ATL@@QEAAXXZ.c)
 */

void __fastcall CAudioSessionManagerProvider::~CAudioSessionManagerProvider(CAudioSessionManagerProvider *this)
{
  _QWORD *v1; // rdi
  unsigned __int64 v3; // rbp
  unsigned __int64 v4; // rsi
  void *v5; // rcx

  v1 = (_QWORD *)*((_QWORD *)this + 17);
  if ( v1 )
  {
    v3 = *((_QWORD *)this + 18);
    v4 = 0LL;
    if ( v3 )
    {
      do
        ATL::CStringData::Release((ATL::CStringData *)(v1[v4++] - 24LL));
      while ( v4 < v3 );
      v1 = (_QWORD *)*((_QWORD *)this + 17);
    }
    free(v1);
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
