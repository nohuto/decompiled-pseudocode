/*
 * XREFs of ?Set@ThreadLocalFailureInfo@details_abi@wil@@QEAAXAEBUFailureInfo@3@I@Z @ 0x180086B6C
 * Callers:
 *     ?SetLastError@ThreadLocalData@details_abi@wil@@QEAAXAEBUFailureInfo@3@@Z @ 0x180086A34 (-SetLastError@ThreadLocalData@details_abi@wil@@QEAAXAEBUFailureInfo@3@@Z.c)
 * Callees:
 *     ??$WriteResultString@PEBG@details@wil@@YAPEAEPEAE0PEBGPEAPEBG@Z @ 0x180086ACC (--$WriteResultString@PEBG@details@wil@@YAPEAEPEAE0PEBGPEAPEBG@Z.c)
 *     ??$WriteResultString@PEBD@details@wil@@YAPEAEPEAE0PEBDPEAPEBD@Z @ 0x180086CB0 (--$WriteResultString@PEBD@details@wil@@YAPEAEPEAE0PEBDPEAPEBD@Z.c)
 *     ?ResultStringSize@details@wil@@YA_KPEBD@Z @ 0x180086D98 (-ResultStringSize@details@wil@@YA_KPEBD@Z.c)
 *     ?ResultStringSize@details@wil@@YA_KPEBG@Z @ 0x180086DBC (-ResultStringSize@details@wil@@YA_KPEBG@Z.c)
 */

void __fastcall wil::details_abi::ThreadLocalFailureInfo::Set(
        wil::details_abi::ThreadLocalFailureInfo *this,
        const struct wil::FailureInfo *a2,
        int a3)
{
  char *v3; // r15
  int v4; // eax
  char *v5; // rbp
  _QWORD *v6; // r12
  int v9; // eax
  __int64 v10; // rax
  unsigned __int64 v11; // rdi
  const char *v12; // rdx
  unsigned __int64 v13; // rdi
  const char *v14; // rdx
  SIZE_T v15; // rdi
  __int64 v16; // rcx
  const unsigned __int16 *v17; // rbx
  __int64 v18; // rax
  char *v19; // rax
  HANDLE ProcessHeap; // rax
  LPVOID v21; // rsi
  HANDLE v22; // rax

  *((_DWORD *)this + 1) = a3;
  v3 = (char *)this + 16;
  v4 = *((_DWORD *)a2 + 1);
  v5 = (char *)this + 40;
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
    v21 = HeapAlloc(ProcessHeap, 8u, v15);
    if ( v21 )
    {
      v22 = GetProcessHeap();
      HeapFree(v22, 0, *((LPVOID *)this + 9));
      *((_QWORD *)this + 9) = v21;
      *((_QWORD *)this + 10) = v15;
    }
  }
  v16 = *((_QWORD *)this + 9);
  if ( v16 )
  {
    v17 = (const unsigned __int16 *)(v16 + *((_QWORD *)this + 10));
    v18 = wil::details::WriteResultString<char const *>(v16, v17, *((_QWORD *)a2 + 6), v3);
    v19 = (char *)wil::details::WriteResultString<char const *>(v18, v17, *((_QWORD *)a2 + 15), v5);
    wil::details::WriteResultString<unsigned short const *>(v19, v17, *((wil::details **)a2 + 2), v6);
  }
}
