/*
 * XREFs of ?Set@ThreadLocalFailureInfo@details_abi@wil@@QEAAXAEBUFailureInfo@3@I@Z @ 0x1800060E0
 * Callers:
 *     ?SetLastError@ThreadLocalData@details_abi@wil@@QEAAXAEBUFailureInfo@3@@Z @ 0x180006364 (-SetLastError@ThreadLocalData@details_abi@wil@@QEAAXAEBUFailureInfo@3@@Z.c)
 * Callees:
 *     memcpy_s @ 0x1800050DC (memcpy_s.c)
 *     ??$WriteResultString@PEBD@details@wil@@YAPEAEPEAE0PEBDPEAPEBD@Z @ 0x180006F28 (--$WriteResultString@PEBD@details@wil@@YAPEAEPEAE0PEBDPEAPEBD@Z.c)
 */

void __fastcall wil::details_abi::ThreadLocalFailureInfo::Set(
        wil::details_abi::ThreadLocalFailureInfo *this,
        const struct wil::FailureInfo *a2,
        int a3)
{
  char *v3; // r15
  _QWORD *v4; // r12
  __int64 v6; // rsi
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // r8
  unsigned __int64 v15; // rbp
  __int64 v16; // rdx
  __int64 v17; // rdx
  SIZE_T v18; // r14
  HANDLE ProcessHeap; // rax
  LPVOID v20; // r15
  HANDLE v21; // rax
  __int64 v22; // rcx
  __int64 v23; // r14
  __int64 v24; // rax
  _WORD *v25; // rax
  __int16 *v26; // r8
  bool v27; // zf
  _WORD *v28; // r15
  unsigned __int64 v29; // rbp
  unsigned __int64 v30; // r14
  unsigned __int64 v31; // rbx
  _WORD *v32; // rax
  __int16 v33; // [rsp+60h] [rbp+18h] BYREF

  *((_DWORD *)this + 1) = a3;
  v3 = (char *)this + 40;
  v4 = (_QWORD *)((char *)this + 64);
  *((_DWORD *)this + 2) = *((_DWORD *)a2 + 1);
  *((_QWORD *)this + 2) = 0LL;
  v6 = -1LL;
  *((_WORD *)this + 12) = *((_WORD *)a2 + 28);
  *((_DWORD *)this + 7) = *(_DWORD *)a2;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = *((_QWORD *)a2 + 16);
  *((_QWORD *)this + 7) = *((_QWORD *)a2 + 17);
  *((_QWORD *)this + 8) = 0LL;
  v8 = *((_QWORD *)a2 + 6);
  if ( v8 )
  {
    v10 = -1LL;
    do
      ++v10;
    while ( *(_BYTE *)(v8 + v10) );
    v9 = v10 + 1;
  }
  else
  {
    v9 = 1LL;
  }
  v11 = *((_QWORD *)a2 + 15);
  if ( v11 )
  {
    v13 = -1LL;
    do
      ++v13;
    while ( *(_BYTE *)(v11 + v13) );
    v12 = v13 + 1;
  }
  else
  {
    v12 = 1LL;
  }
  v14 = *((_QWORD *)a2 + 2);
  v15 = 2LL;
  if ( v14 )
  {
    v17 = -1LL;
    do
      ++v17;
    while ( *(_WORD *)(v14 + 2 * v17) );
    v16 = 2 * v17 + 2;
  }
  else
  {
    v16 = 2LL;
  }
  v18 = v9 + v16 + v12;
  if ( !*((_QWORD *)this + 9) || *((_QWORD *)this + 10) < v18 )
  {
    ProcessHeap = GetProcessHeap();
    v20 = HeapAlloc(ProcessHeap, 8u, v18);
    if ( v20 )
    {
      v21 = GetProcessHeap();
      HeapFree(v21, 0, *((LPVOID *)this + 9));
      *((_QWORD *)this + 9) = v20;
      *((_QWORD *)this + 10) = v18;
    }
    v3 = (char *)this + 40;
  }
  v22 = *((_QWORD *)this + 9);
  if ( v22 )
  {
    v23 = v22 + *((_QWORD *)this + 10);
    v24 = wil::details::WriteResultString<char const *>(v22, v23, *((_QWORD *)a2 + 6), (char *)this + 16);
    v25 = (_WORD *)wil::details::WriteResultString<char const *>(v24, v23, *((_QWORD *)a2 + 15), v3);
    v26 = &v33;
    v27 = *((_QWORD *)a2 + 2) == 0LL;
    v28 = v25;
    v33 = 0;
    if ( !v27 )
      v26 = (__int16 *)*((_QWORD *)a2 + 2);
    if ( v26 )
    {
      do
        ++v6;
      while ( v26[v6] );
      v15 = 2 * v6 + 2;
    }
    v29 = v15 >> 1;
    v30 = (unsigned __int64)(v23 - (_QWORD)v25) >> 1;
    v31 = v30;
    if ( v29 < v30 )
      v31 = v29;
    memcpy_s(v25, 2 * v30, v26, 2 * v31);
    if ( v4 )
    {
      v32 = 0LL;
      if ( v31 > 1 )
        v32 = v28;
      *v4 = v32;
    }
    if ( v31 < v29 )
    {
      if ( v31 )
        v28[v31 - 1] = 0;
    }
  }
}
