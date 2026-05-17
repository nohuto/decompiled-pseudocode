/*
 * XREFs of sub_1800E5D78 @ 0x1800E5D78
 * Callers:
 *     RtlConvertToAutoInheritSecurityObject_0 @ 0x1800E6584 (RtlConvertToAutoInheritSecurityObject_0.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180029F40 (RtlAllocateHeap.c)
 *     RtlValidAcl @ 0x180044810 (RtlValidAcl.c)
 *     RtlInitializeSid @ 0x180047610 (RtlInitializeSid.c)
 *     sub_18004912C @ 0x18004912C (sub_18004912C.c)
 *     RtlCreateAcl @ 0x1800496D0 (RtlCreateAcl.c)
 *     RtlMapGenericMask @ 0x18004A040 (RtlMapGenericMask.c)
 *     sub_18004A198 @ 0x18004A198 (sub_18004A198.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     memmove @ 0x1800ABA80 (memmove.c)
 */

__int64 __fastcall sub_1800E5D78(
        __int64 a1,
        unsigned __int16 *a2,
        __int64 a3,
        char a4,
        __int64 a5,
        __int64 a6,
        _DWORD *a7,
        unsigned __int64 *a8,
        _DWORD *a9)
{
  unsigned __int64 *v10; // rsi
  _DWORD *v11; // rdi
  void *ProcessHeap; // r14
  int v15; // ebx
  int v16; // eax
  __int64 Heap; // rax
  unsigned __int64 v18; // r15
  unsigned __int16 *v19; // r13
  int v20; // r14d
  unsigned __int8 *v21; // rsi
  int *v22; // rbx
  int v23; // ecx
  int v24; // ecx
  char v25; // dl
  int v26; // r14d
  unsigned __int8 *v27; // rbx
  int v28; // ecx
  int v29; // ecx
  int v30; // eax
  char v31; // dl
  unsigned __int16 *v32; // r15
  int v33; // eax
  int v34; // edx
  int v35; // ecx
  int v36; // esi
  int v37; // r13d
  _DWORD *v38; // r14
  int v39; // edi
  char v40; // al
  char v41; // r8
  char v42; // r10
  int v43; // r14d
  unsigned __int8 *v44; // rcx
  __int64 v45; // r9
  _DWORD *v46; // rdx
  __int64 v47; // rax
  __int64 v48; // rax
  unsigned __int64 v49; // rbx
  __int64 v50; // rax
  unsigned __int64 *v51; // r15
  unsigned __int8 *v52; // rcx
  int v53; // ecx
  _BYTE *v54; // r14
  __int64 *v55; // rdi
  _DWORD *v56; // r15
  int v57; // ebx
  _BYTE *v58; // r13
  unsigned __int16 *v59; // rcx
  unsigned int v60; // esi
  int v61; // ebx
  int v62; // eax
  int v63; // eax
  unsigned __int64 v64; // rsi
  __int16 v65; // ax
  void *v66; // rax
  int v68; // [rsp+90h] [rbp-80h] BYREF
  char v69; // [rsp+94h] [rbp-7Ch] BYREF
  char v70; // [rsp+95h] [rbp-7Bh]
  int v71; // [rsp+98h] [rbp-78h] BYREF
  int v72; // [rsp+9Ch] [rbp-74h] BYREF
  __int16 v73; // [rsp+A0h] [rbp-70h]
  int v74; // [rsp+A4h] [rbp-6Ch] BYREF
  __int64 *v75; // [rsp+A8h] [rbp-68h]
  void *v76; // [rsp+B0h] [rbp-60h]
  unsigned __int64 v77; // [rsp+B8h] [rbp-58h] BYREF
  unsigned __int16 *v78; // [rsp+C0h] [rbp-50h]
  unsigned __int64 v79; // [rsp+C8h] [rbp-48h]
  __int64 v80; // [rsp+D0h] [rbp-40h] BYREF
  unsigned __int64 v81; // [rsp+D8h] [rbp-38h] BYREF
  int v82; // [rsp+E4h] [rbp-2Ch]
  int v83; // [rsp+E8h] [rbp-28h]
  int v84; // [rsp+ECh] [rbp-24h] BYREF
  __int64 v85; // [rsp+F0h] [rbp-20h]
  __int64 v86; // [rsp+F8h] [rbp-18h]
  _DWORD *v87; // [rsp+100h] [rbp-10h]
  __int64 v88; // [rsp+108h] [rbp-8h]
  char v89[8]; // [rsp+110h] [rbp+0h] BYREF
  int v90; // [rsp+118h] [rbp+8h]
  char v91[8]; // [rsp+140h] [rbp+30h] BYREF
  int v92; // [rsp+148h] [rbp+38h]

  v10 = a8;
  v11 = a9;
  v86 = a5;
  v85 = a6;
  v81 = 0LL;
  v77 = 0LL;
  v79 = 0LL;
  v72 = 0;
  v88 = a1;
  v80 = a3;
  v70 = a4;
  ProcessHeap = NtCurrentPeb()->ProcessHeap;
  v76 = ProcessHeap;
  v75 = (__int64 *)a8;
  v87 = a9;
  v73 = 768;
  v15 = RtlInitializeSid((__int64)v91, (__int64)&v72, 1u);
  if ( v15 < 0 )
    return (unsigned int)v15;
  v92 = 0;
  v15 = RtlInitializeSid((__int64)v89, (__int64)&v72, 1u);
  if ( v15 < 0 )
    return (unsigned int)v15;
  *a9 = 1024;
  *a8 = 0LL;
  v90 = 1;
  if ( a1 && !RtlValidAcl(a1) || !RtlValidAcl((__int64)a2) )
    return (unsigned int)-1073741705;
  v16 = sub_18004912C(
          a1,
          0,
          0,
          a4,
          1,
          0,
          (__int64)v91,
          (__int64)v89,
          (__int64)v91,
          (__int64)v89,
          (__int64)a7,
          2,
          (unsigned __int64)&v80 & -(__int64)(v80 != 0),
          v80 != 0,
          &v81,
          &v69,
          &v84);
  v15 = v16;
  if ( v16 == -2147483637 )
  {
    *a9 |= 0x1000u;
    goto LABEL_83;
  }
  if ( v16 >= 0 )
  {
    Heap = RtlAllocateHeap((__int64)ProcessHeap, dword_18015B268 + 1310720, 24LL * a2[2]);
    v79 = Heap;
    v18 = Heap;
    if ( Heap )
    {
      v19 = a2 + 4;
      v20 = 0;
      v78 = a2 + 4;
      v21 = (unsigned __int8 *)(a2 + 4);
      if ( a2[2] )
      {
        v22 = (int *)(Heap + 4);
        while ( *v21 <= 8u && *v21 != 4 )
        {
          v71 = *((_DWORD *)v21 + 1);
          RtlMapGenericMask(&v71, a7);
          if ( *v21 <= 0xAu && (v23 = 1635, _bittest(&v23, *v21)) )
            v24 = a7[3] & v71;
          else
            v24 = (a7[3] | 0x1000000) & v71;
          v25 = v21[1] & 3 | ~v21[1] & 8;
          if ( (v21[1] & 2) != 0 )
          {
            *(v22 - 1) = v24;
            v22[2] = v24;
          }
          else
          {
            *(v22 - 1) = 0;
            v22[2] = 0;
          }
          if ( (v25 & 1) != 0 )
          {
            *v22 = v24;
            v22[3] = v24;
          }
          else
          {
            *v22 = 0;
            v22[3] = 0;
          }
          if ( (v25 & 8) != 0 )
          {
            v22[1] = v24;
            v22[4] = v24;
          }
          else
          {
            v22[1] = 0;
            v22[4] = 0;
          }
          ++v20;
          v22 += 6;
          v21 += *((unsigned __int16 *)v21 + 1);
          if ( v20 >= a2[2] )
            goto LABEL_30;
        }
LABEL_36:
        v10 = (unsigned __int64 *)v75;
      }
      else
      {
LABEL_30:
        v26 = 0;
        v74 = 0;
        v27 = (unsigned __int8 *)(v81 + 8);
        if ( *(_WORD *)(v81 + 4) )
        {
          while ( *v27 <= 8u && *v27 != 4 )
          {
            v68 = *((_DWORD *)v27 + 1);
            RtlMapGenericMask(&v68, a7);
            if ( *v27 <= 0xAu && (v28 = 1635, _bittest(&v28, *v27)) )
              v29 = a7[3] & v68;
            else
              v29 = (a7[3] | 0x1000000) & v68;
            if ( v29 )
            {
              v30 = v27[1] & 3;
              v31 = v30 | ~v27[1] & 8;
              if ( v30 | ~v27[1] & 8 )
              {
                v32 = v19;
                v83 = (v27[1] & 2) != 0 ? v29 : 0;
                v33 = (v31 & 2) != 0 ? v29 : 0;
                v72 = (v31 & 1) != 0 ? v29 : 0;
                v34 = (v31 & 8) != 0 ? v29 : 0;
                v35 = v72;
                v82 = v34;
                v36 = v34;
                v68 = v72;
                if ( a2[2] )
                {
                  v37 = 0;
                  v38 = (_DWORD *)(v79 + 20);
                  v39 = v33;
                  do
                  {
                    v40 = sub_18004A198(v27, v32);
                    v35 = v68;
                    if ( v40 )
                    {
                      v36 &= ~*(v38 - 3);
                      v39 &= ~*(v38 - 5);
                      v35 = ~*(v38 - 4) & v68;
                      v68 = v35;
                      *v38 &= ~v82;
                      *(v38 - 2) &= ~v83;
                      *(v38 - 1) &= ~v72;
                    }
                    ++v37;
                    v32 = (unsigned __int16 *)((char *)v32 + v32[1]);
                    v38 += 6;
                  }
                  while ( v37 < a2[2] );
                  v26 = v74;
                  v19 = a2 + 4;
                  v71 = v39;
                  v11 = v87;
                  v33 = v71;
                }
                if ( v33 | v35 | v36 )
                  goto LABEL_36;
              }
            }
            ++v26;
            v27 += *((unsigned __int16 *)v27 + 1);
            v74 = v26;
            if ( v26 >= *(unsigned __int16 *)(v81 + 4) )
            {
              v18 = v79;
              goto LABEL_50;
            }
          }
LABEL_57:
          *v11 |= 0x1000u;
          v15 = 0;
          v10 = (unsigned __int64 *)v75;
          ProcessHeap = v76;
LABEL_84:
          if ( (*v11 & 0x1000) == 0 )
            goto LABEL_90;
          if ( *v10 )
          {
            RtlFreeHeap((__int64)ProcessHeap, 0, *v10);
            *v10 = 0LL;
          }
          v66 = (void *)RtlAllocateHeap((__int64)ProcessHeap, dword_18015B268 + 1310720, a2[1]);
          *v10 = (unsigned __int64)v66;
          if ( v66 )
          {
            memmove(v66, a2, a2[1]);
LABEL_90:
            ProcessHeap = v76;
            if ( v79 )
              RtlFreeHeap((__int64)v76, 0, v79);
            goto LABEL_92;
          }
LABEL_88:
          v15 = -1073741801;
          goto LABEL_90;
        }
LABEL_50:
        v41 = 0;
        v42 = 0;
        v43 = 0;
        v44 = (unsigned __int8 *)v19;
        v45 = 0LL;
        if ( a2[2] )
        {
          v46 = (_DWORD *)(v18 + 16);
          do
          {
            if ( *v46 | v46[1] | *(v46 - 1) )
            {
              v43 += *((unsigned __int16 *)v44 + 1);
              v48 = *v44;
              if ( !byte_180120FA0[v48] && v42 || byte_180120FA0[v48] == 1 && v41 )
                goto LABEL_57;
            }
            else
            {
              v47 = *v44;
              if ( !byte_180120FA0[v47] )
                v41 = 1;
              if ( byte_180120FA0[v47] == 1 )
                v42 = 1;
            }
            ++v45;
            v44 += *((unsigned __int16 *)v44 + 1);
            v46 += 6;
          }
          while ( v45 < a2[2] );
        }
        v15 = sub_18004912C(
                v88,
                0,
                0,
                v70,
                1,
                0,
                v86,
                v85,
                v86,
                v85,
                (__int64)a7,
                2,
                (unsigned __int64)&v80 & -(__int64)(v80 != 0),
                v80 != 0,
                &v77,
                &v69,
                &v84);
        if ( v15 < 0 )
          goto LABEL_90;
        v49 = v77;
        v50 = RtlAllocateHeap(
                (__int64)v76,
                dword_18015B268 + 1310720,
                v43 + (unsigned int)*(unsigned __int16 *)(v77 + 2));
        v51 = (unsigned __int64 *)v75;
        *v75 = v50;
        if ( !v50 )
          goto LABEL_88;
        v52 = (unsigned __int8 *)a2;
        if ( *(_BYTE *)v49 > *(_BYTE *)a2 )
          v52 = (unsigned __int8 *)v49;
        if ( (int)RtlCreateAcl(v50, v43 + (unsigned int)*(unsigned __int16 *)(v49 + 2), *v52) >= 0 )
        {
          v53 = 0;
          v54 = (_BYTE *)(*v51 + 8);
          v68 = 0;
          if ( a2[2] )
          {
            v55 = v75;
            v56 = (_DWORD *)(v79 + 16);
            do
            {
              v57 = *v56 | v56[1] | *(v56 - 1);
              if ( v57 )
              {
                memmove(v54, v19, v19[1]);
                v54[1] &= ~0x10u;
                v58 = v54;
                v59 = v78;
                v60 = 0x80000000;
                v54 += v78[1];
                ++*(_WORD *)(*v55 + 4);
                *((_DWORD *)v58 + 1) = v57 & *((_DWORD *)v59 + 1);
                v61 = ~*((_DWORD *)v59 + 1) & v57;
                if ( v61 )
                {
                  do
                  {
                    if ( v60 < 0x10000000 )
                      break;
                    if ( (v60 & *((_DWORD *)v59 + 1)) != 0 )
                    {
                      v74 = v60;
                      RtlMapGenericMask(&v74, a7);
                      v62 = v74;
                      v59 = v78;
                      if ( (v74 & v61) != 0 )
                      {
                        *((_DWORD *)v58 + 1) |= v60;
                        v61 &= ~v62;
                      }
                    }
                    v60 >>= 1;
                  }
                  while ( v61 );
                  v55 = v75;
                }
                *((_DWORD *)v58 + 1) |= v61;
                v19 = v78;
                v53 = v68;
              }
              ++v53;
              v19 = (unsigned __int16 *)((char *)v19 + v19[1]);
              v68 = v53;
              v63 = a2[2];
              v56 += 6;
              v78 = v19;
            }
            while ( v53 < v63 );
            v11 = v87;
            v49 = v77;
            v51 = (unsigned __int64 *)v75;
          }
          v64 = v77;
          memmove(v54, (const void *)(v77 + 8), (unsigned int)*(unsigned __int16 *)(v49 + 2) - 8);
          v65 = *(_WORD *)(v64 + 4);
          v10 = (unsigned __int64 *)v75;
          ProcessHeap = v76;
          *(_WORD *)(*v51 + 4) += v65;
          goto LABEL_83;
        }
        v10 = v51;
      }
      *v11 |= 0x1000u;
      ProcessHeap = v76;
LABEL_83:
      v15 = 0;
      goto LABEL_84;
    }
    v15 = -1073741801;
  }
LABEL_92:
  if ( v81 )
    RtlFreeHeap((__int64)ProcessHeap, 0, v81);
  if ( v77 )
    RtlFreeHeap((__int64)ProcessHeap, 0, v77);
  return (unsigned int)v15;
}
