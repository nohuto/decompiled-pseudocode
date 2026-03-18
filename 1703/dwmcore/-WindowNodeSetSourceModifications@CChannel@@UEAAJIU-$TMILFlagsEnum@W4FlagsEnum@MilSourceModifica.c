/*
 * XREFs of ?WindowNodeSetSourceModifications@CChannel@@UEAAJIU?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@KK@Z @ 0x180080D30
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Create@CCommandBatch@@SAJIPEAPEAV1@@Z @ 0x18007F86C (-Create@CCommandBatch@@SAJIPEAPEAV1@@Z.c)
 *     ?GetRemainingByteCount@CDataStreamWriter@@IEAAIXZ @ 0x180082FEC (-GetRemainingByteCount@CDataStreamWriter@@IEAAIXZ.c)
 *     ?AllocateNewBlock@CDataStreamWriter@@IEAAJI@Z @ 0x1800830F4 (-AllocateNewBlock@CDataStreamWriter@@IEAAJI@Z.c)
 *     ?BeginItem@CDataStreamWriter@@QEAAJXZ @ 0x180083540 (-BeginItem@CDataStreamWriter@@QEAAJXZ.c)
 *     ?EndItem@CDataStreamWriter@@QEAAJXZ @ 0x180083650 (-EndItem@CDataStreamWriter@@QEAAJXZ.c)
 *     ?AddItemData@CDataStreamWriter@@QEAAJPEBXI@Z @ 0x180083730 (-AddItemData@CDataStreamWriter@@QEAAJPEBXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CChannel::WindowNodeSetSourceModifications(__int64 a1, int a2, int a3, int a4, int a5)
{
  struct _RTL_CRITICAL_SECTION *v5; // r14
  __int64 v10; // rcx
  struct CCommandBatch **v11; // rbp
  int v12; // ebx
  struct CCommandBatch *v13; // rdi
  unsigned int RemainingByteCount; // eax
  __int64 v15; // rcx
  int v17; // eax
  unsigned int v18; // ebx
  unsigned int v19; // eax
  unsigned int v20; // edx
  int NewBlock; // eax
  _DWORD v22[8]; // [rsp+30h] [rbp-38h] BYREF

  v5 = (struct _RTL_CRITICAL_SECTION *)(a1 + 168);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 168));
  v22[0] = 105;
  v11 = (struct CCommandBatch **)(a1 + 160);
  v22[3] = a4;
  v22[2] = a3;
  v12 = 0;
  v22[1] = a2;
  v22[4] = a5;
  if ( !*v11 )
  {
    v17 = CCommandBatch::Create(v10, v11);
    v12 = v17;
    if ( v17 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v17, 0x11Bu);
  }
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x100u);
  }
  else
  {
    v13 = *v11;
    RemainingByteCount = 0;
    v12 = 0;
    if ( *((_QWORD *)*v11 + 2) )
      RemainingByteCount = CDataStreamWriter::GetRemainingByteCount(*v11);
    v15 = *((_QWORD *)v13 + 2);
    if ( !v15 || RemainingByteCount < 0x18 )
    {
      v18 = 0x10000;
      if ( *((_DWORD *)v13 + 6) < 0x10000u )
        v18 = *((_DWORD *)v13 + 6);
      if ( v15 && !*(_DWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v15 + 8LL))(v15) )
      {
        WPF::ProcessHeapImpl::Free(*((void **)v13 + 2));
        *((_QWORD *)v13 + 2) = 0LL;
      }
      v19 = v18 + 24;
      v20 = -1;
      if ( v18 < 0xFFFFFFE8 )
        v20 = v18 + 24;
      v12 = v18 >= 0xFFFFFFE8 ? 0x80070216 : 0;
      if ( v19 < 0x18 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x1B9u);
      }
      else
      {
        NewBlock = CDataStreamWriter::AllocateNewBlock(v13, v20);
        v12 = NewBlock;
        if ( NewBlock < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, NewBlock, 0x1BBu);
      }
      if ( v12 >= 0 )
        goto LABEL_8;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x159u);
    }
    if ( v12 >= 0 )
    {
LABEL_8:
      CDataStreamWriter::BeginItem(*v11);
      CDataStreamWriter::AddItemData(*v11, v22, 0x14u);
      goto LABEL_9;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x105u);
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x9Au);
LABEL_9:
  if ( v12 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x78u);
  else
    CDataStreamWriter::EndItem(*v11);
  if ( v5 )
    LeaveCriticalSection(v5);
  return (unsigned int)v12;
}
