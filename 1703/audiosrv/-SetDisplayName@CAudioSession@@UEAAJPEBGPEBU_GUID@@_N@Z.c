/*
 * XREFs of ?SetDisplayName@CAudioSession@@UEAAJPEBGPEBU_GUID@@_N@Z @ 0x18008F6E0
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
__int64 __fastcall CAudioSession::SetDisplayName(CAudioSession *this, char *a2, const struct _GUID *a3, char a4)
{
  const struct _GUID *v5; // r12
  CAudioSession *v7; // rdi
  int v8; // esi
  _QWORD *v9; // r13
  __int64 v10; // r9
  __int64 v11; // rax
  int *v13; // rbx
  ATL::CAtlException *v14; // [rsp+28h] [rbp-60h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-58h] BYREF
  CAudioSession *v16; // [rsp+38h] [rbp-50h]
  __int64 v17; // [rsp+40h] [rbp-48h]
  const struct _GUID *v18; // [rsp+48h] [rbp-40h]

  v5 = a3;
  v7 = this;
  v8 = 0;
  if ( a4 )
    *((_BYTE *)this + 372) = 1;
  v9 = (_QWORD *)((char *)this + 392);
  if ( (unsigned int)ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Compare(
                       (unsigned __int16 **)this + 49,
                       (__int64)a2)
    && (a4 || !*((_BYTE *)v7 + 372)) )
  {
    lpCriticalSection = (LPCRITICAL_SECTION)((char *)v7 + 424);
    LOBYTE(v16) = 0;
    ATL::CCritSecLock::Lock(&lpCriticalSection);
    v8 = 0;
    try
    {
      if ( a2 )
      {
        v11 = -1LL;
        do
          ++v11;
        while ( *(_WORD *)&a2[2 * v11] );
      }
      else
      {
        LODWORD(v11) = 0;
      }
      ATL::CSimpleStringT<unsigned short,0>::SetString(v9, a2, v11, v10);
    }
    catch ( ATL::CAtlException *v14 )
    {
      v13 = (int *)v14;
      if ( *(_DWORD *)v14 == -1073741571 )
        _o__resetstkoflw();
      v7 = this;
      v5 = a3;
      v8 = *v13;
    }
    if ( (_BYTE)v16 )
      LeaveCriticalSection(lpCriticalSection);
    if ( v8 < 0 )
    {
      AudSrvTraceLoggingErrorHelper("CAudioSession::SetDisplayName", 312, v8);
    }
    else
    {
      (*(void (__fastcall **)(CAudioSession *))(*(_QWORD *)v7 + 8LL))(v7);
      lpCriticalSection = (LPCRITICAL_SECTION)&CAudioSessionDisplayNameChanged::`vftable';
      v16 = v7;
      v17 = *((_QWORD *)v7 + 49);
      v18 = v5;
      CLockedList<ATL::CComPtr<ISessionInternalEvents>,0,0>::ForEachEntry(
        (LPCRITICAL_SECTION)((char *)v7 + 632),
        (void (__fastcall ***)(_QWORD, _QWORD *))&lpCriticalSection);
      (*(void (__fastcall **)(CAudioSession *))(*(_QWORD *)v7 + 16LL))(v7);
    }
  }
  return (unsigned int)v8;
}
