/*
 * XREFs of sub_18001FD20 @ 0x18001FD20
 * Callers:
 *     sub_180020E70 @ 0x180020E70 (sub_180020E70.c)
 * Callees:
 *     sub_180012010 @ 0x180012010 (sub_180012010.c)
 *     RtlRbRemoveNode @ 0x180021260 (RtlRbRemoveNode.c)
 *     RtlRbInsertNodeEx @ 0x180021C90 (RtlRbInsertNodeEx.c)
 *     sub_180022160 @ 0x180022160 (sub_180022160.c)
 *     sub_1800235C8 @ 0x1800235C8 (sub_1800235C8.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800262F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028090 (RtlAcquireSRWLockExclusive.c)
 *     sub_1800610A4 @ 0x1800610A4 (sub_1800610A4.c)
 *     sub_18007203C @ 0x18007203C (sub_18007203C.c)
 *     _guard_dispatch_icall_nop @ 0x18009E4A0 (_guard_dispatch_icall_nop.c)
 *     sub_180105C90 @ 0x180105C90 (sub_180105C90.c)
 */

__int64 __fastcall sub_18001FD20(PRTL_SRWLOCK SRWLock, __int64 a2, __int64 a3, unsigned int a4, char a5, _BYTE *a6)
{
  unsigned int v9; // ebx
  unsigned __int64 v11; // rdi
  unsigned int v12; // r9d
  __int64 v13; // r8
  unsigned int v14; // ecx
  unsigned int v15; // edx
  unsigned int v16; // ebx
  unsigned __int64 v17; // rcx
  int v18; // eax
  unsigned int v19; // r12d
  unsigned int v20; // r15d
  unsigned int v21; // r10d
  int v22; // r8d
  int v23; // eax
  char v24; // cl
  unsigned __int64 v25; // rdx
  bool v26; // zf
  int v27; // eax
  unsigned __int64 v28; // rax
  unsigned __int64 v29; // rbx
  unsigned __int64 v30; // rcx
  __int64 v31; // rdx
  __int64 v32; // r8
  int v33; // eax
  int v34; // ebx
  unsigned int v35; // eax
  unsigned int v36; // eax
  _BYTE *v37; // rax
  unsigned __int64 v38; // r8
  int v39; // edx
  unsigned __int64 v40; // rdx
  unsigned int v41; // r14d
  __int64 v42; // rax
  unsigned __int64 v43; // rcx
  unsigned int v44; // r12d
  __int64 v45; // rbx
  unsigned int v46; // r9d
  unsigned int v47; // r8d
  unsigned int v48; // edx
  unsigned int v49; // r9d
  unsigned __int64 v50; // r14
  unsigned __int64 v51; // r15
  char v52; // r13
  int v53; // r13d
  _BYTE *v54; // rax
  __int64 v55; // rax
  __int64 v57; // rax
  __int64 v58; // rdx
  unsigned __int64 v59; // r10
  unsigned int v60; // r9d
  unsigned int v61; // edx
  __int16 v62; // r10
  unsigned int v63; // r8d
  unsigned __int64 v64; // rdx
  unsigned __int64 v65; // rax
  PVOID Ptr; // rax
  unsigned __int64 v67; // rcx
  BOOLEAN v68; // r8
  int v69; // ecx
  unsigned __int64 v70; // rax
  __int64 v71; // [rsp+30h] [rbp-58h]
  unsigned __int64 v72; // [rsp+38h] [rbp-50h]
  unsigned int v73; // [rsp+90h] [rbp+8h]
  int v74; // [rsp+90h] [rbp+8h]
  unsigned __int64 v75; // [rsp+98h] [rbp+10h]
  unsigned int v76; // [rsp+98h] [rbp+10h]
  __int64 v77; // [rsp+98h] [rbp+10h]
  int v78; // [rsp+9Ch] [rbp+14h]
  unsigned int v79; // [rsp+A8h] [rbp+20h] BYREF

  v9 = WORD1(qword_18015A440) ^ WORD1(a3) ^ *(unsigned __int16 *)(a3 + 2);
  RtlRbRemoveNode((PRTL_RB_TREE)&SRWLock[2], (PRTL_BALANCED_NODE)(a3 + 8));
  v11 = 0LL;
  v12 = qword_18015A440 ^ a3 ^ *(_DWORD *)a3;
  v13 = 16 * HIWORD(v12);
  v14 = (a3 - a2 + 4127) & 0xFFFFF000;
  v15 = ((v13 + a3 - a2) & 0xFFFFF000) - v14;
  if ( v14 >= (((_DWORD)v13 + (_DWORD)a3 - (_DWORD)a2) & 0xFFFFF000) )
    v15 = 0;
  SRWLock[7].Ptr = (char *)SRWLock[7].Ptr
                 - ((unsigned int)((v13 + (unsigned __int64)(a3 & 0xFFF) + 4095) >> 12)
                  + (v15 >> 12)
                  - (unsigned int)((unsigned __int64)(v13 + 4095) >> 12)
                  - (unsigned __int16)v12);
  v16 = v9 - a4;
  if ( v16 && ((__int64)SRWLock[14].Ptr & 1) != 0 )
  {
    v17 = (((a3 + 16LL * a4 + 4095) & 0xFFFFFFFFFFFFF000uLL) - (a3 + 16LL * a4)) >> 4;
    v18 = 16 * v17;
    if ( (unsigned int)(16 * v17) >= 0x20 )
    {
      if ( (v18 & 0xFFFFFFC0) == 0 && v18 != 32 )
      {
        ++a4;
        --v16;
      }
    }
    else
    {
      a4 += v17;
      v16 -= v17;
    }
  }
  v19 = v16 + a4;
  if ( 16 * v16 >= 0x20 )
    v19 = a4;
  v20 = 0;
  if ( 16 * v16 >= 0x20 )
    v20 = v16;
  v73 = v19;
  v21 = (unsigned int)(a3 - a2) >> 12;
  *(_BYTE *)(a3 + 6) = BYTE6(a3) ^ BYTE6(qword_18015A440) ^ ((v78 & 0xFF00FFFF | 0x10000) >> 16);
  v22 = (unsigned __int8)(qword_18015A440 ^ a3 ^ v21);
  v23 = 16 * v19 + 32;
  *(_DWORD *)(a3 + 8) = v22;
  if ( !v20 )
    v23 = 16 * v19;
  v24 = 63 - ((unsigned __int64)(unsigned int)(a3 + v23 - a2 - 1) >> 12);
  v25 = ((-1LL << v21) & (0xFFFFFFFFFFFFFFFFuLL >> v24) ^ *(_QWORD *)(a2 + 16)) & (-1LL << v21) & (0xFFFFFFFFFFFFFFFFuLL >> v24);
  v75 = v25;
  if ( v25 )
  {
    v26 = (a5 & 1) == 0;
    v27 = a5 & 1;
    *(_DWORD *)(a3 + 8) = v22 | 0x200;
    v74 = v27;
    if ( v26 )
    {
      RtlReleaseSRWLockExclusive(SRWLock);
      v25 = v75;
    }
    _BitScanReverse64(&v28, v25);
    _BitScanForward64(&v29, v25);
    v72 = (0x101010101010101LL
         * ((((v25 - ((v25 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
           + (((v25 - ((v25 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
           + ((((v25 - ((v25 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
             + (((v25 - ((v25 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56;
    v79 = v28 - v29 + 1;
    v71 = ((1LL << v79) - 1) << v29;
    RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a2 + 24));
    v30 = (unsigned __int64)SRWLock ^ (unsigned __int64)SRWLock[8].Ptr;
    v31 = a2 + (unsigned int)((_DWORD)v29 << 12);
    v32 = v79 << 12;
    if ( (__int64 (__fastcall *)(__int64, __int64, unsigned int))((unsigned __int64)SRWLock ^ qword_18015A440 ^ (__int64)SRWLock[11].Ptr) == sub_180012010 )
      v33 = sub_180012010(v30, v31, v32);
    else
      v33 = ((__int64 (__fastcall *)(unsigned __int64, __int64, __int64))((unsigned __int64)SRWLock ^ qword_18015A440 ^ (__int64)SRWLock[11].Ptr))(
              v30,
              v31,
              v32);
    v34 = v33;
    if ( v33 >= 0 )
    {
      *(_QWORD *)(a2 + 16) |= v71;
      _InterlockedExchangeAdd64((volatile signed __int64 *)&SRWLock[6], (unsigned int)v72);
      v34 = 0;
    }
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a2 + 24));
    v35 = 0;
    if ( v34 >= 0 )
      v35 = v19;
    v76 = v35;
    v36 = v19 + v20;
    if ( v34 >= 0 )
      v36 = v20;
    v20 = v36;
    if ( !v74 )
      RtlAcquireSRWLockExclusive(SRWLock);
    v37 = a6;
    v19 = v76;
    *(_DWORD *)(a3 + 8) &= ~0x200u;
    v73 = v76;
    *v37 = -1;
  }
  *(_WORD *)(a3 + 2) = WORD1(qword_18015A440) ^ v19 ^ WORD1(a3);
  if ( !v20 )
    return v19;
  v38 = a3 + 16LL * v19;
  if ( v19 )
    v39 = (unsigned __int16)v19;
  else
    v39 = (unsigned __int16)((qword_18015A440 ^ *(_QWORD *)v38 ^ v38) >> 32);
  HIDWORD(v77) = v39 & 0xFF00FFFF | 0x10000;
  LODWORD(v77) = v20 << 16;
  *(_QWORD *)v38 = v77 ^ qword_18015A440 ^ v38;
  v40 = v38 + 16LL * v20;
  *(_DWORD *)(v38 + 8) = (unsigned __int8)(qword_18015A440 ^ v38 ^ ((unsigned int)(v38 - a2) >> 12));
  if ( v40 < a2 + 16 * ((unsigned __int64)*(unsigned __int16 *)(a2 + 32) + 3) )
  {
    HIDWORD(v77) ^= (unsigned __int16)(v20 ^ WORD2(v77));
    *(_WORD *)(v40 + 4) = WORD2(v40) ^ WORD2(qword_18015A440) ^ WORD2(v77);
  }
  v41 = 0;
  v42 = sub_180022160(SRWLock, a2, v38, &v79);
  v44 = v79;
  v45 = v42;
  if ( v79 == *(unsigned __int16 *)(a2 + 32) )
  {
LABEL_51:
    sub_1800610A4(SRWLock, a2);
    return v73;
  }
  else
  {
    while ( v44 > v41 )
    {
      v46 = (v45 - a2 + 4127) & 0xFFFFF000;
      v47 = (v45 + 16 * (WORD1(qword_18015A440) ^ WORD1(v45) ^ *(unsigned __int16 *)(v45 + 2)) - a2) & 0xFFFFF000;
      if ( v46 >= v47 )
        break;
      v48 = v47 - v46;
      v49 = v46 >> 12;
      v43 = (unsigned __int8)v49;
      v50 = *(_QWORD *)(a2 + 16) & (-1LL << v49) & (0xFFFFFFFFFFFFFFFFuLL >> (63
                                                                            - (unsigned __int8)((unsigned __int64)(v47 - 1) >> 12)));
      if ( v48 < 0x1000 || !v50 )
        break;
      v51 = (0x101010101010101LL
           * ((((v50 - ((v50 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
             + (((v50 - ((v50 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
             + ((((v50 - ((v50 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
               + (((v50 - ((v50 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56;
      if ( ((__int64)SRWLock[14].Ptr & 2) == 0 )
      {
        v43 = (unsigned __int64)SRWLock[6].Ptr >> 7;
        if ( v43 <= 8 )
          v43 = 8LL;
        if ( (char *)SRWLock[7].Ptr + (unsigned int)v51 <= (PVOID)v43 )
          break;
      }
      v52 = a5;
      HIDWORD(v77) = HIDWORD(v77) & 0xFF00FFFF | 0x10000;
      v77 ^= qword_18015A440 ^ v45;
      *(_BYTE *)(v45 + 6) = BYTE6(v77);
      *(_DWORD *)(v45 + 8) = (unsigned __int8)(qword_18015A440 ^ v45 ^ ((unsigned int)(v45 - a2) >> 12)) | 0x200;
      v53 = v52 & 1;
      if ( !v53 )
        RtlReleaseSRWLockExclusive(SRWLock);
      sub_18007203C((_DWORD)SRWLock, a2, v50, v51, 0);
      if ( !v53 )
        RtlAcquireSRWLockExclusive(SRWLock);
      v54 = a6;
      *(_DWORD *)(v45 + 8) &= ~0x200u;
      v41 = v44;
      *v54 = -1;
      v55 = sub_180022160(SRWLock, a2, v45, &v79);
      v44 = v79;
      v45 = v55;
      if ( v79 == *(unsigned __int16 *)(a2 + 32) )
        goto LABEL_51;
    }
    if ( ((__int64)SRWLock[14].Ptr & 1) != 0 && ((v45 + 32) & 0xFFF) != 0 )
    {
      v57 = sub_180105C90(v43, a2, v45);
      if ( v57 )
        sub_1800235C8(SRWLock, a2, v57);
    }
    v58 = 16 * (WORD1(qword_18015A440) ^ WORD1(v45) ^ *(unsigned __int16 *)(v45 + 2));
    v59 = v58 + (v45 & 0xFFF) + 4095;
    v60 = (v45 - a2 + 4127) & 0xFFFFF000;
    v61 = (v45 + v58 - a2) & 0xFFFFF000;
    v62 = (v59 >> 12)
        - (((unsigned __int64)(16 * (WORD1(qword_18015A440) ^ WORD1(v45) ^ *(unsigned __int16 *)(v45 + 2))) + 4095) >> 12);
    if ( v60 >= v61 )
    {
      v63 = 0;
      v64 = 0LL;
    }
    else
    {
      v63 = v61 - v60;
      v64 = *(_QWORD *)(a2 + 16) & (-1LL << (v60 >> 12)) & (0xFFFFFFFFFFFFFFFFuLL >> (63
                                                                                    - (unsigned __int8)((unsigned __int64)(v61 - 1) >> 12)));
    }
    v65 = ((v64 - ((v64 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
        + (((v64 - ((v64 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL);
    SRWLock[7].Ptr = (char *)SRWLock[7].Ptr
                   + ((unsigned int)((0x101010101010101LL * ((v65 + (v65 >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24);
    *(_WORD *)v45 = qword_18015A440 ^ v45 ^ (v62
                                           + (v63 >> 12)
                                           - ((0x101010101010101LL * ((v65 + (v65 >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56));
    Ptr = SRWLock[3].Ptr;
    if ( ((unsigned __int8)Ptr & 1) != 0 )
    {
      v67 = (unsigned __int64)SRWLock[2].Ptr;
      if ( v67 )
        v11 = v67 ^ (unsigned __int64)&SRWLock[2];
    }
    else
    {
      v11 = (unsigned __int64)SRWLock[2].Ptr;
    }
    v68 = 0;
    v69 = (unsigned __int8)Ptr & 1;
    if ( v11 )
    {
      while ( 1 )
      {
        if ( ((unsigned int)qword_18015A440 ^ *(_DWORD *)v45 ^ (unsigned int)v45) < ((unsigned int)qword_18015A440 ^ *(_DWORD *)(v11 - 8) ^ ((_DWORD)v11 - 8)) )
        {
          v70 = *(_QWORD *)v11;
          if ( v69 )
          {
            if ( !v70 )
              goto LABEL_75;
            v70 ^= v11;
          }
          if ( !v70 )
          {
LABEL_75:
            v68 = 0;
            break;
          }
        }
        else
        {
          v70 = *(_QWORD *)(v11 + 8);
          if ( v69 )
          {
            if ( !v70 )
              goto LABEL_69;
            v70 ^= v11;
          }
          if ( !v70 )
          {
LABEL_69:
            v68 = 1;
            break;
          }
        }
        v11 = v70;
      }
    }
    RtlRbInsertNodeEx((PRTL_RB_TREE)&SRWLock[2], (PRTL_BALANCED_NODE)v11, v68, (PRTL_BALANCED_NODE)(v45 + 8));
    return v73;
  }
}
