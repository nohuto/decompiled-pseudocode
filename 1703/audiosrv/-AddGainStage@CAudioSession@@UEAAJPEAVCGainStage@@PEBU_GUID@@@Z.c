/*
 * XREFs of ?AddGainStage@CAudioSession@@UEAAJPEAVCGainStage@@PEBU_GUID@@@Z @ 0x18008A0D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001A360 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004B5C4 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ?AddGainStageReference@CGainStage@@QEAAKXZ @ 0x18008A28C (-AddGainStageReference@CGainStage@@QEAAKXZ.c)
 *     ?Lookup@?$CAtlMap@U_GUID@@PEAVCGainStage@@V?$CElementTraits@U_GUID@@@ATL@@V?$CElementTraits@PEAVCGainStage@@@4@@ATL@@QEBA_NAEBU_GUID@@AEAPEAVCGainStage@@@Z @ 0x18008D884 (-Lookup@-$CAtlMap@U_GUID@@PEAVCGainStage@@V-$CElementTraits@U_GUID@@@ATL@@V-$CElementTraits@PEAV.c)
 *     ?SetAt@?$CAtlMap@U_GUID@@PEAVCGainStage@@V?$CElementTraits@U_GUID@@@ATL@@V?$CElementTraits@PEAVCGainStage@@@4@@ATL@@QEAAPEAU__POSITION@@AEBU_GUID@@AEBQEAVCGainStage@@@Z @ 0x18008F454 (-SetAt@-$CAtlMap@U_GUID@@PEAVCGainStage@@V-$CElementTraits@U_GUID@@@ATL@@V-$CElementTraits@PEAVC.c)
 *     WPP_SF_S_guid_ @ 0x1800906D4 (WPP_SF_S_guid_.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioSession::AddGainStage(CAudioSession *this, struct CGainStage *a2, const struct _GUID *a3)
{
  struct CGainStage *v3; // rdi
  unsigned int v5; // ebx
  int v6; // r8d
  int v7; // r8d
  bool v8; // sf
  CGainStage *v9; // rbx
  float v10; // xmm1_4
  __int64 result; // rax
  ATL::CAtlException *v12; // [rsp+38h] [rbp-40h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+40h] [rbp-38h] BYREF
  char v14; // [rsp+48h] [rbp-30h]
  int v15; // [rsp+80h] [rbp+8h]
  struct CGainStage *v16; // [rsp+88h] [rbp+10h] BYREF
  CGainStage *v17; // [rsp+98h] [rbp+20h] BYREF

  v16 = a2;
  v3 = a2;
  v5 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 480);
  v14 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S_guid_(*((_QWORD *)WPP_GLOBAL_Control + 2), 106, v6, *((_QWORD *)this + 105), (__int64)v3 + 16);
  }
  if ( (unsigned __int8)ATL::CAtlMap<_GUID,CGainStage *,ATL::CElementTraits<_GUID>,ATL::CElementTraits<CGainStage *>>::Lookup(
                          (char *)this + 520,
                          (char *)v3 + 16,
                          &v17) )
  {
    if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_S_guid_(*((_QWORD *)WPP_GLOBAL_Control + 2), 107, v7, *((_QWORD *)this + 105), (__int64)v3 + 16);
    }
    v9 = v17;
    CGainStage::AddGainStageReference(v17);
    if ( !(*(unsigned __int8 (__fastcall **)(CGainStage *))(*(_QWORD *)v9 + 24LL))(v9) )
    {
      v10 = *((float *)v3 + 12);
      if ( *((float *)v9 + 12) > v10 && !*((_BYTE *)v9 + 32) )
        *((float *)v9 + 12) = v10;
    }
    v5 = 0;
    v8 = 0;
    goto LABEL_19;
  }
  try
  {
    ATL::CAtlMap<_GUID,CGainStage *,ATL::CElementTraits<_GUID>,ATL::CElementTraits<CGainStage *>>::SetAt(
      (char *)this + 520,
      (char *)v3 + 16,
      &v16);
  }
  catch ( ATL::CAtlException *v12 )
  {
    v15 = *(_DWORD *)v12;
    v5 = *(_DWORD *)v12;
    v8 = v15 < 0;
    if ( !v15 )
    {
      v3 = v16;
      goto LABEL_9;
    }
LABEL_19:
    if ( v8 )
      AudSrvTraceLoggingErrorHelper("CAudioSession::AddGainStage", 4539, v5);
LABEL_21:
    if ( v14 )
      LeaveCriticalSection(lpCriticalSection);
    result = v5;
  }
LABEL_9:
  _InterlockedIncrement((volatile signed __int32 *)v3 + 2);
  goto LABEL_21;
}
