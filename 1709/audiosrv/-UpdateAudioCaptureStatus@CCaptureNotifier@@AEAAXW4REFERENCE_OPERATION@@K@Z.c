/*
 * XREFs of ?UpdateAudioCaptureStatus@CCaptureNotifier@@AEAAXW4REFERENCE_OPERATION@@K@Z @ 0x18009D8E8
 * Callers:
 *     ?AcquireReference@CCaptureNotifier@@QEAA?AV?$shared_ptr@VCCaptureReference@@@std@@K@Z @ 0x18009D55C (-AcquireReference@CCaptureNotifier@@QEAA-AV-$shared_ptr@VCCaptureReference@@@std@@K@Z.c)
 *     ?_Destroy@?$_Ref_count_obj@VCCaptureReference@@@std@@EEAAXXZ @ 0x18009DA90 (-_Destroy@-$_Ref_count_obj@VCCaptureReference@@@std@@EEAAXXZ.c)
 * Callees:
 *     ??$_Try_emplace@AEBK$$V@?$map@KUAPPLICATION_REF_DATA@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKUAPPLICATION_REF_DATA@@@std@@@3@@std@@QEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKUAPPLICATION_REF_DATA@@@std@@@std@@@std@@@std@@_N@1@AEBK@Z @ 0x18009D3EC (--$_Try_emplace@AEBK$$V@-$map@KUAPPLICATION_REF_DATA@@U-$less@K@std@@V-$allocator@U-$pair@$$CBKU.c)
 *     ?PublishCaptureAudioStatus@CCaptureNotifier@@AEAAXXZ @ 0x18009D72C (-PublishCaptureAudioStatus@CCaptureNotifier@@AEAAXXZ.c)
 */

void __fastcall CCaptureNotifier::UpdateAudioCaptureStatus(__int64 *a1, int a2, int a3)
{
  __int64 v5; // r8
  const char *v6; // r9
  __int64 v7; // r8
  bool v8; // zf
  int v9; // eax
  int v10; // eax
  _QWORD v11[4]; // [rsp+28h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  int v13; // [rsp+60h] [rbp+18h] BYREF

  v13 = a3;
  try
  {
    std::map<unsigned long,APPLICATION_REF_DATA>::_Try_emplace<unsigned long const &,>(a1 + 10, (__int64)v11, &v13);
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(retaddr, (void *)0x20B, v5, v6);
    return;
  }
  v7 = v11[0];
  if ( !a2 )
  {
    ++*(_DWORD *)(v11[0] + 32LL);
    v8 = *(_DWORD *)(v7 + 32) == 1;
    goto LABEL_7;
  }
  if ( a2 == 1 )
  {
    v9 = *(_DWORD *)(v11[0] + 32LL);
    if ( v9 )
    {
      v10 = v9 - 1;
      v8 = v10 == 0;
      *(_DWORD *)(v11[0] + 32LL) = v10;
LABEL_7:
      if ( v8 )
        CCaptureNotifier::PublishCaptureAudioStatus((CCaptureNotifier *)a1);
    }
  }
}
