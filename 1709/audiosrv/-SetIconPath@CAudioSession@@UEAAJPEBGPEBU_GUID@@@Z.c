/*
 * XREFs of ?SetIconPath@CAudioSession@@UEAAJPEBGPEBU_GUID@@@Z @ 0x180075EF0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetString@?$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z @ 0x1800147BC (-SetString@-$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z.c)
 *     ?ForEachEntry@?$CLockedList@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJAEAVCListWorker@1@@Z @ 0x180015220 (-ForEachEntry@-$CLockedList@V-$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJAEAVCListWo.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001E280 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18005F740 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?Compare@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEBAHPEBG@Z @ 0x180070618 (-Compare@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEBAHPEBG@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioSession::SetIconPath(unsigned __int16 **this, char *a2, const struct _GUID *a3)
{
  const struct _GUID *v3; // r15
  unsigned __int16 **v5; // rsi
  int v6; // edi
  __int64 *v7; // r12
  __int64 v8; // rax
  int *v10; // rbx
  ATL::CAtlException *v11; // [rsp+28h] [rbp-50h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-48h] BYREF
  unsigned __int16 **v13; // [rsp+38h] [rbp-40h]
  unsigned __int16 *v14; // [rsp+40h] [rbp-38h]
  const struct _GUID *v15; // [rsp+48h] [rbp-30h]

  v3 = a3;
  v5 = this;
  v6 = 0;
  v7 = (__int64 *)(this + 41);
  if ( (unsigned int)ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Compare(
                       this + 41,
                       (__int64)a2) )
  {
    lpCriticalSection = (LPCRITICAL_SECTION)(v5 + 44);
    LOBYTE(v13) = 0;
    ATL::CCritSecLock::Lock(&lpCriticalSection);
    try
    {
      if ( a2 )
      {
        v8 = -1LL;
        do
          ++v8;
        while ( *(_WORD *)&a2[2 * v8] );
      }
      else
      {
        LODWORD(v8) = 0;
      }
      ATL::CSimpleStringT<unsigned short,0>::SetString(v7, a2, v8);
    }
    catch ( ATL::CAtlException *v11 )
    {
      v10 = (int *)v11;
      if ( *(_DWORD *)v11 == -1073741571 )
        _o__resetstkoflw();
      v5 = this;
      v3 = a3;
      v6 = *v10;
    }
    if ( (_BYTE)v13 )
      LeaveCriticalSection(lpCriticalSection);
    if ( v6 < 0 )
    {
      AudSrvTraceLoggingErrorHelper("CAudioSession::SetIconPath", 401, v6);
    }
    else
    {
      (*((void (__fastcall **)(unsigned __int16 **))*v5 + 1))(v5);
      lpCriticalSection = (LPCRITICAL_SECTION)&CAudioSessionIconPathChanged::`vftable';
      v13 = v5;
      v14 = v5[41];
      v15 = v3;
      CLockedList<ATL::CComPtr<ISessionInternalEvents>,0,0>::ForEachEntry(
        (LPCRITICAL_SECTION)v5 + 14,
        (void (__fastcall ***)(_QWORD, CAudioSessionManager **))&lpCriticalSection);
      (*((void (__fastcall **)(unsigned __int16 **))*v5 + 2))(v5);
    }
  }
  return (unsigned int)v6;
}
