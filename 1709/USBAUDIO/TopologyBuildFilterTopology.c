/*
 * XREFs of TopologyBuildFilterTopology @ 0x1C0017590
 * Callers:
 *     FilterCreateFilterFactory @ 0x1C0013EE8 (FilterCreateFilterFactory.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00074E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0008440 (memset.c)
 *     TopologyCountComponents @ 0x1C0015C48 (TopologyCountComponents.c)
 */

__int64 __fastcall TopologyBuildFilterTopology(__int64 a1, __int64 a2)
{
  __int64 **v2; // rbx
  int v3; // edi
  __int64 v5; // r15
  unsigned int v6; // edx
  __int64 *v7; // r8
  unsigned int i; // r9d
  __int64 v9; // r15
  bool v10; // si
  __int64 *v11; // rcx
  __int64 *v12; // r10
  int v13; // r14d
  int v14; // eax
  unsigned int v15; // eax
  __int64 *j; // rax
  __int64 v17; // r12
  __int64 v18; // r14
  __int64 v19; // rsi
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rdx
  unsigned __int64 v23; // rdx
  __int64 v24; // r13
  __int64 *v26; // rcx
  __int64 *v27; // rax
  GUID *PoolWithTag; // rax
  GUID *v29; // rdi
  int v30; // r15d
  size_t v31; // r8
  GUID *v32; // r13
  int *v33; // r14
  int *v34; // rsi
  __int64 v35; // rdx
  unsigned __int8 *Data4; // rcx
  _DWORD *v37; // rsi
  __int64 v38; // rax
  __int64 v39; // rcx
  __int64 **v40; // rdi
  unsigned int v41; // r8d
  unsigned int v42; // r9d
  int v43; // eax
  int v44; // eax
  int v45; // edx
  bool k; // zf
  int v47; // r10d
  __int64 v48; // r15
  unsigned __int8 *v49; // rcx
  __int64 v50; // rax
  int v51; // edx
  __int64 v52; // rbx
  __int64 *v53; // rcx
  __int64 v54; // rax
  unsigned int v55; // [rsp+40h] [rbp-28h] BYREF
  int v56; // [rsp+44h] [rbp-24h] BYREF
  NTSTATUS v57; // [rsp+48h] [rbp-20h] BYREF
  __int64 v58; // [rsp+50h] [rbp-18h] BYREF
  int v59; // [rsp+58h] [rbp-10h]
  int v62; // [rsp+C0h] [rbp+58h] BYREF
  unsigned int v63; // [rsp+C8h] [rbp+60h] BYREF

  v2 = (__int64 **)(*(_QWORD *)(a1 + 16) + 80LL);
  v62 = 0;
  v63 = 0;
  v3 = 0;
  v5 = a1;
  v6 = 0;
  v7 = *v2;
  if ( *v2 == (__int64 *)v2 )
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
        v11 = *v2;
        v3 = -1073741275;
        v12 = 0LL;
        v13 = *(_DWORD *)(v9 + 12LL * i);
        while ( v11 != (__int64 *)v2 && !v10 )
        {
          v14 = *((_DWORD *)v11 + 4);
          v10 = v14 == v13;
          if ( v14 == v13 )
          {
            v12 = v11;
            v3 = 0;
          }
          else
          {
            v11 = (__int64 *)*v11;
          }
        }
        if ( v3 >= 0 )
        {
          *(_DWORD *)(v9 + 12LL * i + 4) = *((_DWORD *)v12 + 6);
          *(_DWORD *)(v7[7] + 12LL * i + 8) = *((_DWORD *)v12 + 7);
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
    while ( v7 != (__int64 *)v2 );
    v5 = a1;
  }
  for ( j = *v2; j != (__int64 *)v2; j = (__int64 *)*j )
  {
    if ( v3 < 0 )
      goto LABEL_33;
    if ( *((_DWORD *)j + 5) <= 1u && *((_DWORD *)j + 16) == -1 )
      *((_DWORD *)j + 16) = ++v6;
  }
  if ( v3 >= 0 )
  {
    TopologyCountComponents(v2, &v57, &v55, &v58, &v56);
    v17 = v55;
    v18 = v55;
    v19 = (unsigned int)v58;
    v20 = (unsigned int)(v57 + 1);
    v21 = 184LL * v55;
    v22 = (unsigned int)v58 + v20;
    *(_DWORD *)(a2 + 68) = 152;
    v59 = v20;
    v23 = v21 + 16 * v22;
    v24 = (unsigned int)v20;
    v58 = v17;
    if ( v23 > 0xFFFFFFFF )
      return 3221225858LL;
    PoolWithTag = (GUID *)ExAllocatePoolWithTag((POOL_TYPE)512, (unsigned int)v23, 0x41627845u);
    v29 = PoolWithTag;
    if ( !PoolWithTag )
      return 3221225626LL;
    v57 = KsAddItemToObjectBag(*(KSOBJECT_BAG *)(v5 + 8), PoolWithTag, ExFreePool);
    v30 = v57;
    if ( v57 >= 0 )
    {
      v31 = 152 * v18;
      v32 = &v29[v24];
      *(_QWORD *)(a2 + 56) = v29;
      *(_QWORD *)(a2 + 72) = v32;
      v33 = (int *)v32 + 38 * v18;
      *(_QWORD *)(a2 + 88) = v33;
      memset(v32, 0, v31);
      v34 = &v33[4 * v19];
      if ( (_DWORD)v17 )
      {
        v35 = v17;
        Data4 = v32[6].Data4;
        do
        {
          *((_QWORD *)Data4 - 12) = v34;
          v37 = v34 + 4;
          *((_DWORD *)Data4 - 5) = -1;
          *((_QWORD *)Data4 - 11) = v37;
          v34 = v37 + 4;
          *(_DWORD *)Data4 = -1;
          *((_QWORD *)Data4 - 13) = Data4 - 80;
          Data4 += 152;
          --v35;
        }
        while ( v35 );
        LODWORD(v17) = v55;
      }
      k = (v56 & 1) == 0;
      v38 = 1LL;
      *v29 = KSCATEGORY_AUDIO;
      if ( !k )
      {
        v38 = 2LL;
        v29[1] = KSCATEGORY_RENDER;
      }
      if ( (v56 & 2) != 0 )
        v29[v38] = KSCATEGORY_CAPTURE;
      v39 = a2;
      *(_DWORD *)(a2 + 48) = v59;
      v40 = (__int64 **)*v2;
      if ( *v2 == (__int64 *)v2 )
      {
LABEL_55:
        if ( v30 >= 0 )
        {
          v41 = v63;
          v42 = 0;
          *(_DWORD *)(v39 + 64) = v62;
          for ( *(_DWORD *)(v39 + 80) = v41; v42 < v41; ++v42 )
          {
            v43 = *v33;
            if ( *v33 != -1 )
            {
              if ( v43 >= 0 )
              {
                v45 = v17;
                for ( k = (_DWORD)v17 == 0; ; k = v47 == 0 )
                {
                  v62 = v45;
                  if ( k )
                    break;
                  v47 = v45 - 1;
                  if ( *v33 == *(&v32[5].Data1 + 38 * (unsigned int)(v45 - 1)) )
                  {
                    v44 = v45 - 1;
                    goto LABEL_66;
                  }
                  --v45;
                }
              }
              else
              {
                v44 = v43 & 0x7FFFFFFF;
LABEL_66:
                *v33 = v44;
                v41 = v63;
              }
            }
            v33 += 4;
          }
          if ( (_DWORD)v17 )
          {
            v48 = v58;
            v49 = v32[1].Data4;
            do
            {
              v50 = 2LL * *((unsigned int *)v49 + 13);
              v51 = dword_1C000A2F0[4 * *((unsigned int *)v49 + 13)];
              if ( v51 )
              {
                *(_DWORD *)v49 = v51;
                *((_QWORD *)v49 + 1) = (&off_1C000A2F8)[v50];
                *((_DWORD *)v49 + 1) = 72;
              }
              v49 += 152;
              --v48;
            }
            while ( v48 );
            return (unsigned int)v57;
          }
          return (unsigned int)v30;
        }
      }
      else
      {
        while ( v30 >= 0 )
        {
          v57 = pUnitProcessRtn[*((unsigned int *)v40 + 5)](
                  a1,
                  (int)v40,
                  (int)v32,
                  (int)v33,
                  (__int64)&v62,
                  (__int64)&v63);
          v30 = v57;
          if ( v57 >= 0 )
            v40 = (__int64 **)*v40;
          if ( v40 == v2 )
          {
            v39 = a2;
            goto LABEL_55;
          }
        }
      }
      v52 = *(_QWORD *)(a1 + 16) + 80LL;
      while ( *(_QWORD *)v52 != v52 )
      {
        v53 = *(__int64 **)v52;
        if ( *(_QWORD *)(*(_QWORD *)v52 + 8LL) != v52 || (v54 = *v53, *(__int64 **)(*v53 + 8) != v53) )
          __fastfail(3u);
        *(_QWORD *)v52 = v54;
        *(_QWORD *)(v54 + 8) = v52;
        ExFreePool(v53);
      }
    }
    else
    {
      ExFreePool(v29);
    }
    return (unsigned int)v30;
  }
LABEL_33:
  while ( *v2 != (__int64 *)v2 )
  {
    v26 = *v2;
    if ( (__int64 **)(*v2)[1] != v2 || (v27 = (__int64 *)*v26, *(__int64 **)(*v26 + 8) != v26) )
      __fastfail(3u);
    *v2 = v27;
    v27[1] = (__int64)v2;
    ExFreePool(v26);
  }
  return (unsigned int)v3;
}
