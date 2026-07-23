/*
 * XREFs of sub_18003FB50 @ 0x18003FB50
 * Callers:
 *     sub_18003F9CC @ 0x18003F9CC (sub_18003F9CC.c)
 *     sub_18007ED38 @ 0x18007ED38 (sub_18007ED38.c)
 *     RtlQueryActivationContextApplicationSettings @ 0x180080700 (RtlQueryActivationContextApplicationSettings.c)
 *     sub_180084014 @ 0x180084014 (sub_180084014.c)
 * Callees:
 *     DbgPrintEx @ 0x18005FEB0 (DbgPrintEx.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     bsearch @ 0x1800986E0 (bsearch.c)
 *     sub_1800E04E8 @ 0x1800E04E8 (sub_1800E04E8.c)
 */

__int64 __fastcall sub_18003FB50(_DWORD *a1, _QWORD *a2, unsigned int a3, _QWORD *a4, _DWORD *a5)
{
  unsigned int v5; // r11d
  unsigned int v10; // edi
  __int64 v11; // rax
  unsigned int *v12; // rax
  size_t v13; // r8
  __int64 v14; // r9
  unsigned __int64 v15; // rcx
  unsigned int v16; // edx
  unsigned int *v17; // rcx
  unsigned int *v18; // rdx
  __int64 v19; // r9
  unsigned int v20; // eax
  unsigned int v21; // r8d
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // r9
  int v26; // r11d
  unsigned int v27; // r15d
  __int64 v28; // rcx
  int v29; // r8d
  __int64 v30; // r9
  int v31; // r11d
  char *v32; // rdx
  int v33; // r14d
  __int64 v34; // rax
  char *v35; // r8
  __int64 v36; // rcx
  int v37; // r8d
  unsigned int v38; // ebp
  __int64 v39; // rdx
  unsigned int v40; // eax
  _DWORD *i; // rdx
  unsigned int Key[4]; // [rsp+40h] [rbp-58h] BYREF

  v5 = a1[3];
  if ( v5 < 0x20 || a1[1] < 0x20u )
  {
    DbgPrintEx(
      0x33u,
      0,
      "SXS/RTL: Activation context data at %p too small; TotalSize = %lu; HeaderSize = %lu\n",
      a1,
      v5,
      a1[1]);
    return (unsigned int)-1072365565;
  }
  v10 = 0;
  if ( a2 )
  {
    v23 = (unsigned int)a1[5];
    if ( !(_DWORD)v23 )
      return (unsigned int)-1072365567;
    if ( !(unsigned __int8)sub_1800E04E8(v23, 1LL, 16LL, v5) )
    {
      DbgPrintEx(
        0x33u,
        0,
        "SXS/RTL: Extended TOC offset (%ld) is outside bounds of activation context data (%lu bytes)\n",
        v24,
        v26);
      return (unsigned int)-1072365565;
    }
    v27 = *(_DWORD *)((char *)a1 + v24 + 4);
    if ( !(unsigned __int8)sub_1800E04E8(*(unsigned int *)((char *)a1 + v24 + 8), v27, 24LL, v25) )
    {
      DbgPrintEx(
        0x33u,
        0,
        "SXS/RTL: Extended TOC entry array (starting at offset %ld; count = %lu; entry size = %u) is outside bounds of ac"
        "tivation context data (%lu bytes)\n",
        v28,
        v27,
        v29,
        v31);
      return (unsigned int)-1072365565;
    }
    v32 = (char *)a1 + v28;
    v33 = 0;
    if ( !v27 )
      return (unsigned int)-1072365567;
    while ( 1 )
    {
      v34 = *a2 - *(_QWORD *)&v32[24 * v33];
      v35 = &v32[24 * v33];
      if ( *a2 == *(_QWORD *)v35 )
        v34 = a2[1] - *((_QWORD *)v35 + 1);
      if ( !v34 )
        break;
      if ( ++v33 >= v27 )
        return (unsigned int)-1072365567;
    }
    if ( !(unsigned __int8)sub_1800E04E8(*((unsigned int *)v35 + 4), 1LL, 16LL, v30) )
    {
      DbgPrintEx(
        0x33u,
        0,
        "SXS/RTL: Extended TOC section TOC %d (offset: %ld, size: %u) is outside activation context data bounds (%lu bytes)\n",
        v33,
        v36,
        v37,
        v5);
      return (unsigned int)-1072365565;
    }
    v12 = (_DWORD *)((char *)a1 + v36);
  }
  else
  {
    v11 = (unsigned int)a1[4];
    if ( !(_DWORD)v11 )
      return (unsigned int)-1072365567;
    v12 = (_DWORD *)((char *)a1 + v11);
  }
  if ( !v12 )
    return (unsigned int)-1072365567;
  v13 = v12[1];
  if ( !(_DWORD)v13 )
    return (unsigned int)-1072365567;
  v14 = v12[2];
  v15 = 16LL * (unsigned int)v13;
  if ( v15 > 0xFFFFFFFF
    || (int)v15 + (int)v14 < (unsigned int)v15
    || (unsigned int)v14 >= v5
    || (int)v15 + (int)v14 > v5 )
  {
    DbgPrintEx(
      0x33u,
      0,
      "SXS/RTL: TOC entry array (offset: %ld; count = %lu; entry size = %u) is outside bounds of activation context data (%lu bytes)\n",
      v14,
      v13,
      16,
      v5);
    return (unsigned int)-1072365565;
  }
  v16 = v12[3];
  v17 = (_DWORD *)((char *)a1 + v14);
  if ( (v16 & 2) == 0 )
  {
    v40 = 0;
    for ( i = (_DWORD *)((char *)a1 + v14); *i != a3; i += 4 )
    {
      if ( ++v40 >= (unsigned int)v13 )
        return (unsigned int)-1072365567;
    }
    v39 = v40;
    goto LABEL_48;
  }
  if ( a3 < *v17 )
    return (unsigned int)-1072365567;
  if ( (v16 & 1) != 0 )
  {
    v38 = a3 - *v17;
    if ( v38 < (unsigned int)v13 )
    {
      v39 = v38;
LABEL_48:
      v18 = &v17[4 * v39];
      goto LABEL_16;
    }
    return (unsigned int)-1072365567;
  }
  Key[0] = a3;
  v18 = (unsigned int *)bsearch(Key, (char *)a1 + v14, v13, 0x10uLL, sub_180071820);
LABEL_16:
  if ( !v18 )
    return (unsigned int)-1072365567;
  v19 = v18[1];
  if ( !(_DWORD)v19 )
    return (unsigned int)-1072365567;
  v20 = v18[2];
  v21 = a1[3];
  if ( v20 + (unsigned int)v19 > v21 || v20 + (unsigned int)v19 < v20 || (unsigned int)v19 >= v21 )
  {
    DbgPrintEx(
      0x33u,
      0,
      "SXS/RTL: Section found (offset %ld; length %lu) extends past end of activation context data (%lu bytes)\n",
      v19,
      v20,
      v21);
    return (unsigned int)-1072365565;
  }
  *a4 = (char *)a1 + v19;
  *a5 = v18[2];
  return v10;
}
