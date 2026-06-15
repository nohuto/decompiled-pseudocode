/*
 * XREFs of ?GetAt@CAudioSessionStore@@UEAAJKPEAU_tagpropertykey@@@Z @ 0x18009C3C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001A360 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004B5C4 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CAudioSessionStore::GetAt(CAudioSessionStore *this, int a2, struct _tagpropertykey *a3)
{
  __int64 v7; // rcx
  int v8; // edx
  int v9; // ebx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v11; // [rsp+28h] [rbp-10h]

  if ( !a3 )
    return 2147500035LL;
  v11 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 48);
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v7 = *((_QWORD *)this + 3);
  v8 = 0;
  if ( !v7 )
    goto LABEL_10;
  do
  {
    if ( *(_WORD *)(v7 + 24) )
    {
      if ( v8 == a2 )
        break;
      ++v8;
    }
    v7 = *(_QWORD *)(v7 + 48);
  }
  while ( v7 );
  if ( v7 )
  {
    a3->fmtid = *(GUID *)v7;
    a3->pid = *(_DWORD *)(v7 + 16);
    v9 = 0;
  }
  else
  {
LABEL_10:
    *(_QWORD *)&a3->fmtid.Data1 = 0LL;
    *(_QWORD *)a3->fmtid.Data4 = 0LL;
    a3->pid = 0;
    v9 = -2147024809;
  }
  if ( v11 )
    LeaveCriticalSection(lpCriticalSection);
  if ( v9 < 0 )
    AudSrvTraceLoggingErrorHelper("CAudioSessionStore::GetAt", 5215, v9);
  return (unsigned int)v9;
}
