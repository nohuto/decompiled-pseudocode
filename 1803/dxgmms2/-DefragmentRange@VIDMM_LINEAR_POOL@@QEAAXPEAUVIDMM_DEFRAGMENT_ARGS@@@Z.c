/*
 * XREFs of ?DefragmentRange@VIDMM_LINEAR_POOL@@QEAAXPEAUVIDMM_DEFRAGMENT_ARGS@@@Z @ 0x1C00BA37C
 * Callers:
 *     ?Defragment@VIDMM_MEMORY_SEGMENT@@UEAAX_K0@Z @ 0x1C00B0730 (-Defragment@VIDMM_MEMORY_SEGMENT@@UEAAX_K0@Z.c)
 *     ?DefragmentResourcesOverRange@VIDMM_SEGMENT@@QEAAJ_K0W4VIDMM_DEFRAGMENT_DIRECTION@@PEA_NPEAPEAU_VIDMM_GLOBAL_ALLOC@@PEA_K@Z @ 0x1C00B212C (-DefragmentResourcesOverRange@VIDMM_SEGMENT@@QEAAJ_K0W4VIDMM_DEFRAGMENT_DIRECTION@@PEA_NPEAPEAU_.c)
 *     ?ReserveVPRResource@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@EE@Z @ 0x1C00B4300 (-ReserveVPRResource@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@EE@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0017A50 (_guard_dispatch_icall_nop.c)
 *     ?FreeBlock@VIDMM_LINEAR_POOL@@IEAAXPEAU_VIDMM_POOL_BLOCK@@@Z @ 0x1C0053BE8 (-FreeBlock@VIDMM_LINEAR_POOL@@IEAAXPEAU_VIDMM_POOL_BLOCK@@@Z.c)
 *     ?PatchGapsWithFreeBlocks@VIDMM_LINEAR_POOL@@QEAAX_K0@Z @ 0x1C00BB39C (-PatchGapsWithFreeBlocks@VIDMM_LINEAR_POOL@@QEAAX_K0@Z.c)
 */

void __fastcall VIDMM_LINEAR_POOL::DefragmentRange(VIDMM_LINEAR_POOL *this, struct VIDMM_DEFRAGMENT_ARGS *a2)
{
  unsigned __int64 v2; // r9
  unsigned __int64 v4; // r8
  __int64 v6; // rax
  __int64 v7; // rbx
  char *v8; // r14
  char *v9; // r10
  int v10; // r11d
  __int64 v11; // rdx
  __int64 *v12; // rsi
  char *v13; // r15
  __int64 v14; // rbp
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // r12
  unsigned __int64 v17; // rax
  __int64 v18; // rax
  unsigned __int8 v19; // al
  char v20; // al
  _QWORD *v21; // rax
  _QWORD *v22; // rax
  __int64 v23; // rcx
  char **v24; // rax
  _QWORD *v25; // rax
  __int64 v26; // rdx
  _QWORD *v27; // rcx
  __int64 v28; // r15
  char v29; // bp
  __int64 v30; // rcx
  unsigned int v31; // eax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rdx
  unsigned __int64 v35; // rcx
  int v36; // eax
  __int64 v37; // [rsp+20h] [rbp-48h]
  unsigned __int64 v38; // [rsp+28h] [rbp-40h]
  __int64 v39; // [rsp+78h] [rbp+10h]
  char v40; // [rsp+78h] [rbp+10h]
  int v41; // [rsp+80h] [rbp+18h]
  __int64 v42; // [rsp+88h] [rbp+20h]

  v2 = *(_QWORD *)a2;
  v4 = *((_QWORD *)a2 + 1);
  v6 = *((int *)a2 + 4);
  v38 = *(_QWORD *)a2;
  v42 = v4;
  if ( *(_QWORD *)a2 == v4 )
  {
    v7 = v39;
    goto LABEL_81;
  }
  v7 = *(_QWORD *)a2;
  if ( (_DWORD)v6 )
  {
    v7 = *((_QWORD *)a2 + 1);
    v8 = (char *)*((_QWORD *)this + 10);
  }
  else
  {
    v8 = (char *)*((_QWORD *)this + 9);
  }
  v9 = (char *)this + 72;
  if ( v8 == (char *)this + 72 )
  {
LABEL_77:
    v17 = *((_QWORD *)this + 1);
    *((_QWORD *)a2 + 10) = v17;
    goto LABEL_78;
  }
  v10 = v39;
  v11 = *((int *)a2 + 4);
  v41 = v39;
  v37 = v6;
  while ( 1 )
  {
    v12 = (__int64 *)(v8 - 40);
    v13 = v8;
    v14 = v7;
    if ( v11 )
      v8 = (char *)*((_QWORD *)v8 + 1);
    else
      v8 = *(char **)v8;
    v15 = *v12;
    v16 = *v12 + v12[1];
    if ( v16 <= v2 )
    {
      if ( v11 )
        goto LABEL_12;
      goto LABEL_72;
    }
    if ( v15 >= v4 )
      break;
    v18 = *v12 + v12[1];
    if ( v11 )
      v18 = *v12;
    *((_QWORD *)a2 + 10) = v18;
    v19 = *((_BYTE *)v12 + 56);
    if ( v19 == 2 )
    {
      v10 = 2;
    }
    else
    {
      if ( v19 <= 2u )
        goto LABEL_25;
      if ( v19 <= 4u )
      {
        v20 = (*((__int64 (__fastcall **)(__int64))a2 + 4))(v12[2]);
        v11 = v37;
        v9 = (char *)this + 72;
        v4 = v42;
        v2 = v38;
        v10 = v20 == 0;
      }
      else
      {
        if ( v19 > 7u )
        {
LABEL_25:
          if ( g_IsInternalRelease )
          {
            v21 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v15, v11, v4);
            v21[5] = 0LL;
            v21[6] = 0LL;
            v21[7] = 0LL;
            v21[3] = 270LL;
            v21[4] = 9LL;
            WdLogEvent5_WdCriticalError(v21);
            v11 = v37;
            v9 = (char *)this + 72;
            v4 = v42;
            v2 = v38;
            v10 = v41;
          }
          goto LABEL_29;
        }
        v10 = 1;
      }
    }
    v41 = v10;
LABEL_29:
    if ( !v10 )
    {
      v28 = v12[2];
      v29 = 0;
      v40 = 0;
      if ( (*((unsigned __int8 (__fastcall **)(__int64, __int64, unsigned __int64, unsigned __int64))a2 + 5))(
             v28,
             v11,
             v4,
             v2) )
      {
        v30 = v12[1];
        if ( v37 )
        {
          if ( v7 - v30 >= v16 )
            goto LABEL_54;
          if ( (*((_DWORD *)a2 + 16) & 1) == 0 )
          {
            v7 = v16;
            goto LABEL_54;
          }
          goto LABEL_53;
        }
        if ( v30 + v7 > (unsigned __int64)*v12 )
        {
          if ( (*((_DWORD *)a2 + 16) & 1) == 0 )
          {
            v7 = *v12;
            goto LABEL_54;
          }
LABEL_53:
          v29 = 1;
        }
      }
LABEL_54:
      v31 = (*((__int64 (__fastcall **)(__int64))a2 + 7))(v12[2]);
      v32 = v31 - 1LL;
      if ( v31 )
      {
        v33 = ~v32;
        if ( v37 )
          v7 = v12[1] + (v33 & (v7 - v12[1]));
        else
          v7 = v33 & (v32 + v7);
      }
      if ( (*((_DWORD *)a2 + 16) & 1) != 0
        && (*((unsigned __int8 (__fastcall **)(__int64, __int64))a2 + 6))(v28, v32)
        && (v7 != *v12 || (*((_DWORD *)a2 + 16) & 2) != 0) )
      {
        *((_QWORD *)a2 + 11) = v28;
        *((_QWORD *)a2 + 12) = *v12;
        *((_BYTE *)a2 + 112) = v29;
        *((_QWORD *)a2 + 13) = v7;
        goto LABEL_81;
      }
      v34 = *v12;
      if ( v37 )
      {
        v7 -= v12[1];
        if ( v34 != v7 )
        {
          *v12 = v7;
          v34 = v7;
          v40 = 1;
        }
      }
      else
      {
        if ( v34 != v7 )
        {
          *v12 = v7;
          v34 = v7;
          v40 = 1;
        }
        v7 += v12[1];
      }
      if ( v40 )
        (*((void (__fastcall **)(__int64, __int64))a2 + 3))(v12[2], v34);
      goto LABEL_70;
    }
    if ( v10 != 1 )
    {
      if ( v10 == 2 )
      {
        if ( v16 == v4 )
        {
          v7 = v4;
          if ( *v12 == v2 )
            goto LABEL_81;
        }
        v23 = *(_QWORD *)v13;
        if ( *(char **)(*(_QWORD *)v13 + 8LL) != v13 || (v24 = (char **)*((_QWORD *)v13 + 1), *v24 != v13) )
          __fastfail(3u);
        *v24 = (char *)v23;
        *(_QWORD *)(v23 + 8) = v24;
        v25 = v12 + 3;
        *(_QWORD *)v13 = 0LL;
        v12[6] = 0LL;
        v26 = v12[3];
        if ( *(__int64 **)(v26 + 8) != v12 + 3 || (v27 = (_QWORD *)v12[4], (_QWORD *)*v27 != v25) )
          __fastfail(3u);
        *v27 = v26;
        *(_QWORD *)(v26 + 8) = v27;
        *v25 = 0LL;
        v12[4] = 0LL;
        VIDMM_LINEAR_POOL::FreeBlock(this, (struct _VIDMM_POOL_BLOCK *)v12);
        v4 = v42;
        v7 = v42;
        if ( v16 != v42 )
          v7 = v14;
      }
      else
      {
        if ( !g_IsInternalRelease )
          goto LABEL_72;
        v22 = (_QWORD *)WdLogNewEntry5_WdCriticalError((unsigned int)(v10 - 1), v11, v4);
        v22[5] = 0LL;
        v22[6] = 0LL;
        v22[7] = 0LL;
        v22[3] = 270LL;
        v22[4] = 9LL;
        WdLogEvent5_WdCriticalError(v22);
LABEL_70:
        v4 = v42;
      }
      v10 = v41;
      v9 = (char *)this + 72;
      goto LABEL_72;
    }
    v7 = *v12;
    if ( !v11 )
      v7 += v12[1];
LABEL_72:
    if ( v8 == v9 )
      goto LABEL_77;
    v11 = v37;
    v2 = v38;
  }
  if ( v11 )
    goto LABEL_72;
LABEL_12:
  if ( v8 == v9 )
    goto LABEL_77;
  v17 = *((_QWORD *)a2 + 10);
LABEL_78:
  v35 = *((_QWORD *)a2 + 1);
  if ( v17 > v35 )
    *((_QWORD *)a2 + 10) = v35;
LABEL_81:
  v36 = *((_DWORD *)a2 + 16);
  *((_QWORD *)a2 + 9) = v7;
  if ( (v36 & 4) != 0 )
    VIDMM_LINEAR_POOL::PatchGapsWithFreeBlocks(this, v38, *((_QWORD *)this + 1));
}
