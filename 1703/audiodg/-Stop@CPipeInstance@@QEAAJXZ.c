/*
 * XREFs of ?Stop@CPipeInstance@@QEAAJXZ @ 0x140030AB4
 * Callers:
 *     ?Start@CPipeInstance@@QEAAJXZ @ 0x140009770 (-Start@CPipeInstance@@QEAAJXZ.c)
 * Callees:
 *     WPP_SF_D @ 0x14001B708 (WPP_SF_D.c)
 *     _guard_dispatch_icall_nop @ 0x14001E780 (_guard_dispatch_icall_nop.c)
 *     ?Release@?$CComPtrBase@UIAudioProcessingObject@@@ATL@@QEAAXXZ @ 0x14003077C (-Release@-$CComPtrBase@UIAudioProcessingObject@@@ATL@@QEAAXXZ.c)
 *     ?GetNext@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEAVCProcessNode@@AEAPEAU__POSITION@@@Z @ 0x140030F5C (-GetNext@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEA.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140044210 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CPipeInstance::Stop(CPipeInstance *this)
{
  __int64 v1; // rax
  int v2; // ebx
  __int64 v3; // rcx
  __int64 v4; // rax
  int v5; // eax
  __int64 v7; // [rsp+40h] [rbp+8h] BYREF
  __int64 v8; // [rsp+48h] [rbp+10h] BYREF

  v1 = *((_QWORD *)this + 2);
  v2 = 0;
  v3 = 0LL;
  v7 = 0LL;
  v8 = v1;
  if ( v1 )
  {
    do
    {
      v4 = *(_QWORD *)ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetNext(v3, &v8);
      if ( *(_DWORD *)(v4 + 40) == 1 )
      {
        v5 = (****(__int64 (__fastcall *****)(_QWORD, GUID *, __int64 *))(v4 + 32))(
               **(_QWORD **)(v4 + 32),
               &GUID_c684b72a_6df4_4774_bdf9_76b77509b653,
               &v7);
        if ( v5 < 0 || (v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 40LL))(v7), v5 < 0) )
          v2 = v5;
        ATL::CComPtrBase<IAudioProcessingObject>::Release(&v7);
      }
    }
    while ( v8 );
    if ( v2 < 0 )
    {
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
      {
        WPP_SF_D(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          0x3Du,
          (__int64)&WPP_1bb1b06919453819a20d8123e6c4939d_Traceguids,
          v2);
      }
      AudDGTraceLoggingErrorHelper("CPipeInstance::Stop", 0xFCCu, v2);
    }
    v3 = v7;
  }
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  return (unsigned int)v2;
}
