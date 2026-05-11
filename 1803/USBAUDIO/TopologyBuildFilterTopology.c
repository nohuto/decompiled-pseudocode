/*
 * XREFs of TopologyBuildFilterTopology @ 0x1C001BA04
 * Callers:
 *     FilterCreateFilterFactory @ 0x1C0018328 (FilterCreateFilterFactory.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0009630 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C000A580 (memset.c)
 *     TopologyCountComponents @ 0x1C001A0B4 (TopologyCountComponents.c)
 */

__int64 __fastcall TopologyBuildFilterTopology(__int64 a1, __int64 a2)
{
  __int64 *v2; // rbx
  int v3; // edi
  __int64 v4; // rsi
  __int64 v5; // r15
  unsigned int v6; // edx
  __int64 *v7; // r8
  unsigned int i; // r9d
  __int64 v9; // r15
  bool v10; // r14
  __int64 *v11; // r10
  __int64 *v12; // rax
  int v13; // r11d
  int v14; // ecx
  unsigned int v15; // eax
  __int64 *j; // rax
  __int64 v17; // r12
  __int64 v18; // r14
  __int64 v19; // rdi
  __int64 v20; // r13
  unsigned __int64 v21; // rdx
  __int64 v23; // rcx
  _QWORD *v24; // rax
  GUID *PoolWithTag; // rax
  GUID *v26; // rsi
  int v27; // r15d
  size_t v28; // r8
  GUID *v29; // r13
  int *v30; // r14
  int *v31; // rdi
  __int64 v32; // rdx
  unsigned __int8 *Data4; // rcx
  _DWORD *v34; // rdi
  __int64 v35; // rax
  __int64 v36; // rcx
  __int64 **v37; // rdi
  unsigned int v38; // r8d
  unsigned int v39; // r9d
  int v40; // eax
  int v41; // eax
  int v42; // edx
  bool k; // zf
  int v44; // r10d
  __int64 v45; // r15
  unsigned __int8 *v46; // rcx
  __int64 v47; // rax
  int v48; // edx
  _QWORD **v49; // rbx
  _QWORD *v50; // rcx
  _QWORD *v51; // rax
  unsigned int v52; // [rsp+40h] [rbp-28h] BYREF
  int v53; // [rsp+44h] [rbp-24h] BYREF
  NTSTATUS v54; // [rsp+48h] [rbp-20h] BYREF
  __int64 v55; // [rsp+50h] [rbp-18h] BYREF
  int v56; // [rsp+58h] [rbp-10h]
  int v59; // [rsp+C0h] [rbp+58h] BYREF
  unsigned int v60; // [rsp+C8h] [rbp+60h] BYREF

  v2 = (__int64 *)(*(_QWORD *)(a1 + 16) + 80LL);
  v59 = 0;
  v60 = 0;
  v3 = 0;
  v4 = a2;
  v5 = a1;
  v6 = 0;
  v7 = (__int64 *)*v2;
  if ( (__int64 *)*v2 == v2 )
  {
    v3 = -1073741438;
  }
  else
  {
    do
    {
      if ( v3 < 0 )
        break;
      for ( i = 0; i < *((_DWORD *)v7 + 8); ++i )
      {
        v9 = v7[7];
        v10 = 0;
        v3 = -1073741275;
        v11 = 0LL;
        v12 = (__int64 *)*v2;
        v13 = *(_DWORD *)(v9 + 12LL * i);
        while ( v12 != v2 && !v10 )
        {
          v14 = *((_DWORD *)v12 + 4);
          v10 = v14 == v13;
          if ( v14 == v13 )
          {
            v11 = v12;
            v3 = 0;
          }
          else
          {
            v12 = (__int64 *)*v12;
          }
        }
        if ( v3 >= 0 )
        {
          *(_DWORD *)(v9 + 12LL * i + 4) = *((_DWORD *)v11 + 6);
          *(_DWORD *)(v7[7] + 12LL * i + 8) = *((_DWORD *)v11 + 7);
        }
      }
      if ( *((_DWORD *)v7 + 5) <= 1u )
      {
        v15 = *((_DWORD *)v7 + 16);
        if ( v15 != -1 && v15 > v6 )
          v6 = *((_DWORD *)v7 + 16);
      }
      v7 = (__int64 *)*v7;
    }
    while ( v7 != v2 );
    v4 = a2;
    v5 = a1;
  }
  for ( j = (__int64 *)*v2; j != v2; j = (__int64 *)*j )
  {
    if ( v3 < 0 )
      goto LABEL_33;
    if ( *((_DWORD *)j + 5) <= 1u && *((_DWORD *)j + 16) == -1 )
      *((_DWORD *)j + 16) = ++v6;
  }
  if ( v3 >= 0 )
  {
    TopologyCountComponents(v2, &v54, &v52, (int *)&v55, &v53);
    v17 = v52;
    v18 = v52;
    v19 = (unsigned int)v55;
    v56 = v54 + 1;
    v20 = (unsigned int)(v54 + 1);
    v21 = 184LL * v52 + 16 * ((unsigned int)v55 + v20);
    *(_DWORD *)(v4 + 68) = 152;
    v55 = v17;
    if ( v21 > 0xFFFFFFFF )
      return 3221225858LL;
    PoolWithTag = (GUID *)ExAllocatePoolWithTag((POOL_TYPE)512, (unsigned int)v21, 0x41627845u);
    v26 = PoolWithTag;
    if ( !PoolWithTag )
      return 3221225626LL;
    v54 = KsAddItemToObjectBag(*(KSOBJECT_BAG *)(v5 + 8), PoolWithTag, ExFreePool);
    v27 = v54;
    if ( v54 >= 0 )
    {
      v28 = 152 * v18;
      v29 = &v26[v20];
      *(_QWORD *)(a2 + 56) = v26;
      *(_QWORD *)(a2 + 72) = v29;
      v30 = (int *)v29 + 38 * v18;
      *(_QWORD *)(a2 + 88) = v30;
      memset(v29, 0, v28);
      v31 = &v30[4 * v19];
      if ( (_DWORD)v17 )
      {
        v32 = v17;
        Data4 = v29[6].Data4;
        do
        {
          *((_QWORD *)Data4 - 12) = v31;
          v34 = v31 + 4;
          *((_DWORD *)Data4 - 5) = -1;
          *((_QWORD *)Data4 - 11) = v34;
          v31 = v34 + 4;
          *(_DWORD *)Data4 = -1;
          *((_QWORD *)Data4 - 13) = Data4 - 80;
          Data4 += 152;
          --v32;
        }
        while ( v32 );
        LODWORD(v17) = v52;
      }
      k = (v53 & 1) == 0;
      v35 = 1LL;
      *v26 = KSCATEGORY_AUDIO;
      if ( !k )
      {
        v35 = 2LL;
        v26[1] = KSCATEGORY_RENDER;
      }
      if ( (v53 & 2) != 0 )
        v26[v35] = KSCATEGORY_CAPTURE;
      v36 = a2;
      *(_DWORD *)(a2 + 48) = v56;
      v37 = (__int64 **)*v2;
      if ( (__int64 *)*v2 == v2 )
      {
LABEL_55:
        if ( v27 >= 0 )
        {
          v38 = v60;
          v39 = 0;
          *(_DWORD *)(v36 + 64) = v59;
          for ( *(_DWORD *)(v36 + 80) = v38; v39 < v38; ++v39 )
          {
            v40 = *v30;
            if ( *v30 != -1 )
            {
              if ( v40 >= 0 )
              {
                v42 = v17;
                for ( k = (_DWORD)v17 == 0; ; k = v44 == 0 )
                {
                  v59 = v42;
                  if ( k )
                    break;
                  v44 = v42 - 1;
                  if ( *v30 == *(&v29[5].Data1 + 38 * (unsigned int)(v42 - 1)) )
                  {
                    v41 = v42 - 1;
                    goto LABEL_66;
                  }
                  --v42;
                }
              }
              else
              {
                v41 = v40 & 0x7FFFFFFF;
LABEL_66:
                *v30 = v41;
                v38 = v60;
              }
            }
            v30 += 4;
          }
          if ( (_DWORD)v17 )
          {
            v45 = v55;
            v46 = v29[1].Data4;
            do
            {
              v47 = 2LL * *((unsigned int *)v46 + 13);
              v48 = dword_1C000C2F0[4 * *((unsigned int *)v46 + 13)];
              if ( v48 )
              {
                *(_DWORD *)v46 = v48;
                *((_QWORD *)v46 + 1) = (&off_1C000C2F8)[v47];
                *((_DWORD *)v46 + 1) = 72;
              }
              v46 += 152;
              --v45;
            }
            while ( v45 );
            return (unsigned int)v54;
          }
          return (unsigned int)v27;
        }
      }
      else
      {
        while ( v27 >= 0 )
        {
          v54 = pUnitProcessRtn[*((unsigned int *)v37 + 5)](
                  a1,
                  (int)v37,
                  (int)v29,
                  (int)v30,
                  (__int64)&v59,
                  (__int64)&v60);
          v27 = v54;
          if ( v54 >= 0 )
            v37 = (__int64 **)*v37;
          if ( v37 == (__int64 **)v2 )
          {
            v36 = a2;
            goto LABEL_55;
          }
        }
      }
      v49 = (_QWORD **)(*(_QWORD *)(a1 + 16) + 80LL);
      while ( 1 )
      {
        v51 = *v49;
        if ( *v49 == v49 )
          break;
        if ( (_QWORD **)v51[1] != v49 || (v50 = (_QWORD *)*v51, *(_QWORD **)(*v51 + 8LL) != v51) )
          __fastfail(3u);
        *v49 = v50;
        v50[1] = v49;
        ExFreePool(v51);
      }
    }
    else
    {
      ExFreePool(v26);
    }
    return (unsigned int)v27;
  }
LABEL_33:
  while ( 1 )
  {
    v24 = (_QWORD *)*v2;
    if ( (__int64 *)*v2 == v2 )
      break;
    if ( (__int64 *)v24[1] != v2 || (v23 = *v24, *(_QWORD **)(*v24 + 8LL) != v24) )
      __fastfail(3u);
    *v2 = v23;
    *(_QWORD *)(v23 + 8) = v2;
    ExFreePool(v24);
  }
  return (unsigned int)v3;
}
