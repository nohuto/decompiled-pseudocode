/*
 * XREFs of ?SetLastError@ThreadLocalData@details_abi@wil@@QEAAXAEBUFailureInfo@3@@Z @ 0x1800066DC
 * Callers:
 *     ?GetContextAndNotifyFailure@details@wil@@YAXPEAUFailureInfo@2@PEAD_K@Z @ 0x1800069B0 (-GetContextAndNotifyFailure@details@wil@@YAXPEAUFailureInfo@2@PEAD_K@Z.c)
 * Callees:
 *     ?Set@ThreadLocalFailureInfo@details_abi@wil@@QEAAXAEBUFailureInfo@3@I@Z @ 0x18000645C (-Set@ThreadLocalFailureInfo@details_abi@wil@@QEAAXAEBUFailureInfo@3@I@Z.c)
 *     ??$make_range@PEAUThreadLocalFailureInfo@details_abi@wil@@@wil@@YA?AV?$pointer_range@PEAUThreadLocalFailureInfo@details_abi@wil@@@details@0@PEAUThreadLocalFailureInfo@details_abi@0@_K@Z @ 0x18000737C (--$make_range@PEAUThreadLocalFailureInfo@details_abi@wil@@@wil@@YA-AV-$pointer_range@PEAUThreadL.c)
 */

void __fastcall wil::details_abi::ThreadLocalData::SetLastError(
        wil::details_abi::ThreadLocalData *this,
        const struct wil::FailureInfo *a2)
{
  int v2; // edi
  HANDLE ProcessHeap; // rax
  LPVOID v6; // rax
  _WORD *i; // rcx
  __int64 v8; // rdx
  _DWORD *v9; // rcx
  volatile signed __int32 *v10; // rax
  _QWORD v11[2]; // [rsp+20h] [rbp-28h] BYREF
  _DWORD *v12; // [rsp+30h] [rbp-18h] BYREF
  _DWORD *v13; // [rsp+38h] [rbp-10h]

  v2 = *((_DWORD *)this + 4);
  if ( !*((_QWORD *)this + 3) )
  {
    if ( v2 )
    {
      ProcessHeap = GetProcessHeap();
      v6 = HeapAlloc(ProcessHeap, 8u, 0x1B8uLL);
      *((_QWORD *)this + 3) = v6;
      if ( v6 )
      {
        *((_DWORD *)this + 8) = 5;
        wil::make_range<wil::details_abi::ThreadLocalFailureInfo *>(v11, v6, 5LL);
        for ( i = (_WORD *)v11[0]; i != (_WORD *)v11[1]; i += 44 )
          *i = 88;
      }
    }
  }
  v8 = *((_QWORD *)this + 3);
  if ( v8 )
  {
    if ( !v2
      || (wil::make_range<wil::details_abi::ThreadLocalFailureInfo *>(&v12, v8, *((unsigned __int16 *)this + 16)),
          v12 == v13) )
    {
LABEL_14:
      v10 = (volatile signed __int32 *)*((_QWORD *)this + 1);
      *((_WORD *)this + 17) = ((unsigned int)*((unsigned __int16 *)this + 17) + 1) % *((unsigned __int16 *)this + 16);
      wil::details_abi::ThreadLocalFailureInfo::Set(
        (wil::details_abi::ThreadLocalFailureInfo *)(*((_QWORD *)this + 3) + 88LL * *((unsigned __int16 *)this + 17)),
        a2,
        _InterlockedIncrement(v10));
    }
    else
    {
      v9 = v12 + 2;
      while ( *(v9 - 1) <= *((_DWORD *)this + 4) || *v9 != *((_DWORD *)a2 + 1) )
      {
        v9 += 22;
        if ( v9 - 2 == v13 )
          goto LABEL_14;
      }
    }
  }
}
