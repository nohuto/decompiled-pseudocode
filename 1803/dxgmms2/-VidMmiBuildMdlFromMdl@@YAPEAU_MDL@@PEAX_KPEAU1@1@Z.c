/*
 * XREFs of ?VidMmiBuildMdlFromMdl@@YAPEAU_MDL@@PEAX_KPEAU1@1@Z @ 0x1C00AA61C
 * Callers:
 *     ?CommitResource@VIDMM_MEMORY_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0054B90 (-CommitResource@VIDMM_MEMORY_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?LockAllocInCpuVisibleSegment@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@@Z @ 0x1C00A13F4 (-LockAllocInCpuVisibleSegment@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@@Z.c)
 *     ?SetupAllocationForCPUAccess@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@IEE@Z @ 0x1C00A3950 (-SetupAllocationForCPUAccess@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@IEE@Z.c)
 * Callees:
 *     <none>
 */

PMDL __fastcall VidMmiBuildMdlFromMdl(unsigned __int64 Base, SIZE_T Length, struct _MDL *a3, __int64 a4)
{
  __int16 v4; // si
  ULONG v6; // ebp
  SIZE_T v8; // rbx
  PMDL result; // rax
  struct _MDL *v11; // rcx

  v4 = Base;
  v6 = Length;
  v8 = ((Base & 0xFFF) + Length + 4095) >> 12;
  result = MmCreateMdl(0LL, (PVOID)Base, Length);
  if ( result )
  {
    result->Next = 0LL;
    result->Size = 8 * (v8 + 6);
    result->StartVa = (PVOID)(Base & 0xFFFFFFFFFFFFF000uLL);
    result->ByteOffset = v4 & 0xFFF;
    v11 = result + 1;
    result->ByteCount = v6;
    for ( result->MdlFlags = 1; v8; --v8 )
    {
      v11->Next = *(struct _MDL **)((char *)&v11->Next + (_QWORD)a3 + 8 * a4 - (_QWORD)result);
      v11 = (struct _MDL *)((char *)v11 + 8);
    }
  }
  return result;
}
