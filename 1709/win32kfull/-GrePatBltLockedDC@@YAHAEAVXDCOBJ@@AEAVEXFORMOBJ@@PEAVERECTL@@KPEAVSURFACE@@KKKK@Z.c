/*
 * XREFs of ?GrePatBltLockedDC@@YAHAEAVXDCOBJ@@AEAVEXFORMOBJ@@PEAVERECTL@@KPEAVSURFACE@@KKKK@Z @ 0x1C001E104
 * Callers:
 *     NtGdiPatBlt @ 0x1C001D870 (NtGdiPatBlt.c)
 *     ?GrePolyPatBltInternal@@YAHAEAVXDCOBJ@@KPEAU_POLYPATBLT@@KKKKKK@Z @ 0x1C001DD20 (-GrePolyPatBltInternal@@YAHAEAVXDCOBJ@@KPEAU_POLYPATBLT@@KKKKKK@Z.c)
 *     ?NtGdiFlushUserBatchInternal@@YAXPEAX@Z @ 0x1C0029360 (-NtGdiFlushUserBatchInternal@@YAXPEAX@Z.c)
 * Callees:
 *     ?bEmpty@ERECTL@@QEAAHXZ @ 0x1C00183B8 (-bEmpty@ERECTL@@QEAAHXZ.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C002BF34 (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C002C160 (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0145690 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall GrePatBltLockedDC(
        __int64 this,
        struct EXFORMOBJ *a2,
        struct ERECTL *a3,
        int a4,
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
  __int64 v14; // rcx
  __int64 v15; // rbp
  __int64 v16; // rdx
  __int64 v17; // r9
  __int64 v18; // r10
  __int64 v19; // r8
  __int64 v20; // r11
  __int64 v21; // rdi
  int v22; // r9d
  int v23; // r10d
  int v24; // r8d
  int v25; // ecx
  _DWORD *v26; // rax
  unsigned int *v27; // rcx
  __int64 v28; // r13
  unsigned int v29; // ebx
  unsigned int v30; // edi
  unsigned int v31; // esi
  unsigned int v32; // ebp
  __int64 v33; // r9
  __int64 v34; // rcx
  int v37; // eax
  ULONG v38; // ecx
  int v39; // eax
  _DWORD *v40; // rdi
  struct REGION *v41; // rax
  __int64 v42; // [rsp+20h] [rbp-88h]
  _OWORD v43[4]; // [rsp+60h] [rbp-48h] BYREF
  _DWORD *v44; // [rsp+B8h] [rbp+10h]

  v9 = a4;
  v44 = 0LL;
  v11 = (XDCOBJ *)this;
  v12 = 1;
  if ( (*((_DWORD *)a5 + 29) & 8) != 0 || *((_QWORD *)a5 + 29) )
  {
    this = 512LL;
    if ( (*((_WORD *)a5 + 51) & 0x200) != 0 )
      goto LABEL_26;
  }
  v13 = *((_DWORD *)a5 + 28);
  if ( (v13 & 0x800) != 0 )
  {
    v37 = UserSurfaceAccessCheck(*((_QWORD *)a5 + 73), a2);
  }
  else
  {
    if ( (v13 & 0x10000000) == 0 )
      goto LABEL_5;
    v37 = UserScreenAccessCheck(this, a2);
  }
  if ( !v37 )
  {
LABEL_26:
    v38 = 5;
LABEL_27:
    EngSetLastError(v38);
    return 0LL;
  }
LABEL_5:
  v14 = *(_QWORD *)v11;
  if ( (*(_DWORD *)(*(_QWORD *)v11 + 36LL) & 0x10000) != 0 )
  {
    v38 = 87;
    goto LABEL_27;
  }
  v15 = *(int *)a3;
  v16 = *(_DWORD *)(v14 + 40) & 1LL;
  v17 = *(int *)(v14 + 8 * v16 + 1432);
  if ( (unsigned __int64)(v17 + v15 + 0x80000000LL) <= 0xFFFFFFFF )
  {
    v18 = *((int *)a3 + 2);
    if ( (unsigned __int64)(v17 + v18 + 0x80000000LL) <= 0xFFFFFFFF )
    {
      v19 = *(int *)(v14 + 8 * v16 + 1436);
      v20 = *((int *)a3 + 1);
      if ( (unsigned __int64)(v19 + v20 + 0x80000000LL) <= 0xFFFFFFFF )
      {
        v21 = *((int *)a3 + 3);
        if ( (unsigned __int64)(v19 + v21 + 0x80000000LL) <= 0xFFFFFFFF )
        {
          v22 = v15 + v17;
          *(_DWORD *)a3 = v22;
          v23 = *(_DWORD *)(v14 + 8 * v16 + 1432) + v18;
          *((_DWORD *)a3 + 2) = v23;
          v24 = v20 + *(_DWORD *)(v14 + 8 * v16 + 1436);
          *((_DWORD *)a3 + 1) = v24;
          v25 = v21 + *(_DWORD *)(v14 + 8 * v16 + 1436);
          *((_DWORD *)a3 + 3) = v25;
          if ( v22 < v23 && v24 < v25 )
          {
            if ( (v26 = *(_DWORD **)v11, v22 >= *(_DWORD *)(*(_QWORD *)v11 + 1416LL))
              && v23 <= v26[356]
              && v24 >= v26[355]
              && v25 <= v26[357]
              || (v40 = v26 + 550,
                  v44 = v26 + 550,
                  v41 = XDCOBJ::prgnEffRao(v11),
                  XCLIPOBJ::vSetup((XCLIPOBJ *)v40, v41, a3, 2),
                  *(_OWORD *)a3 = *(_OWORD *)(v40 + 1),
                  !ERECTL::bEmpty(a3)) )
            {
              if ( (((unsigned __int8)v9 ^ (unsigned __int8)(16 * v9)) & 0xF0) != 0 )
              {
                v27 = *(unsigned int **)(*(_QWORD *)v11 + 80LL);
                v28 = *(_QWORD *)v11 + 1600LL;
                v16 = v27[2];
                if ( (v16 & 1) != 0
                  || (*(_DWORD *)(*(_QWORD *)v11 + 332LL) & 1) != 0
                  || (v39 = *(_DWORD *)(*(_QWORD *)v11 + 1728LL), (v39 & 1) != 0)
                  && *(_DWORD *)(*(_QWORD *)v11 + 1648LL) != a6
                  || (v39 & 2) != 0 && *(_DWORD *)(*(_QWORD *)v11 + 1652LL) != a7 )
                {
                  v29 = v27[10];
                  v30 = v27[8];
                  v31 = v27[11];
                  v32 = v27[9];
                  v27[2] = v16 & 0xFFFFFFFE;
                  *(_DWORD *)(*(_QWORD *)v11 + 332LL) &= ~1u;
                  v42 = *((_QWORD *)a5 + 16);
                  v33 = *(_QWORD *)(*(_QWORD *)v11 + 96LL);
                  *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v11 + 80LL) + 40LL) = a6;
                  *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v11 + 80LL) + 32LL) = a7;
                  *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v11 + 80LL) + 44LL) = a8;
                  *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v11 + 80LL) + 36LL) = a9;
                  EBRUSHOBJ::vInitBrush(v28, *(_QWORD *)v11, *(_QWORD *)(*(_QWORD *)v11 + 144LL), v33, v42, a5, 1);
                  *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v11 + 80LL) + 40LL) = v29;
                  *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v11 + 80LL) + 32LL) = v30;
                  *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v11 + 80LL) + 44LL) = v31;
                  v9 = a4;
                  *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v11 + 80LL) + 36LL) = v32;
                }
              }
              else
              {
                v28 = 0LL;
              }
              if ( (*(_DWORD *)(*(_QWORD *)v11 + 36LL) & 0xE0) != 0 && (!v28 || (*(_DWORD *)(v28 + 128) & 0x100) == 0) )
              {
                v43[0] = *(_OWORD *)a3;
                XDCOBJ::vAccumulateTight(v11, (struct ECLIPOBJ *)v16, (struct ERECTL *)v43);
              }
              ++*((_DWORD *)a5 + 23);
              v34 = *(_QWORD *)v11 + 1592LL;
              if ( (*((_DWORD *)a5 + 28) & 1) != 0 )
                return (unsigned int)(*(__int64 (__fastcall **)(char *, _QWORD, _QWORD, _DWORD *, _QWORD, struct ERECTL *, _QWORD, _QWORD, __int64, __int64, int))(*((_QWORD *)a5 + 6) + 2848LL))(
                                       (char *)a5 + 24,
                                       0LL,
                                       0LL,
                                       v44,
                                       0LL,
                                       a3,
                                       0LL,
                                       0LL,
                                       v28,
                                       v34,
                                       v9);
              else
                return (unsigned int)((__int64 (__fastcall *)(char *, _QWORD, _QWORD, _DWORD *, _QWORD, struct ERECTL *, _QWORD, _QWORD, __int64, __int64, int))EngBitBlt)(
                                       (char *)a5 + 24,
                                       0LL,
                                       0LL,
                                       v44,
                                       0LL,
                                       a3,
                                       0LL,
                                       0LL,
                                       v28,
                                       v34,
                                       v9);
            }
          }
        }
      }
    }
  }
  return v12;
}
