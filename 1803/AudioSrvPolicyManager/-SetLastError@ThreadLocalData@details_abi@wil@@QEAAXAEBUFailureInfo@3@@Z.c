/*
 * XREFs of ?SetLastError@ThreadLocalData@details_abi@wil@@QEAAXAEBUFailureInfo@3@@Z @ 0x180003390
 * Callers:
 *     ?GetContextAndNotifyFailure@details@wil@@YAXPEAUFailureInfo@2@PEAD_K@Z @ 0x180003780 (-GetContextAndNotifyFailure@details@wil@@YAXPEAUFailureInfo@2@PEAD_K@Z.c)
 * Callees:
 *     ??$WriteResultString@PEBG@details@wil@@YAPEAEPEAE0PEBGPEAPEBG@Z @ 0x180007E04 (--$WriteResultString@PEBG@details@wil@@YAPEAEPEAE0PEBGPEAPEBG@Z.c)
 *     ??$WriteResultString@PEBD@details@wil@@YAPEAEPEAE0PEBDPEAPEBD@Z @ 0x180007EBC (--$WriteResultString@PEBD@details@wil@@YAPEAEPEAE0PEBDPEAPEBD@Z.c)
 */

void __fastcall wil::details_abi::ThreadLocalData::SetLastError(
        wil::details_abi::ThreadLocalData *this,
        const struct wil::FailureInfo *a2)
{
  _WORD *v2; // r8
  int v3; // edi
  HANDLE ProcessHeap; // rax
  _WORD *v7; // rax
  _WORD *v8; // rax
  _DWORD *v9; // rcx
  _DWORD *v10; // r8
  __int64 v11; // r8
  volatile signed __int32 *v12; // rax
  signed __int32 v13; // ecx
  __int64 v14; // rdx
  __int64 v15; // rdi
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // r9
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rdx
  SIZE_T v23; // rbx
  HANDLE v24; // rax
  LPVOID v25; // rbp
  HANDLE v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rbx
  __int64 v29; // rax
  void *v30; // rax

  v2 = (_WORD *)*((_QWORD *)this + 3);
  v3 = *((_DWORD *)this + 4);
  if ( v2 )
    goto LABEL_35;
  if ( v3 )
  {
    ProcessHeap = GetProcessHeap();
    v7 = HeapAlloc(ProcessHeap, 8u, 0x1B8uLL);
    *((_QWORD *)this + 3) = v7;
    v2 = v7;
    if ( v7 )
    {
      v8 = v7 + 220;
      *((_DWORD *)this + 8) = 5;
      if ( v2 != v8 )
      {
        do
        {
          *v2 = 88;
          v2 += 44;
        }
        while ( v2 != v8 );
        v2 = (_WORD *)*((_QWORD *)this + 3);
      }
      if ( v2 )
      {
LABEL_35:
        if ( !v3 || (v9 = &v2[44 * *((unsigned __int16 *)this + 16)], v2 == (_WORD *)v9) )
        {
LABEL_14:
          v11 = 1LL;
          v12 = (volatile signed __int32 *)*((_QWORD *)this + 1);
          *((_WORD *)this + 17) = ((unsigned int)*((unsigned __int16 *)this + 17) + 1)
                                % *((unsigned __int16 *)this + 16);
          v13 = _InterlockedExchangeAdd(v12, 1u);
          v14 = -1LL;
          v15 = *((_QWORD *)this + 3) + 88LL * *((unsigned __int16 *)this + 17);
          *(_DWORD *)(v15 + 4) = v13 + 1;
          *(_DWORD *)(v15 + 8) = *((_DWORD *)a2 + 1);
          *(_QWORD *)(v15 + 16) = 0LL;
          *(_WORD *)(v15 + 24) = *((_WORD *)a2 + 28);
          *(_DWORD *)(v15 + 28) = *(_DWORD *)a2;
          *(_QWORD *)(v15 + 40) = 0LL;
          *(_QWORD *)(v15 + 48) = *((_QWORD *)a2 + 16);
          *(_QWORD *)(v15 + 56) = *((_QWORD *)a2 + 17);
          *(_QWORD *)(v15 + 64) = 0LL;
          v16 = *((_QWORD *)a2 + 6);
          if ( v16 )
          {
            v18 = -1LL;
            do
              ++v18;
            while ( *(_BYTE *)(v16 + v18) );
            v17 = v18 + 1;
          }
          else
          {
            v17 = 1LL;
          }
          v19 = *((_QWORD *)a2 + 15);
          if ( v19 )
          {
            v20 = -1LL;
            do
              ++v20;
            while ( *(_BYTE *)(v19 + v20) );
            v11 = v20 + 1;
          }
          v21 = *((_QWORD *)a2 + 2);
          if ( v21 )
          {
            do
              ++v14;
            while ( *(_WORD *)(v21 + 2 * v14) );
            v22 = 2 * v14 + 2;
          }
          else
          {
            v22 = 2LL;
          }
          v23 = v17 + v22 + v11;
          if ( !*(_QWORD *)(v15 + 72) || *(_QWORD *)(v15 + 80) < v23 )
          {
            v24 = GetProcessHeap();
            v25 = HeapAlloc(v24, 8u, v23);
            if ( v25 )
            {
              v26 = GetProcessHeap();
              HeapFree(v26, 0, *(LPVOID *)(v15 + 72));
              *(_QWORD *)(v15 + 72) = v25;
              *(_QWORD *)(v15 + 80) = v23;
            }
          }
          v27 = *(_QWORD *)(v15 + 72);
          if ( v27 )
          {
            v28 = v27 + *(_QWORD *)(v15 + 80);
            v29 = wil::details::WriteResultString<char const *>(v27, v28, *((_QWORD *)a2 + 6), v15 + 16);
            v30 = (void *)wil::details::WriteResultString<char const *>(v29, v28, *((_QWORD *)a2 + 15), v15 + 40);
            wil::details::WriteResultString<unsigned short const *>(v30);
          }
        }
        else
        {
          v10 = v2 + 4;
          while ( *(v10 - 1) <= *((_DWORD *)this + 4) || *v10 != *((_DWORD *)a2 + 1) )
          {
            v10 += 22;
            if ( v10 - 2 == v9 )
              goto LABEL_14;
          }
        }
      }
    }
  }
}
