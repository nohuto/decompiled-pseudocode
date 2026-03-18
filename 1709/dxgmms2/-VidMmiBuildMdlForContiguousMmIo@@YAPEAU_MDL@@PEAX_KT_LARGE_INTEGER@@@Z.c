/*
 * XREFs of ?VidMmiBuildMdlForContiguousMmIo@@YAPEAU_MDL@@PEAX_KT_LARGE_INTEGER@@@Z @ 0x1C00A353C
 * Callers:
 *     ?CommitResource@VIDMM_MEMORY_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C004EAD0 (-CommitResource@VIDMM_MEMORY_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?LockAllocInCpuVisibleSegment@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@@Z @ 0x1C009B54C (-LockAllocInCpuVisibleSegment@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@@Z.c)
 *     ?SetupAllocationForCPUAccess@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@IEE@Z @ 0x1C009D2F0 (-SetupAllocationForCPUAccess@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@IEE@Z.c)
 * Callees:
 *     <none>
 */

PMDL __fastcall VidMmiBuildMdlForContiguousMmIo(unsigned __int64 Base, SIZE_T Length, union _LARGE_INTEGER a3)
{
  __int16 v3; // bp
  ULONG v5; // r14d
  SIZE_T v7; // rdi
  PMDL Mdl; // rax
  SIZE_T v9; // rdx
  PMDL v10; // r8
  struct _MDL *v11; // rcx
  LONGLONG v12; // rbx
  LONGLONG v13; // rax

  v3 = Base;
  v5 = Length;
  v7 = ((Base & 0xFFF) + Length + 4095) >> 12;
  Mdl = MmCreateMdl(0LL, (PVOID)Base, Length);
  v9 = 0LL;
  v10 = Mdl;
  if ( Mdl )
  {
    Mdl->Next = 0LL;
    Mdl->StartVa = (PVOID)(Base & 0xFFFFFFFFFFFFF000uLL);
    Mdl->ByteOffset = v3 & 0xFFF;
    Mdl->Size = 8 * (v7 + 6);
    Mdl->ByteCount = v5;
    Mdl->MdlFlags = 1;
    if ( v7 )
    {
      v11 = Mdl + 1;
      v12 = a3.QuadPart >> 12;
      do
      {
        v13 = v12 + v9++;
        v11->Next = (struct _MDL *)v13;
        v11 = (struct _MDL *)((char *)v11 + 8);
      }
      while ( v9 < v7 );
    }
  }
  return v10;
}
