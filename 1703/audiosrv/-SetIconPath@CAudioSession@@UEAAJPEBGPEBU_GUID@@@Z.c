/*
 * XREFs of ?SetIconPath@CAudioSession@@UEAAJPEBGPEBU_GUID@@@Z @ 0x18008F960
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001A360 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?ForEachEntry@?$CLockedList@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJAEAVCListWorker@1@@Z @ 0x1800207F0 (-ForEachEntry@-$CLockedList@V-$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJAEAVCListWo.c)
 *     ?SetString@?$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z @ 0x18002346C (-SetString@-$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004B5C4 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ?Compare@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEBAHPEBG@Z @ 0x18008A558 (-Compare@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEBAHPEBG@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioSession::SetIconPath(unsigned __int16 **this, char *a2, const struct _GUID *a3)
{
  const struct _GUID *v3; // r15
  unsigned __int16 **v5; // rsi
  int v6; // edi
  _QWORD *v7; // r12
  __int64 v8; // r9
  __int64 v9; // rax
  int *v11; // rbx
  ATL::CAtlException *v12; // [rsp+28h] [rbp-50h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-48h] BYREF
  unsigned __int16 **v14; // [rsp+38h] [rbp-40h]
  unsigned __int16 *v15; // [rsp+40h] [rbp-38h]
  const struct _GUID *v16; // [rsp+48h] [rbp-30h]

  v3 = a3;
  v5 = this;
  v6 = 0;
  v7 = this + 50;
  if ( (unsigned int)ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Compare(
                       this + 50,
                       (__int64)a2) )
  {
    lpCriticalSection = (LPCRITICAL_SECTION)(v5 + 53);
    LOBYTE(v14) = 0;
    ATL::CCritSecLock::Lock(&lpCriticalSection);
    try
    {
      if ( a2 )
      {
        v9 = -1LL;
        do
          ++v9;
        while ( *(_WORD *)&a2[2 * v9] );
      }
      else
      {
        LODWORD(v9) = 0;
      }
      ATL::CSimpleStringT<unsigned short,0>::SetString(v7, a2, v9, v8);
    }
    catch ( ATL::CAtlException *v12 )
    {
      v11 = (int *)v12;
      if ( *(_DWORD *)v12 == -1073741571 )
        _o__resetstkoflw();
      v5 = this;
      v3 = a3;
      v6 = *v11;
    }
    if ( (_BYTE)v14 )
      LeaveCriticalSection(lpCriticalSection);
    if ( v6 < 0 )
    {
      AudSrvTraceLoggingErrorHelper("CAudioSession::SetIconPath", 436, v6);
    }
    else
    {
      (*((void (__fastcall **)(unsigned __int16 **))*v5 + 1))(v5);
      lpCriticalSection = (LPCRITICAL_SECTION)&CAudioSessionIconPathChanged::`vftable';
      v14 = v5;
      v15 = v5[50];
      v16 = v3;
      CLockedList<ATL::CComPtr<ISessionInternalEvents>,0,0>::ForEachEntry(
        (LPCRITICAL_SECTION)(v5 + 79),
        (void (__fastcall ***)(_QWORD, _QWORD *))&lpCriticalSection);
      (*((void (__fastcall **)(unsigned __int16 **))*v5 + 2))(v5);
    }
  }
  return (unsigned int)v6;
}
