/*
 * XREFs of RtlpConvertAclToAutoInherit @ 0x1800E53C0
 * Callers:
 *     RtlpConvertToAutoInheritSecurityObject @ 0x1800E5BD4 (RtlpConvertToAutoInheritSecurityObject.c)
 * Callees:
 *     RtlValidAcl @ 0x18002D7F0 (RtlValidAcl.c)
 *     RtlFreeHeap @ 0x18003ECC0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180040DF0 (RtlAllocateHeap.c)
 *     RtlpInheritAcl @ 0x180055308 (RtlpInheritAcl.c)
 *     RtlCreateAcl @ 0x1800558B0 (RtlCreateAcl.c)
 *     RtlMapGenericMask @ 0x1800564C0 (RtlMapGenericMask.c)
 *     RtlInitializeSid @ 0x180057700 (RtlInitializeSid.c)
 *     __security_check_cookie @ 0x180090C90 (__security_check_cookie.c)
 *     memmove @ 0x1800A6940 (memmove.c)
 *     RtlpCompareAces @ 0x1800E5230 (RtlpCompareAces.c)
 */

__int64 __fastcall RtlpConvertAclToAutoInherit(
        __int64 a1,
        unsigned __int16 *a2,
        __int64 a3,
        char a4,
        _WORD *a5,
        _WORD *a6,
        _DWORD *a7,
        unsigned __int64 *a8,
        _DWORD *a9)
{
  unsigned __int64 *v10; // r14
  _DWORD *v11; // rdi
  void *ProcessHeap; // r15
  int v15; // ebx
  int v16; // eax
  int v17; // r14d
  __int64 Heap; // rax
  unsigned __int16 *v19; // r12
  unsigned __int8 *v20; // rsi
  int *v21; // rbx
  int v22; // ecx
  int v23; // ecx
  char v24; // dl
  int v25; // r14d
  unsigned __int8 *v26; // rbx
  int v27; // ecx
  int v28; // ecx
  int v29; // eax
  char v30; // dl
  unsigned __int16 *v31; // r15
  int v32; // eax
  int v33; // edx
  int v34; // ecx
  int v35; // esi
  int v36; // r12d
  _DWORD *v37; // r14
  int v38; // edi
  char v39; // al
  char v40; // r8
  char v41; // r10
  int v42; // esi
  unsigned __int8 *v43; // rcx
  __int64 v44; // r9
  _DWORD *v45; // rdx
  __int64 v46; // rax
  __int64 v47; // rax
  unsigned __int64 v48; // rbx
  __int64 v49; // rax
  __int64 v50; // r9
  unsigned __int8 v51; // al
  int v52; // ecx
  _BYTE *v53; // r14
  unsigned __int64 *v54; // rdi
  _DWORD *v55; // r15
  int v56; // ebx
  _BYTE *v57; // r12
  unsigned __int16 *v58; // rcx
  unsigned int v59; // esi
  int v60; // ebx
  int v61; // eax
  int v62; // eax
  unsigned __int64 v63; // rsi
  void *v64; // rax
  int v66; // [rsp+90h] [rbp-80h] BYREF
  char v67; // [rsp+94h] [rbp-7Ch] BYREF
  char v68; // [rsp+95h] [rbp-7Bh]
  int v69; // [rsp+98h] [rbp-78h] BYREF
  int v70; // [rsp+9Ch] [rbp-74h] BYREF
  __int16 v71; // [rsp+A0h] [rbp-70h]
  int v72; // [rsp+A4h] [rbp-6Ch] BYREF
  unsigned __int64 *v73; // [rsp+A8h] [rbp-68h]
  unsigned __int64 v74; // [rsp+B0h] [rbp-60h] BYREF
  unsigned __int16 *v75; // [rsp+B8h] [rbp-58h]
  unsigned __int64 v76; // [rsp+C0h] [rbp-50h]
  __int64 v77; // [rsp+C8h] [rbp-48h] BYREF
  void *v78; // [rsp+D0h] [rbp-40h]
  unsigned __int64 v79; // [rsp+D8h] [rbp-38h] BYREF
  int v80; // [rsp+E4h] [rbp-2Ch]
  int v81; // [rsp+E8h] [rbp-28h]
  int v82; // [rsp+ECh] [rbp-24h] BYREF
  _DWORD *v83; // [rsp+F0h] [rbp-20h]
  _WORD *v84; // [rsp+F8h] [rbp-18h]
  _WORD *v85; // [rsp+100h] [rbp-10h]
  __int64 v86; // [rsp+108h] [rbp-8h]
  char v87[8]; // [rsp+110h] [rbp+0h] BYREF
  int v88; // [rsp+118h] [rbp+8h]
  char v89[8]; // [rsp+140h] [rbp+30h] BYREF
  int v90; // [rsp+148h] [rbp+38h]

  v10 = a8;
  v11 = a9;
  v85 = a5;
  v84 = a6;
  v79 = 0LL;
  v74 = 0LL;
  v76 = 0LL;
  v70 = 0;
  v86 = a1;
  v77 = a3;
  v68 = a4;
  ProcessHeap = NtCurrentPeb()->ProcessHeap;
  v78 = ProcessHeap;
  v73 = a8;
  v83 = a9;
  v71 = 768;
  v15 = RtlInitializeSid((__int64)v89, (__int64)&v70, 1u);
  if ( v15 < 0 )
    return (unsigned int)v15;
  v90 = 0;
  v15 = RtlInitializeSid((__int64)v87, (__int64)&v70, 1u);
  if ( v15 < 0 )
    return (unsigned int)v15;
  *a9 = 1024;
  *a8 = 0LL;
  v88 = 1;
  if ( a1 && !RtlValidAcl(a1) || !RtlValidAcl((__int64)a2) )
    return (unsigned int)-1073741705;
  v16 = RtlpInheritAcl(
          a1,
          0,
          0,
          a4,
          1,
          0,
          (__int64)v89,
          (__int64)v87,
          (__int64)v89,
          (__int64)v87,
          (__int64)a7,
          2,
          (unsigned __int64)&v77 & -(__int64)(v77 != 0),
          v77 != 0,
          &v79,
          &v67,
          &v82);
  v15 = v16;
  if ( v16 == -2147483637 )
  {
    *a9 |= 0x1000u;
    goto LABEL_82;
  }
  v17 = 0;
  if ( v16 >= 0 )
  {
    Heap = RtlAllocateHeap((__int64)ProcessHeap, NtdllBaseTag + 1310720, 24LL * a2[2]);
    v76 = Heap;
    if ( !Heap )
    {
      v15 = -1073741801;
      goto LABEL_90;
    }
    v19 = a2 + 4;
    v20 = (unsigned __int8 *)(a2 + 4);
    v75 = a2 + 4;
    if ( a2[2] )
    {
      v21 = (int *)(Heap + 4);
      do
      {
        if ( *v20 > 8u || *v20 == 4 )
        {
LABEL_36:
          *v11 |= 0x1000u;
          v10 = v73;
          goto LABEL_82;
        }
        v69 = *((_DWORD *)v20 + 1);
        RtlMapGenericMask(&v69, a7);
        if ( *v20 <= 0xAu && (v22 = 1635, _bittest(&v22, *v20)) )
          v23 = a7[3] & v69;
        else
          v23 = (a7[3] | 0x1000000) & v69;
        v24 = v20[1] & 3 | ~v20[1] & 8;
        if ( (v20[1] & 2) != 0 )
        {
          *(v21 - 1) = v23;
          v21[2] = v23;
        }
        else
        {
          *(v21 - 1) = 0;
          v21[2] = 0;
        }
        if ( (v24 & 1) != 0 )
        {
          *v21 = v23;
          v21[3] = v23;
        }
        else
        {
          *v21 = 0;
          v21[3] = 0;
        }
        if ( (v24 & 8) != 0 )
        {
          v21[1] = v23;
          v21[4] = v23;
        }
        else
        {
          v21[1] = 0;
          v21[4] = 0;
        }
        ++v17;
        v21 += 6;
        v20 += *((unsigned __int16 *)v20 + 1);
      }
      while ( v17 < a2[2] );
    }
    v25 = 0;
    v72 = 0;
    v26 = (unsigned __int8 *)(v79 + 8);
    if ( *(_WORD *)(v79 + 4) )
    {
      do
      {
        if ( *v26 > 8u || *v26 == 4 )
          goto LABEL_36;
        v66 = *((_DWORD *)v26 + 1);
        RtlMapGenericMask(&v66, a7);
        if ( *v26 <= 0xAu && (v27 = 1635, _bittest(&v27, *v26)) )
          v28 = a7[3] & v66;
        else
          v28 = (a7[3] | 0x1000000) & v66;
        if ( v28 )
        {
          v29 = v26[1] & 3;
          v30 = v29 | ~v26[1] & 8;
          if ( v29 | ~v26[1] & 8 )
          {
            v31 = v19;
            v81 = (v26[1] & 2) != 0 ? v28 : 0;
            v32 = (v30 & 2) != 0 ? v28 : 0;
            v70 = (v30 & 1) != 0 ? v28 : 0;
            v33 = (v30 & 8) != 0 ? v28 : 0;
            v34 = v70;
            v35 = v33;
            v66 = v70;
            v80 = v33;
            if ( a2[2] )
            {
              v36 = 0;
              v37 = (_DWORD *)(v76 + 20);
              v38 = v32;
              do
              {
                v39 = RtlpCompareAces(v26, (unsigned __int8 *)v31, v85, v84);
                v34 = v66;
                if ( v39 )
                {
                  v35 &= ~*(v37 - 3);
                  v38 &= ~*(v37 - 5);
                  v34 = ~*(v37 - 4) & v66;
                  v66 = v34;
                  *v37 &= ~v80;
                  *(v37 - 2) &= ~v81;
                  *(v37 - 1) &= ~v70;
                }
                ++v36;
                v31 = (unsigned __int16 *)((char *)v31 + v31[1]);
                v37 += 6;
              }
              while ( v36 < a2[2] );
              v25 = v72;
              v19 = a2 + 4;
              v69 = v38;
              v11 = v83;
              v32 = v69;
            }
            if ( v32 | v34 | v35 )
              goto LABEL_36;
          }
        }
        ++v25;
        v26 += *((unsigned __int16 *)v26 + 1);
        v72 = v25;
      }
      while ( v25 < *(unsigned __int16 *)(v79 + 4) );
      ProcessHeap = v78;
    }
    v40 = 0;
    v41 = 0;
    v42 = 0;
    v43 = (unsigned __int8 *)v19;
    v44 = 0LL;
    if ( a2[2] )
    {
      v45 = (_DWORD *)(v76 + 16);
      do
      {
        if ( *v45 | v45[1] | *(v45 - 1) )
        {
          v42 += *((unsigned __int16 *)v43 + 1);
          v47 = *v43;
          if ( !RtlBaseAceType[v47] && v41 || RtlBaseAceType[v47] == 1 && v40 )
          {
            *v11 |= 0x1000u;
            v10 = v73;
            goto LABEL_82;
          }
        }
        else
        {
          v46 = *v43;
          if ( !RtlBaseAceType[v46] )
            v40 = 1;
          v11 = v83;
          if ( RtlBaseAceType[v46] == 1 )
            v41 = 1;
        }
        ++v44;
        v43 += *((unsigned __int16 *)v43 + 1);
        v45 += 6;
      }
      while ( v44 < a2[2] );
    }
    v15 = RtlpInheritAcl(
            v86,
            0,
            0,
            v68,
            1,
            0,
            (__int64)v85,
            (__int64)v84,
            (__int64)v85,
            (__int64)v84,
            (__int64)a7,
            2,
            (unsigned __int64)&v77 & -(__int64)(v77 != 0),
            v77 != 0,
            &v74,
            &v67,
            &v82);
    if ( v15 >= 0 )
    {
      v48 = v74;
      v49 = RtlAllocateHeap(
              (__int64)ProcessHeap,
              NtdllBaseTag + 1310720,
              v42 + (unsigned int)*(unsigned __int16 *)(v74 + 2));
      v10 = v73;
      v50 = v49;
      *v73 = v49;
      if ( !v49 )
        goto LABEL_86;
      v51 = *(_BYTE *)a2;
      if ( *(_BYTE *)v48 > *(_BYTE *)a2 )
        v51 = *(_BYTE *)v48;
      if ( (int)RtlCreateAcl(v50, v42 + (unsigned int)*(unsigned __int16 *)(v48 + 2), v51) >= 0 )
      {
        v52 = 0;
        v53 = (_BYTE *)(*v10 + 8);
        v66 = 0;
        if ( a2[2] )
        {
          v54 = v73;
          v55 = (_DWORD *)(v76 + 16);
          do
          {
            v56 = *v55 | v55[1] | *(v55 - 1);
            if ( v56 )
            {
              memmove(v53, v19, v19[1]);
              v53[1] &= ~0x10u;
              v57 = v53;
              v58 = v75;
              v59 = 0x80000000;
              v53 += v75[1];
              ++*(_WORD *)(*v54 + 4);
              *((_DWORD *)v57 + 1) = v56 & *((_DWORD *)v58 + 1);
              v60 = ~*((_DWORD *)v58 + 1) & v56;
              if ( v60 )
              {
                do
                {
                  if ( v59 < 0x10000000 )
                    break;
                  if ( (v59 & *((_DWORD *)v58 + 1)) != 0 )
                  {
                    v72 = v59;
                    RtlMapGenericMask(&v72, a7);
                    v61 = v72;
                    v58 = v75;
                    if ( (v72 & v60) != 0 )
                    {
                      *((_DWORD *)v57 + 1) |= v59;
                      v60 &= ~v61;
                    }
                  }
                  v59 >>= 1;
                }
                while ( v60 );
                v54 = v73;
              }
              *((_DWORD *)v57 + 1) |= v60;
              v19 = v75;
              v52 = v66;
            }
            ++v52;
            v19 = (unsigned __int16 *)((char *)v19 + v19[1]);
            v66 = v52;
            v62 = a2[2];
            v55 += 6;
            v75 = v19;
          }
          while ( v52 < v62 );
          v11 = v83;
          v48 = v74;
        }
        v63 = v74;
        memmove(v53, (const void *)(v74 + 8), (unsigned int)*(unsigned __int16 *)(v48 + 2) - 8);
        v10 = v73;
        *(_WORD *)(*v73 + 4) += *(_WORD *)(v63 + 4);
      }
      else
      {
        *v11 |= 0x1000u;
      }
LABEL_82:
      v15 = 0;
      ProcessHeap = v78;
      if ( (*v11 & 0x1000) == 0 )
        goto LABEL_88;
      if ( *v10 )
      {
        RtlFreeHeap((__int64)v78, 0, *v10);
        *v10 = 0LL;
      }
      v64 = (void *)RtlAllocateHeap((__int64)ProcessHeap, NtdllBaseTag + 1310720, a2[1]);
      *v10 = (unsigned __int64)v64;
      if ( v64 )
      {
        memmove(v64, a2, a2[1]);
        v15 = 0;
      }
      else
      {
LABEL_86:
        v15 = -1073741801;
      }
    }
LABEL_88:
    if ( v76 )
      RtlFreeHeap((__int64)ProcessHeap, 0, v76);
  }
LABEL_90:
  if ( v79 )
    RtlFreeHeap((__int64)ProcessHeap, 0, v79);
  if ( v74 )
    RtlFreeHeap((__int64)ProcessHeap, 0, v74);
  return (unsigned int)v15;
}
