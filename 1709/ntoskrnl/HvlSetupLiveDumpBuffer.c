/*
 * XREFs of HvlSetupLiveDumpBuffer @ 0x1401F14C8
 * Callers:
 *     HvlPrepareLivedumpDescriptor @ 0x1401EFC68 (HvlPrepareLivedumpDescriptor.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x1400BBFC0 (MmGetPhysicalAddress.c)
 */

__int64 __fastcall HvlSetupLiveDumpBuffer(
        _QWORD *a1,
        unsigned int a2,
        unsigned int a3,
        _QWORD *a4,
        _QWORD *a5,
        _QWORD *a6)
{
  unsigned __int64 v6; // rbp
  unsigned __int64 v8; // r8
  unsigned __int64 v10; // r8
  unsigned __int64 v11; // rbx
  unsigned __int64 v12; // rdi
  unsigned __int64 v13; // rsi
  unsigned __int64 v14; // r8
  unsigned __int64 v15; // r8
  unsigned __int64 v16; // r8
  __int64 v17; // r13
  unsigned __int64 v18; // r12
  PHYSICAL_ADDRESS *v19; // r14
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rcx
  unsigned __int64 v22; // r13
  void **v23; // rdx
  char *v24; // r15
  unsigned __int64 v25; // rsi
  void **v26; // rdi
  _QWORD *v27; // r8
  unsigned __int64 v28; // r13
  PHYSICAL_ADDRESS **v29; // rax
  PHYSICAL_ADDRESS *v30; // rbx
  unsigned __int64 v31; // rax
  unsigned __int64 v32; // r12
  unsigned __int64 v33; // r15
  char *v34; // r14
  PHYSICAL_ADDRESS **v35; // rsi
  void **v36; // r12
  PHYSICAL_ADDRESS **v37; // rcx
  unsigned __int64 v38; // rax
  PHYSICAL_ADDRESS *v39; // r14
  unsigned __int64 v40; // rdi
  unsigned __int64 v41; // r15
  char **v42; // r13
  char *v43; // rbx
  unsigned __int64 v44; // [rsp+20h] [rbp-68h]
  unsigned __int64 v45; // [rsp+28h] [rbp-60h]
  PHYSICAL_ADDRESS **v46; // [rsp+30h] [rbp-58h]
  unsigned __int64 v47; // [rsp+38h] [rbp-50h]
  PHYSICAL_ADDRESS **v48; // [rsp+48h] [rbp-40h]
  __int64 v49; // [rsp+58h] [rbp-30h]
  unsigned __int64 v51; // [rsp+C0h] [rbp+38h]
  PHYSICAL_ADDRESS **v52; // [rsp+C0h] [rbp+38h]

  v6 = a3;
  v8 = a3 * (unsigned __int64)a2;
  if ( v8 < 5 )
    return 3221225507LL;
  v10 = v8 - 2;
  v11 = v10 / 0x40201;
  if ( v10 / 0x40201 >= 0x200 )
    v11 = 512LL;
  v12 = v11 << 9;
  v45 = v11 << 9;
  v13 = v11 << 18;
  v44 = v11 << 18;
  v14 = v10 - 262657 * v11;
  if ( v14 >= 3 && v11 < 0x200 )
  {
    v15 = v14 - 1;
    ++v11;
    v12 += v15 / 0x201;
    v13 += (v15 / 0x201) << 9;
    v45 = v12;
    v44 = v13;
    v16 = v15 % 0x201;
    if ( v16 >= 2 )
    {
      ++v12;
      v13 = v16 + v13 - 1;
      v45 = v12;
      v44 = v13;
    }
  }
  v17 = *a1;
  v47 = v11 + 2;
  *a4 = v11 + 2;
  *(_DWORD *)(v17 + 8) = 3;
  *(_QWORD *)v17 = v13;
  v49 = v17;
  *a5 = v11 + 2 + v12;
  v18 = 1 % v6;
  v19 = (PHYSICAL_ADDRESS *)(a1[1 / v6] + ((1 % v6) << 12));
  v46 = (PHYSICAL_ADDRESS **)&a1[1 / v6];
  *(_QWORD *)(v17 + 16) = (unsigned __int64)MmGetPhysicalAddress(v19).QuadPart >> 12;
  v20 = 2 / v6;
  v21 = 2 % v6;
  v51 = 2 % v6;
  v22 = 2 % v6;
  v23 = (void **)&a1[2 / v6];
  v24 = (char *)*v23 + 4096 * (2 % v6);
  if ( v11 )
  {
    v25 = 0LL;
    v26 = v23;
    do
    {
      *v19 = MmGetPhysicalAddress(v24);
      v24 += 4096;
      ++v19;
      if ( (++v25 & 0x1FF) == 0 && !(++v18 % v6) )
      {
        ++v46;
        v18 = 0LL;
        v19 = *v46;
      }
      if ( !(++v22 % v6) )
      {
        ++v26;
        v22 = 0LL;
        v24 = (char *)*v26;
      }
    }
    while ( v25 < v11 );
    v12 = v45;
    v13 = v44;
    v21 = 2 % v6;
    v20 = 2 / v6;
  }
  v27 = a1;
  v28 = 0LL;
  v29 = (PHYSICAL_ADDRESS **)&a1[v20];
  v30 = &(*v29)[512 * v21];
  v48 = v29;
  v31 = v47 / v6;
  v32 = v47 % v6;
  v33 = v47 % v6;
  v34 = (char *)(a1[v47 / v6] + ((v47 % v6) << 12));
  if ( v12 )
  {
    v35 = v48;
    v36 = (void **)&a1[v47 / v6];
    do
    {
      *v30 = MmGetPhysicalAddress(v34);
      v34 += 4096;
      ++v30;
      if ( (++v28 & 0x1FF) == 0 && !(++v51 % v6) )
      {
        ++v35;
        v51 = 0LL;
        v30 = *v35;
      }
      if ( !(++v33 % v6) )
      {
        ++v36;
        v33 = 0LL;
        v34 = (char *)*v36;
      }
    }
    while ( v28 < v12 );
    v13 = v44;
    v32 = v47 % v6;
    v27 = a1;
    v31 = v47 / v6;
  }
  v37 = (PHYSICAL_ADDRESS **)&v27[v31];
  v38 = v12 + v47;
  v39 = &(*v37)[512 * v32];
  v40 = 0LL;
  v52 = v37;
  v41 = v38 % v6;
  v42 = (char **)&v27[v38 / v6];
  v43 = &(*v42)[4096 * (v38 % v6)];
  while ( v40 < v13 )
  {
    *v39 = MmGetPhysicalAddress(v43);
    v43 += 4096;
    ++v39;
    if ( (++v40 & 0x1FF) == 0 && !(++v32 % v6) )
    {
      ++v52;
      v32 = 0LL;
      v39 = *v52;
    }
    if ( !(++v41 % v6) )
    {
      if ( v40 >= v13 )
        break;
      ++v42;
      v41 = 0LL;
      v43 = *v42;
    }
  }
  *a6 = v49;
  return 0LL;
}
