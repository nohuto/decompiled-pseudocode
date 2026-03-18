/*
 * XREFs of ?VisualSetOffset@CChannel@@UEAAJINNN@Z @ 0x1800867C0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?BeginItem@CDataStreamWriter@@QEAAJXZ @ 0x180087E60 (-BeginItem@CDataStreamWriter@@QEAAJXZ.c)
 *     ?EndItem@CDataStreamWriter@@QEAAJXZ @ 0x180087F70 (-EndItem@CDataStreamWriter@@QEAAJXZ.c)
 *     ?AddItemData@CDataStreamWriter@@QEAAJPEBXI@Z @ 0x180088060 (-AddItemData@CDataStreamWriter@@QEAAJPEBXI@Z.c)
 *     ?EnsureSize@CDataStreamWriter@@IEAAJI@Z @ 0x180088320 (-EnsureSize@CDataStreamWriter@@IEAAJI@Z.c)
 *     ?Create@CCommandBatch@@SAJIPEAPEAV1@@Z @ 0x180088438 (-Create@CCommandBatch@@SAJIPEAPEAV1@@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800DD014 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CChannel::VisualSetOffset(CChannel *this, unsigned int a2, double a3, double a4, double a5)
{
  struct _RTL_CRITICAL_SECTION *v5; // rsi
  int v8; // ebp
  _DWORD *v9; // rdx
  unsigned int v10; // ecx
  struct CCommandBatch **v11; // rdi
  int v12; // ebx
  int v13; // eax
  int v14; // eax
  unsigned int v16; // eax
  _DWORD v17[2]; // [rsp+30h] [rbp-48h] BYREF
  double v18; // [rsp+38h] [rbp-40h]
  _QWORD v19[2]; // [rsp+40h] [rbp-38h]
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
  v11 = (struct CCommandBatch **)((char *)this + 160);
  v17[1] = a2;
  v12 = 0;
  v18 = a3;
  *(double *)v19 = a4;
  *(double *)&v19[1] = a5;
  v17[0] = 398;
  if ( !*v11 )
  {
    v13 = CCommandBatch::Create(v10, v11);
    v12 = v13;
    if ( v13 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0x11Au);
  }
  if ( v12 < 0 )
  {
    v16 = 255;
  }
  else
  {
    v14 = CDataStreamWriter::EnsureSize(*v11, 0x24u);
    v12 = v14;
    if ( v14 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, 0x159u);
    if ( v12 >= 0 )
    {
      CDataStreamWriter::BeginItem(*v11);
      CDataStreamWriter::AddItemData(*v11, v17, 0x20u);
      goto LABEL_15;
    }
    v16 = 260;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, v16);
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0x9Au);
LABEL_15:
  if ( v12 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0x78u);
  else
    CDataStreamWriter::EndItem(*v11);
  if ( v5 )
    LeaveCriticalSection(v5);
  return (unsigned int)v12;
}
