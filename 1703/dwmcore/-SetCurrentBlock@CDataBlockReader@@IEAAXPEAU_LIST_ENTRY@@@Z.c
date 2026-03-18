/*
 * XREFs of ?SetCurrentBlock@CDataBlockReader@@IEAAXPEAU_LIST_ENTRY@@@Z @ 0x1800C1FBC
 * Callers:
 *     ?Draw@CRenderData@@QEAAJPEAUIDrawingContext@@@Z @ 0x180083B90 (-Draw@CRenderData@@QEAAJPEAUIDrawingContext@@@Z.c)
 *     ?GetFirstItemSafe@CDataBlockReader@@QEAAJPEAIPEAPEAX0@Z @ 0x1800C203C (-GetFirstItemSafe@CDataBlockReader@@QEAAJPEAIPEAPEAX0@Z.c)
 *     ?GetNextItemSafe@CDataBlockReader@@QEAAJPEAIPEAPEAX0@Z @ 0x1800C20AC (-GetNextItemSafe@CDataBlockReader@@QEAAJPEAIPEAPEAX0@Z.c)
 * Callees:
 *     ?GetWrittenSize@CDataStreamBlock@@UEAAAEAIXZ @ 0x180083850 (-GetWrittenSize@CDataStreamBlock@@UEAAAEAIXZ.c)
 *     ?GetData@CDataStreamBlock@@UEAAPEBXXZ @ 0x180083870 (-GetData@CDataStreamBlock@@UEAAPEBXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CDataBlockReader::SetCurrentBlock(CDataBlockReader *this, struct _LIST_ENTRY *a2)
{
  CDataStreamBlock *v3; // rcx
  __int64 (*v4)(void); // rax
  unsigned int *WrittenSize; // rax
  CDataStreamBlock *v6; // rcx
  unsigned int *v7; // rdi
  __int64 (*v8)(void); // rax
  char *Data; // rax
  char *v10; // rcx
  unsigned int v11; // eax

  v3 = (CDataStreamBlock *)((unsigned __int64)&a2[-1].Blink & -(__int64)(a2 != 0LL));
  *((_QWORD *)this + 1) = v3;
  v4 = *(__int64 (**)(void))(*(_QWORD *)v3 + 8LL);
  if ( (char *)v4 == (char *)CDataStreamBlock::GetWrittenSize )
    WrittenSize = CDataStreamBlock::GetWrittenSize(v3);
  else
    WrittenSize = (unsigned int *)v4();
  v6 = (CDataStreamBlock *)*((_QWORD *)this + 1);
  v7 = WrittenSize;
  v8 = *(__int64 (**)(void))(*(_QWORD *)v6 + 16LL);
  if ( (char *)v8 == (char *)CDataStreamBlock::GetData )
    Data = CDataStreamBlock::GetData(v6);
  else
    Data = (char *)v8();
  v10 = Data;
  v11 = *v7;
  *((_QWORD *)this + 2) = v10;
  *((_DWORD *)this + 8) = v11;
  *((_QWORD *)this + 3) = v10;
}
