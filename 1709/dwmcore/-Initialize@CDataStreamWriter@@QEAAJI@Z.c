/*
 * XREFs of ?Initialize@CDataStreamWriter@@QEAAJI@Z @ 0x18000FC84
 * Callers:
 *     ?Create@CCommandBatch@@SAJIPEAPEAV1@@Z @ 0x18000BD4C (-Create@CCommandBatch@@SAJIPEAPEAV1@@Z.c)
 *     ?VisualSetOffset@CChannel@@UEAAJINNN@Z @ 0x18000E0B0 (-VisualSetOffset@CChannel@@UEAAJINNN@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CDataStreamWriter::Initialize(CDataStreamWriter *this)
{
  _QWORD *v2; // rax
  void *v3; // rbx
  unsigned int v4; // ebp
  int v5; // eax
  unsigned int v6; // r14d
  unsigned int v7; // edi
  __int64 v8; // rcx
  CDataStreamWriter *v10; // rcx
  CDataStreamWriter **v11; // rax

  v2 = HeapAlloc(WPF::g_processHeap, 0, 0x1024uLL);
  v3 = v2;
  if ( v2 )
  {
    v2[1] = 0LL;
    v2[2] = 0LL;
    *v2 = &CDataStreamBlock::`vftable';
    v2[3] = 4096LL;
  }
  else
  {
    v3 = 0LL;
  }
  if ( !v3 )
  {
    v7 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x1ECu);
LABEL_13:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x142u);
    return v7;
  }
  v4 = *((_DWORD *)this + 6);
  v5 = -1;
  v6 = v4 + 4132;
  if ( v4 + 4132 >= v4 )
    v5 = v4 + 4132;
  v7 = v6 < v4 ? 0x80070216 : 0;
  *((_DWORD *)this + 6) = v5;
  if ( v6 < v4 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x1EFu);
    HeapFree(WPF::g_processHeap, 0, v3);
  }
  else
  {
    v8 = *((_QWORD *)this + 2);
    if ( v8 )
    {
      v10 = (CDataStreamWriter *)((v8 + 8) & -(__int64)(v8 != 0));
      v11 = (CDataStreamWriter **)*((_QWORD *)this + 1);
      if ( *v11 != this )
        __fastfail(3u);
      *(_QWORD *)v10 = this;
      *((_QWORD *)v10 + 1) = v11;
      *v11 = v10;
      *((_QWORD *)this + 1) = v10;
    }
    *((_QWORD *)this + 2) = v3;
  }
  if ( v6 < v4 )
    goto LABEL_13;
  return v7;
}
