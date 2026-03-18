/*
 * XREFs of MiMapContiguousMemory @ 0x1401243E0
 * Callers:
 *     MiAllocateContiguousMemory @ 0x140123DD8 (MiAllocateContiguousMemory.c)
 *     MmMapIoSpaceEx @ 0x1401243A0 (MmMapIoSpaceEx.c)
 * Callees:
 *     MiMakeValidPte @ 0x1400A12B0 (MiMakeValidPte.c)
 *     MiReleasePtes @ 0x1400A23A0 (MiReleasePtes.c)
 *     MiMakeProtectionPfnCompatible @ 0x1400A5B28 (MiMakeProtectionPfnCompatible.c)
 *     MiIsPfnInline @ 0x1400B54F0 (MiIsPfnInline.c)
 *     MiIsPfnFileOnly @ 0x1400CB1E0 (MiIsPfnFileOnly.c)
 *     MiReservePtes @ 0x1400F7CA0 (MiReservePtes.c)
 *     MiZeroAndFlushPtes @ 0x140123AB4 (MiZeroAndFlushPtes.c)
 *     MiDereferenceIoPages @ 0x140124B9C (MiDereferenceIoPages.c)
 *     MiReferenceIoPages @ 0x140124F3C (MiReferenceIoPages.c)
 *     MiIoSpaceIsConstant @ 0x1401253AC (MiIoSpaceIsConstant.c)
 *     MiMappingHasIoReferences @ 0x1401253CC (MiMappingHasIoReferences.c)
 *     MiMapWithLargePages @ 0x14014734C (MiMapWithLargePages.c)
 *     MiAssignInitialPageAttribute @ 0x140163838 (MiAssignInitialPageAttribute.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     MiPteInShadowRange @ 0x14017CA24 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14017CCC8 (MiWritePteShadow.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     MiShowBadMapper @ 0x14020CCEC (MiShowBadMapper.c)
 *     MiInsertPteTracker @ 0x140225958 (MiInsertPteTracker.c)
 */

unsigned __int64 __fastcall MiMapContiguousMemory(unsigned __int64 a1, __int64 a2, unsigned int a3, int a4)
{
  unsigned int v4; // r14d
  unsigned int v6; // eax
  unsigned __int64 v7; // rcx
  unsigned int v8; // r13d
  __int64 v9; // rbx
  unsigned __int64 v10; // r12
  int v11; // edx
  unsigned __int8 v12; // r8
  unsigned __int64 v13; // r9
  unsigned __int64 v14; // r10
  char v15; // r11
  BOOL v16; // esi
  unsigned __int64 v17; // r8
  __int64 v18; // r15
  unsigned __int64 v19; // rbx
  _BYTE *v20; // rsi
  __int64 v21; // r9
  char v22; // r11
  __int64 v23; // r9
  __int64 v24; // rax
  unsigned __int8 v25; // r9
  __int64 v26; // r9
  unsigned __int64 v27; // rdx
  unsigned __int64 v28; // rdx
  ULONG_PTR v29; // rax
  _QWORD *v30; // r15
  int v31; // r14d
  unsigned __int64 v32; // r13
  __int64 v33; // rax
  __int64 v34; // rdx
  unsigned __int64 ValidPte; // rsi
  __int64 v36; // r11
  unsigned __int64 v37; // rbx
  __int64 v38; // rdx
  __int64 v39; // r8
  ULONG_PTR BugCheckParameter4; // r9
  __int64 v41; // r10
  int v42; // edx
  unsigned __int64 v43; // rbx
  int ProtectionPfnCompatible; // eax
  __int64 CurrentIrql; // r9
  __int64 IsConstant; // rax
  unsigned __int8 v47; // r9
  int v48; // eax
  ULONG_PTR v49; // rbx
  unsigned __int64 v50; // rdx
  __int64 v51; // rdx
  __int64 v52; // r8
  __int64 v53; // r9
  __int64 v54; // r10
  __int64 v55; // rcx
  __int64 v57; // rcx
  unsigned int v58; // eax
  __int64 v59; // r8
  int v60; // [rsp+40h] [rbp-89h]
  unsigned __int16 v61; // [rsp+40h] [rbp-89h]
  unsigned int v62; // [rsp+44h] [rbp-85h]
  BOOL IsPfnInline; // [rsp+48h] [rbp-81h] BYREF
  unsigned __int64 v64; // [rsp+50h] [rbp-79h]
  __int64 v65; // [rsp+58h] [rbp-71h]
  int v66; // [rsp+60h] [rbp-69h]
  __int64 v67; // [rsp+68h] [rbp-61h] BYREF
  __int64 v68; // [rsp+70h] [rbp-59h]
  unsigned __int64 v69; // [rsp+78h] [rbp-51h]
  int v70; // [rsp+80h] [rbp-49h]
  ULONG_PTR v71; // [rsp+88h] [rbp-41h]
  _QWORD *v72; // [rsp+90h] [rbp-39h]
  unsigned __int64 v73; // [rsp+98h] [rbp-31h]
  unsigned __int64 v74; // [rsp+A0h] [rbp-29h]
  __int64 v75; // [rsp+A8h] [rbp-21h]
  char v76[16]; // [rsp+B0h] [rbp-19h] BYREF
  __int64 v77; // [rsp+C0h] [rbp-9h]
  unsigned __int64 v78; // [rsp+C8h] [rbp-1h]
  unsigned __int64 v79; // [rsp+D0h] [rbp+7h]
  int v80; // [rsp+DCh] [rbp+13h]
  unsigned __int64 v81; // [rsp+E0h] [rbp+17h]

  v66 = a4;
  v75 = a2;
  v4 = a3;
  if ( a3 == -1 )
    return 0LL;
  if ( a3 == 24 )
    return 0LL;
  if ( (a3 & 5) == 5 )
    return 0LL;
  v6 = a3 >> 3;
  if ( a3 >> 3 == 2 )
    return 0LL;
  v7 = a2 + a1;
  if ( v7 <= a1 )
  {
    if ( v7 )
      return 0LL;
  }
  v62 = 1;
  v8 = 1;
  v60 = 3;
  if ( v6 == 1 )
  {
    v8 = 0;
LABEL_12:
    v62 = v8;
    goto LABEL_13;
  }
  if ( v6 == 3 )
  {
    if ( (a3 & 7) != 0 )
      v8 = 2;
    goto LABEL_12;
  }
LABEL_13:
  v9 = a1 & 0xFFF;
  v65 = v9;
  v73 = (unsigned __int64)(v9 + a2 + 4095) >> 12;
  v64 = v73;
  v74 = a1 >> 12;
  v10 = a1 >> 12;
  IsPfnInline = MiIsPfnInline(a1 >> 12);
  v16 = IsPfnInline;
  if ( (v4 & 2) != 0 && (v12 & BYTE2(MiFlags)) != 0 )
    v4 &= ~2u;
  v17 = 0LL;
  v68 = 0LL;
  v69 = 0LL;
  v67 = 0LL;
  if ( (a1 & 0x1FFFFF) != 0 || v13 < 0x200000 || (v70 = v15 & 1, (v15 & 1) != 0) )
  {
LABEL_50:
    v28 = (unsigned int)v14;
    v70 = v66 & 1;
    if ( (v66 & 1) == 0 || (v28 = (unsigned int)(v14 + 1), (_DWORD)v14 != -1) )
    {
      v29 = MiReservePtes((__int64)&qword_14036D0A0, v28, v17);
      v30 = (_QWORD *)v29;
      if ( v29 )
      {
        v72 = (_QWORD *)v29;
        v31 = v4 & 7;
        v32 = v9 + ((__int64)(v29 << 25) >> 16);
        if ( v62 )
        {
          if ( v62 == 2 )
            v31 |= 0x18u;
        }
        else
        {
          v31 |= 8u;
        }
        ValidPte = MiMakeValidPte(v29, 0LL, v31 | 0xA0000000);
        v65 = 48 * v10 - 0x58000000000LL;
        v71 = 0LL;
        v68 = 0LL;
        v36 = 0LL;
        v67 = 0LL;
        v37 = 0LL;
        v69 = 0LL;
        while ( 1 )
        {
          if ( v36 )
          {
            v37 ^= (v37 ^ (v10 << 12)) & 0xFFFFFFFFF000LL;
          }
          else
          {
            if ( !MiIsPfnInline(v10) )
            {
              if ( v30 == v72 )
              {
                CurrentIrql = KeGetCurrentIrql();
                __writecr8(2uLL);
                IsConstant = MiIoSpaceIsConstant(v10, v41, v39, CurrentIrql);
                v69 = IsConstant;
                __writecr8(v47);
                BugCheckParameter4 = 0LL;
                if ( IsConstant )
                {
                  v48 = *(_DWORD *)(IsConstant + 40);
                  v62 = v48;
LABEL_91:
                  v31 &= 7u;
                  if ( v48 )
                  {
                    if ( v48 == 2 )
                      v31 |= 0x18u;
                  }
                  else
                  {
                    v31 |= 8u;
                  }
                  v37 = MiMakeValidPte((unsigned __int64)v30, v10, v31 | 0xA0000000);
                  goto LABEL_96;
                }
                v38 = v68;
              }
              v49 = v71;
              if ( !v71 )
              {
                v50 = v10;
                v49 = BugCheckParameter4;
                do
                {
                  if ( MiIsPfnInline(v50) )
                    break;
                  v49 += v54;
                  if ( v52 == v54 )
                    break;
                  v50 = v54 + v51;
                }
                while ( (v50 & 0x1FF) != 0 );
                if ( (int)MiReferenceIoPages(v54, v10, v49, v62, v53, (__int64)&v67) < 0 )
                {
                  MiZeroAndFlushPtes(v32);
                  MiReleasePtes((__int64)&qword_14036D0A0, v72, v73);
                  return 0LL;
                }
                v38 = v67;
              }
              v71 = v49 - 1;
              v48 = *(unsigned __int16 *)(*(_QWORD *)(v38 + 48) + 2 * ((v10 & 0xFFFFFFFFFLL) - *(_QWORD *)(v38 + 40))) >> 14;
              v68 = v67;
              goto LABEL_91;
            }
            v42 = v66 & 2;
            if ( (v66 & 2) != 0 && ((*(_BYTE *)(v39 + 34) & 7) != 5 || !(unsigned int)MiIsPfnFileOnly(v39)) )
              KeBugCheckEx(0x1Au, 0x1160CuLL, v10, 0LL, BugCheckParameter4);
            v43 = ValidPte;
            if ( *(_WORD *)(v39 + 32) == (_WORD)BugCheckParameter4
              && (!v42 || (*(_BYTE *)(v39 + 34) & 7) != 5 || !(unsigned int)MiIsPfnFileOnly(v39)) )
            {
              MiShowBadMapper(v10);
              v39 = v65;
            }
            if ( (*(_BYTE *)(v39 + 34) & 0xC0) == 0xC0 )
            {
              MiAssignInitialPageAttribute(v39, v62, v39, BugCheckParameter4);
              v39 = v65;
            }
            if ( *(unsigned __int8 *)(v39 + 34) >> 6 != v62 )
            {
              ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(v31, v39);
              LOBYTE(v31) = ProtectionPfnCompatible;
              v43 = MiMakeValidPte((unsigned __int64)v30, v10, ProtectionPfnCompatible | 0xA0000000);
            }
            v37 = (v43 ^ (v10 << 12)) & 0xFFFFFFFFF000LL ^ v43;
          }
LABEL_96:
          *v30 = v37;
          if ( (unsigned int)MiPteInShadowRange(v30) )
          {
            MiWritePteShadow(v55);
            v26 = 0LL;
          }
          ++v30;
          v17 = v65 + 48;
          ++v10;
          v65 += 48LL;
          if ( !--v64 )
            goto LABEL_102;
        }
      }
    }
    return 0LL;
  }
  if ( IsPfnInline )
    v18 = 48 * v10 - 0x58000000000LL;
  else
    v18 = 0LL;
  v19 = 0LL;
  if ( !v14 )
    goto LABEL_42;
  v20 = (_BYTE *)(v18 + 34);
  while ( !MiIsPfnInline(v19 + v10) )
  {
    if ( v18 )
      goto LABEL_40;
    if ( !v19 )
    {
      v23 = KeGetCurrentIrql();
      __writecr8(2uLL);
      v24 = MiIoSpaceIsConstant(a1 >> 12, v14, v17, v23);
      v17 = v24;
      v69 = v24;
      __writecr8(v25);
      if ( v24 )
      {
        v11 = *(_DWORD *)(v24 + 40);
        v19 = v14;
        goto LABEL_41;
      }
    }
    v11 = v60;
LABEL_37:
    ++v19;
    v20 += 48;
    if ( v19 >= v14 )
      goto LABEL_41;
  }
  if ( (v22 & 2) != 0 && ((*v20 & 7) != 5 || !(unsigned int)MiIsPfnFileOnly((__int64)(v20 - 34))) )
    KeBugCheckEx(0x1Au, 0x1160CuLL, v19 + v10, 0LL, 0LL);
  if ( v18 )
  {
    if ( (*v20 & 0xC0) == 0xC0 )
    {
      MiAssignInitialPageAttribute(v20 - 34, v8, v17, v21);
      v17 = v69;
      v14 = v64;
    }
    if ( (unsigned __int8)*v20 >> 6 == v8 )
    {
      v11 = v8;
      v60 = v8;
      goto LABEL_37;
    }
  }
LABEL_40:
  v11 = v60;
LABEL_41:
  v16 = IsPfnInline;
LABEL_42:
  if ( v19 != v14 )
  {
LABEL_49:
    v9 = v65;
    goto LABEL_50;
  }
  if ( v16 || v17 )
    goto LABEL_56;
  if ( (int)MiReferenceIoPages(1, a1 >> 12, v14, v8, (__int64)&IsPfnInline, (__int64)&v67) < 0 )
  {
LABEL_48:
    LODWORD(v14) = v64;
    goto LABEL_49;
  }
  v27 = a1 >> 12;
  if ( !IsPfnInline && IsPfnInline )
    goto LABEL_47;
  LODWORD(v14) = v64;
  v61 = *(_WORD *)(*(_QWORD *)(v67 + 48) + 2 * ((v27 & 0xFFFFFFFFFLL) - *(_QWORD *)(v67 + 40)));
  v68 = v67;
  v11 = v61 >> 14;
LABEL_56:
  v33 = MiMapWithLargePages(a1 >> 12, v14, v4, v11, 9);
  v26 = 0LL;
  v32 = v33;
  if ( !v33 )
  {
    if ( !v16 && !v69 )
    {
      v27 = a1 >> 12;
LABEL_47:
      MiDereferenceIoPages(1LL, v27, v64, v26);
    }
    goto LABEL_48;
  }
LABEL_102:
  v57 = v68;
  if ( v68 )
  {
    MiMappingHasIoReferences(v32, v34, v17, v26);
    v57 = v68;
    LODWORD(v26) = 0;
  }
  if ( (dword_1403E310C & 1) != 0 )
  {
    v81 = v74;
    v78 = v32;
    v79 = a1 & 0xFFFFFFFFFFFFF000uLL;
    v80 = a1 & 0xFFF;
    v58 = v26;
    if ( v57 )
      v58 = 1;
    v77 = v75;
    v59 = v58 | 2;
    if ( v70 == (_DWORD)v26 )
      v59 = v58;
    MiInsertPteTracker(v76, 1LL, v59, v62);
  }
  return v32;
}
