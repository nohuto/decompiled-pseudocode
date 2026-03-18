/*
 * XREFs of ?AllocateNewBlock@CDataStreamWriter@@IEAAJI@Z @ 0x18008817C
 * Callers:
 *     ?BeginCommand@CChannel@@AEAAJPEAXII@Z @ 0x180087734 (-BeginCommand@CChannel@@AEAAJPEAXII@Z.c)
 *     ?EnsureItem@CDataStreamWriter@@QEAAJI@Z @ 0x180087D6C (-EnsureItem@CDataStreamWriter@@QEAAJI@Z.c)
 *     ?EnsureSize@CDataStreamWriter@@IEAAJI@Z @ 0x180088320 (-EnsureSize@CDataStreamWriter@@IEAAJI@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
 */

__int64 __fastcall CDataStreamWriter::AllocateNewBlock(CDataStreamWriter *this, unsigned int a2)
{
  unsigned int v4; // esi
  _QWORD *v5; // rax
  void *v6; // rbx
  unsigned int v7; // edx
  int v8; // eax
  unsigned int v9; // ecx
  unsigned int v10; // esi
  __int64 v11; // rax
  CDataStreamWriter **v13; // rcx
  CDataStreamWriter *v14; // rax

  v4 = a2 + 36;
  v5 = HeapAlloc(WPF::g_processHeap, 0, a2 + 36LL);
  v6 = v5;
  if ( v5 )
  {
    v5[1] = 0LL;
    v5[2] = 0LL;
    *((_DWORD *)v5 + 7) = 0;
    *v5 = &CDataStreamBlock::`vftable';
    *((_DWORD *)v5 + 6) = a2;
  }
  else
  {
    v6 = 0LL;
  }
  if ( v6 )
  {
    v7 = *((_DWORD *)this + 6);
    v8 = -1;
    v9 = v7 + v4;
    if ( v7 + v4 >= v7 )
      v8 = v7 + v4;
    v10 = v9 < v7 ? 0x80070216 : 0;
    *((_DWORD *)this + 6) = v8;
    if ( v9 < v7 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x1EFu);
    }
    else
    {
      v11 = *((_QWORD *)this + 2);
      if ( v11 )
      {
        v13 = (CDataStreamWriter **)*((_QWORD *)this + 1);
        v14 = (CDataStreamWriter *)(v11 + 8);
        if ( *v13 != this )
          __fastfail(3u);
        *(_QWORD *)v14 = this;
        *((_QWORD *)v14 + 1) = v13;
        *v13 = v14;
        *((_QWORD *)this + 1) = v14;
      }
      *((_QWORD *)this + 2) = v6;
      v6 = 0LL;
    }
  }
  else
  {
    v10 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x1ECu);
  }
  operator delete(v6);
  return v10;
}
