/*
 * XREFs of ?SetLastError@ThreadLocalData@details_abi@wil@@QEAAXAEBUFailureInfo@3@@Z @ 0x180006364
 * Callers:
 *     ?GetContextAndNotifyFailure@details@wil@@YAXPEAUFailureInfo@2@PEAD_K@Z @ 0x180006640 (-GetContextAndNotifyFailure@details@wil@@YAXPEAUFailureInfo@2@PEAD_K@Z.c)
 * Callees:
 *     ?Set@ThreadLocalFailureInfo@details_abi@wil@@QEAAXAEBUFailureInfo@3@I@Z @ 0x1800060E0 (-Set@ThreadLocalFailureInfo@details_abi@wil@@QEAAXAEBUFailureInfo@3@I@Z.c)
 *     ??$make_range@PEAUThreadLocalFailureInfo@details_abi@wil@@@wil@@YA?AV?$pointer_range@PEAUThreadLocalFailureInfo@details_abi@wil@@@details@0@PEAUThreadLocalFailureInfo@details_abi@0@_K@Z @ 0x180006FC8 (--$make_range@PEAUThreadLocalFailureInfo@details_abi@wil@@@wil@@YA-AV-$pointer_range@PEAUThreadL.c)
 */

void __fastcall wil::details_abi::ThreadLocalData::SetLastError(
        wil::details_abi::ThreadLocalData *this,
        const struct wil::FailureInfo *a2)
{
  int v2; // edi
  __int64 v4; // rdx
  HANDLE ProcessHeap; // rax
  LPVOID v7; // rax
  _WORD *v8; // rcx
  _DWORD *v9; // rcx
  volatile signed __int32 *v10; // rax
  _WORD *v11; // [rsp+20h] [rbp-28h] BYREF
  _WORD *v12; // [rsp+28h] [rbp-20h]
  _DWORD *v13; // [rsp+30h] [rbp-18h] BYREF
  _DWORD *v14; // [rsp+38h] [rbp-10h]

  v2 = *((_DWORD *)this + 4);
  v4 = *((_QWORD *)this + 3);
  if ( v4 )
    goto LABEL_17;
  if ( v2 )
  {
    ProcessHeap = GetProcessHeap();
    v7 = HeapAlloc(ProcessHeap, 8u, 0x1B8uLL);
    *((_QWORD *)this + 3) = v7;
    if ( v7 )
    {
      *((_DWORD *)this + 8) = 5;
      wil::make_range<wil::details_abi::ThreadLocalFailureInfo *>(&v11, v7, 5LL);
      v8 = v11;
      if ( v11 != v12 )
      {
        do
        {
          *v8 = 88;
          v8 += 44;
        }
        while ( v8 != v12 );
        v4 = *((_QWORD *)this + 3);
      }
      if ( v4 )
      {
LABEL_17:
        if ( !v2
          || (wil::make_range<wil::details_abi::ThreadLocalFailureInfo *>(&v13, v4, *((unsigned __int16 *)this + 16)),
              v13 == v14) )
        {
LABEL_14:
          v10 = (volatile signed __int32 *)*((_QWORD *)this + 1);
          *((_WORD *)this + 17) = ((unsigned int)*((unsigned __int16 *)this + 17) + 1)
                                % *((unsigned __int16 *)this + 16);
          wil::details_abi::ThreadLocalFailureInfo::Set(
            (wil::details_abi::ThreadLocalFailureInfo *)(*((_QWORD *)this + 3) + 88LL * *((unsigned __int16 *)this + 17)),
            a2,
            _InterlockedIncrement(v10));
        }
        else
        {
          v9 = v13 + 2;
          while ( *(v9 - 1) <= *((_DWORD *)this + 4) || *v9 != *((_DWORD *)a2 + 1) )
          {
            v9 += 22;
            if ( v9 - 2 == v14 )
              goto LABEL_14;
          }
        }
      }
    }
  }
}
