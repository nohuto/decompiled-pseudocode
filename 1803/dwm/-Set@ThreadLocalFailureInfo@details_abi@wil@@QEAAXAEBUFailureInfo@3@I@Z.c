/*
 * XREFs of ?Set@ThreadLocalFailureInfo@details_abi@wil@@QEAAXAEBUFailureInfo@3@I@Z @ 0x140005CCC
 * Callers:
 *     ?SetLastError@ThreadLocalData@details_abi@wil@@QEAAXAEBUFailureInfo@3@@Z @ 0x140005E08 (-SetLastError@ThreadLocalData@details_abi@wil@@QEAAXAEBUFailureInfo@3@@Z.c)
 * Callees:
 *     ??$WriteResultString@PEBD@details@wil@@YAPEAEPEAE0PEBDPEAPEBD@Z @ 0x1400045F4 (--$WriteResultString@PEBD@details@wil@@YAPEAEPEAE0PEBDPEAPEBD@Z.c)
 *     ??$WriteResultString@PEBG@details@wil@@YAPEAEPEAE0PEBGPEAPEBG@Z @ 0x140004680 (--$WriteResultString@PEBG@details@wil@@YAPEAEPEAE0PEBGPEAPEBG@Z.c)
 *     ?ResultStringSize@details@wil@@YA_KPEBD@Z @ 0x140005C34 (-ResultStringSize@details@wil@@YA_KPEBD@Z.c)
 *     ?ResultStringSize@details@wil@@YA_KPEBG@Z @ 0x140005C58 (-ResultStringSize@details@wil@@YA_KPEBG@Z.c)
 */

void __fastcall wil::details_abi::ThreadLocalFailureInfo::Set(
        wil::details_abi::ThreadLocalFailureInfo *this,
        const struct wil::FailureInfo *a2,
        int a3)
{
  _QWORD *v3; // r15
  int v4; // eax
  _QWORD *v5; // rbp
  _QWORD *v6; // r12
  int v9; // eax
  __int64 v10; // rax
  __int64 v11; // rdi
  const char *v12; // rdx
  __int64 v13; // rdi
  const char *v14; // rdx
  SIZE_T v15; // rdi
  HANDLE ProcessHeap; // rax
  LPVOID v17; // rsi
  HANDLE v18; // rax
  char *v19; // rcx
  const char *v20; // rbx
  char *v21; // rax
  char *v22; // rax

  *((_DWORD *)this + 1) = a3;
  v3 = (_QWORD *)((char *)this + 16);
  v4 = *((_DWORD *)a2 + 1);
  v5 = (_QWORD *)((char *)this + 40);
  *((_QWORD *)this + 2) = 0LL;
  v6 = (_QWORD *)((char *)this + 64);
  *((_DWORD *)this + 2) = v4;
  *((_WORD *)this + 12) = *((_WORD *)a2 + 28);
  v9 = *(_DWORD *)a2;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 7) = v9;
  *((_QWORD *)this + 6) = *((_QWORD *)a2 + 16);
  v10 = *((_QWORD *)a2 + 17);
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 7) = v10;
  v11 = wil::details::ResultStringSize(*((wil::details **)a2 + 2), (const unsigned __int16 *)a2);
  v13 = wil::details::ResultStringSize(*((wil::details **)a2 + 6), v12) + v11;
  v15 = wil::details::ResultStringSize(*((wil::details **)a2 + 15), v14) + v13;
  if ( !*((_QWORD *)this + 9) || *((_QWORD *)this + 10) < v15 )
  {
    ProcessHeap = GetProcessHeap();
    v17 = HeapAlloc(ProcessHeap, 8u, v15);
    if ( v17 )
    {
      v18 = GetProcessHeap();
      HeapFree(v18, 0, *((LPVOID *)this + 9));
      *((_QWORD *)this + 9) = v17;
      *((_QWORD *)this + 10) = v15;
    }
  }
  v19 = (char *)*((_QWORD *)this + 9);
  if ( v19 )
  {
    v20 = &v19[*((_QWORD *)this + 10)];
    v21 = wil::details::WriteResultString<char const *>(v19, v20, *((wil::details **)a2 + 6), v3);
    v22 = wil::details::WriteResultString<char const *>(v21, v20, *((wil::details **)a2 + 15), v5);
    wil::details::WriteResultString<unsigned short const *>(
      v22,
      (const unsigned __int16 *)v20,
      *((wil::details **)a2 + 2),
      v6);
  }
}
