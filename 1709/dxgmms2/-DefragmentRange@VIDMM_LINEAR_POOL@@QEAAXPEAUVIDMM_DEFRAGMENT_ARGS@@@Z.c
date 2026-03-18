/*
 * XREFs of ?DefragmentRange@VIDMM_LINEAR_POOL@@QEAAXPEAUVIDMM_DEFRAGMENT_ARGS@@@Z @ 0x1C00B1A40
 * Callers:
 *     ?Defragment@VIDMM_MEMORY_SEGMENT@@UEAAX_K0@Z @ 0x1C00A8C20 (-Defragment@VIDMM_MEMORY_SEGMENT@@UEAAX_K0@Z.c)
 *     ?DefragmentResourcesOverRange@VIDMM_SEGMENT@@QEAAJ_K0W4VIDMM_DEFRAGMENT_DIRECTION@@PEA_NPEAPEAU_VIDMM_GLOBAL_ALLOC@@PEA_K@Z @ 0x1C00AA00C (-DefragmentResourcesOverRange@VIDMM_SEGMENT@@QEAAJ_K0W4VIDMM_DEFRAGMENT_DIRECTION@@PEA_NPEAPEAU_.c)
 *     ?ReserveVPRResource@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@EE@Z @ 0x1C00ABA38 (-ReserveVPRResource@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@EE@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00180A0 (_guard_dispatch_icall_nop.c)
 *     ?FreeBlock@VIDMM_LINEAR_POOL@@IEAAXPEAU_VIDMM_POOL_BLOCK@@@Z @ 0x1C004FE74 (-FreeBlock@VIDMM_LINEAR_POOL@@IEAAXPEAU_VIDMM_POOL_BLOCK@@@Z.c)
 *     ?PatchGapsWithFreeBlocks@VIDMM_LINEAR_POOL@@QEAAX_K0@Z @ 0x1C00B29CC (-PatchGapsWithFreeBlocks@VIDMM_LINEAR_POOL@@QEAAX_K0@Z.c)
 */

void __fastcall VIDMM_LINEAR_POOL::DefragmentRange(VIDMM_LINEAR_POOL *this, struct VIDMM_DEFRAGMENT_ARGS *a2)
{
  unsigned __int64 v2; // r8
  unsigned __int64 v4; // r9
  __int64 v6; // rax
  char v7; // r12
  char *v8; // r14
  __int64 v9; // rbx
  char *v10; // r10
  __int64 v11; // rdx
  __int64 *v12; // rsi
  unsigned __int64 v13; // rcx
  __int64 v14; // rax
  unsigned __int64 v15; // rbp
  unsigned __int64 v16; // rax
  unsigned __int8 v17; // al
  int v18; // ecx
  char v19; // al
  _QWORD *v20; // rax
  __int64 v21; // rcx
  _QWORD *v22; // rax
  _QWORD *v23; // rax
  __int64 v24; // rdx
  __int64 *v25; // rcx
  _QWORD *v26; // rax
  __int64 v27; // rdx
  __int64 *v28; // rcx
  __int64 v29; // r13
  unsigned int v30; // eax
  __int64 v31; // rcx
  __int64 v32; // rax
  bool v33; // al
  int v34; // eax
  unsigned __int64 v35; // [rsp+20h] [rbp-48h]
  __int64 v36; // [rsp+78h] [rbp+10h]
  __int64 v37; // [rsp+80h] [rbp+18h]
  unsigned __int64 v38; // [rsp+88h] [rbp+20h]

  v2 = *(_QWORD *)a2;
  v4 = *((_QWORD *)a2 + 1);
  v38 = *(_QWORD *)a2;
  v35 = v4;
  if ( *(_QWORD *)a2 == v4 )
  {
    v9 = v36;
  }
  else
  {
    v6 = *((int *)a2 + 4);
    v7 = 0;
    if ( (_DWORD)v6 )
    {
      v8 = (char *)*((_QWORD *)this + 10);
      v9 = *((_QWORD *)a2 + 1);
    }
    else
    {
      v8 = (char *)*((_QWORD *)this + 9);
      v9 = *(_QWORD *)a2;
    }
    v10 = (char *)this + 72;
    if ( v8 != (char *)this + 72 )
    {
      v11 = *((int *)a2 + 4);
      v37 = v6;
      while ( 1 )
      {
        v12 = (__int64 *)(v8 - 40);
        if ( v11 )
          v8 = (char *)*((_QWORD *)v8 + 1);
        else
          v8 = *(char **)v8;
        v13 = *v12;
        v14 = v12[1];
        v15 = *v12 + v14;
        if ( v15 <= v2 )
        {
          if ( v11 )
            goto LABEL_12;
          goto LABEL_75;
        }
        if ( v13 >= v4 )
        {
          if ( !v11 )
          {
LABEL_12:
            if ( v8 != v10 )
              goto LABEL_14;
            break;
          }
          goto LABEL_75;
        }
        if ( !v11 )
          v13 = *v12 + v14;
        *((_QWORD *)a2 + 10) = v13;
        v17 = *((_BYTE *)v12 + 56);
        if ( v17 == 2 )
        {
          v18 = 2;
        }
        else
        {
          if ( v17 <= 2u )
            goto LABEL_28;
          if ( v17 <= 4u )
          {
            v19 = (*((__int64 (__fastcall **)(__int64))a2 + 4))(v12[2]);
            v11 = v37;
            v10 = (char *)this + 72;
            v2 = v38;
            v4 = v35;
            v18 = v19 == 0;
            LODWORD(v36) = v18;
            goto LABEL_31;
          }
          if ( v17 > 7u )
          {
LABEL_28:
            if ( g_IsInternalRelease )
            {
              v20 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v13, v11, v2);
              v20[3] = 270LL;
              v20[4] = 9LL;
              v20[5] = 0LL;
              v20[6] = 0LL;
              v20[7] = 0LL;
              WdLogEvent5_WdCriticalError(v20);
              v11 = v37;
              v10 = (char *)this + 72;
              v2 = v38;
              v4 = v35;
            }
            v18 = v36;
            goto LABEL_31;
          }
          v18 = 1;
        }
        LODWORD(v36) = v18;
LABEL_31:
        if ( !v18 )
        {
          v29 = v12[2];
          if ( !(*((unsigned __int8 (__fastcall **)(__int64, __int64, unsigned __int64, unsigned __int64))a2 + 5))(
                  v29,
                  v11,
                  v2,
                  v4) )
            goto LABEL_56;
          if ( v37 )
          {
            if ( v9 - v12[1] < v15 )
            {
              if ( (*((_DWORD *)a2 + 16) & 1) != 0 )
                goto LABEL_55;
              v9 = v15;
            }
          }
          else
          {
            if ( v9 + v12[1] <= (unsigned __int64)*v12 )
              goto LABEL_56;
            if ( (*((_DWORD *)a2 + 16) & 1) == 0 )
            {
              v9 = *v12;
              goto LABEL_56;
            }
LABEL_55:
            v7 = 1;
          }
LABEL_56:
          v30 = (*((__int64 (__fastcall **)(__int64))a2 + 7))(v12[2]);
          v31 = v30 - 1LL;
          if ( v30 )
          {
            if ( v37 )
              v9 = v12[1] + (~v31 & (v9 - v12[1]));
            else
              v9 = ~v31 & (v31 + v9);
          }
          if ( (*((_DWORD *)a2 + 16) & 1) != 0
            && (*((unsigned __int8 (__fastcall **)(__int64))a2 + 6))(v29)
            && (v9 != *v12 || (*((_DWORD *)a2 + 16) & 2) != 0) )
          {
            *((_QWORD *)a2 + 11) = v29;
            *((_QWORD *)a2 + 12) = *v12;
            *((_BYTE *)a2 + 112) = v7;
            *((_QWORD *)a2 + 13) = v9;
            goto LABEL_81;
          }
          v11 = v37;
          v7 = 0;
          v32 = *v12;
          if ( v37 )
          {
            v9 -= v12[1];
            if ( v32 != v9 )
              *v12 = v9;
            v33 = v32 != v9;
          }
          else
          {
            if ( v32 != v9 )
              *v12 = v9;
            v33 = v32 != v9;
            v9 += v12[1];
          }
          if ( v33 )
          {
            (*((void (__fastcall **)(__int64, __int64))a2 + 3))(v12[2], *v12);
            goto LABEL_73;
          }
LABEL_74:
          v10 = (char *)this + 72;
          goto LABEL_75;
        }
        v21 = (unsigned int)(v18 - 1);
        if ( (_DWORD)v21 )
        {
          if ( (_DWORD)v21 == 1 )
          {
            if ( v15 == v4 )
            {
              v9 = v4;
              if ( *v12 == v2 )
                goto LABEL_81;
            }
            v23 = v12 + 5;
            v24 = v12[5];
            if ( *(__int64 **)(v24 + 8) != v12 + 5 || (v25 = (__int64 *)v12[6], (_QWORD *)*v25 != v23) )
              __fastfail(3u);
            *v25 = v24;
            *(_QWORD *)(v24 + 8) = v25;
            *v23 = 0LL;
            v26 = v12 + 3;
            v12[6] = 0LL;
            v27 = v12[3];
            if ( *(__int64 **)(v27 + 8) != v12 + 3 || (v28 = (__int64 *)v12[4], (_QWORD *)*v28 != v26) )
              __fastfail(3u);
            *v28 = v27;
            *(_QWORD *)(v27 + 8) = v28;
            *v26 = 0LL;
            v12[4] = 0LL;
            VIDMM_LINEAR_POOL::FreeBlock(this, (struct _VIDMM_POOL_BLOCK *)v12);
          }
          else
          {
            if ( !g_IsInternalRelease )
              goto LABEL_75;
            v22 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v21, v11, v2);
            v22[3] = 270LL;
            v22[4] = 9LL;
            v22[5] = 0LL;
            v22[6] = 0LL;
            v22[7] = 0LL;
            WdLogEvent5_WdCriticalError(v22);
          }
LABEL_73:
          v11 = v37;
          goto LABEL_74;
        }
        if ( v11 )
          v9 = *v12;
        else
          v9 = *v12 + v12[1];
LABEL_75:
        if ( v8 == v10 )
          break;
        v2 = v38;
        v4 = v35;
      }
    }
    *((_QWORD *)a2 + 10) = *((_QWORD *)this + 1);
LABEL_14:
    v16 = *((_QWORD *)a2 + 1);
    if ( *((_QWORD *)a2 + 10) > v16 )
      *((_QWORD *)a2 + 10) = v16;
  }
LABEL_81:
  v34 = *((_DWORD *)a2 + 16);
  *((_QWORD *)a2 + 9) = v9;
  if ( (v34 & 4) != 0 )
    VIDMM_LINEAR_POOL::PatchGapsWithFreeBlocks(this, v38, *((_QWORD *)this + 1));
}
