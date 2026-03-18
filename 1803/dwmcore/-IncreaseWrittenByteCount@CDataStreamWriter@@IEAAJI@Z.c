/*
 * XREFs of ?IncreaseWrittenByteCount@CDataStreamWriter@@IEAAJI@Z @ 0x180088264
 * Callers:
 *     ?AddBlockData@CDataStreamWriter@@QEAAJPEBXI@Z @ 0x180087C98 (-AddBlockData@CDataStreamWriter@@QEAAJPEBXI@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetWrittenSize@CDataStreamBlock@@UEAAAEAIXZ @ 0x180088410 (-GetWrittenSize@CDataStreamBlock@@UEAAAEAIXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDataStreamWriter::IncreaseWrittenByteCount(CDataStreamWriter *this, int a2)
{
  CDataStreamBlock *v2; // rbx
  __int64 v5; // rdi
  unsigned int *(__fastcall *v6)(CDataStreamBlock *__hidden); // rax
  unsigned int *WrittenSize; // rax
  _DWORD *v8; // r14
  unsigned int *(__fastcall *v9)(CDataStreamBlock *__hidden); // rax
  unsigned int *v10; // rax
  unsigned int v11; // edx
  int v12; // r8d
  int v13; // eax
  unsigned int v14; // ecx
  unsigned int v15; // ebx
  unsigned int v16; // ecx
  unsigned int v17; // eax

  v2 = (CDataStreamBlock *)*((_QWORD *)this + 2);
  v5 = *(_QWORD *)v2;
  v6 = *(unsigned int *(__fastcall **)(CDataStreamBlock *__hidden))(*(_QWORD *)v2 + 8LL);
  if ( v6 == CDataStreamBlock::GetWrittenSize )
  {
    WrittenSize = CDataStreamBlock::GetWrittenSize(v2);
  }
  else
  {
    WrittenSize = v6(v2);
    v2 = (CDataStreamBlock *)*((_QWORD *)this + 2);
    v5 = *(_QWORD *)v2;
  }
  v8 = WrittenSize;
  v9 = *(unsigned int *(__fastcall **)(CDataStreamBlock *__hidden))(v5 + 8);
  if ( v9 == CDataStreamBlock::GetWrittenSize )
    v10 = CDataStreamBlock::GetWrittenSize(v2);
  else
    v10 = v9(v2);
  v11 = *v10;
  v12 = -1;
  v13 = -1;
  v14 = v11 + a2;
  if ( v11 + a2 >= v11 )
    v13 = v11 + a2;
  v15 = v14 < v11 ? 0x80070216 : 0;
  *v8 = v13;
  if ( v14 < v11 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v15, 0x212u);
  }
  else
  {
    v16 = *((_DWORD *)this + 7);
    v17 = v16 + a2;
    if ( v16 + a2 >= v16 )
      v12 = v16 + a2;
    v15 = v17 < v16 ? 0x80070216 : 0;
    *((_DWORD *)this + 7) = v12;
    if ( v17 < v16 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v15, 0x213u);
  }
  return v15;
}
