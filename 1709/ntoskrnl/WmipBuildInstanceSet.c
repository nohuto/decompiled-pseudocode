/*
 * XREFs of WmipBuildInstanceSet @ 0x1405455F8
 * Callers:
 *     WmipAddDataSource @ 0x140545304 (WmipAddDataSource.c)
 *     WmipUpdateAddGuid @ 0x140743190 (WmipUpdateAddGuid.c)
 *     WmipUpdateModifyGuid @ 0x1407435C4 (WmipUpdateModifyGuid.c)
 * Callees:
 *     RtlStringCchCopyNW @ 0x1400F9D6C (RtlStringCchCopyNW.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     WmipValidateWmiRegInfoString @ 0x14054593C (WmipValidateWmiRegInfoString.c)
 *     WmipDetermineInstanceBaseIndex @ 0x140545978 (WmipDetermineInstanceBaseIndex.c)
 *     WmipMangleInstanceName @ 0x140545A40 (WmipMangleInstanceName.c)
 */

__int64 __fastcall WmipBuildInstanceSet(_DWORD *a1, __int64 a2, unsigned int a3, __int64 a4, int a5)
{
  __int64 v5; // r12
  int v7; // eax
  unsigned int v8; // r10d
  wchar_t *v11; // r15
  __int64 v12; // r11
  int v13; // eax
  unsigned __int16 *v14; // rbx
  unsigned int v15; // ebx
  unsigned __int16 *v17; // rbp
  size_t v18; // r14
  PVOID PoolWithTag; // rax
  _DWORD *v20; // r12
  SIZE_T v21; // r15
  unsigned __int64 v22; // rbp
  int v23; // r14d
  unsigned __int64 v24; // r11
  unsigned __int64 v25; // rcx
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // rdx
  unsigned __int64 v28; // rcx
  unsigned __int64 v29; // rdx
  unsigned __int64 v30; // rcx
  int v31; // eax
  _QWORD *v32; // rax
  unsigned int v33; // r13d
  _QWORD *v34; // r14
  _QWORD *v35; // rdi
  size_t v36; // rax
  size_t v37; // rbp
  __int64 v38; // rax
  char *v39; // rdi
  unsigned __int16 *v40; // [rsp+60h] [rbp+8h] BYREF
  unsigned __int16 *v41; // [rsp+68h] [rbp+10h]
  unsigned int v42; // [rsp+70h] [rbp+18h]

  v42 = a3;
  v5 = (unsigned int)a1[5];
  v7 = a5;
  v8 = a3;
  v40 = 0LL;
  *(_DWORD *)(a4 + 16) &= 0xFFFD7FF8;
  v11 = 0LL;
  *(_DWORD *)(a4 + 72) = v5;
  *(_DWORD *)(a4 + 80) = v7;
  *(_DWORD *)(a4 + 76) = 0;
  if ( (a1[4] & 1) != 0 )
    *(_DWORD *)(a4 + 16) |= 4u;
  if ( (a1[4] & 0x80000) != 0 )
  {
    *(_DWORD *)(a4 + 16) |= 0x1000u;
    if ( (a1[4] & 0x1000) != 0 )
      *(_DWORD *)(a4 + 16) |= 0x80000u;
  }
  if ( (a1[4] & 0x40) != 0 )
    *(_DWORD *)(a4 + 16) |= 0x8000u;
  v12 = (unsigned int)a1[6];
  v13 = a1[4];
  v14 = (unsigned __int16 *)(v12 + a2);
  v41 = (unsigned __int16 *)(v12 + a2);
  if ( (v13 & 4) == 0 )
  {
    if ( (v13 & 8) == 0 )
      goto LABEL_8;
    if ( (int)WmipValidateWmiRegInfoString(a2, a3, (unsigned int)v12, &v40) >= 0 )
    {
      v17 = v40;
      if ( v40 )
      {
        v18 = (unsigned __int64)*v40 >> 1;
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, 2 * (int)v18 + 4 + 2LL, 0x70696D57u);
        v20 = PoolWithTag;
        if ( PoolWithTag )
        {
          RtlStringCchCopyNW((NTSTRSAFE_PWSTR)PoolWithTag + 2, v18 + 1, v17 + 1, v18);
          *v20 = WmipDetermineInstanceBaseIndex(a1, v20 + 1);
          *(_DWORD *)(a4 + 16) |= 1u;
          *(_QWORD *)(a4 + 88) = v20;
          if ( (a1[4] & 0x20) != 0 )
            *(_DWORD *)(a4 + 16) |= 0x20000u;
          goto LABEL_8;
        }
        return (unsigned int)-1073741670;
      }
    }
    return (unsigned int)-1073741811;
  }
  v21 = 1LL;
  v22 = 0LL;
  v23 = 0;
  if ( (_DWORD)v5 )
  {
    while ( 1 )
    {
      v40 = 0LL;
      if ( (int)WmipValidateWmiRegInfoString(a2, v8, (unsigned int)v12, &v40) < 0 || !v40 )
        return (unsigned int)-1073741811;
      v25 = (unsigned __int64)*v40 >> 1;
      v26 = v25;
      if ( v25 <= v22 )
        v26 = v22;
      v27 = -1LL;
      v22 = v26;
      v21 += 2 * v25 + 22;
      v28 = v25 + 1;
      if ( v28 )
        v27 = v28;
      v15 = v28 == 0 ? 0xC0000095 : 0;
      if ( !v28 )
        return v15;
      if ( !is_mul_ok(v27, 2uLL) )
        return (unsigned int)-1073741675;
      v29 = 2 * v27 + v24;
      v30 = v24;
      v31 = -1;
      if ( v29 >= v24 )
        v31 = v29;
      LODWORD(v12) = v31;
      v15 = v29 < v30 ? 0xC0000095 : 0;
      if ( v29 < v30 )
        return v15;
      v8 = v42;
      if ( ++v23 >= (unsigned int)v5 )
      {
        v14 = v41;
        break;
      }
    }
  }
  v32 = ExAllocatePoolWithTag(PagedPool, v21, 0x70696D57u);
  v33 = 0;
  v34 = v32;
  if ( !v32 )
    return (unsigned int)-1073741670;
  *(_DWORD *)(a4 + 16) |= 2u;
  *(_QWORD *)(a4 + 88) = v32;
  v11 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 2 * v22 + 2, 0x70696D57u);
  if ( !v11 )
    return (unsigned int)-1073741670;
  v35 = &v34[v5];
  if ( (_DWORD)v5 )
  {
    v36 = v22 + 1;
    v40 = (unsigned __int16 *)(v22 + 1);
    do
    {
      *v34 = v35;
      v37 = (unsigned __int64)*v14 >> 1;
      v41 = v14 + 1;
      RtlStringCchCopyNW(v11, v36, v14 + 1, v37);
      v15 = WmipMangleInstanceName(a1, v11, v37 + 7, v35);
      if ( (v15 & 0x80000000) != 0 )
        goto LABEL_9;
      v38 = -1LL;
      do
        ++v38;
      while ( *((_WORD *)v35 + v38) );
      v39 = (char *)v35 + 2 * v38;
      v36 = (size_t)v40;
      v35 = v39 + 2;
      ++v33;
      ++v34;
      v14 = &v41[v37];
    }
    while ( v33 < (unsigned int)v5 );
  }
LABEL_8:
  v15 = 0;
LABEL_9:
  if ( v11 )
    ExFreePoolWithTag(v11, 0);
  return v15;
}
