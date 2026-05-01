/*
 * XREFs of ?SetLastError@ThreadLocalData@details_abi@wil@@QEAAXAEBUFailureInfo@3@@Z @ 0x180086A34
 * Callers:
 *     ?LogFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@JPEBG_NPEAG_KPEAD6PEAUFailureInfo@2@@Z @ 0x180082FD0 (-LogFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@JPEBG_NPEAG_KPEAD6PEAUFailureInfo@2@@Z.c)
 *     ?GetContextAndNotifyFailure@details@wil@@YAXPEAUFailureInfo@2@PEAD_K@Z @ 0x180086850 (-GetContextAndNotifyFailure@details@wil@@YAXPEAUFailureInfo@2@PEAD_K@Z.c)
 *     ?SetLastError@wil@@YAXAEBUFailureInfo@1@@Z @ 0x1800FF3CC (-SetLastError@wil@@YAXAEBUFailureInfo@1@@Z.c)
 * Callees:
 *     ?Set@ThreadLocalFailureInfo@details_abi@wil@@QEAAXAEBUFailureInfo@3@I@Z @ 0x180086B6C (-Set@ThreadLocalFailureInfo@details_abi@wil@@QEAAXAEBUFailureInfo@3@I@Z.c)
 */

void __fastcall wil::details_abi::ThreadLocalData::SetLastError(
        wil::details_abi::ThreadLocalData *this,
        const struct wil::FailureInfo *a2)
{
  _WORD *v2; // r8
  int v4; // edi
  volatile signed __int32 *v6; // rax
  HANDLE ProcessHeap; // rax
  _WORD *v8; // rax
  _WORD *v9; // rax
  _DWORD *v10; // rcx
  _DWORD *v11; // r8

  v2 = (_WORD *)*((_QWORD *)this + 3);
  v4 = *((_DWORD *)this + 4);
  if ( v2 )
    goto LABEL_20;
  if ( v4 )
  {
    ProcessHeap = GetProcessHeap();
    v8 = HeapAlloc(ProcessHeap, 8u, 0x1B8uLL);
    *((_QWORD *)this + 3) = v8;
    v2 = v8;
    if ( v8 )
    {
      v9 = v8 + 220;
      *((_DWORD *)this + 8) = 5;
      if ( v2 != v9 )
      {
        do
        {
          *v2 = 88;
          v2 += 44;
        }
        while ( v2 != v9 );
        v2 = (_WORD *)*((_QWORD *)this + 3);
      }
      if ( v2 )
      {
LABEL_20:
        if ( !v4 || (v10 = &v2[44 * *((unsigned __int16 *)this + 16)], v2 == (_WORD *)v10) )
        {
LABEL_5:
          v6 = (volatile signed __int32 *)*((_QWORD *)this + 1);
          *((_WORD *)this + 17) = ((unsigned int)*((unsigned __int16 *)this + 17) + 1)
                                % *((unsigned __int16 *)this + 16);
          wil::details_abi::ThreadLocalFailureInfo::Set(
            (wil::details_abi::ThreadLocalFailureInfo *)(*((_QWORD *)this + 3) + 88LL * *((unsigned __int16 *)this + 17)),
            a2,
            _InterlockedIncrement(v6));
        }
        else
        {
          v11 = v2 + 4;
          while ( *(v11 - 1) <= *((_DWORD *)this + 4) || *v11 != *((_DWORD *)a2 + 1) )
          {
            v11 += 22;
            if ( v11 - 2 == v10 )
              goto LABEL_5;
          }
        }
      }
    }
  }
}
