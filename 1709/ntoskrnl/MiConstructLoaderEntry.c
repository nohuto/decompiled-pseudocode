/*
 * XREFs of MiConstructLoaderEntry @ 0x140471244
 * Callers:
 *     MmLoadSystemImageEx @ 0x1405431E0 (MmLoadSystemImageEx.c)
 *     MiInitializeLoadedModuleList @ 0x1408481FC (MiInitializeLoadedModuleList.c)
 * Callees:
 *     MiProcessLoaderEntry @ 0x140015EC4 (MiProcessLoaderEntry.c)
 *     MiChargeResident @ 0x14002ADAC (MiChargeResident.c)
 *     MiSectionControlArea @ 0x1400A1610 (MiSectionControlArea.c)
 *     MiManageSubsectionView @ 0x1400A3110 (MiManageSubsectionView.c)
 *     RtlImageNtHeader @ 0x1400AE3B0 (RtlImageNtHeader.c)
 *     DbgPrintEx @ 0x1401471C0 (DbgPrintEx.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     ExpCovGetSectionInfo @ 0x140471930 (ExpCovGetSectionInfo.c)
 *     MiLockdownSections @ 0x140471994 (MiLockdownSections.c)
 *     MiCaptureImageExceptionValues @ 0x140471A50 (MiCaptureImageExceptionValues.c)
 *     ExCovReadjustUnloadedModuleEntry @ 0x14059F120 (ExCovReadjustUnloadedModuleEntry.c)
 */

__int64 __fastcall MiConstructLoaderEntry(__int64 a1, const void **a2, const void **a3, int a4, int a5, _QWORD *a6)
{
  const void **v6; // r12
  SIZE_T v9; // rdx
  char v10; // bp
  _OWORD *v11; // rdi
  _WORD *PoolWithTag; // rax
  _WORD *v13; // r14
  char *v14; // rbx
  PIMAGE_NT_HEADERS v15; // rax
  PIMAGE_NT_HEADERS v16; // rsi
  int v17; // r8d
  unsigned __int64 NumberOfSections; // r10
  char *v19; // r15
  unsigned int v20; // ebp
  unsigned int v21; // edx
  __int64 v22; // rcx
  __int64 v23; // rax
  unsigned __int64 v24; // rcx
  unsigned __int64 v25; // r12
  SIZE_T v26; // rbx
  __int64 v27; // rax
  unsigned __int64 v28; // rax
  _OWORD *v29; // rbx
  char *v30; // r14
  char *v31; // rcx
  int v32; // r12d
  unsigned __int64 v33; // r14
  __int16 v34; // r8
  unsigned __int64 v35; // rsi
  __int64 SectionInfo; // rax
  __int64 VirtualAddress; // rax
  unsigned __int64 Size; // rcx
  unsigned int SizeOfImage; // r9d
  unsigned int v41; // r8d
  char *v42; // r15
  unsigned __int64 v43; // rcx
  unsigned int v44; // eax
  int v45; // edx
  unsigned int v46; // r12d
  unsigned int v47; // r8d
  __int64 v48; // rbp
  unsigned int *v49; // r15
  __int64 v50; // rax
  unsigned int v51; // ecx
  unsigned int v52; // r13d
  unsigned int v53; // edx
  unsigned __int128 v54; // rax
  unsigned int v55; // ebx
  int v56; // [rsp+20h] [rbp-F8h]
  unsigned int v57; // [rsp+20h] [rbp-F8h]
  _IMAGE_DATA_DIRECTORY *v58; // [rsp+28h] [rbp-F0h]
  unsigned __int64 v59; // [rsp+30h] [rbp-E8h]
  __int64 v60; // [rsp+38h] [rbp-E0h]
  __int64 v61; // [rsp+40h] [rbp-D8h]
  _OWORD *v62; // [rsp+48h] [rbp-D0h]
  __int64 v63; // [rsp+50h] [rbp-C8h]
  __int128 v64; // [rsp+58h] [rbp-C0h]
  unsigned __int64 v65[21]; // [rsp+70h] [rbp-A8h] BYREF
  int v67; // [rsp+130h] [rbp+18h] BYREF
  int v68; // [rsp+138h] [rbp+20h]

  v68 = a4;
  v6 = a2;
  v60 = 0LL;
  v9 = *(unsigned __int16 *)a3 + 2LL;
  *a6 = 0LL;
  v10 = a4;
  v11 = 0LL;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, v9, 0x54446D4Du);
  *((_QWORD *)&v64 + 1) = PoolWithTag;
  v13 = PoolWithTag;
  if ( !PoolWithTag )
    return (unsigned int)-1073741670;
  LOWORD(v64) = *(_WORD *)a3;
  WORD1(v64) = *(_WORD *)a3;
  memmove(PoolWithTag, a3[1], *(unsigned __int16 *)a3);
  v13[(unsigned __int64)*(unsigned __int16 *)a3 >> 1] = 0;
  v14 = *(char **)(a1 + 48);
  v59 = (unsigned __int64)v14;
  v15 = RtlImageNtHeader(v14);
  v16 = v15;
  v17 = v10 & 1;
  v67 = v17;
  if ( (v10 & 1) != 0 )
  {
    LODWORD(NumberOfSections) = 0;
    v56 = 0;
  }
  else
  {
    NumberOfSections = v15->FileHeader.NumberOfSections;
    v56 = v15->FileHeader.NumberOfSections;
    if ( 0xFFFFFFFFFFFFFFFFuLL / NumberOfSections < 4 )
    {
      v55 = -1073741520;
      goto LABEL_75;
    }
  }
  v58 = 0LL;
  v19 = 0LL;
  v20 = 0;
  if ( v17 )
  {
    v20 = 32;
    if ( v15->OptionalHeader.NumberOfRvaAndSizes > 6 )
    {
      VirtualAddress = v15->OptionalHeader.DataDirectory[6].VirtualAddress;
      v58 = &v16->OptionalHeader.DataDirectory[6];
      if ( (_DWORD)VirtualAddress )
      {
        Size = v16->OptionalHeader.DataDirectory[6].Size;
        if ( (_DWORD)Size )
        {
          if ( (int)Size + (int)VirtualAddress > (unsigned int)VirtualAddress )
          {
            SizeOfImage = v16->OptionalHeader.SizeOfImage;
            if ( (int)Size + (int)VirtualAddress < SizeOfImage )
            {
              v20 = Size + 32;
              v41 = 0;
              v42 = &v14[VirtualAddress];
              v43 = Size / 0x1C;
              if ( v43 )
              {
                do
                {
                  v44 = *((_DWORD *)v42 + 5);
                  if ( v44 )
                  {
                    if ( v44 < SizeOfImage )
                    {
                      v45 = *((_DWORD *)v42 + 4);
                      if ( v45 + v44 < SizeOfImage )
                        v20 += v45;
                    }
                  }
                  ++v41;
                  v42 += 28;
                }
                while ( v41 < v43 );
                v6 = a2;
              }
              v19 = &v42[-28 * v41];
            }
          }
        }
      }
      v20 = (v20 + 7) & 0xFFFFFFF8;
    }
  }
  v21 = (v16->OptionalHeader.SizeOfImage >> 12) + ((v16->OptionalHeader.SizeOfImage & 0xFFF) != 0);
  v22 = 8 * ((v21 >> 6) + ((v21 & 0x3F) != 0) + 2);
  v23 = (unsigned int)v22;
  v24 = v22 + 282;
  v61 = v23;
  if ( v24 <= 0x11A )
    goto LABEL_73;
  if ( v20 )
  {
    if ( v24 + v20 <= v24 )
      goto LABEL_73;
    v24 += v20;
  }
  v25 = (*(unsigned __int16 *)v6 + 7LL) & 0xFFFFFFFFFFFFFFF8uLL;
  v26 = v25 + v24;
  if ( v25 + v24 <= v24 )
  {
LABEL_73:
    v55 = -1073741701;
    goto LABEL_75;
  }
  if ( (_DWORD)NumberOfSections )
  {
    if ( v26 + 4LL * (unsigned int)NumberOfSections > v26 )
    {
      v26 += 4LL * (unsigned int)NumberOfSections;
      goto LABEL_11;
    }
    goto LABEL_73;
  }
LABEL_11:
  v62 = ExAllocatePoolWithTag(NonPagedPoolNx, v26, 0x644C6D4Du);
  v11 = v62;
  if ( !v62
    || (v27 = *(_QWORD *)(a1 + 112), (v63 = v27) != 0)
    && (v28 = MiSectionControlArea(v27),
        v60 = (*(_DWORD *)(*(_QWORD *)v28 + 8LL) >> 12)
            + (unsigned int)((*(_DWORD *)(*(_QWORD *)v28 + 8LL) & 0xFFF) != 0),
        !(unsigned int)MiChargeResident(&MiSystemPartition, (unsigned int)v60)) )
  {
    v55 = -1073741670;
LABEL_75:
    ExFreePoolWithTag(v13, 0);
    if ( v11 )
      ExFreePoolWithTag(v11, 0);
    return v55;
  }
  memset(v62, 0, v26);
  v29 = v62 + 10;
  v30 = (char *)v62 + v61 + 280;
  *((_QWORD *)v62 + 30) = (char *)v62 + 280;
  v31 = &v30[v20];
  *((_QWORD *)v62 + 29) = v30;
  *((_QWORD *)v62 + 27) = v60;
  if ( v56 )
    *((_QWORD *)v62 + 28) = &v31[v25];
  *v62 = *(_OWORD *)a1;
  v62[1] = *(_OWORD *)(a1 + 16);
  v62[2] = *(_OWORD *)(a1 + 32);
  v62[3] = *(_OWORD *)(a1 + 48);
  v62[4] = *(_OWORD *)(a1 + 64);
  v62[5] = *(_OWORD *)(a1 + 80);
  v62[6] = *(_OWORD *)(a1 + 96);
  v62[7] = *(_OWORD *)(a1 + 112);
  v62[8] = *(_OWORD *)(a1 + 128);
  v62[9] = *(_OWORD *)(a1 + 144);
  if ( v16->OptionalHeader.MajorOperatingSystemVersion >= 5u && v16->OptionalHeader.MajorImageVersion >= 5u )
    *((_DWORD *)v62 + 26) |= 0x8000000u;
  if ( (v16->OptionalHeader.DllCharacteristics & 0x80) != 0 )
    *((_DWORD *)v62 + 26) |= 0x20u;
  *((_QWORD *)v62 + 12) = v31;
  *((_WORD *)v62 + 44) = *(_WORD *)a2;
  *((_WORD *)v62 + 45) = *(_WORD *)a2;
  memmove(v31, a2[1], *(unsigned __int16 *)a2);
  v32 = v67;
  *(_WORD *)(*((_QWORD *)v62 + 12) + 2 * ((unsigned __int64)*(unsigned __int16 *)a2 >> 1)) = 0;
  *((_QWORD *)v62 + 5) = 0LL;
  *(_OWORD *)((char *)v62 + 72) = v64;
  if ( v32 )
  {
    *((_DWORD *)v62 + 26) |= 0x20000000u;
    *((_QWORD *)v62 + 5) = v30;
    *(_DWORD *)v30 = 84302;
    *((_DWORD *)v30 + 1) = v20;
    *((_WORD *)v30 + 4) = v16->FileHeader.Machine;
    *((_WORD *)v30 + 5) = v16->FileHeader.Characteristics;
    *((_DWORD *)v30 + 3) = v16->FileHeader.TimeDateStamp;
    *((_DWORD *)v30 + 4) = v16->OptionalHeader.CheckSum;
    *((_DWORD *)v30 + 5) = v16->OptionalHeader.SizeOfImage;
    *((_QWORD *)v30 + 3) = v59;
    if ( v19 )
    {
      memmove(v30 + 32, v19, v58->Size);
      v46 = v58->Size;
      v57 = 0;
      v47 = 0;
      if ( v46 / 0x1CuLL )
      {
        v48 = 0LL;
        v49 = (unsigned int *)(v19 + 16);
        do
        {
          v50 = v49[1];
          if ( (_DWORD)v50
            && (v51 = v16->OptionalHeader.SizeOfImage, (unsigned int)v50 < v51)
            && (v52 = *v49, v53 = v50 + *v49, v53 > (unsigned int)v50)
            && v53 < v51 )
          {
            memmove(&v30[v46 + 32], (const void *)(v59 + v50), v52);
            v47 = v57;
            *(_DWORD *)&v30[28 * v48 + 52] = v46;
            v46 += v52;
          }
          else
          {
            *(_DWORD *)&v30[28 * v48 + 52] = 0;
          }
          v48 = ++v47;
          v54 = v58->Size * (unsigned __int128)0x2492492492492493uLL;
          v49 += 7;
          v57 = v47;
        }
        while ( v47 < (*((_QWORD *)&v54 + 1) + (((unsigned __int64)v58->Size - *((_QWORD *)&v54 + 1)) >> 1)) >> 4 );
        v11 = v62;
        v29 = v62 + 10;
      }
      v32 = v67;
    }
  }
  *((_QWORD *)v11 + 7) = v59 + v16->OptionalHeader.AddressOfEntryPoint;
  *((_DWORD *)v11 + 30) = v16->OptionalHeader.CheckSum;
  if ( v63 )
  {
    v33 = MiSectionControlArea(v63);
    v34 = *((_WORD *)v11 + 55) & 0xFFF0 | (*(_BYTE *)(*(_QWORD *)v33 + 15LL) >> 4);
    *((_WORD *)v11 + 55) = v34;
    *((_WORD *)v11 + 55) = v34 & 0xFF8F | (16 * ((*(_BYTE *)(*(_QWORD *)v33 + 15LL) >> 1) & 7));
  }
  else
  {
    v33 = 0LL;
  }
  *((_DWORD *)v11 + 38) = v16->OptionalHeader.SizeOfImage;
  *((_DWORD *)v11 + 39) = v16->FileHeader.TimeDateStamp;
  MiCaptureImageExceptionValues(v11);
  MiLockdownSections(v11);
  if ( v63 )
    v35 = *(unsigned int *)(*(_QWORD *)v33 + 8LL);
  else
    v35 = (unsigned __int64)*((unsigned int *)v11 + 16) >> 12;
  if ( !v32 )
  {
    *((_QWORD *)v29 + 5) = v35;
    *((_QWORD *)v29 + 6) = v35;
  }
  if ( !a5 )
    *((_DWORD *)v29 + 9) |= 1u;
  if ( (dword_140400104 & 1) != 0 || (v68 & 2) != 0 )
    *((_DWORD *)v29 + 9) |= 0x10u;
  *((_QWORD *)v11 + 16) = 0LL;
  if ( ExCovMaxPagedPoolToUse )
  {
    SectionInfo = ExpCovGetSectionInfo(*((_QWORD *)v11 + 6), &v67);
    if ( SectionInfo )
    {
      *((_DWORD *)v11 + 31) = v67;
      *((_QWORD *)v11 + 16) = SectionInfo;
      DbgPrintEx(0x7Eu, 2u, "COV: Stored coverage section in PsLoadedModuleList at 0x%p\n", v11);
      ExCovReadjustUnloadedModuleEntry(v11, 1LL);
    }
  }
  *((_QWORD *)v29 + 13) = v29 + 6;
  *((_QWORD *)v29 + 12) = v29 + 6;
  MiProcessLoaderEntry((int *)v11, 1);
  if ( !v32 )
  {
    if ( v63 )
    {
      *((_DWORD *)v29 + 8) = -2;
      *((_QWORD *)v29 + 2) = v59 | 3;
      *((_QWORD *)v29 + 3) = (v35 << 12) + v59 - 1;
      v65[0] = v33;
      MiManageSubsectionView((__int64 *)v65, v29, 3);
    }
  }
  *a6 = v11;
  return 0LL;
}
