/*
 * XREFs of HvlSetupLiveDumpBuffer @ 0x1401EC6C8
 * Callers:
 *     HvlPrepareLivedumpDescriptor @ 0x1401EAA9C (HvlPrepareLivedumpDescriptor.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x1400A7A80 (MmGetPhysicalAddress.c)
 */

__int64 __fastcall HvlSetupLiveDumpBuffer(void **a1, unsigned int a2, __int64 a3, _QWORD *a4, _QWORD *a5, _QWORD *a6)
{
  void **v6; // rbp
  unsigned __int64 v7; // r8
  __int64 v9; // r12
  unsigned __int64 v10; // r8
  unsigned __int64 v11; // rbx
  unsigned __int64 v12; // rdi
  unsigned __int64 v13; // rsi
  unsigned __int64 v14; // r8
  unsigned __int64 v15; // r8
  unsigned __int64 v16; // r8
  _DWORD *v17; // r15
  PHYSICAL_ADDRESS *v18; // r14
  PHYSICAL_ADDRESS *v19; // r14
  char *v20; // r15
  __int64 v21; // rsi
  void **v22; // r13
  unsigned __int64 v23; // rdi
  PHYSICAL_ADDRESS **v24; // r12
  __int64 v25; // rbp
  unsigned __int64 v26; // rcx
  unsigned __int64 v27; // r15
  PHYSICAL_ADDRESS *v28; // r13
  unsigned __int64 v29; // r14
  char *v30; // rbx
  unsigned __int64 v31; // rsi
  PHYSICAL_ADDRESS **v32; // r15
  void **v33; // rbp
  unsigned __int64 v34; // rbx
  unsigned __int64 v35; // rdi
  PHYSICAL_ADDRESS **v36; // r13
  unsigned __int64 v37; // rax
  unsigned __int64 v38; // rbx
  PHYSICAL_ADDRESS *v39; // r14
  void **v40; // r12
  char *v41; // rbp
  unsigned __int64 v42; // [rsp+20h] [rbp-58h]
  unsigned __int64 v43; // [rsp+28h] [rbp-50h]
  _DWORD *v44; // [rsp+48h] [rbp-30h]
  unsigned __int64 v46; // [rsp+B0h] [rbp+38h]

  v6 = a1;
  v7 = (unsigned __int64)a2 << 6;
  if ( v7 < 5 )
    return 3221225507LL;
  v9 = 2LL;
  v10 = v7 - 2;
  v11 = v10 / 0x40201;
  if ( v10 / 0x40201 >= 0x200 )
    v11 = 512LL;
  v12 = v11 << 9;
  v42 = v11 << 9;
  v13 = v11 << 18;
  v46 = v11 << 18;
  v14 = v10 - 262657 * v11;
  if ( v14 >= 3 && v11 < 0x200 )
  {
    v15 = v14 - 1;
    ++v11;
    v12 += v15 / 0x201;
    v13 += (v15 / 0x201) << 9;
    v42 = v12;
    v46 = v13;
    v16 = v15 % 0x201;
    if ( v16 >= 2 )
    {
      ++v12;
      v13 = v16 + v13 - 1;
      v42 = v12;
      v46 = v13;
    }
  }
  v17 = *a1;
  v43 = v11 + 2;
  *a4 = v11 + 2;
  v17[2] = 3;
  *(_QWORD *)v17 = v13;
  v18 = (PHYSICAL_ADDRESS *)*a1;
  *a5 = v11 + 2 + v12;
  v19 = v18 + 512;
  v44 = v17;
  *((_QWORD *)v17 + 2) = (unsigned __int64)MmGetPhysicalAddress(v19).QuadPart >> 12;
  v20 = (char *)*v6 + 0x2000;
  if ( v11 )
  {
    v21 = 2LL;
    v22 = v6;
    v23 = 0LL;
    v24 = (PHYSICAL_ADDRESS **)v6;
    v25 = 1LL;
    do
    {
      *v19 = MmGetPhysicalAddress(v20);
      v20 += 4096;
      ++v19;
      if ( (++v23 & 0x1FF) == 0 && (++v25 & 0x3F) == 0 )
      {
        ++v24;
        v25 = 0LL;
        v19 = *v24;
      }
      if ( (++v21 & 0x3F) == 0 )
      {
        ++v22;
        v21 = 0LL;
        v20 = (char *)*v22;
      }
    }
    while ( v23 < v11 );
    v12 = v42;
    v9 = 2LL;
    v13 = v46;
    v6 = a1;
  }
  v26 = v11 + 2;
  v27 = v43 & 0x3F;
  v28 = (PHYSICAL_ADDRESS *)((char *)*v6 + 0x2000);
  v29 = v27;
  v30 = (char *)v6[v43 >> 6] + 4096 * v27;
  if ( v12 )
  {
    v31 = 0LL;
    v32 = (PHYSICAL_ADDRESS **)v6;
    v33 = &v6[v43 >> 6];
    do
    {
      *v28 = MmGetPhysicalAddress(v30);
      v30 += 4096;
      ++v28;
      if ( (++v31 & 0x1FF) == 0 && (++v9 & 0x3F) == 0 )
      {
        ++v32;
        v9 = 0LL;
        v28 = *v32;
      }
      if ( (++v29 & 0x3F) == 0 )
      {
        ++v33;
        v29 = 0LL;
        v30 = (char *)*v33;
      }
    }
    while ( v31 < v12 );
    v13 = v46;
    v27 = v43 & 0x3F;
    v6 = a1;
    v26 = v43;
  }
  v34 = v26 + v12;
  v35 = 0LL;
  v36 = (PHYSICAL_ADDRESS **)&v6[v43 >> 6];
  v37 = v34 >> 6;
  v38 = v34 & 0x3F;
  v39 = &(*v36)[512 * v27];
  v40 = &v6[v37];
  v41 = (char *)*v40 + 4096 * (unsigned __int64)(unsigned int)v38;
  while ( v35 < v13 )
  {
    *v39 = MmGetPhysicalAddress(v41);
    v41 += 4096;
    ++v39;
    if ( (++v35 & 0x1FF) == 0 && (++v27 & 0x3F) == 0 )
    {
      ++v36;
      v27 = 0LL;
      v39 = *v36;
    }
    if ( (++v38 & 0x3F) == 0 )
    {
      if ( v35 >= v13 )
        break;
      ++v40;
      v38 = 0LL;
      v41 = (char *)*v40;
    }
  }
  *a6 = v44;
  return 0LL;
}
