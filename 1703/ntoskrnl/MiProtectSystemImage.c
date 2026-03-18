/*
 * XREFs of MiProtectSystemImage @ 0x1405A22B8
 * Callers:
 *     MiDriverLoadSucceeded @ 0x1404B317C (MiDriverLoadSucceeded.c)
 *     MiWriteProtectSystemImages @ 0x1405A2234 (MiWriteProtectSystemImages.c)
 * Callees:
 *     MiSetSystemCodeProtection @ 0x14006C1E0 (MiSetSystemCodeProtection.c)
 *     RtlImageNtHeader @ 0x14008BA00 (RtlImageNtHeader.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x1400A3C70 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiGetPteAddress @ 0x1400CE300 (MiGetPteAddress.c)
 *     MiGetSystemRegionType @ 0x1400F0720 (MiGetSystemRegionType.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     MiComputeDriverProtection @ 0x1405A2590 (MiComputeDriverProtection.c)
 */

__int64 __fastcall MiProtectSystemImage(__int64 a1)
{
  char *v1; // rbp
  __int64 v2; // rbx
  __int64 result; // rax
  PIMAGE_NT_HEADERS v4; // r13
  BOOL v5; // r12d
  __int64 NumberOfSections; // r15
  int v7; // r10d
  unsigned __int64 v8; // rdx
  __int64 v9; // r14
  _BYTE *v10; // rsi
  _DWORD *v11; // r9
  char *v12; // r8
  __int64 v13; // rdx
  __int64 SectionAlignment; // rcx
  unsigned __int64 v15; // rdi
  __int64 v16; // r8
  int v17; // r15d
  unsigned int v18; // r8d
  __int64 v19; // rdx
  __int64 v20; // rax
  int v21; // r9d
  unsigned __int64 v22; // r10
  __int64 v23; // rdx
  unsigned __int64 v24; // r14
  unsigned int v25; // ebx
  __int64 v26; // rax
  int v27; // edx
  unsigned int v28; // r9d
  unsigned __int64 v29; // r11
  unsigned __int64 v30; // r10
  unsigned int v31; // r9d
  unsigned __int64 v32; // r10
  _QWORD *v33; // r11
  unsigned __int64 v34; // r8
  __int64 v35; // rcx
  unsigned int v36; // eax
  unsigned int v37; // eax
  _QWORD *v38; // r10
  __int64 v39; // rax
  unsigned int v40; // [rsp+20h] [rbp-98h]
  unsigned int v41; // [rsp+24h] [rbp-94h]
  unsigned int v42; // [rsp+28h] [rbp-90h]
  int v43; // [rsp+2Ch] [rbp-8Ch]
  unsigned __int64 v44; // [rsp+30h] [rbp-88h]
  __int64 PteAddress; // [rsp+38h] [rbp-80h]
  char *v46; // [rsp+40h] [rbp-78h]
  unsigned __int64 v47; // [rsp+48h] [rbp-70h]
  _BYTE v49[36]; // [rsp+58h] [rbp-60h] BYREF
  int v50; // [rsp+7Ch] [rbp-3Ch]

  v1 = *(char **)(a1 + 48);
  v2 = a1;
  result = MI_IS_PHYSICAL_ADDRESS((unsigned __int64)v1);
  if ( !(_DWORD)result )
  {
    v41 = 0;
    v4 = RtlImageNtHeader(v1);
    v5 = 0;
    if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)v1) == 1 )
      v41 = 1;
    else
      v5 = (*(_DWORD *)(v2 + 104) & 0x8000000) == 0;
    NumberOfSections = v4->FileHeader.NumberOfSections;
    v7 = v4->FileHeader.NumberOfSections;
    v8 = (unsigned __int64)v1;
    v9 = (v4->OptionalHeader.SizeOfImage >> 12) + ((v4->OptionalHeader.SizeOfImage & 0xFFF) != 0);
    result = v4->FileHeader.SizeOfOptionalHeader;
    v10 = (char *)&v4->OptionalHeader + result;
    if ( v4->FileHeader.NumberOfSections )
    {
      v11 = v10 + 16;
      while ( 1 )
      {
        v12 = &v1[*(v11 - 1)];
        if ( (unsigned __int64)v12 < v8 )
          break;
        v13 = (unsigned int)*(v11 - 2);
        SectionAlignment = v4->OptionalHeader.SectionAlignment;
        if ( *v11 >= (unsigned int)v13 )
          v13 = (unsigned int)*v11;
        v11 += 10;
        result = ~(SectionAlignment - 1);
        v8 = result & (unsigned __int64)&v12[SectionAlignment - 1 + v13];
        if ( !--v7 )
          goto LABEL_10;
      }
    }
    else
    {
LABEL_10:
      v43 = -1073741824;
      v15 = (unsigned __int64)&v10[40 * NumberOfSections - 1];
      PteAddress = MiGetPteAddress((unsigned __int64)v1);
      v44 = 0LL;
      v40 = 0;
      v17 = v16 + NumberOfSections;
      v47 = PteAddress + 8 * v9;
      do
      {
        if ( v17 == (_DWORD)v16 )
        {
          v50 = 0;
          v10 = v49;
          v46 = 0LL;
          v42 = 0;
          v24 = MiGetPteAddress(v15) + 8;
        }
        else
        {
          v18 = *((_DWORD *)v10 + 2);
          v19 = *((unsigned int *)v10 + 3);
          if ( *((_DWORD *)v10 + 4) >= v18 )
            v18 = *((_DWORD *)v10 + 4);
          v42 = v18;
          v46 = &v1[v19];
          v20 = MiGetPteAddress((unsigned __int64)&v1[v19]);
          v23 = v40;
          v24 = v20;
        }
        if ( v22 && v24 > v22 )
        {
          v37 = MiComputeDriverProtection(v41, v23);
          MiSetSystemCodeProtection(v2, v38, (unsigned __int64)v38, v37);
          v21 = v43;
          v39 = PteAddress + 8;
          if ( v44 != PteAddress )
            v39 = PteAddress;
          PteAddress = v39;
          v40 = 0;
          v44 = 0LL;
        }
        if ( v24 >= v47 )
        {
          result = (__int64)v49;
          if ( v10 != v49 )
            break;
        }
        v16 = 1LL;
        v25 = *((_DWORD *)v10 + 9) & 0xE0000000;
        if ( v5 && ((MiFlags & 0x10000) == 0 || (*((_DWORD *)v10 + 9) & 0x20000000) == 0) )
          v25 = *((_DWORD *)v10 + 9) & 0x60000000 | 0x80000000;
        if ( v25 == v21 && (v36 = v4->OptionalHeader.SectionAlignment, v36 <= 0x1000) )
        {
          v35 = v36;
        }
        else
        {
          v26 = MiGetPteAddress(v15);
          v30 = v26;
          if ( v26 == v24 )
          {
            v44 = v24;
            v30 = v26 - 8;
            v40 = v28 | v25 | v27;
          }
          if ( v30 >= v29 )
          {
            v31 = MiComputeDriverProtection(v41, v28);
            v34 = v47 - 8;
            if ( v32 < v47 )
              v34 = v32;
            MiSetSystemCodeProtection(a1, v33, v34, v31);
            v16 = 1LL;
          }
          v35 = v4->OptionalHeader.SectionAlignment;
          PteAddress = v24;
          v43 = v25;
        }
        v10 += 40;
        v2 = a1;
        result = ~(v35 - 1);
        v15 = (result & (unsigned __int64)&v46[v35 - 1 + v42]) - v16;
        --v17;
      }
      while ( v17 );
    }
  }
  return result;
}
