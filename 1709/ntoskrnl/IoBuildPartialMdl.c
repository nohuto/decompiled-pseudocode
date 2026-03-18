/*
 * XREFs of IoBuildPartialMdl @ 0x140102F50
 * Callers:
 *     ?SmCompressCtxProcessEntry@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@PEAX2PEAU_SM_COMPRESS_ENTRY@1@@Z @ 0x1402652D4 (-SmCompressCtxProcessEntry@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@PE.c)
 * Callees:
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 */

void __stdcall IoBuildPartialMdl(PMDL SourceMdl, PMDL TargetMdl, PVOID VirtualAddress, ULONG Length)
{
  __int64 ByteOffset; // rax
  _BYTE *StartVa; // rbx
  unsigned int v6; // r11d
  __int16 v8; // si
  ULONG v9; // ebp
  void *v10; // r8
  unsigned int v11; // edx
  __int64 v12; // rax
  unsigned __int64 v13; // rdx
  char *v14; // rax
  signed __int64 v15; // r8

  ByteOffset = SourceMdl->ByteOffset;
  StartVa = SourceMdl->StartVa;
  v6 = (_DWORD)VirtualAddress - ByteOffset - (_DWORD)StartVa;
  v8 = (__int16)VirtualAddress;
  if ( Length )
    v9 = Length;
  else
    v9 = SourceMdl->ByteCount - v6;
  if ( VirtualAddress < StartVa
    || (char *)VirtualAddress - ByteOffset - StartVa > (unsigned __int64)SourceMdl->ByteCount )
  {
    KeBugCheckEx(0x12Eu, (ULONG_PTR)SourceMdl, (ULONG_PTR)TargetMdl, (ULONG_PTR)VirtualAddress, Length);
  }
  v10 = (void *)((unsigned __int64)VirtualAddress & 0xFFFFFFFFFFFFF000uLL);
  TargetMdl->Process = SourceMdl->Process;
  TargetMdl->StartVa = v10;
  v11 = (_DWORD)v10 - LODWORD(SourceMdl->StartVa);
  TargetMdl->MdlFlags &= 8u;
  TargetMdl->ByteOffset = v8 & 0xFFF;
  TargetMdl->ByteCount = v9;
  TargetMdl->MdlFlags |= SourceMdl->MdlFlags & 0x48C5 | 0x10;
  TargetMdl->MappedSystemVa = (char *)SourceMdl->MappedSystemVa + v6;
  v12 = (v11 >> 12) + 6LL;
  v13 = ((v8 & 0xFFF) + 4095LL + (unsigned __int64)v9) >> 12;
  v14 = (char *)(&SourceMdl->Next + v12);
  if ( (_DWORD)v13 )
  {
    v15 = (char *)&TargetMdl[1] - v14;
    do
    {
      *(_QWORD *)&v14[v15] = *(_QWORD *)v14;
      v14 += 8;
      LODWORD(v13) = v13 - 1;
    }
    while ( (_DWORD)v13 );
  }
}
