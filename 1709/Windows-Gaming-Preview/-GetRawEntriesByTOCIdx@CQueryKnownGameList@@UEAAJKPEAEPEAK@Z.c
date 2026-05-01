/*
 * XREFs of ?GetRawEntriesByTOCIdx@CQueryKnownGameList@@UEAAJKPEAEPEAK@Z @ 0x18003C1A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002DB4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002E30 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180002E60 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     __security_check_cookie @ 0x180040F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800428B0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CQueryKnownGameList::GetRawEntriesByTOCIdx(
        CQueryKnownGameList *this,
        unsigned int a2,
        unsigned __int8 *a3,
        unsigned int *a4)
{
  __int64 v8; // rdx
  unsigned int LastError; // ebx
  struct _RTL_CRITICAL_SECTION *v10; // rbp
  int v11; // eax
  bool v12; // cf
  __int64 v13; // rdx
  const char *v14; // r9
  DWORD NumberOfBytesRead; // [rsp+30h] [rbp-58h] BYREF
  __int64 v17; // [rsp+38h] [rbp-50h]
  struct _RTL_CRITICAL_SECTION *v18; // [rsp+40h] [rbp-48h]
  _BYTE v19[8]; // [rsp+48h] [rbp-40h] BYREF
  LONG lDistanceToMove; // [rsp+50h] [rbp-38h]
  unsigned int v21; // [rsp+54h] [rbp-34h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  v17 = -2LL;
  if ( !a3 )
  {
    v8 = 557LL;
LABEL_3:
    LastError = -2147467261;
LABEL_4:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\knowngamelist.cpp",
      (const char *)LastError);
    return LastError;
  }
  if ( !a4 )
  {
    v8 = 558LL;
    goto LABEL_3;
  }
  if ( a2 >= *((_DWORD *)this + 198) )
  {
    LastError = -2147483637;
    v8 = 560LL;
    goto LABEL_4;
  }
  v10 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 752);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 752));
  v18 = v10;
  v11 = (*(__int64 (__fastcall **)(CQueryKnownGameList *, _QWORD, _BYTE *))(*(_QWORD *)this + 88LL))(this, a2, v19);
  LastError = v11;
  if ( v11 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x236,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\knowngamelist.cpp",
      (const char *)(unsigned int)v11);
    goto LABEL_21;
  }
  v12 = *a4 < v21;
  *a4 = v21;
  if ( v12 )
  {
    LastError = -2147024774;
    goto LABEL_21;
  }
  if ( SetFilePointer(*((HANDLE *)this + 3), lDistanceToMove, 0LL, 0) == -1 )
  {
    LastError = -2147418113;
    v13 = 576LL;
LABEL_19:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\knowngamelist.cpp",
      (const char *)LastError);
    goto LABEL_21;
  }
  if ( !ReadFile(*((HANDLE *)this + 3), a3, *a4, &NumberOfBytesRead, 0LL) )
  {
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0x242,
                  (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\knowngamelist.cpp",
                  v14);
    goto LABEL_21;
  }
  if ( NumberOfBytesRead != *a4 )
  {
    LastError = -2147024883;
    v13 = 579LL;
    goto LABEL_19;
  }
  LastError = 0;
LABEL_21:
  if ( v10 )
    LeaveCriticalSection(v10);
  return LastError;
}
