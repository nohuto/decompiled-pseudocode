/*
 * XREFs of WmipBuildInstanceSet @ 0x1405FEAE8
 * Callers:
 *     WmipAddDataSource @ 0x1405FE7D0 (WmipAddDataSource.c)
 *     WmipUpdateAddGuid @ 0x1407A4DC4 (WmipUpdateAddGuid.c)
 *     WmipUpdateModifyGuid @ 0x1407A51EC (WmipUpdateModifyGuid.c)
 * Callees:
 *     RtlStringCchCopyNW @ 0x140161D3C (RtlStringCchCopyNW.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     WmipValidateWmiRegInfoString @ 0x1405FEF44 (WmipValidateWmiRegInfoString.c)
 *     WmipDetermineInstanceBaseIndex @ 0x1405FEF7C (WmipDetermineInstanceBaseIndex.c)
 *     WmipMangleInstanceName @ 0x1405FF820 (WmipMangleInstanceName.c)
 */

__int64 __fastcall WmipBuildInstanceSet(_DWORD *a1, __int64 a2, unsigned int a3, __int64 a4, int a5)
{
  __int64 v5; // r12
  unsigned int v6; // r10d
  unsigned int v9; // eax
  wchar_t *v11; // r15
  int v12; // ecx
  unsigned __int64 v13; // r11
  unsigned __int16 *v14; // rbx
  unsigned int v15; // ebx
  unsigned __int16 *v17; // rsi
  size_t v18; // r14
  PVOID PoolWithTag; // rax
  _DWORD *v20; // r12
  int v21; // ecx
  SIZE_T v22; // r15
  unsigned __int64 v23; // r14
  int v24; // esi
  unsigned __int64 v25; // rcx
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // rdx
  unsigned __int64 v28; // rcx
  unsigned __int64 v29; // rcx
  unsigned __int64 v30; // rax
  bool v31; // cf
  _QWORD *v32; // rax
  unsigned int v33; // r13d
  _QWORD *v34; // rsi
  _QWORD *v35; // rdi
  size_t v36; // rcx
  unsigned __int16 *v37; // rax
  size_t v38; // r14
  __int64 v39; // rax
  unsigned __int16 *v40; // [rsp+60h] [rbp+8h] BYREF
  unsigned __int16 *v41; // [rsp+68h] [rbp+10h]
  unsigned int v42; // [rsp+70h] [rbp+18h]

  v42 = a3;
  v5 = (unsigned int)a1[5];
  v6 = a3;
  *(_DWORD *)(a4 + 80) = a5;
  v9 = *(_DWORD *)(a4 + 16) & 0xFFFD7FF8;
  *(_DWORD *)(a4 + 72) = v5;
  *(_DWORD *)(a4 + 16) = v9;
  *(_DWORD *)(a4 + 76) = 0;
  v11 = 0LL;
  v12 = a1[4];
  v40 = 0LL;
  if ( (v12 & 1) != 0 )
  {
    v9 |= 4u;
    *(_DWORD *)(a4 + 16) = v9;
    v12 = a1[4];
  }
  if ( (v12 & 0x80000) != 0 )
  {
    v9 |= 0x1000u;
    *(_DWORD *)(a4 + 16) = v9;
    v12 = a1[4];
    if ( (v12 & 0x1000) != 0 )
    {
      v9 |= 0x80000u;
      *(_DWORD *)(a4 + 16) = v9;
      v12 = a1[4];
    }
  }
  if ( (v12 & 0x40) != 0 )
  {
    *(_DWORD *)(a4 + 16) = v9 | 0x8000;
    v12 = a1[4];
  }
  v13 = (unsigned int)a1[6];
  v14 = (unsigned __int16 *)(v13 + a2);
  v41 = (unsigned __int16 *)(v13 + a2);
  if ( (v12 & 4) == 0 )
  {
    if ( (v12 & 8) == 0 )
      goto LABEL_8;
    if ( (int)WmipValidateWmiRegInfoString(a2, a3, (unsigned int)v13, &v40) >= 0 )
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
          v21 = *(_DWORD *)(a4 + 16) | 1;
          *(_QWORD *)(a4 + 88) = v20;
          *(_DWORD *)(a4 + 16) = v21;
          if ( (a1[4] & 0x20) != 0 )
            *(_DWORD *)(a4 + 16) = v21 | 0x20000;
          goto LABEL_8;
        }
        return (unsigned int)-1073741670;
      }
    }
    return (unsigned int)-1073741811;
  }
  v22 = 1LL;
  v23 = 0LL;
  v24 = 0;
  if ( (_DWORD)v5 )
  {
    while ( 1 )
    {
      v40 = 0LL;
      if ( (int)WmipValidateWmiRegInfoString(a2, v6, (unsigned int)v13, &v40) < 0 || !v40 )
        return (unsigned int)-1073741811;
      v25 = (unsigned __int64)*v40 >> 1;
      v26 = v25;
      if ( v25 <= v23 )
        v26 = v23;
      v27 = -1LL;
      v22 += 2 * v25 + 22;
      v23 = v26;
      v28 = v25 + 1;
      if ( v28 )
        v27 = v28;
      v15 = v28 == 0 ? 0xC0000095 : 0;
      if ( !v28 )
        return v15;
      if ( !is_mul_ok(v27, 2uLL) )
        return (unsigned int)-1073741675;
      v29 = v13;
      v30 = v13 + 2 * v27;
      v31 = v30 < v13;
      LODWORD(v13) = -1;
      if ( !v31 )
        LODWORD(v13) = v30;
      v15 = v31 ? 0xC0000095 : 0;
      if ( v30 < v29 )
        return v15;
      v6 = v42;
      if ( ++v24 >= (unsigned int)v5 )
      {
        v14 = v41;
        break;
      }
    }
  }
  v32 = ExAllocatePoolWithTag(PagedPool, v22, 0x70696D57u);
  v33 = 0;
  v34 = v32;
  if ( !v32 )
    return (unsigned int)-1073741670;
  *(_DWORD *)(a4 + 16) |= 2u;
  *(_QWORD *)(a4 + 88) = v32;
  v11 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 2 * v23 + 2, 0x70696D57u);
  if ( !v11 )
    return (unsigned int)-1073741670;
  v35 = &v34[v5];
  if ( (_DWORD)v5 )
  {
    v36 = v23 + 1;
    v37 = v14;
    v41 = (unsigned __int16 *)(v23 + 1);
    do
    {
      *v34 = v35;
      v38 = (unsigned __int64)*v14 >> 1;
      v40 = v37 + 1;
      RtlStringCchCopyNW(v11, v36, v37 + 1, v38);
      v15 = WmipMangleInstanceName(a1, v11, v38 + 7, v35);
      if ( (v15 & 0x80000000) != 0 )
        goto LABEL_9;
      v39 = -1LL;
      do
        ++v39;
      while ( *((_WORD *)v35 + v39) );
      v36 = (size_t)v41;
      v35 = (_QWORD *)((char *)v35 + 2 * v39 + 2);
      ++v33;
      ++v34;
      v14 = &v40[v38];
      v37 = v14;
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
