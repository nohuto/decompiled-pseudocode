/*
 * XREFs of ?GetRawEntriesByTOCIdx@CQueryKnownGameList@@UEAAJKPEAEPEAK@Z @ 0x18003E310
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002F8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180002FBC (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     __security_check_cookie @ 0x180041F40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180043940 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CQueryKnownGameList::GetRawEntriesByTOCIdx(
        struct _RTL_CRITICAL_SECTION *this,
        unsigned int a2,
        unsigned __int8 *a3,
        unsigned int *a4)
{
  __int64 v8; // rdx
  unsigned int LastError; // ebx
  struct _RTL_CRITICAL_SECTION *v10; // rbp
  int v11; // eax
  unsigned __int64 v12; // r9
  __int64 v13; // rdx
  bool v14; // cf
  const char *v15; // r9
  DWORD NumberOfBytesRead; // [rsp+30h] [rbp-58h] BYREF
  __int64 v18; // [rsp+38h] [rbp-50h]
  struct _RTL_CRITICAL_SECTION *v19; // [rsp+40h] [rbp-48h]
  _BYTE v20[8]; // [rsp+48h] [rbp-40h] BYREF
  LONG lDistanceToMove; // [rsp+50h] [rbp-38h]
  unsigned int v22; // [rsp+54h] [rbp-34h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  v18 = -2LL;
  if ( !a3 )
  {
    v8 = 561LL;
LABEL_3:
    LastError = -2147467261;
LABEL_4:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      (const char *)LastError);
    return LastError;
  }
  if ( !a4 )
  {
    v8 = 562LL;
    goto LABEL_3;
  }
  if ( a2 >= LODWORD(this[20].DebugInfo) )
  {
    LastError = -2147483637;
    v8 = 564LL;
    goto LABEL_4;
  }
  v10 = this + 19;
  EnterCriticalSection(this + 19);
  v19 = v10;
  v11 = (*(__int64 (__fastcall **)(struct _RTL_CRITICAL_SECTION *, _QWORD, _BYTE *))&this->DebugInfo[1].Flags)(
          this,
          a2,
          v20);
  LastError = v11;
  if ( v11 < 0 )
  {
    v12 = (unsigned int)v11;
    v13 = 570LL;
LABEL_20:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      (const char *)v12);
    goto LABEL_22;
  }
  v14 = *a4 < v22;
  *a4 = v22;
  if ( v14 )
  {
    LastError = -2147024774;
    goto LABEL_22;
  }
  if ( SetFilePointer(this->LockSemaphore, lDistanceToMove, 0LL, 0) == -1 )
  {
    LastError = -2147418113;
    v13 = 580LL;
LABEL_19:
    v12 = LastError;
    goto LABEL_20;
  }
  if ( !ReadFile(this->LockSemaphore, a3, *a4, &NumberOfBytesRead, 0LL) )
  {
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0x246,
                  (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
                  v15);
    goto LABEL_22;
  }
  if ( NumberOfBytesRead != *a4 )
  {
    LastError = -2147024883;
    v13 = 583LL;
    goto LABEL_19;
  }
  LastError = 0;
LABEL_22:
  if ( v10 )
    LeaveCriticalSection(v10);
  return LastError;
}
