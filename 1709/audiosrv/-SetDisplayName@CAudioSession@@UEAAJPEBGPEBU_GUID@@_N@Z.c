/*
 * XREFs of ?SetDisplayName@CAudioSession@@UEAAJPEBGPEBU_GUID@@_N@Z @ 0x180075C70
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
__int64 __fastcall CAudioSession::SetDisplayName(CAudioSession *this, char *a2, const struct _GUID *a3, char a4)
{
  const struct _GUID *v5; // r12
  CAudioSession *v7; // rdi
  int v8; // esi
  __int64 *v9; // r13
  __int64 v10; // rax
  int *v12; // rbx
  ATL::CAtlException *v13; // [rsp+28h] [rbp-60h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-58h] BYREF
  CAudioSession *v15; // [rsp+38h] [rbp-50h]
  __int64 v16; // [rsp+40h] [rbp-48h]
  const struct _GUID *v17; // [rsp+48h] [rbp-40h]

  v5 = a3;
  v7 = this;
  v8 = 0;
  if ( a4 )
    *((_BYTE *)this + 300) = 1;
  v9 = (__int64 *)((char *)this + 320);
  if ( (unsigned int)ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Compare(
                       (unsigned __int16 **)this + 40,
                       (__int64)a2)
    && (a4 || !*((_BYTE *)v7 + 300)) )
  {
    lpCriticalSection = (LPCRITICAL_SECTION)((char *)v7 + 352);
    LOBYTE(v15) = 0;
    ATL::CCritSecLock::Lock(&lpCriticalSection);
    v8 = 0;
    try
    {
      if ( a2 )
      {
        v10 = -1LL;
        do
          ++v10;
        while ( *(_WORD *)&a2[2 * v10] );
      }
      else
      {
        LODWORD(v10) = 0;
      }
      ATL::CSimpleStringT<unsigned short,0>::SetString(v9, a2, v10);
    }
    catch ( ATL::CAtlException *v13 )
    {
      v12 = (int *)v13;
      if ( *(_DWORD *)v13 == -1073741571 )
        _o__resetstkoflw();
      v7 = this;
      v5 = a3;
      v8 = *v12;
    }
    if ( (_BYTE)v15 )
      LeaveCriticalSection(lpCriticalSection);
    if ( v8 < 0 )
    {
      AudSrvTraceLoggingErrorHelper("CAudioSession::SetDisplayName", 277, v8);
    }
    else
    {
      (*(void (__fastcall **)(CAudioSession *))(*(_QWORD *)v7 + 8LL))(v7);
      lpCriticalSection = (LPCRITICAL_SECTION)&CAudioSessionDisplayNameChanged::`vftable';
      v15 = v7;
      v16 = *((_QWORD *)v7 + 40);
      v17 = v5;
      CLockedList<ATL::CComPtr<ISessionInternalEvents>,0,0>::ForEachEntry(
        (LPCRITICAL_SECTION)v7 + 14,
        (void (__fastcall ***)(_QWORD, CAudioSessionManager **))&lpCriticalSection);
      (*(void (__fastcall **)(CAudioSession *))(*(_QWORD *)v7 + 16LL))(v7);
    }
  }
  return (unsigned int)v8;
}
