/*
 * XREFs of ?UpdateAudioCaptureStatus@CCaptureNotifier@@AEAAXW4REFERENCE_OPERATION@@K@Z @ 0x1800D4F7C
 * Callers:
 *     ?AcquireReference@CCaptureNotifier@@QEAA?AV?$shared_ptr@VCCaptureReference@@@std@@K@Z @ 0x1800D4DFC (-AcquireReference@CCaptureNotifier@@QEAA-AV-$shared_ptr@VCCaptureReference@@@std@@K@Z.c)
 *     ?_Destroy@?$_Ref_count_obj@VCCaptureReference@@@std@@EEAAXXZ @ 0x1800D5090 (-_Destroy@-$_Ref_count_obj@VCCaptureReference@@@std@@EEAAXXZ.c)
 * Callees:
 *     ?PublishCaptureAudioStatus@CCaptureNotifier@@AEAAXXZ @ 0x180059268 (-PublishCaptureAudioStatus@CCaptureNotifier@@AEAAXXZ.c)
 *     ??$_Try_emplace@AEBK$$V@?$map@KUAPPLICATION_REF_DATA@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKUAPPLICATION_REF_DATA@@@std@@@3@@std@@QEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKUAPPLICATION_REF_DATA@@@std@@@std@@@std@@@std@@_N@1@AEBK@Z @ 0x1800D4C90 (--$_Try_emplace@AEBK$$V@-$map@KUAPPLICATION_REF_DATA@@U-$less@K@std@@V-$allocator@U-$pair@$$CBKU.c)
 */

void __fastcall CCaptureNotifier::UpdateAudioCaptureStatus(__int64 **a1, int a2, unsigned int a3)
{
  const char *v5; // r9
  __int64 v6; // r8
  bool v7; // zf
  int v8; // eax
  int v9; // eax
  _QWORD v10[4]; // [rsp+28h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  unsigned int v12; // [rsp+60h] [rbp+18h] BYREF

  v12 = a3;
  try
  {
    std::map<unsigned long,APPLICATION_REF_DATA>::_Try_emplace<unsigned long const &,>(a1 + 10, (__int64)v10, &v12);
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x209,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\powerreference.cpp",
      v5);
    return;
  }
  v6 = v10[0];
  if ( !a2 )
  {
    ++*(_DWORD *)(v10[0] + 32LL);
    v7 = *(_DWORD *)(v6 + 32) == 1;
    goto LABEL_7;
  }
  if ( a2 == 1 )
  {
    v8 = *(_DWORD *)(v10[0] + 32LL);
    if ( v8 )
    {
      v9 = v8 - 1;
      v7 = v9 == 0;
      *(_DWORD *)(v10[0] + 32LL) = v9;
LABEL_7:
      if ( v7 )
        CCaptureNotifier::PublishCaptureAudioStatus((CCaptureNotifier *)a1);
    }
  }
}
