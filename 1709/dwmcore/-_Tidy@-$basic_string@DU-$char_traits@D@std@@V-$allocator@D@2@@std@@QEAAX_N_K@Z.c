/*
 * XREFs of ?_Tidy@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAX_N_K@Z @ 0x180007474
 * Callers:
 *     _anonymous_namespace_::SendFramesReport @ 0x180005B04 (_anonymous_namespace_--SendFramesReport.c)
 *     ?_Copy@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAX_K0@Z @ 0x180007354 (-_Copy@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAX_K0@Z.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     memcpy_0 @ 0x1800C5D86 (memcpy_0.c)
 */

void __fastcall std::string::_Tidy(void **a1, char a2, size_t a3)
{
  void *v5; // rsi

  if ( a2 && (unsigned __int64)a1[3] >= 0x10 )
  {
    v5 = *a1;
    if ( a3 )
      memcpy_0(a1, *a1, a3);
    WPF::ProcessHeapImpl::Free(v5);
  }
  a1[3] = (void *)15;
  a1[2] = (void *)a3;
  *((_BYTE *)a1 + a3) = 0;
}
