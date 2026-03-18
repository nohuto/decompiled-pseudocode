/*
 * XREFs of ?ProcessPartitionCommand@CComposition@@QEAAJPEBUUCE_RDP_HEADER@@@Z @ 0x1800AA580
 * Callers:
 *     ?PreRender@CCrossThreadComposition@@MEAAJPEA_N@Z @ 0x180029EC0 (-PreRender@CCrossThreadComposition@@MEAAJPEA_N@Z.c)
 * Callees:
 *     ?GetWrittenSize@CDataStreamBlock@@UEAAAEAIXZ @ 0x18000FD50 (-GetWrittenSize@CDataStreamBlock@@UEAAAEAIXZ.c)
 *     ?GetData@CDataStreamBlock@@UEAAPEBXXZ @ 0x18000FD70 (-GetData@CDataStreamBlock@@UEAAPEBXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?CloseChannel@CComposition@@IEAAJI@Z @ 0x1800AAF98 (-CloseChannel@CComposition@@IEAAJI@Z.c)
 *     ?OpenChannel@CComposition@@IEAAJIK_K@Z @ 0x1800AB0A0 (-OpenChannel@CComposition@@IEAAJIK_K@Z.c)
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x1800ABB40 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CComposition::ProcessPartitionCommand(CComposition *this, const struct UCE_RDP_HEADER *a2)
{
  volatile signed __int32 *v2; // rdi
  unsigned int v5; // eax
  volatile signed __int32 *v6; // r15
  _QWORD *v7; // rbx
  signed int v8; // esi
  __int64 v9; // rax
  _QWORD *v10; // rcx
  _QWORD *v11; // rax
  _QWORD *v12; // r14
  CDataStreamBlock *v13; // r14
  unsigned int *(__fastcall *v14)(CDataStreamBlock *); // rax
  unsigned int *WrittenSize; // rax
  unsigned int *v16; // rsi
  char *(__fastcall *v17)(CDataStreamBlock *); // rax
  char *Data; // rax
  signed int v19; // eax
  __int64 v20; // r14
  _QWORD *v21; // rax
  _QWORD *v22; // rax
  __int64 v23; // rcx
  void *v24; // r8
  unsigned int v26; // eax
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rdx
  signed int v30; // eax
  signed int v31; // eax
  signed int v32; // eax
  unsigned int v33; // [rsp+20h] [rbp-38h]

  v2 = 0LL;
  if ( *(_DWORD *)a2 != 8 )
  {
    if ( *(_DWORD *)a2 == 5 )
    {
      v31 = CComposition::OpenChannel(this, *((_DWORD *)a2 + 4), *((_DWORD *)a2 + 5), *((_QWORD *)a2 + 3));
      LODWORD(v2) = v31;
      if ( v31 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v31, 0x17Fu);
      return (unsigned int)v2;
    }
    if ( *(_DWORD *)a2 == 6 )
    {
      v32 = CComposition::CloseChannel(this, *((_DWORD *)a2 + 4));
      LODWORD(v2) = v32;
      if ( v32 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v32, 0x18Bu);
      return (unsigned int)v2;
    }
    if ( *(_DWORD *)a2 != 7 )
      return (unsigned int)v2;
    v26 = *((_DWORD *)a2 + 4);
    v8 = 0;
    if ( v26 < 0x10000
      && v26 < *((_DWORD *)this + 82)
      && (v27 = v26, v28 = *((_QWORD *)this + 38), (v29 = *(_QWORD *)(v28 + 8 * v27)) != 0) )
    {
      v2 = *(volatile signed __int32 **)(v28 + 8 * v27);
      _InterlockedIncrement((volatile signed __int32 *)(v29 + 8));
    }
    else
    {
      v8 = -2147024809;
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x80070057, 0x997u);
    }
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v8, 0x1A3u);
    }
    else
    {
      v30 = CComposition::ProcessCommandBatch(
              this,
              *((const void **)a2 + 3),
              *((_DWORD *)a2 + 8),
              (struct CChannelContext *)v2);
      v8 = v30;
      if ( v30 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v30, 0x1A6u);
    }
    if ( v2 && _InterlockedExchangeAdd(v2 + 2, 0xFFFFFFFF) == 1 )
      (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v2 + 16LL))(v2, 1LL);
    LODWORD(v2) = v8;
    if ( v8 >= 0 )
      return (unsigned int)v2;
    v33 = 387;
LABEL_62:
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v8, v33);
    return (unsigned int)v2;
  }
  v5 = *((_DWORD *)a2 + 4);
  if ( v5 < 0x10000
    && v5 < *((_DWORD *)this + 82)
    && (v6 = *(volatile signed __int32 **)(*((_QWORD *)this + 38) + 8LL * v5)) != 0LL )
  {
    _InterlockedIncrement(v6 + 2);
    v7 = (_QWORD *)*((_QWORD *)a2 + 3);
    v8 = 0;
    v9 = v7[2];
    if ( v9 )
    {
      v10 = (_QWORD *)v7[1];
      v11 = (_QWORD *)(v9 + 8);
      if ( (_QWORD *)*v10 != v7 )
        __fastfail(3u);
      *v11 = v7;
      v11[1] = v10;
      *v10 = v11;
      v7[1] = v11;
      v7[2] = 0LL;
    }
    v12 = (_QWORD *)*v7;
    if ( (_QWORD *)*v7 != v7 )
    {
      if ( v12 )
        v13 = (CDataStreamBlock *)(v12 - 1);
      else
        v13 = 0LL;
      while ( 1 )
      {
        v14 = *(unsigned int *(__fastcall **)(CDataStreamBlock *))(*(_QWORD *)v13 + 8LL);
        if ( v14 == CDataStreamBlock::GetWrittenSize )
          WrittenSize = CDataStreamBlock::GetWrittenSize(v13);
        else
          WrittenSize = v14(v13);
        v16 = WrittenSize;
        v17 = *(char *(__fastcall **)(CDataStreamBlock *))(*(_QWORD *)v13 + 16LL);
        if ( v17 == CDataStreamBlock::GetData )
          Data = CDataStreamBlock::GetData(v13);
        else
          Data = v17(v13);
        v19 = CComposition::ProcessCommandBatch(this, Data, *v16, (struct CChannelContext *)v6);
        v8 = v19;
        if ( v19 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v19, 0x1C9u);
          goto LABEL_20;
        }
        v20 = *((_QWORD *)v13 + 1);
        if ( !v20 )
          break;
        v13 = (CDataStreamBlock *)(v20 - 8);
        if ( !v13 )
          goto LABEL_57;
        v21 = (_QWORD *)((char *)v13 + 8);
LABEL_19:
        if ( v21 == v7 )
          goto LABEL_20;
      }
      v13 = 0LL;
LABEL_57:
      v21 = 0LL;
      goto LABEL_19;
    }
LABEL_20:
    while ( 1 )
    {
      v22 = (_QWORD *)*v7;
      if ( (_QWORD *)*v7 == v7 )
        break;
      if ( (_QWORD *)v22[1] != v7 || (v23 = *v22, *(_QWORD **)(*v22 + 8LL) != v22) )
        __fastfail(3u);
      *v7 = v23;
      *(_QWORD *)(v23 + 8) = v7;
      if ( v22 != (_QWORD *)8 )
        HeapFree(WPF::g_processHeap, 0, v22 - 1);
    }
    v24 = (void *)v7[2];
    if ( v24 )
      HeapFree(WPF::g_processHeap, 0, v24);
    HeapFree(WPF::g_processHeap, 0, v7);
    if ( _InterlockedExchangeAdd(v6 + 2, 0xFFFFFFFF) == 1 )
      (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v6 + 16LL))(v6, 1LL);
  }
  else
  {
    v8 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x80070057, 0x997u);
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x80070057, 0x1BEu);
  }
  LODWORD(v2) = v8;
  if ( v8 < 0 )
  {
    v33 = 391;
    goto LABEL_62;
  }
  return (unsigned int)v2;
}
