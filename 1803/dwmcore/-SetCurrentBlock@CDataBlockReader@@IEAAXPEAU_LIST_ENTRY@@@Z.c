/*
 * XREFs of ?SetCurrentBlock@CDataBlockReader@@IEAAXPEAU_LIST_ENTRY@@@Z @ 0x1800C181C
 * Callers:
 *     ?Draw@CRenderData@@AEAAJPEAUIDrawingContext@@W4DrawPass@1@@Z @ 0x180057310 (-Draw@CRenderData@@AEAAJPEAUIDrawingContext@@W4DrawPass@1@@Z.c)
 *     ?GetFirstItemSafe@CDataBlockReader@@QEAAJPEAIPEAPEAX0@Z @ 0x1800C18B0 (-GetFirstItemSafe@CDataBlockReader@@QEAAJPEAIPEAPEAX0@Z.c)
 *     ?GetNextItemSafe@CDataBlockReader@@QEAAJPEAIPEAPEAX0@Z @ 0x1800C1920 (-GetNextItemSafe@CDataBlockReader@@QEAAJPEAIPEAPEAX0@Z.c)
 * Callees:
 *     ?GetWrittenSize@CDataStreamBlock@@UEAAAEAIXZ @ 0x180088410 (-GetWrittenSize@CDataStreamBlock@@UEAAAEAIXZ.c)
 *     ?GetData@CDataStreamBlock@@UEAAPEBXXZ @ 0x180088430 (-GetData@CDataStreamBlock@@UEAAPEBXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CDataBlockReader::SetCurrentBlock(CDataBlockReader *this, struct _LIST_ENTRY *a2)
{
  CDataStreamBlock *v3; // rbx
  __int64 v4; // rsi
  unsigned int *(__fastcall *v5)(CDataStreamBlock *); // rax
  unsigned int *WrittenSize; // rax
  unsigned int *v7; // r14
  char *(__fastcall *v8)(CDataStreamBlock *); // rax
  char *Data; // rax
  char *v10; // rcx
  unsigned int v11; // eax

  v3 = (CDataStreamBlock *)((unsigned __int64)&a2[-1].Blink & -(__int64)(a2 != 0LL));
  *((_QWORD *)this + 1) = v3;
  v4 = *(_QWORD *)v3;
  v5 = *(unsigned int *(__fastcall **)(CDataStreamBlock *))(*(_QWORD *)v3 + 8LL);
  if ( v5 == CDataStreamBlock::GetWrittenSize )
  {
    WrittenSize = CDataStreamBlock::GetWrittenSize(v3);
  }
  else
  {
    WrittenSize = v5(v3);
    v3 = (CDataStreamBlock *)*((_QWORD *)this + 1);
    v4 = *(_QWORD *)v3;
  }
  v7 = WrittenSize;
  v8 = *(char *(__fastcall **)(CDataStreamBlock *))(v4 + 16);
  if ( v8 == CDataStreamBlock::GetData )
    Data = CDataStreamBlock::GetData(v3);
  else
    Data = v8(v3);
  v10 = Data;
  v11 = *v7;
  *((_QWORD *)this + 2) = v10;
  *((_DWORD *)this + 8) = v11;
  *((_QWORD *)this + 3) = v10;
}
