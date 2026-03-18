/*
 * XREFs of ?DefragmentRange@VIDMM_LINEAR_POOL@@QEAAX_K0W4VIDMM_DEFRAGMENT_DIRECTION@@P6AXPEAU_VIDMM_GLOBAL_ALLOC@@0@ZP6A_N2@Z4P6AK2@ZPEA_K@Z @ 0x1C00A9378
 * Callers:
 *     ?DefragmentResourcesOverRange@VIDMM_SEGMENT@@QEAAJ_K0W4VIDMM_DEFRAGMENT_DIRECTION@@PEA_NPEAPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00A17A0 (-DefragmentResourcesOverRange@VIDMM_SEGMENT@@QEAAJ_K0W4VIDMM_DEFRAGMENT_DIRECTION@@PEA_NPEAPEAU_.c)
 *     ?ReserveVPRResource@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@EE@Z @ 0x1C00A3448 (-ReserveVPRResource@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@EE@Z.c)
 * Callees:
 *     ?FreeBlock@VIDMM_LINEAR_POOL@@IEAAXPEAU_VIDMM_POOL_BLOCK@@@Z @ 0x1C004B9FC (-FreeBlock@VIDMM_LINEAR_POOL@@IEAAXPEAU_VIDMM_POOL_BLOCK@@@Z.c)
 *     ?IsMovableResourceCB@VIDMM_SEGMENT@@SA_NPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00A20C0 (-IsMovableResourceCB@VIDMM_SEGMENT@@SA_NPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?IsNonOverlappingResourceCB@VIDMM_SEGMENT@@SA_NPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00A2118 (-IsNonOverlappingResourceCB@VIDMM_SEGMENT@@SA_NPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?UpdatePendingResourceReserveCB@VIDMM_SEGMENT@@SAXPEAU_VIDMM_GLOBAL_ALLOC@@_K@Z @ 0x1C00A430C (-UpdatePendingResourceReserveCB@VIDMM_SEGMENT@@SAXPEAU_VIDMM_GLOBAL_ALLOC@@_K@Z.c)
 *     ?PatchGapsWithFreeBlocks@VIDMM_LINEAR_POOL@@QEAAX_K0@Z @ 0x1C00AA09C (-PatchGapsWithFreeBlocks@VIDMM_LINEAR_POOL@@QEAAX_K0@Z.c)
 */

void __fastcall VIDMM_LINEAR_POOL::DefragmentRange(
        unsigned __int64 *a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 *a9)
{
  bool v9; // r15
  __int64 v10; // rbx
  unsigned __int64 v12; // r13
  unsigned __int64 *v14; // r14
  unsigned __int64 *v15; // rdi
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // r12
  unsigned __int8 v18; // al
  int v19; // ecx
  bool IsMovableResourceCB; // al
  _QWORD *v21; // rax
  __int64 v22; // rcx
  _QWORD *v23; // rax
  _QWORD *v24; // rax
  unsigned __int64 v25; // rdx
  unsigned __int64 *v26; // rcx
  _QWORD *v27; // rax
  unsigned __int64 v28; // rdx
  unsigned __int64 *v29; // rcx
  unsigned __int64 v30; // r8
  __int64 v31; // rcx
  bool v32; // zf
  int v33; // [rsp+68h] [rbp+10h]
  unsigned __int64 v34; // [rsp+70h] [rbp+18h]

  if ( a2 != a3 )
  {
    v34 = a3;
    v9 = 0;
    v10 = a2;
    v12 = a2;
    if ( a4 )
    {
      v10 = a3;
      v14 = (unsigned __int64 *)a1[10];
    }
    else
    {
      v14 = (unsigned __int64 *)a1[9];
    }
    if ( v14 != a1 + 9 )
    {
      while ( 1 )
      {
        v15 = v14 - 5;
        if ( a4 )
          v14 = (unsigned __int64 *)v14[1];
        else
          v14 = (unsigned __int64 *)*v14;
        v16 = *v15;
        v17 = *v15 + v15[1];
        if ( v17 <= v12 )
        {
          if ( a4 )
            break;
          goto LABEL_62;
        }
        if ( v16 >= a3 )
        {
          if ( !a4 )
            break;
          goto LABEL_62;
        }
        v18 = *((_BYTE *)v15 + 56);
        if ( v18 == 2 )
        {
          v19 = 2;
        }
        else
        {
          if ( v18 <= 2u )
            goto LABEL_25;
          if ( v18 <= 4u )
          {
            IsMovableResourceCB = VIDMM_SEGMENT::IsMovableResourceCB((struct _VIDMM_GLOBAL_ALLOC *)v15[2]);
            a3 = v34;
            v19 = !IsMovableResourceCB;
            v33 = v19;
            goto LABEL_28;
          }
          if ( v18 > 7u )
          {
LABEL_25:
            if ( g_IsInternalRelease )
            {
              v21 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v16, a2, a3);
              v21[3] = 270LL;
              v21[4] = 9LL;
              v21[5] = 0LL;
              v21[6] = 0LL;
              v21[7] = 0LL;
              WdLogEvent5_WdCriticalError(v21);
              a3 = v34;
            }
            v19 = v33;
            goto LABEL_28;
          }
          v19 = 1;
        }
        v33 = v19;
LABEL_28:
        if ( !v19 )
        {
          if ( VIDMM_SEGMENT::IsNonOverlappingResourceCB((struct _VIDMM_GLOBAL_ALLOC *)v15[2]) )
          {
            if ( a4 )
            {
              if ( v10 - v15[1] < v17 )
                v10 = v17;
            }
            else
            {
              a2 = *v15;
              if ( v10 + v15[1] > *v15 )
                v10 = *v15;
            }
          }
          v30 = v15[2];
          v31 = *(unsigned int *)(v30 + 32) - 1LL;
          if ( *(_DWORD *)(v30 + 32) )
          {
            if ( !a4 )
            {
              v10 = ~v31 & (v31 + v10);
              goto LABEL_54;
            }
            v10 = v15[1] + (~v31 & (v10 - v15[1]));
          }
          if ( a4 )
          {
            v10 -= v15[1];
            if ( *v15 != v10 )
            {
              *v15 = v10;
              v9 = 1;
            }
          }
          else
          {
LABEL_54:
            v32 = *v15 == v10;
            if ( *v15 != v10 )
              *v15 = v10;
            v9 = !v32;
            v10 += v15[1];
          }
          if ( v9 )
            VIDMM_SEGMENT::UpdatePendingResourceReserveCB((struct _VIDMM_GLOBAL_ALLOC *)v30, *v15);
          v9 = 0;
          goto LABEL_62;
        }
        v22 = (unsigned int)(v19 - 1);
        if ( (_DWORD)v22 )
        {
          if ( (_DWORD)v22 == 1 )
          {
            if ( *v15 == v12 && v17 == a3 )
              return;
            v24 = v15 + 5;
            v25 = v15[5];
            v26 = (unsigned __int64 *)v15[6];
            if ( *(unsigned __int64 **)(v25 + 8) != v15 + 5 || (_QWORD *)*v26 != v24 )
              __fastfail(3u);
            *v26 = v25;
            *(_QWORD *)(v25 + 8) = v26;
            *v24 = 0LL;
            v27 = v15 + 3;
            v15[6] = 0LL;
            v28 = v15[3];
            v29 = (unsigned __int64 *)v15[4];
            if ( *(unsigned __int64 **)(v28 + 8) != v15 + 3 || (_QWORD *)*v29 != v27 )
              __fastfail(3u);
            *v29 = v28;
            *(_QWORD *)(v28 + 8) = v29;
            *v27 = 0LL;
            v15[4] = 0LL;
            VIDMM_LINEAR_POOL::FreeBlock((VIDMM_LINEAR_POOL *)a1, (struct _VIDMM_POOL_BLOCK *)v15);
          }
          else if ( g_IsInternalRelease )
          {
            v23 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v22, a2, a3);
            v23[3] = 270LL;
            v23[4] = 9LL;
            v23[5] = 0LL;
            v23[6] = 0LL;
            v23[7] = 0LL;
            WdLogEvent5_WdCriticalError(v23);
          }
        }
        else
        {
          v10 = *v15;
          if ( !a4 )
            v10 += v15[1];
        }
LABEL_62:
        if ( v14 == a1 + 9 )
          break;
        a3 = v34;
      }
    }
    if ( a9 )
      *a9 = v10;
    VIDMM_LINEAR_POOL::PatchGapsWithFreeBlocks((VIDMM_LINEAR_POOL *)a1, v12, a1[1]);
  }
}
