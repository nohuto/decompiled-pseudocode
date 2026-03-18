/*
 * XREFs of ?VisualSetOffset@CChannel@@UEAAJINNN@Z @ 0x180081B60
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AllocateNewBlock@CDataStreamWriter@@IEAAJI@Z @ 0x1800830F4 (-AllocateNewBlock@CDataStreamWriter@@IEAAJI@Z.c)
 *     ?EnsureSize@CDataStreamWriter@@IEAAJI@Z @ 0x1800831E0 (-EnsureSize@CDataStreamWriter@@IEAAJI@Z.c)
 *     ?BeginItem@CDataStreamWriter@@QEAAJXZ @ 0x180083540 (-BeginItem@CDataStreamWriter@@QEAAJXZ.c)
 *     ?EndItem@CDataStreamWriter@@QEAAJXZ @ 0x180083650 (-EndItem@CDataStreamWriter@@QEAAJXZ.c)
 *     ?AddItemData@CDataStreamWriter@@QEAAJPEBXI@Z @ 0x180083730 (-AddItemData@CDataStreamWriter@@QEAAJPEBXI@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800D50A8 (ModuleFailFastForHRESULT.c)
 *     memset_0 @ 0x1800D539C (memset_0.c)
 *     ??_GCCommandBatch@@QEAAPEAXI@Z @ 0x180133304 (--_GCCommandBatch@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall CChannel::VisualSetOffset(CChannel *this, unsigned int a2, double a3, double a4, double a5)
{
  struct _RTL_CRITICAL_SECTION *v5; // rbp
  int v8; // edi
  int v9; // r14d
  _DWORD *v10; // rdx
  _QWORD *v11; // rax
  _QWORD *v12; // rsi
  int NewBlock; // eax
  int v14; // r14d
  int v15; // eax
  int v16; // esi
  unsigned int v18; // edx
  _DWORD v19[2]; // [rsp+30h] [rbp-48h] BYREF
  double v20; // [rsp+38h] [rbp-40h]
  _QWORD v21[2]; // [rsp+40h] [rbp-38h]
  void *retaddr; // [rsp+78h] [rbp+0h]

  v5 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 168);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 168));
  v8 = 0;
  v9 = 0;
  EnterCriticalSection(&g_csCompositionEngine);
  if ( !a2
    || a2 >= *((_DWORD *)this + 7)
    || (v10 = (_DWORD *)(*((_QWORD *)this + 5) + a2 * *((_DWORD *)this + 6)), !*v10)
    || !v10
    || v10[2] )
  {
    v9 = -2147024890;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024890, 0x1B9u);
  }
  LeaveCriticalSection(&g_csCompositionEngine);
  if ( v9 < 0 )
  {
    ModuleFailFastForHRESULT(2147942406LL, retaddr);
    __debugbreak();
  }
  v20 = a3;
  *(double *)v21 = a4;
  *(double *)&v21[1] = a5;
  v19[1] = a2;
  v19[0] = 44;
  if ( !*((_QWORD *)this + 20) )
  {
    v11 = HeapAlloc(WPF::g_processHeap, 0, 0x38uLL);
    v12 = v11;
    if ( !v11 )
    {
      ModuleFailFastForHRESULT(2147942414LL, retaddr);
      __debugbreak();
    }
    memset_0(v11, 0, 0x38uLL);
    v12[1] = v12;
    *v12 = v12;
    v12[2] = 0LL;
    v12[3] = 0LL;
    v12[4] = 0LL;
    *((_DWORD *)v12 + 10) = 0;
    *((_DWORD *)v12 + 12) = 8;
    NewBlock = CDataStreamWriter::AllocateNewBlock((CDataStreamWriter *)v12, 0x1000u);
    v14 = NewBlock;
    if ( NewBlock < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, NewBlock, 0x142u);
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0x28u);
      CCommandBatch::`scalar deleting destructor'((CCommandBatch *)v12, v18);
    }
    else
    {
      *((_QWORD *)this + 20) = v12;
    }
    v8 = v14;
    if ( v14 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0x11Bu);
  }
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x100u);
  }
  else
  {
    v15 = CDataStreamWriter::EnsureSize(*((CDataStreamWriter **)this + 20), 0x24u);
    v16 = v15;
    if ( v15 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0x159u);
    v8 = v16;
    if ( v16 >= 0 )
    {
      CDataStreamWriter::BeginItem(*((CDataStreamWriter **)this + 20));
      CDataStreamWriter::AddItemData(*((CDataStreamWriter **)this + 20), v19, 0x20u);
      goto LABEL_18;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0x105u);
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x9Au);
LABEL_18:
  if ( v8 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x78u);
  else
    CDataStreamWriter::EndItem(*((CDataStreamWriter **)this + 20));
  if ( v5 )
    LeaveCriticalSection(v5);
  return (unsigned int)v8;
}
