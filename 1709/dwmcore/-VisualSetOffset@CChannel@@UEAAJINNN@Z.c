/*
 * XREFs of ?VisualSetOffset@CChannel@@UEAAJINNN@Z @ 0x18000E0B0
 * Callers:
 *     <none>
 * Callees:
 *     ?AddItemData@CDataStreamWriter@@QEAAJPEBXI@Z @ 0x18000F5C0 (-AddItemData@CDataStreamWriter@@QEAAJPEBXI@Z.c)
 *     ?BeginItem@CDataStreamWriter@@QEAAJXZ @ 0x18000F6E0 (-BeginItem@CDataStreamWriter@@QEAAJXZ.c)
 *     ?EndItem@CDataStreamWriter@@QEAAJXZ @ 0x18000F7F0 (-EndItem@CDataStreamWriter@@QEAAJXZ.c)
 *     ?EnsureSize@CDataStreamWriter@@IEAAJI@Z @ 0x18000FB60 (-EnsureSize@CDataStreamWriter@@IEAAJI@Z.c)
 *     ?Initialize@CDataStreamWriter@@QEAAJI@Z @ 0x18000FC84 (-Initialize@CDataStreamWriter@@QEAAJI@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     memset_0 @ 0x1800C3238 (memset_0.c)
 *     ModuleFailFastForHRESULT @ 0x1800C584C (ModuleFailFastForHRESULT.c)
 *     ??_GCCommandBatch@@QEAAPEAXI@Z @ 0x18011C41C (--_GCCommandBatch@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall CChannel::VisualSetOffset(CChannel *this, unsigned int a2, double a3, double a4, double a5)
{
  struct _RTL_CRITICAL_SECTION *v5; // rbp
  int v8; // edi
  _DWORD *v9; // rdx
  int v10; // ebx
  _QWORD *v11; // rax
  _QWORD *v12; // rdi
  unsigned int v13; // edx
  int v14; // eax
  int v15; // eax
  unsigned int v17; // edx
  _DWORD v18[2]; // [rsp+30h] [rbp-48h] BYREF
  double v19; // [rsp+38h] [rbp-40h]
  _QWORD v20[2]; // [rsp+40h] [rbp-38h]
  void *retaddr; // [rsp+78h] [rbp+0h]

  v5 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 168);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 168));
  v8 = 0;
  EnterCriticalSection(&g_csCompositionEngine);
  if ( !a2 || a2 >= *((_DWORD *)this + 7) || (v9 = (_DWORD *)(*((_QWORD *)this + 5) + a2 * *((_DWORD *)this + 6)), !*v9) )
    v9 = 0LL;
  if ( !v9 || v9[2] )
  {
    v8 = -2147024890;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024890, 0x1B9u);
  }
  LeaveCriticalSection(&g_csCompositionEngine);
  if ( v8 < 0 )
    ModuleFailFastForHRESULT(2147942406LL, retaddr);
  v18[1] = a2;
  v10 = 0;
  v19 = a3;
  *(double *)v20 = a4;
  *(double *)&v20[1] = a5;
  v18[0] = 335;
  if ( !*((_QWORD *)this + 20) )
  {
    v11 = HeapAlloc(WPF::g_processHeap, 0, 0x38uLL);
    v12 = v11;
    if ( !v11 )
      ModuleFailFastForHRESULT(2147942414LL, retaddr);
    memset_0(v11, 0, 0x38uLL);
    v12[1] = v12;
    *v12 = v12;
    v12[2] = 0LL;
    *((_DWORD *)v12 + 6) = 0;
    *((_DWORD *)v12 + 7) = 0;
    v12[4] = 0LL;
    *((_DWORD *)v12 + 10) = 0;
    *((_DWORD *)v12 + 12) = 8;
    v14 = CDataStreamWriter::Initialize((CDataStreamWriter *)v12, v13);
    v10 = v14;
    if ( v14 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, 0x28u);
      CCommandBatch::`scalar deleting destructor'((CCommandBatch *)v12, v17);
    }
    else
    {
      *((_QWORD *)this + 20) = v12;
    }
    if ( v10 >= 0 )
      goto LABEL_12;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x11Bu);
  }
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x100u);
    goto LABEL_30;
  }
LABEL_12:
  v15 = CDataStreamWriter::EnsureSize(*((CDataStreamWriter **)this + 20), 0x24u);
  v10 = v15;
  if ( v15 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v15, 0x159u);
  if ( v10 >= 0 )
  {
    CDataStreamWriter::BeginItem(*((CDataStreamWriter **)this + 20));
    CDataStreamWriter::AddItemData(*((CDataStreamWriter **)this + 20), v18, 0x20u);
    goto LABEL_16;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x105u);
LABEL_30:
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x9Au);
LABEL_16:
  if ( v10 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x78u);
  else
    CDataStreamWriter::EndItem(*((CDataStreamWriter **)this + 20));
  if ( v5 )
    LeaveCriticalSection(v5);
  return (unsigned int)v10;
}
