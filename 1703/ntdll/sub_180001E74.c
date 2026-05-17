/*
 * XREFs of sub_180001E74 @ 0x180001E74
 * Callers:
 *     PssNtCaptureSnapshot @ 0x1800019F0 (PssNtCaptureSnapshot.c)
 * Callees:
 *     sub_1800023CC @ 0x1800023CC (sub_1800023CC.c)
 *     sub_18005BD74 @ 0x18005BD74 (sub_18005BD74.c)
 *     ZwClose @ 0x1800A54E0 (ZwClose.c)
 *     ZwQueryVirtualMemory @ 0x1800A5760 (ZwQueryVirtualMemory.c)
 *     ZwMapViewOfSection @ 0x1800A5800 (ZwMapViewOfSection.c)
 *     ZwUnmapViewOfSection @ 0x1800A5840 (ZwUnmapViewOfSection.c)
 *     ZwCreateSection @ 0x1800A5C40 (ZwCreateSection.c)
 *     memmove @ 0x1800ABA80 (memmove.c)
 *     memset @ 0x1800ABDC0 (memset.c)
 */

__int64 __fastcall sub_180001E74(__int64 a1, __int64 a2, __int16 a3)
{
  __int64 v4; // rdi
  unsigned int v5; // esi
  unsigned int v6; // r14d
  unsigned __int64 v7; // rbx
  char v8; // r12
  unsigned int v9; // r15d
  __int64 v10; // r9
  int v11; // ecx
  int v12; // eax
  __int64 v13; // rdx
  int v14; // eax
  unsigned int v15; // ecx
  int v16; // eax
  __int64 result; // rax
  unsigned int v18; // r10d
  unsigned __int64 v19; // rcx
  unsigned int v20; // esi
  unsigned int v21; // edx
  unsigned int v22; // r8d
  int v23; // eax
  unsigned int v24; // r9d
  bool v25; // cf
  int v26; // edi
  unsigned int v27; // r13d
  __int64 v28; // r15
  unsigned __int16 *v29; // r14
  unsigned int v30; // ecx
  unsigned int v31; // eax
  unsigned __int16 *v32; // rdi
  unsigned int v33; // eax
  unsigned int v34; // ecx
  __int16 v35; // ax
  int v36; // eax
  size_t v37; // r8
  unsigned __int16 v38; // r15
  __int64 v39; // rax
  __int64 v40; // [rsp+58h] [rbp-59h] BYREF
  __int64 v41; // [rsp+60h] [rbp-51h] BYREF
  void *v42; // [rsp+68h] [rbp-49h] BYREF
  __int64 v43; // [rsp+70h] [rbp-41h] BYREF
  _QWORD v44[6]; // [rsp+78h] [rbp-39h] BYREF
  __int64 v45; // [rsp+A8h] [rbp-9h] BYREF
  __int64 v46; // [rsp+B0h] [rbp-1h] BYREF
  _QWORD v47[10]; // [rsp+B8h] [rbp+7h] BYREF
  int v51; // [rsp+130h] [rbp+7Fh]

  v4 = 0LL;
  v41 = 0LL;
  v5 = 0;
  v6 = 0;
  LODWORD(v7) = 0;
  v8 = 0;
  while ( 1 )
  {
    v9 = v7;
    memset(v44, 0, sizeof(v44));
    if ( (int)ZwQueryVirtualMemory(a2, v4, 0LL, v44, 48LL, 0LL) < 0 )
      break;
    v10 = v44[0];
    if ( v44[0] != v4 )
      return 3221225793LL;
    v11 = LODWORD(v44[5]) == 0x1000000 || LODWORD(v44[5]) == 0x40000;
    v6 += v11;
    if ( (a3 & 0x1000) != 0 && !v8 && (LODWORD(v44[5]) == 0x1000000 || LODWORD(v44[5]) == 0x40000) )
    {
      v40 = 0LL;
      v47[0] = 0LL;
      v47[1] = 0LL;
      v12 = ZwQueryVirtualMemory(a2, v4, 2LL, v47, 16LL, &v40);
      if ( v12 >= 0 || v12 == -1073741820 || v12 == -1073741789 || v12 == -2147483643 )
      {
        v13 = v40;
        if ( HIDWORD(v40) )
          v13 = 0LL;
        v40 = v13;
      }
      else
      {
        LODWORD(v13) = v40;
      }
      if ( (unsigned int)v13 > 0x10 && (v12 >= 0 || v12 == -1073741820 || v12 == -1073741789 || v12 == -2147483643) )
        v14 = (v13 - 5) & 0xFFFFFFF8;
      else
        v14 = 8;
      v10 = v44[0];
      v15 = v14 + v7;
      v8 = 0;
      v16 = -1;
      if ( v15 >= (unsigned int)v7 )
        v16 = v15;
      LODWORD(v7) = v16;
      if ( v15 < v9 )
        v8 = 1;
    }
    ++v5;
    if ( (int)sub_18005BD74(v10, v44[3], &v41) < 0 )
      break;
    v4 = v41;
  }
  v18 = v7;
  v19 = 72LL * v5;
  if ( v19 > 0xFFFFFFFF )
    return 3221225621LL;
  v20 = 0;
  v21 = v19;
  if ( v8 )
  {
    v7 = 8LL * v6;
    if ( v7 > 0xFFFFFFFF )
      return 3221225621LL;
  }
  else if ( (a3 & 0x1000) != 0 )
  {
    v22 = v7 + 16;
    v23 = -1;
    v24 = v7;
    if ( (int)v7 + 16 >= (unsigned int)v7 )
      v23 = v7 + 16;
    LODWORD(v7) = v23;
    if ( v22 < v18 )
    {
      v25 = v22 < v24;
      return v25 ? 0xC0000095 : 0;
    }
  }
  if ( !(_DWORD)v7 )
    goto LABEL_48;
  v25 = (int)v19 + (int)v7 < (unsigned int)v19;
  if ( (int)v19 + (int)v7 < (unsigned int)v19 )
    return v25 ? 0xC0000095 : 0;
  v21 = v19 + v7;
LABEL_48:
  v46 = v21;
  result = ZwCreateSection(&v43, 983047LL, "0", &v46, 4, 0x8000000, 0LL);
  if ( (int)result >= 0 )
  {
    v42 = 0LL;
    v45 = 0LL;
    v26 = ZwMapViewOfSection(v43, -1LL, &v42, 0LL, 0LL, 0LL, &v45, 1, 0, 4);
    if ( v26 < 0 )
    {
      ZwClose(v43);
      return (unsigned int)v26;
    }
    v27 = v45;
    v28 = 0LL;
    v29 = (unsigned __int16 *)v42;
    v41 = 0LL;
    v51 = 0;
    while ( 1 )
    {
      if ( v20 + 72 < v20
        || v20 + 72 > v27
        || (memset(v44, 0, sizeof(v44)), (int)ZwQueryVirtualMemory(a2, v28, 0LL, v44, 48LL, 0LL) < 0) )
      {
LABEL_86:
        ZwUnmapViewOfSection(-1LL, v42);
        *(_DWORD *)(a1 + 912) = v51;
        *(_QWORD *)(a1 + 920) = v43;
        *(_DWORD *)(a1 + 916) = v20;
        *(_QWORD *)(a1 + 928) = MEMORY[0x7FFE0014];
        return 0LL;
      }
      if ( v44[0] != v28 )
        return 3221225793LL;
      memset(v29, 0, 0x48uLL);
      v30 = 72;
      *(_QWORD *)v29 = v44[0];
      *((_QWORD *)v29 + 1) = v44[1];
      *((_DWORD *)v29 + 4) = v44[2];
      *((_QWORD *)v29 + 3) = v44[3];
      *((_QWORD *)v29 + 4) = v44[4];
      *((_DWORD *)v29 + 10) = v44[5];
      if ( (a3 & 0x1000) != 0 )
        break;
LABEL_84:
      ++v51;
      v39 = (v30 + 7) & 0xFFFFFFF8;
      v20 += v39;
      v29 = (unsigned __int16 *)((char *)v29 + v39);
      if ( (int)sub_18005BD74(v44[0], v44[3], &v41) < 0 )
        goto LABEL_86;
      v28 = v41;
    }
    if ( LODWORD(v44[5]) == 0x1000000 )
    {
      sub_1800023CC(v29 + 24, a2, v44[1]);
    }
    else if ( LODWORD(v44[5]) != 0x40000 )
    {
      goto LABEL_84;
    }
    if ( v20 + 76 < v20 || v20 + 76 > v27 )
      goto LABEL_86;
    if ( !v8 )
    {
      v31 = v20 + 92;
      if ( v20 + 92 < v20 + 76 || v31 > v27 )
      {
        v8 = 1;
      }
      else
      {
        v32 = v29 + 36;
        v33 = v27 - v31;
        v29[36] = 0;
        v34 = v7;
        v8 = 0;
        if ( v27 - (v20 + 92) < (unsigned int)v7 )
          v34 = v33;
        v35 = -1;
        if ( v34 < 0xFFFF )
          v35 = v34;
        v29[37] = v35;
        *((_QWORD *)v29 + 10) = v29 + 44;
        v40 = 0LL;
        v36 = ZwQueryVirtualMemory(a2, v28, 2LL, v29 + 36, v34, &v40);
        if ( v36 < 0 && v36 != -1073741820 && v36 != -1073741789 && v36 != -2147483643 || !HIDWORD(v40) )
          goto LABEL_78;
      }
    }
    v36 = -1073741675;
    v32 = 0LL;
LABEL_78:
    if ( v36 < 0 )
    {
      v29[36] = 0;
      LODWORD(v7) = v7 - 2;
      v30 = 80;
    }
    else
    {
      v37 = *v32;
      if ( v37 + 2 > 0xFFFF )
      {
        v38 = 0;
      }
      else
      {
        v38 = v37 + 2;
        memmove(v32 + 1, *((const void **)v32 + 1), v37);
        *(unsigned __int16 *)((char *)v32 + *v32 + 2) = 0;
      }
      *v32 = v38;
      LODWORD(v7) = v7 - ((v38 + 9) & 0xFFFFFFF8);
      v30 = (v38 + 81) & 0xFFFFFFF8;
    }
    goto LABEL_84;
  }
  return result;
}
