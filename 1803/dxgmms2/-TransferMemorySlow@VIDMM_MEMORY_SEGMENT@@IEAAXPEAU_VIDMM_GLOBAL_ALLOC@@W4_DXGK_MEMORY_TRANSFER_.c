/*
 * XREFs of ?TransferMemorySlow@VIDMM_MEMORY_SEGMENT@@IEAAXPEAU_VIDMM_GLOBAL_ALLOC@@W4_DXGK_MEMORY_TRANSFER_DIRECTION@@PEAVVIDMM_SEGMENT@@T_LARGE_INTEGER@@@Z @ 0x1C00B1354
 * Callers:
 *     ?TransferMemory@VIDMM_MEMORY_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@W4_DXGK_MEMORY_TRANSFER_DIRECTION@@PEAVVIDMM_SEGMENT@@T_LARGE_INTEGER@@PEA_N4@Z @ 0x1C00799F8 (-TransferMemory@VIDMM_MEMORY_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@W4_DXGK_MEMORY_TRANSFER_DIRE.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0017A50 (_guard_dispatch_icall_nop.c)
 *     ?IsTdrPending@VIDMM_GLOBAL@@QEBAEXZ @ 0x1C005E3CC (-IsTdrPending@VIDMM_GLOBAL@@QEBAEXZ.c)
 *     ?WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0060FAC (-WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?MemoryTransfer@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@PEAU_MDL@@234U_DXGK_TRANSFERFLAGS@@@Z @ 0x1C0062910 (-MemoryTransfer@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_LARGE_INT.c)
 *     ?VidMmGetMDLForRange@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@_K1@Z @ 0x1C007A6B4 (-VidMmGetMDLForRange@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@_K1@Z.c)
 *     ?Use64KbPagesForTransfer@@YAEPEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDMM_SEGMENT@@@Z @ 0x1C00B1634 (-Use64KbPagesForTransfer@@YAEPEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDMM_SEGMENT@@@Z.c)
 */

void __fastcall VIDMM_MEMORY_SEGMENT::TransferMemorySlow(
        VIDMM_MEMORY_SEGMENT *this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        enum _DXGK_MEMORY_TRANSFER_DIRECTION a3,
        struct VIDMM_SEGMENT *a4,
        union _LARGE_INTEGER a5)
{
  unsigned __int64 v6; // r8
  unsigned __int64 v9; // rdi
  char v10; // r15
  unsigned __int64 v11; // r12
  char v12; // r15
  unsigned __int8 v13; // al
  int v14; // r9d
  __int64 v15; // r8
  unsigned int v16; // r9d
  unsigned __int64 v17; // rdi
  int v18; // esi
  struct _MDL *MDLForRange; // rdx
  int v20; // eax
  struct _MDL *v21; // r11
  struct _MDL *v22; // rsi
  struct VIDMM_SEGMENT *v23; // r8
  union _LARGE_INTEGER *v24; // rax
  union _LARGE_INTEGER *v25; // rcx
  struct VIDMM_SEGMENT *v26; // rdx
  __int64 v27; // r8
  __int64 v28; // rax
  struct VIDMM_SEGMENT *v29; // [rsp+20h] [rbp-50h]
  struct _MDL *v30; // [rsp+60h] [rbp-10h] BYREF
  struct _DXGK_TRANSFERFLAGS v31[2]; // [rsp+68h] [rbp-8h]
  char v32; // [rsp+B0h] [rbp+40h] BYREF
  int v33; // [rsp+B8h] [rbp+48h]
  struct VIDMM_SEGMENT *v34; // [rsp+C8h] [rbp+58h]

  v34 = a4;
  v6 = *((_QWORD *)a2 + 1);
  v32 = 0;
  *(_QWORD *)&v31[0].0 = 0LL;
  v9 = v6 >> 1;
  v10 = *(_BYTE *)(1560LL * *((unsigned int *)this + 95) + *(_QWORD *)(*((_QWORD *)this + 1) + 40720LL) + 436) >> 2;
  v11 = 0LL;
  v30 = 0LL;
  v12 = v10 & 1;
  if ( !v12 || (v13 = Use64KbPagesForTransfer(a2, this), v14 = 0x10000, !v13) )
    v14 = 4096;
  v33 = v14;
  if ( v6 )
  {
    do
    {
      if ( VIDMM_GLOBAL::IsTdrPending(*((VIDMM_GLOBAL **)this + 1)) )
        return;
      v17 = ~(v16 - 1) & (v16 + v9 - 1);
      if ( (*(_DWORD *)(v15 + 7040) & 0x800) == 0 || v16 == v17 )
      {
        LOBYTE(v29) = v16 == v17;
        v18 = (*(__int64 (__fastcall **)(_QWORD, struct _VIDMM_GLOBAL_ALLOC *, unsigned __int64, unsigned __int64, struct VIDMM_SEGMENT *, char *, struct _MDL **))(**((_QWORD **)a2 + 33) + 96LL))(
                *((_QWORD *)a2 + 33),
                a2,
                v11,
                v17,
                v29,
                &v32,
                &v30);
        if ( v18 >= 0 )
        {
          MDLForRange = v30;
          if ( !v30 )
          {
            MDLForRange = VidMmGetMDLForRange(a2, v11, v17);
            v30 = MDLForRange;
            if ( !MDLForRange )
              v18 = -1071775487;
          }
          if ( v18 >= 0 )
          {
            if ( !v32 )
            {
              v20 = (*(__int64 (__fastcall **)(_QWORD, struct _VIDMM_GLOBAL_ALLOC *, unsigned __int64, unsigned __int64, struct _MDL *))(**((_QWORD **)a2 + 33) + 112LL))(
                      *((_QWORD *)a2 + 33),
                      a2,
                      v11,
                      v17,
                      MDLForRange);
              MDLForRange = v30;
              v18 = v20;
            }
            if ( v18 >= 0 )
            {
              v21 = 0LL;
              v22 = 0LL;
              if ( v12 )
              {
                if ( a3 == DXGK_MEMORY_TRANSFER_SYSTEM_TO_LOCAL )
                  v21 = MDLForRange;
                else
                  v22 = MDLForRange;
                v23 = v34;
                v24 = &a5;
                v25 = &a5;
                v26 = 0LL;
                if ( a3 == DXGK_MEMORY_TRANSFER_SYSTEM_TO_LOCAL )
                  v24 = 0LL;
                else
                  v26 = v34;
                if ( a3 != DXGK_MEMORY_TRANSFER_SYSTEM_TO_LOCAL )
                {
                  v23 = 0LL;
                  v25 = 0LL;
                }
              }
              else if ( a3 == DXGK_MEMORY_TRANSFER_SYSTEM_TO_LOCAL )
              {
                v23 = v34;
                v25 = &a5;
                v24 = (union _LARGE_INTEGER *)((char *)a2 + 256);
                v26 = (struct VIDMM_SEGMENT *)*((_QWORD *)a2 + 33);
              }
              else
              {
                v26 = v34;
                v24 = &a5;
                v25 = (union _LARGE_INTEGER *)((char *)a2 + 256);
                v23 = (struct VIDMM_SEGMENT *)*((_QWORD *)a2 + 33);
              }
              VIDMM_GLOBAL::MemoryTransfer(
                *((VIDMM_GLOBAL **)this + 1),
                a2,
                v17,
                v11,
                v26,
                v24,
                v21,
                v23,
                v25,
                v22,
                v31[0]);
              VIDMM_GLOBAL::WaitForAllPagingEngines(*((VIDMM_GLOBAL **)this + 1), a2);
              (*(void (__fastcall **)(_QWORD, struct _VIDMM_GLOBAL_ALLOC *, unsigned __int64, unsigned __int64, struct _MDL *))(**((_QWORD **)a2 + 33) + 120LL))(
                *((_QWORD *)a2 + 33),
                a2,
                v11,
                v17,
                v30);
              LOBYTE(v27) = 1;
              (*(void (__fastcall **)(_QWORD, struct _VIDMM_GLOBAL_ALLOC *, __int64))(**((_QWORD **)a2 + 33) + 104LL))(
                *((_QWORD *)a2 + 33),
                a2,
                v27);
              v28 = *((_QWORD *)a2 + 1);
              v11 += v17;
              v9 = v28 - v11;
              continue;
            }
          }
          (*(void (__fastcall **)(_QWORD, struct _VIDMM_GLOBAL_ALLOC *, _QWORD))(**((_QWORD **)a2 + 33) + 104LL))(
            *((_QWORD *)a2 + 33),
            a2,
            0LL);
        }
      }
      v28 = *((_QWORD *)a2 + 1);
      v9 = v17 >> 1;
    }
    while ( v11 != v28 );
  }
}
