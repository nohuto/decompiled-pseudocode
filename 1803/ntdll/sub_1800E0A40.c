/*
 * XREFs of sub_1800E0A40 @ 0x1800E0A40
 * Callers:
 *     RtlConvertToAutoInheritSecurityObject_0 @ 0x1800E1278 (RtlConvertToAutoInheritSecurityObject_0.c)
 * Callees:
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x1800190C0 (RtlAllocateHeap.c)
 *     sub_1800300BC @ 0x1800300BC (sub_1800300BC.c)
 *     RtlCreateAcl @ 0x180030680 (RtlCreateAcl.c)
 *     RtlValidAcl @ 0x1800375A0 (RtlValidAcl.c)
 *     RtlMapGenericMask @ 0x180037EF0 (RtlMapGenericMask.c)
 *     sub_1800441A8 @ 0x1800441A8 (sub_1800441A8.c)
 *     RtlInitializeSid @ 0x180044340 (RtlInitializeSid.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     memmove @ 0x1800A1380 (memmove.c)
 */

__int64 __fastcall sub_1800E0A40(
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
  unsigned __int64 *v10; // r13
  _DWORD *v12; // rdi
  unsigned __int64 v13; // r15
  void *ProcessHeap; // r14
  int v15; // ebx
  __int64 v16; // rbx
  BOOL v17; // ecx
  bool v18; // cf
  _DWORD *v19; // rsi
  int v20; // eax
  unsigned __int64 v21; // rcx
  int v22; // eax
  unsigned __int16 *v23; // r13
  unsigned __int8 *v24; // rbx
  int *v25; // rsi
  int v26; // ecx
  int v27; // edx
  int v28; // edx
  char v29; // r8
  int v30; // ecx
  int v31; // r9d
  int v32; // ecx
  int v33; // eax
  unsigned __int8 *v34; // rbx
  int v35; // ecx
  int v36; // ecx
  int v37; // ecx
  int v38; // eax
  char v39; // dl
  unsigned __int16 *v40; // r15
  int v41; // r8d
  int v42; // eax
  int v43; // r9d
  int v44; // edx
  int v45; // ecx
  int v46; // esi
  int v47; // edi
  _DWORD *v48; // r14
  int v49; // r13d
  int v50; // eax
  __int64 v51; // rbx
  char v52; // r9
  char v53; // r10
  int v54; // esi
  unsigned __int8 *v55; // rdx
  __int64 v56; // r11
  _DWORD *v57; // r8
  __int64 v58; // rax
  int v59; // ecx
  char v60; // al
  unsigned __int64 v61; // rbx
  __int64 v62; // rax
  unsigned __int64 *v63; // r14
  unsigned __int8 v65; // cl
  _BYTE *v66; // r14
  int v67; // ecx
  unsigned __int64 *v68; // rdi
  _DWORD *v69; // r15
  int v70; // ebx
  _BYTE *v71; // r13
  unsigned __int16 *v72; // rcx
  unsigned int v73; // esi
  int v74; // ebx
  int v75; // eax
  int v76; // eax
  unsigned __int64 v77; // rsi
  void *v78; // rax
  int v80; // [rsp+94h] [rbp-7Ch] BYREF
  _BYTE v81[4]; // [rsp+98h] [rbp-78h] BYREF
  int v82; // [rsp+9Ch] [rbp-74h] BYREF
  int v83; // [rsp+A0h] [rbp-70h] BYREF
  __int16 v84; // [rsp+A4h] [rbp-6Ch]
  int v85; // [rsp+A8h] [rbp-68h]
  unsigned int v86; // [rsp+ACh] [rbp-64h] BYREF
  unsigned __int64 *v87; // [rsp+B0h] [rbp-60h]
  unsigned __int64 v88; // [rsp+B8h] [rbp-58h] BYREF
  void *v89; // [rsp+C0h] [rbp-50h]
  unsigned __int8 *v90; // [rsp+C8h] [rbp-48h] BYREF
  unsigned __int16 *v91; // [rsp+D0h] [rbp-40h]
  __int64 Heap; // [rsp+D8h] [rbp-38h]
  int v93; // [rsp+E0h] [rbp-30h]
  int v94; // [rsp+E4h] [rbp-2Ch]
  int v95; // [rsp+E8h] [rbp-28h] BYREF
  __int64 v96; // [rsp+F0h] [rbp-20h] BYREF
  _DWORD *v97; // [rsp+F8h] [rbp-18h]
  __int64 v98; // [rsp+100h] [rbp-10h]
  __int64 v99; // [rsp+108h] [rbp-8h]
  __int64 v100; // [rsp+110h] [rbp+0h]
  char v101[8]; // [rsp+118h] [rbp+8h] BYREF
  int v102; // [rsp+120h] [rbp+10h]
  char v103[8]; // [rsp+148h] [rbp+38h] BYREF
  int v104; // [rsp+150h] [rbp+40h]

  v10 = a8;
  v12 = a9;
  v99 = a5;
  v98 = a6;
  v13 = 0LL;
  v88 = 0LL;
  v90 = 0LL;
  v83 = 0;
  v100 = a1;
  v96 = a3;
  ProcessHeap = NtCurrentPeb()->ProcessHeap;
  v89 = ProcessHeap;
  v87 = a8;
  v97 = a9;
  v84 = 768;
  v15 = RtlInitializeSid((__int64)v103, (__int64)&v83, 1u);
  if ( v15 < 0 )
    return (unsigned int)v15;
  v104 = 0;
  v15 = RtlInitializeSid((__int64)v101, (__int64)&v83, 1u);
  if ( v15 < 0 )
    return (unsigned int)v15;
  v16 = v100;
  *a9 = 1024;
  v102 = 1;
  *a8 = 0LL;
  if ( v16 && !RtlValidAcl(v16) || !RtlValidAcl((__int64)a2) )
    return (unsigned int)-1073741705;
  v17 = a3 != 0;
  v18 = a3 != 0;
  v19 = a7;
  v20 = sub_1800300BC(
          v16,
          0,
          0,
          a4,
          1,
          0,
          (__int64)v103,
          (__int64)v101,
          (__int64)v103,
          (__int64)v101,
          (__int64)a7,
          2,
          (unsigned __int64)&v96 & -(__int64)v18,
          v17,
          &v88,
          v81,
          &v95);
  v21 = v88;
  v15 = v20;
  if ( v20 == -2147483637 )
  {
    *a9 |= 0x1000u;
    goto LABEL_90;
  }
  if ( v20 >= 0 )
  {
    Heap = RtlAllocateHeap((__int64)ProcessHeap, dword_18015C294 + 1310720, 24LL * a2[2]);
    v13 = Heap;
    if ( !Heap )
    {
      v15 = -1073741801;
LABEL_65:
      v21 = v88;
      goto LABEL_66;
    }
    LOWORD(v22) = a2[2];
    v80 = 0;
    v23 = a2 + 4;
    v91 = a2 + 4;
    v24 = (unsigned __int8 *)(a2 + 4);
    if ( (_WORD)v22 )
    {
      v25 = (int *)(Heap + 4);
      while ( *v24 <= 8u && *v24 != 4 )
      {
        v82 = *((_DWORD *)v24 + 1);
        RtlMapGenericMask(&v82, a7);
        if ( *v24 <= 0xAu && (v26 = 1635, _bittest(&v26, *v24)) )
          v27 = a7[3];
        else
          v27 = a7[3] | 0x1000000;
        v28 = v82 & v27;
        v29 = v24[1] & 3 | ~v24[1] & 8;
        if ( (v24[1] & 2) != 0 )
        {
          v30 = v28;
          v31 = v28;
        }
        else
        {
          v31 = 0;
          v30 = 0;
        }
        v25[2] = v31;
        *(v25 - 1) = v30;
        v32 = (v29 & 1) != 0 ? v28 : 0;
        *v25 = v32;
        v25[3] = v32;
        v33 = (v29 & 8) != 0 ? v28 : 0;
        v25[1] = v33;
        v25[4] = v33;
        v25 += 6;
        v24 += *((unsigned __int16 *)v24 + 1);
        v22 = a2[2];
        if ( ++v80 >= v22 )
        {
          v19 = a7;
          goto LABEL_25;
        }
      }
LABEL_31:
      *v12 |= 0x1000u;
      v10 = v87;
    }
    else
    {
LABEL_25:
      v86 = 0;
      v34 = (unsigned __int8 *)(v88 + 8);
      if ( *(_WORD *)(v88 + 4) )
      {
        while ( *v34 <= 8u && *v34 != 4 )
        {
          v80 = *((_DWORD *)v34 + 1);
          RtlMapGenericMask(&v80, v19);
          if ( *v34 <= 0xAu && (v35 = 1635, _bittest(&v35, *v34)) )
            v36 = v19[3];
          else
            v36 = v19[3] | 0x1000000;
          v37 = v80 & v36;
          if ( v37 )
          {
            v38 = v34[1] & 3;
            v39 = v38 | ~v34[1] & 8;
            if ( v38 | ~v34[1] & 8 )
            {
              v80 = 0;
              v40 = v23;
              v41 = (v39 & 2) != 0 ? v37 : 0;
              v94 = v41;
              v42 = v41;
              v43 = (v39 & 1) != 0 ? v37 : 0;
              v83 = v43;
              v44 = (v39 & 8) != 0 ? v37 : 0;
              v45 = v43;
              v46 = v44;
              v93 = v44;
              if ( a2[2] )
              {
                v47 = v41;
                v48 = (_DWORD *)(Heap + 20);
                v49 = v43;
                do
                {
                  if ( sub_1800441A8(v34, (char *)v40) )
                  {
                    v46 &= ~*(v48 - 3);
                    v47 &= ~*(v48 - 5);
                    v49 &= ~*(v48 - 4);
                    *v48 &= ~v93;
                    *(v48 - 2) &= ~v94;
                    *(v48 - 1) &= ~v83;
                  }
                  v48 += 6;
                  v40 = (unsigned __int16 *)((char *)v40 + v40[1]);
                  v50 = a2[2];
                  ++v80;
                }
                while ( v80 < v50 );
                v85 = v49;
                v23 = a2 + 4;
                v45 = v85;
                v82 = v47;
                v12 = v97;
                v42 = v82;
              }
              if ( v42 | v45 | v46 )
                break;
              v19 = a7;
            }
          }
          v34 += *((unsigned __int16 *)v34 + 1);
          if ( (int)++v86 >= *(unsigned __int16 *)(v88 + 4) )
          {
            LOWORD(v22) = a2[2];
            ProcessHeap = v89;
            v13 = Heap;
            goto LABEL_45;
          }
        }
        *v12 |= 0x1000u;
        v10 = v87;
      }
      else
      {
LABEL_45:
        v51 = (unsigned __int16)v22;
        v52 = 0;
        v53 = 0;
        v54 = 0;
        v55 = (unsigned __int8 *)v23;
        if ( (_WORD)v22 )
        {
          v56 = 0LL;
          v57 = (_DWORD *)(v13 + 16);
          do
          {
            v58 = *v55;
            if ( *v57 | v57[1] | *(v57 - 1) )
            {
              v59 = *((unsigned __int16 *)v55 + 1);
              v60 = byte_180120D70[v58];
              v54 += v59;
              ProcessHeap = v89;
              if ( !v60 && v53 || v60 == 1 && v52 )
                goto LABEL_31;
            }
            else
            {
              if ( !byte_180120D70[v58] )
                v52 = 1;
              v12 = v97;
              if ( byte_180120D70[v58] == 1 )
                v53 = 1;
              LOWORD(v59) = *((_WORD *)v55 + 1);
            }
            ++v56;
            v55 += (unsigned __int16)v59;
            v57 += 6;
          }
          while ( v56 < v51 );
        }
        v15 = sub_1800300BC(
                v100,
                0,
                0,
                a4,
                1,
                0,
                v99,
                v98,
                v99,
                v98,
                (__int64)a7,
                2,
                (unsigned __int64)&v96 & -(__int64)(v96 != 0),
                v96 != 0,
                (unsigned __int64 *)&v90,
                v81,
                &v95);
        if ( v15 < 0 )
          goto LABEL_63;
        v61 = (unsigned __int64)v90;
        v62 = RtlAllocateHeap(
                (__int64)ProcessHeap,
                dword_18015C294 + 1310720,
                v54 + (unsigned int)*((unsigned __int16 *)v90 + 1));
        v63 = v87;
        *v87 = v62;
        if ( !v62 )
        {
          v15 = -1073741801;
          goto LABEL_62;
        }
        v65 = *v90;
        if ( *v90 <= *(_BYTE *)a2 )
          v65 = *(_BYTE *)a2;
        if ( (int)RtlCreateAcl(v62, v54 + (unsigned int)*(unsigned __int16 *)(v61 + 2), v65) < 0 )
        {
          *v12 |= 0x1000u;
          v10 = v63;
          goto LABEL_90;
        }
        v66 = (_BYTE *)(*v63 + 8);
        v85 = 0;
        v67 = 0;
        if ( a2[2] )
        {
          v68 = v87;
          v69 = (_DWORD *)(v13 + 16);
          do
          {
            v70 = *v69 | v69[1] | *(v69 - 1);
            if ( v70 )
            {
              memmove(v66, v23, v23[1]);
              v66[1] &= ~0x10u;
              v71 = v66;
              v72 = v91;
              v73 = 0x80000000;
              v66 += v91[1];
              ++*(_WORD *)(*v68 + 4);
              *((_DWORD *)v71 + 1) = *((_DWORD *)v72 + 1) & v70;
              v74 = ~*((_DWORD *)v72 + 1) & v70;
              if ( v74 )
              {
                do
                {
                  if ( v73 < 0x10000000 )
                    break;
                  if ( (v73 & *((_DWORD *)v72 + 1)) != 0 )
                  {
                    v86 = v73;
                    RtlMapGenericMask((int *)&v86, a7);
                    v75 = v86;
                    v72 = v91;
                    if ( (v86 & v74) != 0 )
                    {
                      *((_DWORD *)v71 + 1) |= v73;
                      v74 &= ~v75;
                    }
                  }
                  v73 >>= 1;
                }
                while ( v74 );
                v68 = v87;
              }
              *((_DWORD *)v71 + 1) |= v74;
              v23 = v91;
              v67 = v85;
            }
            ++v67;
            v23 = (unsigned __int16 *)((char *)v23 + v23[1]);
            v85 = v67;
            v76 = a2[2];
            v69 += 6;
            v91 = v23;
          }
          while ( v67 < v76 );
          v12 = v97;
          v61 = (unsigned __int64)v90;
        }
        v77 = (unsigned __int64)v90;
        memmove(v66, v90 + 8, (unsigned int)*(unsigned __int16 *)(v61 + 2) - 8);
        v10 = v87;
        *(_WORD *)(*v87 + 4) += *(_WORD *)(v77 + 4);
      }
      v13 = Heap;
    }
LABEL_90:
    v15 = 0;
    if ( (*v12 & 0x1000) != 0 )
    {
      ProcessHeap = v89;
      if ( *v10 )
      {
        RtlFreeHeap((__int64)v89, 0, *v10);
        *v10 = 0LL;
      }
      v78 = (void *)RtlAllocateHeap((__int64)ProcessHeap, dword_18015C294 + 1310720, a2[1]);
      *v10 = (unsigned __int64)v78;
      if ( v78 )
        memmove(v78, a2, a2[1]);
      else
        v15 = -1073741801;
      goto LABEL_63;
    }
LABEL_62:
    ProcessHeap = v89;
LABEL_63:
    if ( v13 )
      RtlFreeHeap((__int64)ProcessHeap, 0, v13);
    goto LABEL_65;
  }
LABEL_66:
  if ( v21 )
    RtlFreeHeap((__int64)ProcessHeap, 0, v21);
  if ( v90 )
    RtlFreeHeap((__int64)ProcessHeap, 0, (unsigned __int64)v90);
  return (unsigned int)v15;
}
