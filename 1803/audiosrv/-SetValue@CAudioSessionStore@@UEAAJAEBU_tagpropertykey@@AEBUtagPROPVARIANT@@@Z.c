/*
 * XREFs of ?SetValue@CAudioSessionStore@@UEAAJAEBU_tagpropertykey@@AEBUtagPROPVARIANT@@@Z @ 0x1800BF080
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18002FE30 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004A8B0 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180061018 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180061038 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?IsValidProperty@CAudioSessionStore@@AEAA_NPEBUtagPROPVARIANT@@@Z @ 0x1800BC96C (-IsValidProperty@CAudioSessionStore@@AEAA_NPEBUtagPROPVARIANT@@@Z.c)
 */

__int64 __fastcall CAudioSessionStore::SetValue(
        CAudioSessionStore *this,
        const struct _tagpropertykey *a2,
        const struct tagPROPVARIANT *a3)
{
  __int64 v6; // rcx
  GUID **v8; // rsi
  GUID **v9; // rdi
  GUID *v10; // rax
  __int64 v11; // rcx
  GUID *v12; // rax
  GUID *v13; // rdi
  HRESULT v14; // ebx
  GUID *v15; // rcx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-30h] BYREF
  char v17; // [rsp+28h] [rbp-28h]
  PROPVARIANT pvarDest[2]; // [rsp+30h] [rbp-20h] BYREF
  __int64 v19; // [rsp+40h] [rbp-10h]

  if ( !CAudioSessionStore::IsValidProperty(this, a3) )
    return 2147944030LL;
  v17 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)(v6 + 48);
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v8 = (GUID **)((char *)this + 24);
  v9 = v8;
  v10 = *v8;
  if ( *v8 )
  {
    while ( 1 )
    {
      if ( v10[1].Data1 == a2->pid )
      {
        v11 = *(_QWORD *)&v10->Data1 - *(_QWORD *)&a2->fmtid.Data1;
        if ( *(_QWORD *)&v10->Data1 == *(_QWORD *)&a2->fmtid.Data1 )
          v11 = *(_QWORD *)v10->Data4 - *(_QWORD *)a2->fmtid.Data4;
        if ( !v11 )
          break;
      }
      v9 = (GUID **)&v10[3];
      v10 = *(GUID **)&v10[3].Data1;
      if ( !v10 )
        goto LABEL_9;
    }
    pvarDest[0] = 0LL;
    pvarDest[1] = 0LL;
    v19 = 0LL;
    v14 = PropVariantCopy(pvarDest, (const PROPVARIANT *)a3);
    if ( !v14 )
    {
      PropVariantClear((PROPVARIANT *)(*v9)[1].Data4);
      v15 = *v9;
      *(GUID *)((char *)v15 + 24) = *(GUID *)pvarDest;
      *(_QWORD *)v15[2].Data4 = v19;
    }
  }
  else
  {
LABEL_9:
    v12 = (GUID *)operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
    v13 = v12;
    if ( v12 )
    {
      *(_QWORD *)v12[1].Data4 = 0LL;
      *(_QWORD *)&v12[2].Data1 = 0LL;
      *(_QWORD *)v12[2].Data4 = 0LL;
      v14 = PropVariantCopy((PROPVARIANT *)v12[1].Data4, (const PROPVARIANT *)a3);
      if ( v14 )
      {
        operator delete(v13, (const struct std::nothrow_t *)0x38);
      }
      else
      {
        while ( *v8 )
          v8 = (GUID **)&(*v8)[3];
        *(_QWORD *)&v13[3].Data1 = 0LL;
        v13[1].Data1 = a2->pid;
        *v13 = a2->fmtid;
        *v8 = v13;
      }
    }
    else
    {
      v14 = -2147024882;
    }
  }
  if ( v17 )
    LeaveCriticalSection(lpCriticalSection);
  if ( v14 < 0 )
    AudSrvTraceLoggingErrorHelper("CAudioSessionStore::SetValue", 5391, v14);
  return (unsigned int)v14;
}
