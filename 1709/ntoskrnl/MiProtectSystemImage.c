/*
 * XREFs of MiProtectSystemImage @ 0x1405B2D74
 * Callers:
 *     MiDriverLoadSucceeded @ 0x140543B6C (MiDriverLoadSucceeded.c)
 *     MiWriteProtectSystemImages @ 0x1405B2CF0 (MiWriteProtectSystemImages.c)
 * Callees:
 *     MiGetPteAddress @ 0x14003799C (MiGetPteAddress.c)
 *     MiGetSystemRegionType @ 0x1400849C0 (MiGetSystemRegionType.c)
 *     RtlImageNtHeader @ 0x1400AE3B0 (RtlImageNtHeader.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x1400BD300 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiSetSystemCodeProtection @ 0x1400DC208 (MiSetSystemCodeProtection.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     MiComputeDriverProtection @ 0x1405B3050 (MiComputeDriverProtection.c)
 */

__int64 __fastcall MiProtectSystemImage(__int64 a1)
{
  char *v1; // rsi
  __int64 v2; // rbx
  __int64 result; // rax
  PIMAGE_NT_HEADERS v4; // r13
  BOOL v5; // r15d
  __int64 NumberOfSections; // r14
  int v7; // r10d
  unsigned __int64 v8; // rdx
  __int64 v9; // rbp
  _BYTE *v10; // rdi
  _DWORD *v11; // r9
  char *v12; // r8
  __int64 v13; // rdx
  __int64 SectionAlignment; // rcx
  unsigned __int64 v15; // r8
  int v16; // r14d
  unsigned int v17; // edx
  unsigned __int64 v18; // r12
  __int64 v19; // rax
  unsigned __int64 v20; // r8
  int v21; // r9d
  unsigned __int64 v22; // r10
  __int64 v23; // rdx
  unsigned __int64 v24; // rbp
  unsigned int v25; // ebx
  __int64 v26; // rax
  int v27; // edx
  unsigned int v28; // r9d
  unsigned __int64 v29; // r11
  unsigned __int64 v30; // r10
  unsigned int v31; // r9d
  unsigned __int64 *v32; // r10
  unsigned __int64 *v33; // r11
  unsigned __int64 *v34; // r8
  __int64 v35; // rcx
  __int64 v36; // rdx
  __int64 v37; // rax
  __int64 v38; // rax
  unsigned int v39; // eax
  unsigned __int64 *v40; // r10
  __int64 v41; // rax
  unsigned int v42; // [rsp+20h] [rbp-98h]
  unsigned int v43; // [rsp+24h] [rbp-94h]
  unsigned int v44; // [rsp+28h] [rbp-90h]
  int v45; // [rsp+2Ch] [rbp-8Ch]
  unsigned __int64 v46; // [rsp+30h] [rbp-88h]
  __int64 PteAddress; // [rsp+38h] [rbp-80h]
  unsigned __int64 v48; // [rsp+40h] [rbp-78h]
  _BYTE *v49; // [rsp+48h] [rbp-70h]
  _BYTE v51[36]; // [rsp+58h] [rbp-60h] BYREF
  int v52; // [rsp+7Ch] [rbp-3Ch]

  v1 = *(char **)(a1 + 48);
  v2 = a1;
  result = MI_IS_PHYSICAL_ADDRESS((unsigned __int64)v1);
  if ( !(_DWORD)result )
  {
    v43 = 0;
    v4 = RtlImageNtHeader(v1);
    v5 = 0;
    if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)v1) == 1 )
      v43 = 1;
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
      v45 = -1073741824;
      v49 = &v10[40 * NumberOfSections - 1];
      PteAddress = MiGetPteAddress((unsigned __int64)v1);
      v46 = 0LL;
      v42 = 0;
      v16 = NumberOfSections + 1;
      v48 = PteAddress + 8 * v9;
      do
      {
        if ( v16 == 1 )
        {
          v52 = 0;
          v10 = v51;
          v18 = 0LL;
          v44 = 0;
          v24 = MiGetPteAddress(v15) + 8;
        }
        else
        {
          v17 = *((_DWORD *)v10 + 2);
          if ( *((_DWORD *)v10 + 4) >= v17 )
            v17 = *((_DWORD *)v10 + 4);
          v18 = (unsigned __int64)&v1[*((unsigned int *)v10 + 3)];
          v44 = v17;
          v19 = MiGetPteAddress(v18);
          v23 = v42;
          v24 = v19;
        }
        if ( v22 && v24 > v22 )
        {
          v39 = MiComputeDriverProtection(v43, v23);
          MiSetSystemCodeProtection(v2, v40, v40, v39);
          v20 = (unsigned __int64)v49;
          v21 = v45;
          v41 = PteAddress + 8;
          if ( v46 != PteAddress )
            v41 = PteAddress;
          PteAddress = v41;
          v42 = 0;
          v46 = 0LL;
        }
        if ( v24 >= v48 )
        {
          result = (__int64)v51;
          if ( v10 != v51 )
            break;
        }
        v25 = *((_DWORD *)v10 + 9) & 0xE0000000;
        if ( v5 && ((MiFlags & 0x10000) == 0 || (*((_DWORD *)v10 + 9) & 0x20000000) == 0) )
          v25 = *((_DWORD *)v10 + 9) & 0x60000000 | 0x80000000;
        if ( v25 == v21 && (v38 = v4->OptionalHeader.SectionAlignment, (unsigned int)v38 <= 0x1000) )
        {
          v36 = v38 + v44 - 1LL;
          v37 = v38 - 1;
        }
        else
        {
          v26 = MiGetPteAddress(v20);
          v30 = v26;
          if ( v26 == v24 )
          {
            v46 = v24;
            v30 = v26 - 8;
            v42 = v28 | v25 | v27;
          }
          if ( v30 >= v29 )
          {
            v31 = MiComputeDriverProtection(v43, v28);
            v34 = (unsigned __int64 *)(v48 - 8);
            if ( (unsigned __int64)v32 < v48 )
              v34 = v32;
            MiSetSystemCodeProtection(a1, v33, v34, v31);
          }
          v35 = v4->OptionalHeader.SectionAlignment;
          PteAddress = v24;
          v45 = v25;
          v36 = v35 + v44 - 1LL;
          v37 = v35 - 1;
        }
        v2 = a1;
        result = ~v37;
        v10 += 40;
        v15 = (result & (v18 + v36)) - 1;
        v49 = (_BYTE *)v15;
        --v16;
      }
      while ( v16 );
    }
  }
  return result;
}
