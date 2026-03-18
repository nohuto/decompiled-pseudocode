/*
 * XREFs of WmipBuildInstanceSet @ 0x1405A06AC
 * Callers:
 *     WmipAddDataSource @ 0x1405A03B8 (WmipAddDataSource.c)
 *     WmipUpdateAddGuid @ 0x140709170 (WmipUpdateAddGuid.c)
 *     WmipUpdateModifyGuid @ 0x1407095A4 (WmipUpdateModifyGuid.c)
 * Callees:
 *     RtlStringCchCopyNW @ 0x14006DBC0 (RtlStringCchCopyNW.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     WmipValidateWmiRegInfoString @ 0x1405A09D4 (WmipValidateWmiRegInfoString.c)
 *     WmipDetermineInstanceBaseIndex @ 0x1405A0A10 (WmipDetermineInstanceBaseIndex.c)
 *     WmipMangleInstanceName @ 0x1405A0AD8 (WmipMangleInstanceName.c)
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
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // rcx
  unsigned __int64 v27; // rdx
  unsigned __int64 v28; // rcx
  int v29; // eax
  _QWORD *v30; // rax
  unsigned int v31; // r13d
  _QWORD *v32; // r14
  _QWORD *v33; // rdi
  size_t v34; // rax
  size_t v35; // rbp
  __int64 v36; // rax
  char *v37; // rdi
  unsigned __int16 *v38; // [rsp+60h] [rbp+8h] BYREF
  unsigned __int16 *v39; // [rsp+68h] [rbp+10h]
  unsigned int v40; // [rsp+70h] [rbp+18h]

  v40 = a3;
  v5 = (unsigned int)a1[5];
  v7 = a5;
  v8 = a3;
  v38 = 0LL;
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
  v39 = (unsigned __int16 *)(v12 + a2);
  if ( (v13 & 4) == 0 )
  {
    if ( (v13 & 8) == 0 )
      goto LABEL_8;
    if ( (int)WmipValidateWmiRegInfoString(a2, a3, (unsigned int)v12, &v38) >= 0 )
    {
      v17 = v38;
      if ( v38 )
      {
        v18 = (unsigned __int64)*v38 >> 1;
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
      v38 = 0LL;
      if ( (int)WmipValidateWmiRegInfoString(a2, v8, (unsigned int)v12, &v38) < 0 || !v38 )
        return (unsigned int)-1073741811;
      v25 = (unsigned __int64)*v38 >> 1;
      if ( v25 > v22 )
        v22 = (unsigned __int64)*v38 >> 1;
      v21 += 2 * v25 + 22;
      v26 = v25 + 1;
      if ( v25 == -1LL || !is_mul_ok(v26, 2uLL) )
        return (unsigned int)-1073741675;
      v27 = 2 * v26 + v24;
      v28 = v24;
      v29 = -1;
      if ( v27 >= v24 )
        v29 = v27;
      LODWORD(v12) = v29;
      v15 = v27 < v28 ? 0xC0000095 : 0;
      if ( v27 < v28 )
        return v15;
      if ( ++v23 >= (unsigned int)v5 )
      {
        v14 = v39;
        break;
      }
      v8 = v40;
    }
  }
  v30 = ExAllocatePoolWithTag(PagedPool, v21, 0x70696D57u);
  v31 = 0;
  v32 = v30;
  if ( !v30 )
    return (unsigned int)-1073741670;
  *(_DWORD *)(a4 + 16) |= 2u;
  *(_QWORD *)(a4 + 88) = v30;
  v11 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 2 * v22 + 2, 0x70696D57u);
  if ( !v11 )
    return (unsigned int)-1073741670;
  v33 = &v32[v5];
  if ( (_DWORD)v5 )
  {
    v34 = v22 + 1;
    v38 = (unsigned __int16 *)(v22 + 1);
    do
    {
      *v32 = v33;
      v35 = (unsigned __int64)*v14 >> 1;
      v39 = v14 + 1;
      RtlStringCchCopyNW(v11, v34, v14 + 1, v35);
      v15 = WmipMangleInstanceName(a1, v11, v35 + 7, v33);
      if ( (v15 & 0x80000000) != 0 )
        goto LABEL_9;
      v36 = -1LL;
      do
        ++v36;
      while ( *((_WORD *)v33 + v36) );
      v37 = (char *)v33 + 2 * v36;
      v34 = (size_t)v38;
      v33 = v37 + 2;
      ++v31;
      ++v32;
      v14 = &v39[v35];
    }
    while ( v31 < (unsigned int)v5 );
  }
LABEL_8:
  v15 = 0;
LABEL_9:
  if ( v11 )
    ExFreePoolWithTag(v11, 0);
  return v15;
}
