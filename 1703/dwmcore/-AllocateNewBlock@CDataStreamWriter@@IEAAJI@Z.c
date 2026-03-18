/*
 * XREFs of ?AllocateNewBlock@CDataStreamWriter@@IEAAJI@Z @ 0x1800830F4
 * Callers:
 *     ?Create@CCommandBatch@@SAJIPEAPEAV1@@Z @ 0x18007F86C (-Create@CCommandBatch@@SAJIPEAPEAV1@@Z.c)
 *     ?WindowNodeSetSourceModifications@CChannel@@UEAAJIU?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@KK@Z @ 0x180080D30 (-WindowNodeSetSourceModifications@CChannel@@UEAAJIU-$TMILFlagsEnum@W4FlagsEnum@MilSourceModifica.c)
 *     ?VisualSetOffset@CChannel@@UEAAJINNN@Z @ 0x180081B60 (-VisualSetOffset@CChannel@@UEAAJINNN@Z.c)
 *     ?BeginCommand@CChannel@@AEAAJPEAXII@Z @ 0x180082AF8 (-BeginCommand@CChannel@@AEAAJPEAXII@Z.c)
 *     ?EnsureSize@CDataStreamWriter@@IEAAJI@Z @ 0x1800831E0 (-EnsureSize@CDataStreamWriter@@IEAAJI@Z.c)
 *     ?EnsureItem@CDataStreamWriter@@QEAAJI@Z @ 0x180083414 (-EnsureItem@CDataStreamWriter@@QEAAJI@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
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
  __int64 v11; // rcx
  CDataStreamWriter *v13; // rcx
  CDataStreamWriter **v14; // rax

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
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x1EFu);
      HeapFree(WPF::g_processHeap, 0, v6);
    }
    else
    {
      v11 = *((_QWORD *)this + 2);
      if ( v11 )
      {
        v13 = (CDataStreamWriter *)((v11 + 8) & -(__int64)(v11 != 0));
        v14 = (CDataStreamWriter **)*((_QWORD *)this + 1);
        if ( *v14 != this )
          __fastfail(3u);
        *(_QWORD *)v13 = this;
        *((_QWORD *)v13 + 1) = v14;
        *v14 = v13;
        *((_QWORD *)this + 1) = v13;
      }
      *((_QWORD *)this + 2) = v6;
    }
  }
  else
  {
    v10 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x1ECu);
  }
  return v10;
}
