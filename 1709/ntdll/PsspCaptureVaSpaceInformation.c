/*
 * XREFs of PsspCaptureVaSpaceInformation @ 0x180059BCC
 * Callers:
 *     PssNtCaptureSnapshot @ 0x18005C280 (PssNtCaptureSnapshot.c)
 * Callees:
 *     PsspCaptureImageInformation @ 0x18005AF9C (PsspCaptureImageInformation.c)
 *     NtClose @ 0x1800A02A0 (NtClose.c)
 *     ZwQueryVirtualMemory @ 0x1800A0520 (ZwQueryVirtualMemory.c)
 *     ZwMapViewOfSection @ 0x1800A05C0 (ZwMapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x1800A0600 (NtUnmapViewOfSection.c)
 *     NtCreateSection @ 0x1800A0A00 (NtCreateSection.c)
 *     memmove @ 0x1800A6940 (memmove.c)
 *     memset @ 0x1800A6C80 (memset.c)
 */

__int64 __fastcall PsspCaptureVaSpaceInformation(__int64 a1, __int64 a2, __int16 a3)
{
  unsigned __int64 v4; // rdi
  unsigned int v5; // esi
  unsigned int v6; // r14d
  unsigned int v7; // ebx
  char v8; // r12
  unsigned __int64 v9; // rcx
  int v10; // edx
  int v11; // eax
  __int64 v12; // rdx
  int v13; // eax
  unsigned int v14; // ecx
  int v15; // eax
  bool v16; // cf
  unsigned int v17; // edx
  unsigned __int64 v18; // rcx
  unsigned int v19; // r10d
  unsigned int v20; // esi
  unsigned int v21; // ecx
  unsigned int v22; // r8d
  int v23; // eax
  int v24; // eax
  __int64 result; // rax
  int v26; // edi
  size_t v27; // r8
  unsigned int v28; // r13d
  __int64 v29; // r15
  unsigned __int16 *v30; // r14
  unsigned int v31; // ecx
  unsigned int v32; // eax
  unsigned __int16 *v33; // rdi
  unsigned int v34; // eax
  unsigned int v35; // ecx
  __int16 v36; // ax
  int v37; // eax
  unsigned __int16 v38; // r15
  __int64 v39; // [rsp+58h] [rbp-59h] BYREF
  void *v40; // [rsp+60h] [rbp-51h] BYREF
  HANDLE Handle; // [rsp+68h] [rbp-49h] BYREF
  _QWORD v42[6]; // [rsp+70h] [rbp-41h] BYREF
  __int64 v43; // [rsp+A0h] [rbp-11h] BYREF
  __int64 v44; // [rsp+A8h] [rbp-9h] BYREF
  _QWORD v45[11]; // [rsp+B0h] [rbp-1h] BYREF
  int v49; // [rsp+130h] [rbp+7Fh]

  v4 = 0LL;
  v5 = 0;
  v6 = 0;
  v7 = 0;
  v8 = 0;
  do
  {
    memset(v42, 0, sizeof(v42));
    if ( (int)ZwQueryVirtualMemory(a2, v4, 0LL, v42, 48LL, 0LL) < 0 )
      break;
    v9 = v42[0];
    if ( v42[0] != v4 )
      return 3221225793LL;
    v10 = LODWORD(v42[5]) == 0x1000000 || LODWORD(v42[5]) == 0x40000;
    v6 += v10;
    if ( (a3 & 0x1000) != 0 && !v8 && (LODWORD(v42[5]) == 0x1000000 || LODWORD(v42[5]) == 0x40000) )
    {
      v39 = 0LL;
      v45[0] = 0LL;
      v45[1] = 0LL;
      v11 = ZwQueryVirtualMemory(a2, v4, 2LL, v45, 16LL, &v39);
      if ( v11 >= 0 || v11 == -2147483643 || v11 == -1073741820 || v11 == -1073741789 )
      {
        v12 = v39;
        if ( HIDWORD(v39) )
          v12 = 0LL;
        v39 = v12;
      }
      else
      {
        LODWORD(v12) = v39;
      }
      if ( (unsigned int)v12 > 0x10 && (v11 >= 0 || v11 == -2147483643 || v11 == -1073741820 || v11 == -1073741789) )
        v13 = (v12 - 5) & 0xFFFFFFF8;
      else
        v13 = 8;
      v14 = v13 + v7;
      v8 = 0;
      v15 = -1;
      if ( v14 >= v7 )
        v15 = v14;
      v16 = v14 < v7;
      v9 = v42[0];
      v7 = v15;
      if ( v16 )
        v8 = 1;
    }
    ++v5;
    v4 = v9 + v42[3];
  }
  while ( v9 + v42[3] >= v9 );
  v17 = -1;
  v18 = 72LL * v5;
  if ( v18 <= 0xFFFFFFFF )
    v17 = 72 * v5;
  v19 = v17;
  if ( v18 > 0xFFFFFFFF )
    return 3221225621LL;
  v20 = 0;
  if ( v8 )
  {
    if ( 8 * (unsigned __int64)v6 <= 0xFFFFFFFF )
    {
      v7 = 8 * v6;
      goto LABEL_31;
    }
    return 3221225621LL;
  }
  if ( (a3 & 0x1000) != 0 )
  {
    v21 = v7 + 16;
    v22 = v7;
    v23 = -1;
    if ( v7 + 16 >= v7 )
      v23 = v7 + 16;
    v7 = v23;
    if ( v21 < v22 )
      return v21 < v22 ? 0xC0000095 : 0;
  }
LABEL_31:
  if ( v7 )
  {
    v21 = v17 + v7;
    v24 = -1;
    v22 = v17;
    if ( v17 + v7 >= v17 )
      v24 = v17 + v7;
    v17 = v24;
    if ( v21 < v19 )
      return v21 < v22 ? 0xC0000095 : 0;
  }
  v44 = v17;
  result = NtCreateSection(&Handle, 983047LL, &unk_180118588, &v44, 4, 0x8000000, 0LL);
  if ( (int)result < 0 )
    return result;
  v40 = 0LL;
  v43 = 0LL;
  v26 = ZwMapViewOfSection(Handle, -1LL, &v40, 0LL, 0LL, 0LL, &v43, 1, 0, 4);
  if ( v26 < 0 )
  {
    NtClose(Handle);
    return (unsigned int)v26;
  }
  v28 = v43;
  v29 = 0LL;
  v30 = (unsigned __int16 *)v40;
  v49 = 0;
  do
  {
    if ( v20 + 72 < v20 )
      break;
    if ( v20 + 72 > v28 )
      break;
    memset(v42, 0, sizeof(v42));
    if ( (int)ZwQueryVirtualMemory(a2, v29, 0LL, v42, 48LL, 0LL) < 0 )
      break;
    if ( v42[0] != v29 )
      return 3221225793LL;
    memset(v30, 0, 0x48uLL);
    v31 = 72;
    *(_QWORD *)v30 = v42[0];
    *((_QWORD *)v30 + 1) = v42[1];
    *((_DWORD *)v30 + 4) = v42[2];
    *((_QWORD *)v30 + 3) = v42[3];
    *((_QWORD *)v30 + 4) = v42[4];
    *((_DWORD *)v30 + 10) = v42[5];
    if ( (a3 & 0x1000) == 0 )
      goto LABEL_70;
    if ( LODWORD(v42[5]) == 0x1000000 )
    {
      PsspCaptureImageInformation(v30 + 24, a2, v42[1]);
LABEL_55:
      if ( v20 + 76 < v20 || v20 + 76 > v28 )
        break;
      if ( !v8 )
      {
        v32 = v20 + 92;
        if ( v20 + 92 < v20 + 76 || v32 > v28 )
        {
          v8 = 1;
        }
        else
        {
          v33 = v30 + 36;
          v34 = v28 - v32;
          v30[36] = 0;
          v35 = v7;
          v8 = 0;
          if ( v28 - (v20 + 92) < v7 )
            v35 = v34;
          v36 = -1;
          if ( v35 < 0xFFFF )
            v36 = v35;
          v30[37] = v36;
          *((_QWORD *)v30 + 10) = v30 + 44;
          v39 = 0LL;
          v37 = ZwQueryVirtualMemory(a2, v29, 2LL, v30 + 36, v35, &v39);
          if ( v37 < 0 && v37 != -1073741820 && v37 != -1073741789 && v37 != -2147483643 || !HIDWORD(v39) )
            goto LABEL_66;
        }
      }
      v37 = -1073741675;
      v33 = 0LL;
LABEL_66:
      if ( v37 < 0 )
      {
        v30[36] = 0;
        v7 -= 2;
        v31 = 80;
      }
      else
      {
        v27 = *v33;
        if ( v27 + 2 > 0xFFFF )
        {
          v38 = 0;
        }
        else
        {
          v38 = v27 + 2;
          memmove(v33 + 1, *((const void **)v33 + 1), v27);
          *(unsigned __int16 *)((char *)v33 + *v33 + 2) = 0;
        }
        *v33 = v38;
        v7 -= (v38 + 9) & 0xFFFFFFF8;
        v31 = (v38 + 81) & 0xFFFFFFF8;
      }
      goto LABEL_70;
    }
    if ( LODWORD(v42[5]) == 0x40000 )
      goto LABEL_55;
LABEL_70:
    v20 += v31;
    v29 = v42[0] + v42[3];
    ++v49;
    v30 = (unsigned __int16 *)((char *)v30 + v31);
  }
  while ( v42[0] + v42[3] >= v42[0] );
  NtUnmapViewOfSection(-1LL, v40, v27);
  *(_DWORD *)(a1 + 912) = v49;
  *(_QWORD *)(a1 + 920) = Handle;
  *(_DWORD *)(a1 + 916) = v20;
  *(_QWORD *)(a1 + 928) = MEMORY[0x7FFE0014];
  return 0LL;
}
