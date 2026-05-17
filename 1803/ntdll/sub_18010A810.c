/*
 * XREFs of sub_18010A810 @ 0x18010A810
 * Callers:
 *     PssNtCaptureSnapshot @ 0x180109790 (PssNtCaptureSnapshot.c)
 * Callees:
 *     ZwClose @ 0x18009ACA0 (ZwClose.c)
 *     ZwQueryVirtualMemory @ 0x18009AF20 (ZwQueryVirtualMemory.c)
 *     ZwMapViewOfSection @ 0x18009AFC0 (ZwMapViewOfSection.c)
 *     ZwUnmapViewOfSection @ 0x18009B000 (ZwUnmapViewOfSection.c)
 *     ZwCreateSection @ 0x18009B400 (ZwCreateSection.c)
 *     memmove @ 0x1800A1380 (memmove.c)
 *     memset @ 0x1800A16C0 (memset.c)
 *     sub_18010A710 @ 0x18010A710 (sub_18010A710.c)
 */

__int64 __fastcall sub_18010A810(__int64 a1, __int64 a2, __int16 a3)
{
  unsigned __int64 v3; // rdi
  unsigned int v4; // esi
  unsigned int v5; // r14d
  unsigned int v6; // ebx
  char v7; // r12
  unsigned __int64 v8; // rcx
  int v9; // edx
  int v10; // eax
  bool v11; // cf
  unsigned int v12; // edx
  unsigned int v13; // r9d
  unsigned __int64 v14; // rcx
  unsigned int v15; // r10d
  __int64 result; // rax
  unsigned int v17; // esi
  unsigned int v18; // ecx
  int v19; // eax
  unsigned int v20; // r8d
  int v21; // edi
  int v22; // eax
  unsigned int v23; // r13d
  __int64 v24; // r15
  unsigned __int16 *v25; // r14
  unsigned int v26; // ecx
  unsigned int v27; // eax
  unsigned __int16 *v28; // rdi
  unsigned int v29; // eax
  unsigned int v30; // ecx
  __int16 v31; // ax
  int VirtualMemory; // eax
  size_t v33; // r8
  unsigned __int16 v34; // r15
  __int64 v35; // [rsp+68h] [rbp-49h]
  _QWORD v36[6]; // [rsp+70h] [rbp-41h] BYREF
  __int64 v37; // [rsp+A0h] [rbp-11h]
  __int64 v38; // [rsp+A8h] [rbp-9h]
  __int64 v39; // [rsp+B0h] [rbp-1h]
  __int64 v40; // [rsp+B8h] [rbp+7h]
  int v43; // [rsp+130h] [rbp+7Fh]

  v3 = 0LL;
  v4 = 0;
  v5 = 0;
  v6 = 0;
  v7 = 0;
  do
  {
    memset(v36, 0, sizeof(v36));
    if ( (int)ZwQueryVirtualMemory() < 0 )
      break;
    v8 = v36[0];
    if ( v36[0] != v3 )
      return 3221225793LL;
    v9 = LODWORD(v36[5]) == 0x1000000 || LODWORD(v36[5]) == 0x40000;
    v5 += v9;
    if ( (a3 & 0x1000) != 0 && !v7 && (LODWORD(v36[5]) == 0x1000000 || LODWORD(v36[5]) == 0x40000) )
    {
      v39 = 0LL;
      v40 = 0LL;
      ZwQueryVirtualMemory();
      v10 = -1;
      if ( v6 + 8 >= v6 )
        v10 = v6 + 8;
      v11 = v6 + 8 < v6;
      v8 = v36[0];
      v6 = v10;
      if ( v11 )
        v7 = 1;
    }
    ++v4;
    v3 = v8 + v36[3];
  }
  while ( v8 + v36[3] >= v8 );
  v12 = -1;
  v13 = v6;
  v14 = 72LL * v4;
  if ( v14 <= 0xFFFFFFFF )
    v12 = 72 * v4;
  v15 = v12;
  if ( v14 > 0xFFFFFFFF )
    return 3221225621LL;
  v17 = 0;
  if ( v7 )
  {
    if ( 8 * (unsigned __int64)v5 > 0xFFFFFFFF )
      return 3221225621LL;
    v6 = 8 * v5;
  }
  else if ( (a3 & 0x1000) != 0 )
  {
    v18 = v6 + 16;
    v22 = -1;
    v20 = v6;
    if ( v6 + 16 >= v6 )
      v22 = v6 + 16;
    v6 = v22;
    if ( v18 < v13 )
      return v18 < v20 ? 0xC0000095 : 0;
  }
  if ( v6 )
  {
    v18 = v12 + v6;
    v19 = -1;
    v20 = v12;
    if ( v12 + v6 >= v12 )
      v19 = v12 + v6;
    v12 = v19;
    if ( v18 < v15 )
      return v18 < v20 ? 0xC0000095 : 0;
  }
  v38 = v12;
  result = ZwCreateSection();
  if ( (int)result < 0 )
    return result;
  v37 = 0LL;
  v21 = ZwMapViewOfSection();
  if ( v21 < 0 )
  {
    ZwClose();
    return (unsigned int)v21;
  }
  v23 = v37;
  v24 = 0LL;
  v25 = 0LL;
  v43 = 0;
  do
  {
    if ( v17 + 72 < v17 )
      break;
    if ( v17 + 72 > v23 )
      break;
    memset(v36, 0, sizeof(v36));
    if ( (int)ZwQueryVirtualMemory() < 0 )
      break;
    if ( v36[0] != v24 )
      return 3221225793LL;
    memset(v25, 0, 0x48uLL);
    v26 = 72;
    *(_QWORD *)v25 = v36[0];
    *((_QWORD *)v25 + 1) = v36[1];
    *((_DWORD *)v25 + 4) = v36[2];
    *((_QWORD *)v25 + 3) = v36[3];
    *((_QWORD *)v25 + 4) = v36[4];
    *((_DWORD *)v25 + 10) = v36[5];
    if ( (a3 & 0x1000) == 0 )
      goto LABEL_65;
    if ( LODWORD(v36[5]) == 0x1000000 )
    {
      sub_18010A710((__int64)(v25 + 24));
LABEL_47:
      if ( v17 + 76 < v17 || v17 + 76 > v23 )
        break;
      if ( !v7 )
      {
        v27 = v17 + 92;
        if ( v17 + 92 >= v17 + 76 && v27 <= v23 )
        {
          v28 = v25 + 36;
          v29 = v23 - v27;
          v25[36] = 0;
          v7 = 0;
          if ( v23 - (v17 + 92) >= v6 )
            v29 = v6;
          v30 = v29;
          v31 = -1;
          if ( v30 < 0xFFFF )
            v31 = v30;
          v25[37] = v31;
          *((_QWORD *)v25 + 10) = v25 + 44;
          VirtualMemory = ZwQueryVirtualMemory();
          goto LABEL_59;
        }
        v7 = 1;
      }
      VirtualMemory = -1073741675;
      v28 = 0LL;
LABEL_59:
      if ( VirtualMemory < 0 )
      {
        v25[36] = 0;
        v6 -= 2;
        v26 = 80;
      }
      else
      {
        v33 = *v28;
        if ( v33 + 2 > 0xFFFF )
        {
          v34 = 0;
        }
        else
        {
          v34 = v33 + 2;
          memmove(v28 + 1, *((const void **)v28 + 1), v33);
          *(unsigned __int16 *)((char *)v28 + *v28 + 2) = 0;
        }
        *v28 = v34;
        v6 -= (v34 + 9) & 0xFFFFFFF8;
        v26 = (v34 + 81) & 0xFFFFFFF8;
      }
      goto LABEL_65;
    }
    if ( LODWORD(v36[5]) == 0x40000 )
      goto LABEL_47;
LABEL_65:
    v17 += v26;
    v24 = v36[0] + v36[3];
    ++v43;
    v25 = (unsigned __int16 *)((char *)v25 + v26);
  }
  while ( v36[0] + v36[3] >= v36[0] );
  ZwUnmapViewOfSection();
  *(_DWORD *)(a1 + 912) = v43;
  *(_QWORD *)(a1 + 920) = v35;
  *(_DWORD *)(a1 + 916) = v17;
  *(_QWORD *)(a1 + 928) = MEMORY[0x7FFE0014];
  return 0LL;
}
