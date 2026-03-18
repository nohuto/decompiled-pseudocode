/*
 * XREFs of ?ProcessPartitionCommand@CComposition@@QEAAJPEBUUCE_RDP_HEADER@@PEAI@Z @ 0x180034520
 * Callers:
 *     ?PreRender@CCrossThreadComposition@@MEAAJPEA_N@Z @ 0x180048000 (-PreRender@CCrossThreadComposition@@MEAAJPEA_N@Z.c)
 * Callees:
 *     ?CloseChannel@CComposition@@IEAAJI@Z @ 0x18002DA70 (-CloseChannel@CComposition@@IEAAJI@Z.c)
 *     ?OpenChannel@CComposition@@IEAAJIK_K@Z @ 0x18002DB80 (-OpenChannel@CComposition@@IEAAJIK_K@Z.c)
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x18002E640 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 *     ?ProcessDataOnChannel@CComposition@@IEAAJPEBUUCE_RDP_HEADER@@PEAI@Z @ 0x180033D70 (-ProcessDataOnChannel@CComposition@@IEAAJPEBUUCE_RDP_HEADER@@PEAI@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetWrittenSize@CDataStreamBlock@@UEAAAEAIXZ @ 0x180088410 (-GetWrittenSize@CDataStreamBlock@@UEAAAEAIXZ.c)
 *     ?GetData@CDataStreamBlock@@UEAAPEBXXZ @ 0x180088430 (-GetData@CDataStreamBlock@@UEAAPEBXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0d @ 0x180167AC0 (McTemplateU0d.c)
 */

__int64 __fastcall CComposition::ProcessPartitionCommand(
        CComposition *this,
        const struct UCE_RDP_HEADER *a2,
        unsigned int *a3)
{
  unsigned int v3; // ebx
  int v7; // edx
  int v8; // edx
  int v9; // edx
  _QWORD *v10; // rdi
  unsigned int v11; // eax
  volatile signed __int32 *v12; // r14
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rax
  _QWORD *v16; // rcx
  _QWORD *v17; // rax
  CDataStreamBlock *v18; // rsi
  __int64 v19; // rbx
  unsigned int *(__fastcall *v20)(CDataStreamBlock *__hidden); // rax
  unsigned int *WrittenSize; // rax
  unsigned int *v22; // r13
  const void *(__fastcall *v23)(CDataStreamBlock *__hidden); // rax
  char *v24; // rax
  int v25; // eax
  _QWORD *v26; // rax
  __int64 v27; // rcx
  void *v28; // r8
  int v30; // eax
  unsigned int v31; // [rsp+20h] [rbp-38h]
  unsigned int v32; // [rsp+68h] [rbp+10h] BYREF

  v3 = 0;
  *a3 = 0;
  v7 = *(_DWORD *)a2 - 5;
  if ( !v7 )
  {
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10000) != 0 )
      McTemplateU0d(
        &Microsoft_Windows_Dwm_Core_Provider_Context,
        &EVTDESC_CHANNEL_OPENED_FOR_PROCESS,
        *((unsigned int *)a2 + 5));
    v30 = CComposition::OpenChannel(this, *((_DWORD *)a2 + 4), *((_DWORD *)a2 + 5), *((_QWORD *)a2 + 3));
    v3 = v30;
    if ( v30 >= 0 )
      return v3;
    v31 = 364;
LABEL_50:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v30, v31);
    return v3;
  }
  v8 = v7 - 1;
  if ( !v8 )
  {
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10000) != 0 )
      McTemplateU0d(
        &Microsoft_Windows_Dwm_Core_Provider_Context,
        &EVTDESC_CHANNEL_CLOSED_FOR_PROCESS,
        *((unsigned int *)a2 + 5));
    v30 = CComposition::CloseChannel(this, *((_DWORD *)a2 + 4));
    v3 = v30;
    if ( v30 >= 0 )
      return v3;
    v31 = 377;
    goto LABEL_50;
  }
  v9 = v8 - 1;
  if ( !v9 )
  {
    v30 = CComposition::ProcessDataOnChannel(this, a2, a3);
    v3 = v30;
    if ( v30 >= 0 )
      return v3;
    v31 = 368;
    goto LABEL_50;
  }
  if ( v9 == 1 )
  {
    *a3 = 0;
    v10 = 0LL;
    v11 = *((_DWORD *)a2 + 4);
    v12 = 0LL;
    if ( v11 < 0x10000
      && v11 < *((_DWORD *)this + 88)
      && (v13 = v11, v14 = *((_QWORD *)this + 41), *(_QWORD *)(v14 + 8 * v13)) )
    {
      v12 = *(volatile signed __int32 **)(v14 + 8 * v13);
      _InterlockedIncrement(v12 + 2);
      v10 = (_QWORD *)*((_QWORD *)a2 + 3);
      v15 = v10[2];
      if ( v15 )
      {
        v16 = (_QWORD *)v10[1];
        v17 = (_QWORD *)(v15 + 8);
        if ( (_QWORD *)*v16 != v10 )
          __fastfail(3u);
        *v17 = v10;
        v17[1] = v16;
        *v16 = v17;
        v10[1] = v17;
        v10[2] = 0LL;
      }
      if ( (_QWORD *)*v10 != v10 )
      {
        v18 = (CDataStreamBlock *)((*v10 - 8LL) & -(__int64)(*v10 != 0LL));
        while ( 1 )
        {
          v19 = *(_QWORD *)v18;
          v20 = *(unsigned int *(__fastcall **)(CDataStreamBlock *__hidden))(*(_QWORD *)v18 + 8LL);
          if ( v20 == CDataStreamBlock::GetWrittenSize )
          {
            WrittenSize = CDataStreamBlock::GetWrittenSize(v18);
          }
          else
          {
            WrittenSize = v20(v18);
            v19 = *(_QWORD *)v18;
          }
          v22 = WrittenSize;
          v23 = *(const void *(__fastcall **)(CDataStreamBlock *__hidden))(v19 + 16);
          v24 = v23 == CDataStreamBlock::GetData ? (char *)CDataStreamBlock::GetData(v18) : (char *)v23(v18);
          v25 = CComposition::ProcessCommandBatch(this, v24, *v22, (struct CChannelContext *)v12, &v32);
          v3 = v25;
          if ( v25 < 0 )
            break;
          *a3 += v32;
          v18 = (CDataStreamBlock *)((*((_QWORD *)v18 + 1) - 8LL) & -(__int64)(*((_QWORD *)v18 + 1) != 0LL));
          if ( (_QWORD *)(((unsigned __int64)v18 + 8) & -(__int64)(v18 != 0LL)) == v10 )
            goto LABEL_19;
        }
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v25, 0x1BFu);
      }
    }
    else
    {
      v3 = -2147024809;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x989u);
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x1B2u);
    }
LABEL_19:
    if ( v10 )
    {
      while ( 1 )
      {
        v26 = (_QWORD *)*v10;
        if ( (_QWORD *)*v10 == v10 )
          break;
        if ( (_QWORD *)v26[1] != v10 || (v27 = *v26, *(_QWORD **)(*v26 + 8LL) != v26) )
          __fastfail(3u);
        *v10 = v27;
        *(_QWORD *)(v27 + 8) = v10;
        if ( v26 != (_QWORD *)8 )
          HeapFree(WPF::g_processHeap, 0, v26 - 1);
      }
      v28 = (void *)v10[2];
      if ( v28 )
        HeapFree(WPF::g_processHeap, 0, v28);
      HeapFree(WPF::g_processHeap, 0, v10);
    }
    if ( v12 && _InterlockedExchangeAdd(v12 + 2, 0xFFFFFFFF) == 1 )
      (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v12 + 16LL))(v12, 1LL);
    if ( (v3 & 0x80000000) != 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0x174u);
  }
  return v3;
}
