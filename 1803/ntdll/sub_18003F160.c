/*
 * XREFs of sub_18003F160 @ 0x18003F160
 * Callers:
 *     RtlFindActivationContextSectionString @ 0x18003E8E0 (RtlFindActivationContextSectionString.c)
 *     sub_18003EFCC @ 0x18003EFCC (sub_18003EFCC.c)
 *     sub_180079324 @ 0x180079324 (sub_180079324.c)
 *     RtlQueryActivationContextApplicationSettings @ 0x18007BAE0 (RtlQueryActivationContextApplicationSettings.c)
 *     sub_18007EE7C @ 0x18007EE7C (sub_18007EE7C.c)
 * Callees:
 *     DbgPrintEx @ 0x180006B80 (DbgPrintEx.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     bsearch @ 0x18008DB40 (bsearch.c)
 *     sub_1800D9D68 @ 0x1800D9D68 (sub_1800D9D68.c)
 */

__int64 __fastcall sub_18003F160(_DWORD *a1, _QWORD *a2, unsigned int a3, _QWORD *a4, _DWORD *a5)
{
  _DWORD *v5; // r15
  unsigned int v6; // edi
  unsigned int v7; // esi
  unsigned int *v12; // r11
  unsigned int v13; // ecx
  unsigned int *v14; // rax
  size_t v15; // r8
  __int64 v16; // r9
  unsigned __int64 v17; // rcx
  unsigned int v18; // edx
  unsigned int *v19; // rcx
  __int64 v20; // r9
  unsigned int v21; // eax
  unsigned int v22; // edx
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // r9
  unsigned int v27; // r12d
  __int64 v28; // rcx
  __int64 v29; // r9
  char *v30; // rdx
  int v31; // r15d
  __int64 v32; // rax
  char *v33; // r8
  unsigned int v34; // ebp
  __int64 v35; // r11
  unsigned int v36; // eax
  _DWORD *v37; // rdx
  __int64 Key; // [rsp+40h] [rbp-58h] BYREF

  v5 = a5;
  v6 = 0;
  v7 = a1[3];
  Key = (__int64)a5;
  v12 = 0LL;
  if ( v7 < 0x20 || a1[1] < 0x20u )
  {
    DbgPrintEx(
      0x33u,
      0,
      "SXS/RTL: Activation context data at %p too small; TotalSize = %lu; HeaderSize = %lu\n",
      a1,
      v7,
      a1[1]);
    return (unsigned int)-1072365565;
  }
  if ( a2 )
  {
    v24 = (unsigned int)a1[5];
    if ( !(_DWORD)v24 )
      return (unsigned int)-1072365567;
    if ( !(unsigned __int8)sub_1800D9D68(v24, 1LL, 16LL, v7) )
    {
      DbgPrintEx(
        0x33u,
        0,
        "SXS/RTL: Extended TOC offset (%ld) is outside bounds of activation context data (%lu bytes)\n",
        v25,
        v7);
      return (unsigned int)-1072365565;
    }
    v27 = *(_DWORD *)((char *)a1 + v25 + 4);
    if ( !(unsigned __int8)sub_1800D9D68(*(unsigned int *)((char *)a1 + v25 + 8), v27, 24LL, v26) )
    {
      DbgPrintEx(
        0x33u,
        0,
        "SXS/RTL: Extended TOC entry array (starting at offset %ld; count = %lu; entry size = %u) is outside bounds of ac"
        "tivation context data (%lu bytes)\n",
        v28,
        v27,
        24,
        v7);
      return (unsigned int)-1072365565;
    }
    v30 = (char *)a1 + v28;
    v31 = 0;
    if ( !v27 )
      return (unsigned int)-1072365567;
    while ( 1 )
    {
      v32 = *a2 - *(_QWORD *)&v30[24 * v31];
      v33 = &v30[24 * v31];
      if ( *a2 == *(_QWORD *)v33 )
        v32 = a2[1] - *((_QWORD *)v33 + 1);
      if ( !v32 )
        break;
      if ( ++v31 >= v27 )
        return (unsigned int)-1072365567;
    }
    if ( !(unsigned __int8)sub_1800D9D68(*((unsigned int *)v33 + 4), 1LL, 16LL, v29) )
    {
      DbgPrintEx(
        0x33u,
        0,
        "SXS/RTL: Extended TOC section TOC %d (offset: %ld, size: %u) is outside activation context data bounds (%lu bytes)\n",
        v31,
        v13,
        16,
        v7);
      return (unsigned int)-1072365565;
    }
    v5 = (_DWORD *)Key;
  }
  else
  {
    v13 = a1[4];
    if ( !v13 )
      return (unsigned int)-1072365567;
  }
  v14 = (_DWORD *)((char *)a1 + v13);
  if ( !v14 )
    return (unsigned int)-1072365567;
  v15 = v14[1];
  if ( !(_DWORD)v15 )
    return (unsigned int)-1072365567;
  v16 = v14[2];
  v17 = 16LL * (unsigned int)v15;
  if ( v17 > 0xFFFFFFFF
    || (int)v17 + (int)v16 < (unsigned int)v17
    || (unsigned int)v16 >= v7
    || (int)v17 + (int)v16 > v7 )
  {
    DbgPrintEx(
      0x33u,
      0,
      "SXS/RTL: TOC entry array (offset: %ld; count = %lu; entry size = %u) is outside bounds of activation context data (%lu bytes)\n",
      v16,
      v15,
      16,
      v7);
    return (unsigned int)-1072365565;
  }
  v18 = v14[3];
  v19 = (_DWORD *)((char *)a1 + v16);
  if ( (v18 & 2) == 0 )
  {
    v36 = 0;
    v37 = (_DWORD *)((char *)a1 + v16);
    while ( *v37 != a3 )
    {
      ++v36;
      v37 += 4;
      if ( v36 >= (unsigned int)v15 )
        goto LABEL_15;
    }
    v35 = v36;
    goto LABEL_47;
  }
  if ( a3 < *v19 )
    return (unsigned int)-1072365567;
  if ( (v18 & 1) != 0 )
  {
    v34 = a3 - *v19;
    if ( v34 < (unsigned int)v15 )
    {
      v35 = v34;
LABEL_47:
      v12 = &v19[4 * v35];
      goto LABEL_15;
    }
    return (unsigned int)-1072365567;
  }
  LODWORD(Key) = a3;
  v12 = (unsigned int *)bsearch(&Key, (char *)a1 + v16, v15, 0x10uLL, sub_18006CE70);
LABEL_15:
  if ( !v12 )
    return (unsigned int)-1072365567;
  v20 = v12[1];
  if ( !(_DWORD)v20 )
    return (unsigned int)-1072365567;
  v21 = v12[2];
  v22 = a1[3];
  if ( v21 + (unsigned int)v20 > v22 || v21 + (unsigned int)v20 < v21 || (unsigned int)v20 >= v22 )
  {
    DbgPrintEx(
      0x33u,
      0,
      "SXS/RTL: Section found (offset %ld; length %lu) extends past end of activation context data (%lu bytes)\n",
      v20,
      v21,
      v22);
    return (unsigned int)-1072365565;
  }
  *a4 = (char *)a1 + v20;
  *v5 = v12[2];
  return v6;
}
