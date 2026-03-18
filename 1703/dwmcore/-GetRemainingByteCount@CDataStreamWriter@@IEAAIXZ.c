/*
 * XREFs of ?GetRemainingByteCount@CDataStreamWriter@@IEAAIXZ @ 0x180082FEC
 * Callers:
 *     ?WindowNodeSetSourceModifications@CChannel@@UEAAJIU?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@KK@Z @ 0x180080D30 (-WindowNodeSetSourceModifications@CChannel@@UEAAJIU-$TMILFlagsEnum@W4FlagsEnum@MilSourceModifica.c)
 * Callees:
 *     ?GetWrittenSize@CDataStreamBlock@@UEAAAEAIXZ @ 0x180083850 (-GetWrittenSize@CDataStreamBlock@@UEAAAEAIXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDataStreamWriter::GetRemainingByteCount(CDataStreamWriter *this)
{
  CDataStreamBlock *v2; // rcx
  __int64 (*v3)(void); // rax
  unsigned int *WrittenSize; // rax

  v2 = (CDataStreamBlock *)*((_QWORD *)this + 2);
  v3 = *(__int64 (**)(void))(*(_QWORD *)v2 + 8LL);
  if ( (char *)v3 == (char *)CDataStreamBlock::GetWrittenSize )
    WrittenSize = CDataStreamBlock::GetWrittenSize(v2);
  else
    WrittenSize = (unsigned int *)v3();
  return (***((unsigned int (__fastcall ****)(_QWORD))this + 2))(*((_QWORD *)this + 2)) - *WrittenSize;
}
