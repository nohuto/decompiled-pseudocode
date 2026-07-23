/*
 * XREFs of MiConstructLoaderEntry @ 0x1405F8E14
 * Callers:
 *     MmLoadSystemImageEx @ 0x1405F9AF4 (MmLoadSystemImageEx.c)
 *     MiInitializeLoadedModuleList @ 0x14089DE40 (MiInitializeLoadedModuleList.c)
 * Callees:
 *     RtlImageNtHeader @ 0x14003EEB0 (RtlImageNtHeader.c)
 *     MiManageSubsectionView @ 0x1400DDC40 (MiManageSubsectionView.c)
 *     MiSectionControlArea @ 0x1400E54F0 (MiSectionControlArea.c)
 *     MiChargeResident @ 0x140131D0C (MiChargeResident.c)
 *     DbgPrintEx @ 0x14014C9D0 (DbgPrintEx.c)
 *     MiProcessLoaderEntry @ 0x140160F88 (MiProcessLoaderEntry.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     ExpCovGetSectionInfo @ 0x1405F952C (ExpCovGetSectionInfo.c)
 *     MiLockdownSections @ 0x1405F958C (MiLockdownSections.c)
 *     MiCaptureImageExceptionValues @ 0x1405F9650 (MiCaptureImageExceptionValues.c)
 *     ExCovReadjustUnloadedModuleEntry @ 0x140605DE0 (ExCovReadjustUnloadedModuleEntry.c)
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
  __int64 v27; // r13
  unsigned __int64 v28; // rax
  __int64 v29; // r9
  _OWORD *v30; // rbx
  char *v31; // r14
  char *v32; // rcx
  bool v33; // zf
  int v34; // r12d
  unsigned __int64 v35; // r14
  __int16 v36; // r8
  unsigned __int64 v37; // rsi
  __int64 SectionInfo; // rax
  __int64 VirtualAddress; // rax
  unsigned __int64 Size; // rcx
  unsigned int SizeOfImage; // r9d
  unsigned int v43; // r8d
  char *v44; // r15
  unsigned __int64 v45; // rcx
  unsigned int v46; // eax
  int v47; // edx
  unsigned __int64 v48; // rbp
  unsigned int v49; // r9d
  __int64 v50; // r8
  unsigned int *v51; // r15
  __int64 v52; // rax
  unsigned int v53; // r12d
  unsigned int v54; // edx
  __int64 v55; // rax
  unsigned __int128 v56; // rax
  unsigned int v57; // ebx
  __int64 v58; // [rsp+20h] [rbp-128h]
  unsigned int v59; // [rsp+20h] [rbp-128h]
  int v60; // [rsp+28h] [rbp-120h]
  __int64 v61; // [rsp+30h] [rbp-118h]
  __int64 v62; // [rsp+30h] [rbp-118h]
  _IMAGE_DATA_DIRECTORY *v63; // [rsp+38h] [rbp-110h]
  unsigned __int64 v64; // [rsp+40h] [rbp-108h]
  _OWORD *v65; // [rsp+48h] [rbp-100h]
  __int128 v66; // [rsp+58h] [rbp-F0h]
  unsigned __int64 v67[27]; // [rsp+70h] [rbp-D8h] BYREF
  int v70; // [rsp+160h] [rbp+18h] BYREF
  int v71; // [rsp+168h] [rbp+20h]

  v71 = a4;
  v6 = a2;
  v58 = 0LL;
  v9 = *(unsigned __int16 *)a3 + 2LL;
  *a6 = 0LL;
  v10 = a4;
  v11 = 0LL;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, v9, 0x54446D4Du);
  *((_QWORD *)&v66 + 1) = PoolWithTag;
  v13 = PoolWithTag;
  if ( !PoolWithTag )
    return (unsigned int)-1073741670;
  LOWORD(v66) = *(_WORD *)a3;
  WORD1(v66) = *(_WORD *)a3;
  memmove(PoolWithTag, a3[1], *(unsigned __int16 *)a3);
  v13[(unsigned __int64)*(unsigned __int16 *)a3 >> 1] = 0;
  v14 = *(char **)(a1 + 48);
  v64 = (unsigned __int64)v14;
  v15 = RtlImageNtHeader(v14);
  v16 = v15;
  v17 = v10 & 1;
  v60 = v17;
  if ( (v10 & 1) != 0 )
  {
    LODWORD(NumberOfSections) = 0;
    v70 = 0;
  }
  else
  {
    NumberOfSections = v15->FileHeader.NumberOfSections;
    v70 = v15->FileHeader.NumberOfSections;
    if ( 0xFFFFFFFFFFFFFFFFuLL / NumberOfSections < 4 )
    {
      v57 = -1073741520;
      goto LABEL_74;
    }
  }
  v63 = 0LL;
  v19 = 0LL;
  v20 = 0;
  if ( v17 )
  {
    v20 = 32;
    if ( v15->OptionalHeader.NumberOfRvaAndSizes > 6 )
    {
      VirtualAddress = v15->OptionalHeader.DataDirectory[6].VirtualAddress;
      v63 = &v16->OptionalHeader.DataDirectory[6];
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
              v43 = 0;
              v44 = &v14[VirtualAddress];
              v45 = Size / 0x1C;
              if ( v45 )
              {
                do
                {
                  v46 = *((_DWORD *)v44 + 5);
                  if ( v46 )
                  {
                    if ( v46 < SizeOfImage )
                    {
                      v47 = *((_DWORD *)v44 + 4);
                      if ( v47 + v46 < SizeOfImage )
                        v20 += v47;
                    }
                  }
                  ++v43;
                  v44 += 28;
                }
                while ( v43 < v45 );
                v6 = a2;
              }
              v19 = &v44[-28 * v43];
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
  v24 = v22 + 306;
  v61 = v23;
  if ( v24 <= 0x132 )
    goto LABEL_72;
  if ( v20 )
  {
    if ( v24 + v20 <= v24 )
      goto LABEL_72;
    v24 += v20;
  }
  v25 = (*(unsigned __int16 *)v6 + 7LL) & 0xFFFFFFFFFFFFFFF8uLL;
  v26 = v25 + v24;
  if ( v25 + v24 <= v24 )
  {
LABEL_72:
    v57 = -1073741701;
    goto LABEL_74;
  }
  if ( (_DWORD)NumberOfSections )
  {
    if ( v26 + 4LL * (unsigned int)NumberOfSections > v26 )
    {
      v26 += 4LL * (unsigned int)NumberOfSections;
      goto LABEL_11;
    }
    goto LABEL_72;
  }
LABEL_11:
  v65 = ExAllocatePoolWithTag(NonPagedPoolNx, v26, 0x644C6D4Du);
  v11 = v65;
  if ( !v65
    || (v27 = *(_QWORD *)(a1 + 112)) != 0
    && (v28 = MiSectionControlArea(v27),
        v58 = (*(_DWORD *)(*(_QWORD *)v28 + 8LL) >> 12)
            + (unsigned int)((*(_DWORD *)(*(_QWORD *)v28 + 8LL) & 0xFFF) != 0),
        !(unsigned int)MiChargeResident(&MiSystemPartition, (unsigned int)v58, 0LL, v29)) )
  {
    v57 = -1073741670;
LABEL_74:
    ExFreePoolWithTag(v13, 0);
    if ( v11 )
      ExFreePoolWithTag(v11, 0);
    return v57;
  }
  memset(v65, 0, v26);
  v30 = v65 + 10;
  v31 = (char *)v65 + v61 + 304;
  *((_QWORD *)v65 + 33) = v65 + 19;
  v32 = &v31[v20];
  v33 = v70 == 0;
  *((_QWORD *)v65 + 32) = v31;
  *((_QWORD *)v65 + 27) = v58;
  if ( !v33 )
    *((_QWORD *)v65 + 28) = &v32[v25];
  *v65 = *(_OWORD *)a1;
  v65[1] = *(_OWORD *)(a1 + 16);
  v65[2] = *(_OWORD *)(a1 + 32);
  v65[3] = *(_OWORD *)(a1 + 48);
  v65[4] = *(_OWORD *)(a1 + 64);
  v65[5] = *(_OWORD *)(a1 + 80);
  v65[6] = *(_OWORD *)(a1 + 96);
  v65[7] = *(_OWORD *)(a1 + 112);
  v65[8] = *(_OWORD *)(a1 + 128);
  v65[9] = *(_OWORD *)(a1 + 144);
  if ( v16->OptionalHeader.MajorOperatingSystemVersion >= 5u && v16->OptionalHeader.MajorImageVersion >= 5u )
    *((_DWORD *)v65 + 26) |= 0x8000000u;
  if ( (v16->OptionalHeader.DllCharacteristics & 0x80) != 0 )
    *((_DWORD *)v65 + 26) |= 0x20u;
  *((_QWORD *)v65 + 12) = v32;
  *((_WORD *)v65 + 44) = *(_WORD *)a2;
  *((_WORD *)v65 + 45) = *(_WORD *)a2;
  memmove(v32, a2[1], *(unsigned __int16 *)a2);
  v34 = v60;
  *(_WORD *)(*((_QWORD *)v65 + 12) + 2 * ((unsigned __int64)*(unsigned __int16 *)a2 >> 1)) = 0;
  *((_QWORD *)v65 + 5) = 0LL;
  *(_OWORD *)((char *)v65 + 72) = v66;
  if ( v60 )
  {
    *((_DWORD *)v65 + 26) |= 0x20000000u;
    *((_QWORD *)v65 + 5) = v31;
    *(_DWORD *)v31 = 84302;
    *((_DWORD *)v31 + 1) = v20;
    *((_WORD *)v31 + 4) = v16->FileHeader.Machine;
    *((_WORD *)v31 + 5) = v16->FileHeader.Characteristics;
    *((_DWORD *)v31 + 3) = v16->FileHeader.TimeDateStamp;
    *((_DWORD *)v31 + 4) = v16->OptionalHeader.CheckSum;
    *((_DWORD *)v31 + 5) = v16->OptionalHeader.SizeOfImage;
    *((_QWORD *)v31 + 3) = v64;
    if ( v19 )
    {
      memmove(v31 + 32, v19, v63->Size);
      v48 = v63->Size;
      v59 = 0;
      v49 = 0;
      if ( v48 / 0x1C )
      {
        v50 = 0LL;
        v62 = 0LL;
        v51 = (unsigned int *)(v19 + 16);
        do
        {
          v52 = v51[1];
          v53 = *v51;
          v70 = v48;
          if ( (_DWORD)v52
            && (v54 = v16->OptionalHeader.SizeOfImage, (unsigned int)v52 < v54)
            && v53 + (unsigned int)v52 > (unsigned int)v52
            && v53 + (unsigned int)v52 < v54 )
          {
            memmove(&v31[(unsigned int)v48 + 32], (const void *)(v64 + v52), v53);
            v50 = v62;
            LODWORD(v48) = v53 + v48;
            v49 = v59;
          }
          else
          {
            v70 = 0;
          }
          ++v49;
          v55 = 28 * v50;
          v50 = v49;
          v51 += 7;
          v59 = v49;
          v62 = v49;
          *(_DWORD *)&v31[v55 + 52] = v70;
          v56 = v63->Size * (unsigned __int128)0x2492492492492493uLL;
        }
        while ( v49 < (*((_QWORD *)&v56 + 1) + (((unsigned __int64)v63->Size - *((_QWORD *)&v56 + 1)) >> 1)) >> 4 );
        v11 = v65;
        v34 = v60;
        v30 = v65 + 10;
      }
    }
  }
  *((_QWORD *)v11 + 7) = v64 + v16->OptionalHeader.AddressOfEntryPoint;
  *((_DWORD *)v11 + 30) = v16->OptionalHeader.CheckSum;
  if ( v27 )
  {
    v35 = MiSectionControlArea(v27);
    v36 = *((_WORD *)v11 + 55) & 0xFFF0 | (*(_BYTE *)(*(_QWORD *)v35 + 15LL) >> 4);
    *((_WORD *)v11 + 55) = v36;
    *((_WORD *)v11 + 55) = v36 & 0xFF8F | (16 * ((*(_BYTE *)(*(_QWORD *)v35 + 15LL) >> 1) & 7));
  }
  else
  {
    v35 = 0LL;
  }
  *((_DWORD *)v11 + 38) = v16->OptionalHeader.SizeOfImage;
  *((_DWORD *)v11 + 39) = v16->FileHeader.TimeDateStamp;
  MiCaptureImageExceptionValues(v11);
  MiLockdownSections(v11);
  if ( v27 )
    v37 = *(unsigned int *)(*(_QWORD *)v35 + 8LL);
  else
    v37 = (unsigned __int64)*((unsigned int *)v11 + 16) >> 12;
  if ( !v34 )
  {
    *((_QWORD *)v30 + 5) = v37;
    *((_QWORD *)v30 + 6) = v37;
  }
  if ( !a5 )
    *((_DWORD *)v30 + 9) |= 1u;
  if ( (dword_14044B164 & 1) != 0 || (v71 & 2) != 0 )
    *((_DWORD *)v30 + 9) |= 0x10u;
  *((_QWORD *)v11 + 16) = 0LL;
  if ( ExCovMaxPagedPoolToUse )
  {
    SectionInfo = ExpCovGetSectionInfo(*((_QWORD *)v11 + 6), &v70);
    if ( SectionInfo )
    {
      *((_DWORD *)v11 + 31) = v70;
      *((_QWORD *)v11 + 16) = SectionInfo;
      DbgPrintEx(0x7Eu, 2u, "COV: Stored coverage section in PsLoadedModuleList at 0x%p\n", v11);
      ExCovReadjustUnloadedModuleEntry(v11, 1LL);
    }
  }
  *((_QWORD *)v30 + 16) = (char *)v30 + 120;
  *((_QWORD *)v30 + 15) = (char *)v30 + 120;
  MiProcessLoaderEntry(v11, 1);
  if ( !v34 )
  {
    if ( v27 )
    {
      *((_DWORD *)v30 + 8) = -2;
      *((_QWORD *)v30 + 2) = v64 | 3;
      *((_QWORD *)v30 + 3) = (v37 << 12) + v64 - 1;
      v67[0] = v35;
      MiManageSubsectionView((__int64 *)v67, v30, 3);
    }
  }
  *a6 = v11;
  return 0LL;
}
