/*
 * XREFs of ?BuildMdlFromRange@VIDMM_CPU_HOST_APERTURE@@QEBAPEAU_MDL@@PEAXPEBUVIDMM_CPU_HOST_APERTURE_RANGE@@_K2@Z @ 0x1C000225C
 * Callers:
 *     ?CommitResource@VIDMM_MEMORY_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0054B90 (-CommitResource@VIDMM_MEMORY_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?BuildMdlForAllocInCpuHostAperture@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAVVIDMM_CPU_HOST_APERTURE@@PEAPEAU_MDL@@@Z @ 0x1C009EF98 (-BuildMdlForAllocInCpuHostAperture@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAVVIDMM_CPU_HOST_APERTU.c)
 * Callees:
 *     <none>
 */

PMDL __fastcall VIDMM_CPU_HOST_APERTURE::BuildMdlFromRange(
        VIDMM_CPU_HOST_APERTURE *this,
        void *a2,
        const struct VIDMM_CPU_HOST_APERTURE_RANGE *a3,
        unsigned __int16 a4,
        unsigned __int64 a5)
{
  int v8; // ebp
  PMDL Mdl; // r8
  __int64 v10; // r9
  int v11; // edi
  unsigned int v12; // r11d
  unsigned int v13; // esi
  __int64 v14; // rdi
  __int64 v15; // rdx
  int v16; // eax
  __int64 v17; // r10
  CSHORT *p_Size; // rdx
  unsigned __int64 v20; // r11
  __int64 v21; // r10
  __int64 v22; // rcx
  unsigned __int64 v23; // r11
  __int64 v24; // rcx

  v8 = *(_DWORD *)(*((_QWORD *)this + 6) + 376LL);
  Mdl = IoAllocateMdl(a2, (unsigned int)(a5 >> 12) << 12, 0, 0, 0LL);
  if ( Mdl )
  {
    Mdl->MdlFlags |= 0x802u;
    v10 = *(unsigned int *)a3;
    v11 = *((_DWORD *)a3 + 1);
    if ( v8 == 4096 )
    {
      p_Size = &Mdl[1].Size;
      v20 = *((_QWORD *)this + 4);
      v21 = v10;
      if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 6) + 8LL) + 24LL) + 300LL) & 8) != 0 )
      {
        Mdl[1].Next = *(struct _MDL **)(v20 + 8 * v10 + 48);
        if ( (_DWORD)v10 != v11 )
        {
          do
          {
            v22 = *(unsigned int *)(*((_QWORD *)this + 5) + 4 * v21);
            v21 = v22;
            *(_QWORD *)p_Size = *(_QWORD *)(v20 + 8 * v22 + 48);
            p_Size += 4;
          }
          while ( (_DWORD)v22 != v11 );
        }
      }
      else
      {
        v23 = v20 >> 12;
        Mdl[1].Next = (struct _MDL *)(v10 + v23);
        if ( (_DWORD)v10 != v11 )
        {
          do
          {
            v24 = *(unsigned int *)(*((_QWORD *)this + 5) + 4 * v21);
            v21 = v24;
            *(_QWORD *)p_Size = v24 + v23;
            p_Size += 4;
          }
          while ( (_DWORD)v24 != v11 );
        }
      }
    }
    else
    {
      v12 = 0;
      v13 = a4 >> 12;
      v14 = *((_QWORD *)this + 4) >> 12;
      v15 = v14 + (unsigned int)(16 * v10) + v13;
      v16 = 16 - v13;
      if ( (unsigned int)(a5 >> 12) )
      {
        v17 = 0LL;
        do
        {
          if ( !v16 )
          {
            LODWORD(v10) = *(_DWORD *)(*((_QWORD *)this + 5) + 4LL * (unsigned int)v10);
            v16 = 16;
            v15 = v14 + (unsigned int)(16 * v10);
          }
          ++v12;
          *((_QWORD *)&Mdl[1].Next + v17) = v15;
          v17 = v12;
          ++v15;
          --v16;
        }
        while ( v12 < (unsigned __int64)(unsigned int)(a5 >> 12) );
      }
    }
  }
  return Mdl;
}
