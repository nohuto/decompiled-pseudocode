/*
 * XREFs of ?IncreaseWrittenByteCount@CDataStreamWriter@@IEAAJI@Z @ 0x180083040
 * Callers:
 *     ?AddBlockData@CDataStreamWriter@@QEAAJPEBXI@Z @ 0x18008336C (-AddBlockData@CDataStreamWriter@@QEAAJPEBXI@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetWrittenSize@CDataStreamBlock@@UEAAAEAIXZ @ 0x180083850 (-GetWrittenSize@CDataStreamBlock@@UEAAAEAIXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDataStreamWriter::IncreaseWrittenByteCount(CDataStreamWriter *this, int a2)
{
  CDataStreamBlock *v3; // rcx
  __int64 (*v5)(void); // rax
  unsigned int *WrittenSize; // rax
  CDataStreamBlock *v7; // rcx
  _DWORD *v8; // rbx
  __int64 (*v9)(void); // rax
  unsigned int *v10; // rax
  unsigned int v11; // edx
  int v12; // r8d
  int v13; // eax
  unsigned int v14; // ecx
  unsigned int v15; // ebx
  unsigned int v16; // ecx
  unsigned int v17; // eax

  v3 = (CDataStreamBlock *)*((_QWORD *)this + 2);
  v5 = *(__int64 (**)(void))(*(_QWORD *)v3 + 8LL);
  if ( (char *)v5 == (char *)CDataStreamBlock::GetWrittenSize )
    WrittenSize = CDataStreamBlock::GetWrittenSize(v3);
  else
    WrittenSize = (unsigned int *)v5();
  v7 = (CDataStreamBlock *)*((_QWORD *)this + 2);
  v8 = WrittenSize;
  v9 = *(__int64 (**)(void))(*(_QWORD *)v7 + 8LL);
  if ( (char *)v9 == (char *)CDataStreamBlock::GetWrittenSize )
    v10 = CDataStreamBlock::GetWrittenSize(v7);
  else
    v10 = (unsigned int *)v9();
  v11 = *v10;
  v12 = -1;
  v13 = -1;
  v14 = v11 + a2;
  if ( v11 + a2 >= v11 )
    v13 = v11 + a2;
  *v8 = v13;
  v15 = v14 < v11 ? 0x80070216 : 0;
  if ( v14 < v11 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0x212u);
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
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0x213u);
  }
  return v15;
}
