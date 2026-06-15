/*
 * XREFs of ?RemoveGainStage@CAudioSession@@UEAAJPEBU_GUID@@0_NPEA_J@Z @ 0x1800753D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001E280 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18005F740 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?Release@CRefCountedObject@@QEAAJXZ @ 0x18006356C (-Release@CRefCountedObject@@QEAAJXZ.c)
 *     WPP_SF__guid_ @ 0x18006E318 (WPP_SF__guid_.c)
 *     ?GetNode@?$CAtlMap@U_GUID@@PEAVCGainStage@@V?$CElementTraits@U_GUID@@@ATL@@V?$CElementTraits@PEAVCGainStage@@@4@@ATL@@AEBAPEAVCNode@12@AEBU_GUID@@AEAI1AEAPEAV312@@Z @ 0x180071FC0 (-GetNode@-$CAtlMap@U_GUID@@PEAVCGainStage@@V-$CElementTraits@U_GUID@@@ATL@@V-$CElementTraits@PEA.c)
 *     ?Lookup@?$CAtlMap@U_GUID@@PEAVCGainStage@@V?$CElementTraits@U_GUID@@@ATL@@V?$CElementTraits@PEAVCGainStage@@@4@@ATL@@QEBA_NAEBU_GUID@@AEAPEAVCGainStage@@@Z @ 0x1800735E8 (-Lookup@-$CAtlMap@U_GUID@@PEAVCGainStage@@V-$CElementTraits@U_GUID@@@ATL@@V-$CElementTraits@PEAV.c)
 *     ?RemoveGainStageReference@CGainStage@@QEAAKXZ @ 0x1800755D0 (-RemoveGainStageReference@CGainStage@@QEAAKXZ.c)
 *     ?RemoveNode@?$CAtlMap@U_GUID@@PEAVCGainStage@@V?$CElementTraits@U_GUID@@@ATL@@V?$CElementTraits@PEAVCGainStage@@@4@@ATL@@AEAAXPEAVCNode@12@0@Z @ 0x180075630 (-RemoveNode@-$CAtlMap@U_GUID@@PEAVCGainStage@@V-$CElementTraits@U_GUID@@@ATL@@V-$CElementTraits@.c)
 *     WPP_SF_S_guid_ @ 0x180076C80 (WPP_SF_S_guid_.c)
 */

__int64 __fastcall CAudioSession::RemoveGainStage(
        CAudioSession *this,
        struct _GUID *a2,
        const struct _GUID *a3,
        char a4,
        CRefCountedObject *a5)
{
  CRefCountedObject *v5; // rdi
  unsigned int v6; // esi
  int v10; // r8d
  char *v11; // r15
  CRefCountedObject *v12; // rbx
  __int64 Node; // rax
  __int64 v15; // [rsp+30h] [rbp-20h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+38h] [rbp-18h] BYREF
  char v17; // [rsp+40h] [rbp-10h]
  unsigned int v18; // [rsp+80h] [rbp+30h] BYREF

  v5 = a5;
  v6 = 0;
  if ( a5 )
    *(_QWORD *)a5 = 0LL;
  v17 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 408);
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S_guid_(*((_QWORD *)WPP_GLOBAL_Control + 2), 101, v10, *((_QWORD *)this + 96), (__int64)a2);
  }
  v11 = (char *)this + 448;
  if ( ATL::CAtlMap<_GUID,CGainStage *,ATL::CElementTraits<_GUID>,ATL::CElementTraits<CGainStage *>>::Lookup(
         (__int64)this + 448,
         a2,
         &a5) )
  {
    v12 = a5;
    if ( !CGainStage::RemoveGainStageReference(a5) || a4 )
    {
      v15 = 0LL;
      Node = ATL::CAtlMap<_GUID,CGainStage *,ATL::CElementTraits<_GUID>,ATL::CElementTraits<CGainStage *>>::GetNode(
               (__int64)v11,
               a2,
               &v18,
               (unsigned int *)&a5,
               &v15);
      if ( Node )
      {
        ATL::CAtlMap<_GUID,CGainStage *,ATL::CElementTraits<_GUID>,ATL::CElementTraits<CGainStage *>>::RemoveNode(
          v11,
          Node,
          v15);
        if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
          && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF__guid_(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            0x66u,
            (__int64)&WPP_9673f45371ad3f1ae3c411824cdd701d_Traceguids,
            (__int64)v12 + 16);
        }
        if ( v5 )
          *(_QWORD *)v5 = *((_QWORD *)v12 + 5);
        CRefCountedObject::Release(v12);
      }
    }
    else if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
           && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
           && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF__guid_(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x67u,
        (__int64)&WPP_9673f45371ad3f1ae3c411824cdd701d_Traceguids,
        (__int64)v12 + 16);
    }
  }
  else
  {
    if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF__guid_(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x68u,
        (__int64)&WPP_9673f45371ad3f1ae3c411824cdd701d_Traceguids,
        (__int64)a2);
    }
    v6 = -2147024894;
    AudSrvTraceLoggingErrorHelper("CAudioSession::RemoveGainStage", 4555, -2147024894);
  }
  if ( v17 )
    LeaveCriticalSection(lpCriticalSection);
  return v6;
}
