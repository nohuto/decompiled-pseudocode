/*
 * XREFs of ?VidMmiBuildMdlFromMdl@@YAPEAU_MDL@@PEAX_KPEAU1@1@Z @ 0x1C00A3600
 * Callers:
 *     ?CommitResource@VIDMM_MEMORY_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C004EAD0 (-CommitResource@VIDMM_MEMORY_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?LockAllocInCpuVisibleSegment@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@@Z @ 0x1C009B54C (-LockAllocInCpuVisibleSegment@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@@Z.c)
 *     ?SetupAllocationForCPUAccess@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@IEE@Z @ 0x1C009D2F0 (-SetupAllocationForCPUAccess@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@IEE@Z.c)
 * Callees:
 *     <none>
 */

PMDL __fastcall VidMmiBuildMdlFromMdl(unsigned __int64 Base, SIZE_T Length, struct _MDL *a3, __int64 a4)
{
  __int16 v4; // si
  ULONG v6; // ebp
  SIZE_T v8; // rbx
  PMDL result; // rax
  struct _MDL **v11; // rcx
  char *v12; // r8

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
    result->ByteCount = v6;
    v11 = &a3[1].Next + a4;
    result->MdlFlags = 1;
    if ( v8 )
    {
      v12 = (char *)((char *)result - (char *)v11);
      do
      {
        *(_QWORD *)&v12[(_QWORD)v11 + 48] = *v11;
        ++v11;
        --v8;
      }
      while ( v8 );
    }
  }
  return result;
}
