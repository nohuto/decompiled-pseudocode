/*
 * XREFs of ?VidMmiBuildMdlForContiguousMmIo@@YAPEAU_MDL@@PEAX_KT_LARGE_INTEGER@@@Z @ 0x1C009B250
 * Callers:
 *     ?CommitResource@VIDMM_MEMORY_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C004A470 (-CommitResource@VIDMM_MEMORY_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 *     ?LockAllocInCpuVisibleSegment@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@@Z @ 0x1C0093B3C (-LockAllocInCpuVisibleSegment@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@@Z.c)
 *     ?SetupAllocationForCPUAccess@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@IEE@Z @ 0x1C0095240 (-SetupAllocationForCPUAccess@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@IEE@Z.c)
 * Callees:
 *     <none>
 */

PMDL __fastcall VidMmiBuildMdlForContiguousMmIo(unsigned __int64 Base, SIZE_T Length, union _LARGE_INTEGER a3)
{
  ULONG v4; // ebp
  SIZE_T v6; // rdi
  PMDL Mdl; // rax
  SIZE_T v8; // rdx
  PMDL v9; // r8
  struct _MDL *v10; // rcx
  LONGLONG v11; // rbx
  LONGLONG v12; // rax

  v4 = Length;
  v6 = ((Base & 0xFFF) + Length + 4095) >> 12;
  Mdl = MmCreateMdl(0LL, (PVOID)Base, Length);
  v8 = 0LL;
  v9 = Mdl;
  if ( Mdl )
  {
    Mdl->Next = 0LL;
    Mdl->Size = 8 * (v6 + 6);
    Mdl->ByteCount = v4;
    Mdl->StartVa = (PVOID)(Base & 0xFFFFFFFFFFFFF000uLL);
    Mdl->ByteOffset = Base & 0xFFF;
    Mdl->MdlFlags = 1;
    if ( v6 )
    {
      v10 = Mdl + 1;
      v11 = a3.QuadPart >> 12;
      do
      {
        v12 = v11 + v8++;
        v10->Next = (struct _MDL *)v12;
        v10 = (struct _MDL *)((char *)v10 + 8);
      }
      while ( v8 < v6 );
    }
  }
  return v9;
}
