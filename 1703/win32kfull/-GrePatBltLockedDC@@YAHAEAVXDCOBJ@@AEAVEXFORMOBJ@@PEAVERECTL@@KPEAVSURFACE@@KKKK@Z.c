/*
 * XREFs of ?GrePatBltLockedDC@@YAHAEAVXDCOBJ@@AEAVEXFORMOBJ@@PEAVERECTL@@KPEAVSURFACE@@KKKK@Z @ 0x1C0092670
 * Callers:
 *     ?NtGdiFlushUserBatchInternal@@YAXPEAX@Z @ 0x1C0077C10 (-NtGdiFlushUserBatchInternal@@YAXPEAX@Z.c)
 *     NtGdiPatBlt @ 0x1C00903D0 (NtGdiPatBlt.c)
 *     ?GrePolyPatBltInternal@@YAHAEAVXDCOBJ@@KPEAU_POLYPATBLT@@KKKKKK@Z @ 0x1C0092270 (-GrePolyPatBltInternal@@YAHAEAVXDCOBJ@@KPEAU_POLYPATBLT@@KKKKKK@Z.c)
 * Callees:
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C0074ECC (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C0075128 (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ?bEmpty@ERECTL@@QEAAHXZ @ 0x1C0081778 (-bEmpty@ERECTL@@QEAAHXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C01400F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall GrePatBltLockedDC(
        __int64 this,
        struct EXFORMOBJ *a2,
        struct ERECTL *a3,
        __int64 a4,
        struct SURFACE *a5,
        unsigned int a6,
        unsigned int a7,
        unsigned int a8,
        unsigned int a9)
{
  int v9; // esi
  XDCOBJ *v11; // r12
  unsigned int v12; // ebx
  int v13; // eax
  int v14; // eax
  __int64 v15; // rdx
  ULONG v16; // ecx
  __int64 v17; // rbp
  __int64 v18; // rcx
  __int64 v19; // r9
  __int64 v20; // r10
  __int64 v21; // r8
  __int64 v22; // r11
  __int64 v23; // rdi
  int v24; // r9d
  int v25; // r10d
  int v26; // r8d
  int v27; // ecx
  _DWORD *v28; // rax
  _DWORD *v29; // rdi
  struct REGION *v30; // rax
  __int64 v31; // r13
  int v32; // eax
  int v33; // ebx
  int v34; // edi
  int v35; // esi
  int v36; // ebp
  __int64 v37; // r9
  __int64 v38; // rcx
  __int64 v41; // [rsp+20h] [rbp-88h]
  __m128i v42[4]; // [rsp+60h] [rbp-48h] BYREF
  _DWORD *v43; // [rsp+B8h] [rbp+10h]
  int v44; // [rsp+C8h] [rbp+20h]

  v44 = a4;
  v9 = a4;
  v43 = 0LL;
  v11 = (XDCOBJ *)this;
  v12 = 1;
  if ( (*((_DWORD *)a5 + 29) & 8) != 0 || *((_QWORD *)a5 + 29) )
  {
    this = 512LL;
    if ( (*((_WORD *)a5 + 51) & 0x200) != 0 )
      goto LABEL_40;
  }
  v13 = *((_DWORD *)a5 + 28);
  if ( (v13 & 0x800) != 0 )
  {
    v14 = UserSurfaceAccessCheck(*((_QWORD *)a5 + 73), a2, a3, a4);
  }
  else
  {
    if ( (v13 & 0x10000000) == 0 )
      goto LABEL_9;
    v14 = UserScreenAccessCheck(this, a2, a3, a4);
  }
  if ( !v14 )
  {
LABEL_40:
    v16 = 5;
    goto LABEL_41;
  }
LABEL_9:
  v15 = *(_QWORD *)v11;
  if ( (*(_DWORD *)(*(_QWORD *)v11 + 36LL) & 0x10000) != 0 )
  {
    v16 = 87;
LABEL_41:
    EngSetLastError(v16);
    return 0LL;
  }
  v17 = *(int *)a3;
  v18 = (*(_BYTE *)(v15 + 40) & 1) != 0 ? 8 : 0;
  v19 = *(int *)(v18 + v15 + 1432);
  if ( (unsigned __int64)(v19 + v17 + 0x80000000LL) <= 0xFFFFFFFF )
  {
    v20 = *((int *)a3 + 2);
    if ( (unsigned __int64)(v19 + v20 + 0x80000000LL) <= 0xFFFFFFFF )
    {
      v21 = *(int *)(v18 + v15 + 1436);
      v22 = *((int *)a3 + 1);
      if ( (unsigned __int64)(v21 + v22 + 0x80000000LL) <= 0xFFFFFFFF )
      {
        v23 = *((int *)a3 + 3);
        if ( (unsigned __int64)(v21 + v23 + 0x80000000LL) <= 0xFFFFFFFF )
        {
          v24 = v17 + v19;
          *(_DWORD *)a3 = v24;
          v25 = *(_DWORD *)(v18 + v15 + 1432) + v20;
          *((_DWORD *)a3 + 2) = v25;
          v26 = v22 + *(_DWORD *)(v18 + v15 + 1436);
          *((_DWORD *)a3 + 1) = v26;
          v27 = v23 + *(_DWORD *)(v18 + v15 + 1436);
          *((_DWORD *)a3 + 3) = v27;
          if ( v24 < v25 && v26 < v27 )
          {
            if ( (v28 = *(_DWORD **)v11, v24 >= *(_DWORD *)(*(_QWORD *)v11 + 1416LL))
              && v25 <= v28[356]
              && v26 >= v28[355]
              && v27 <= v28[357]
              || (v29 = v28 + 550,
                  v43 = v28 + 550,
                  v30 = XDCOBJ::prgnEffRao((DC **)v11),
                  XCLIPOBJ::vSetup((XCLIPOBJ *)v29, v30, a3, 2),
                  *(_OWORD *)a3 = *(_OWORD *)(v29 + 1),
                  !ERECTL::bEmpty(a3)) )
            {
              if ( (((unsigned __int8)v9 ^ (unsigned __int8)(16 * v9)) & 0xF0) != 0 )
              {
                v15 = *(_QWORD *)(*(_QWORD *)v11 + 80LL);
                v31 = *(_QWORD *)v11 + 1600LL;
                if ( (*(_DWORD *)(v15 + 8) & 1) != 0
                  || (*(_DWORD *)(*(_QWORD *)v11 + 332LL) & 1) != 0
                  || (v32 = *(_DWORD *)(*(_QWORD *)v11 + 1728LL), (v32 & 1) != 0)
                  && *(_DWORD *)(*(_QWORD *)v11 + 1648LL) != a6
                  || (v32 & 2) != 0 && *(_DWORD *)(*(_QWORD *)v11 + 1652LL) != a7 )
                {
                  v33 = *(_DWORD *)(v15 + 40);
                  v34 = *(_DWORD *)(v15 + 32);
                  v35 = *(_DWORD *)(v15 + 44);
                  v36 = *(_DWORD *)(v15 + 36);
                  *(_DWORD *)(v15 + 8) &= ~1u;
                  *(_DWORD *)(*(_QWORD *)v11 + 332LL) &= ~1u;
                  v41 = *((_QWORD *)a5 + 16);
                  v37 = *(_QWORD *)(*(_QWORD *)v11 + 96LL);
                  *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v11 + 80LL) + 40LL) = a6;
                  *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v11 + 80LL) + 32LL) = a7;
                  *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v11 + 80LL) + 44LL) = a8;
                  *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v11 + 80LL) + 36LL) = a9;
                  EBRUSHOBJ::vInitBrush(v31, *(_QWORD *)v11, *(_QWORD *)(*(_QWORD *)v11 + 144LL), v37, v41, a5, 1);
                  *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v11 + 80LL) + 40LL) = v33;
                  *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v11 + 80LL) + 32LL) = v34;
                  *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v11 + 80LL) + 44LL) = v35;
                  v9 = v44;
                  *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v11 + 80LL) + 36LL) = v36;
                }
              }
              else
              {
                v31 = 0LL;
              }
              if ( (*(_DWORD *)(*(_QWORD *)v11 + 36LL) & 0xE0) != 0 && (!v31 || (*(_DWORD *)(v31 + 128) & 0x100) == 0) )
              {
                v42[0] = *(__m128i *)a3;
                XDCOBJ::vAccumulateTight(v11, (struct ECLIPOBJ *)v15, v42);
              }
              ++*((_DWORD *)a5 + 23);
              v38 = *(_QWORD *)v11 + 1592LL;
              if ( (*((_DWORD *)a5 + 28) & 1) != 0 )
                return (unsigned int)(*(__int64 (__fastcall **)(char *, _QWORD, _QWORD, _DWORD *, _QWORD, struct ERECTL *, _QWORD, _QWORD, __int64, __int64, int))(*((_QWORD *)a5 + 6) + 2848LL))(
                                       (char *)a5 + 24,
                                       0LL,
                                       0LL,
                                       v43,
                                       0LL,
                                       a3,
                                       0LL,
                                       0LL,
                                       v31,
                                       v38,
                                       v9);
              else
                return (unsigned int)((__int64 (__fastcall *)(char *, _QWORD, _QWORD, _DWORD *, _QWORD, struct ERECTL *, _QWORD, _QWORD, __int64, __int64, int))EngBitBlt)(
                                       (char *)a5 + 24,
                                       0LL,
                                       0LL,
                                       v43,
                                       0LL,
                                       a3,
                                       0LL,
                                       0LL,
                                       v31,
                                       v38,
                                       v9);
            }
          }
        }
      }
    }
  }
  return v12;
}
