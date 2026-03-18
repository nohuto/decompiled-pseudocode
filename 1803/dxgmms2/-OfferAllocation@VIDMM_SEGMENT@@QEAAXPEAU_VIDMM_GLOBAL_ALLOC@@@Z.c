/*
 * XREFs of ?OfferAllocation@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0073238
 * Callers:
 *     ?Run@VIDMM_WORKER_THREAD@@QEAAXXZ @ 0x1C007F920 (-Run@VIDMM_WORKER_THREAD@@QEAAXXZ.c)
 * Callees:
 *     ?MarkGlobalAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEA_K1@Z @ 0x1C006C824 (-MarkGlobalAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEA_K1@Z.c)
 */

void __fastcall VIDMM_SEGMENT::OfferAllocation(VIDMM_GLOBAL **this, struct _VIDMM_GLOBAL_ALLOC *a2)
{
  char *v2; // rax
  char **v3; // rdx
  VIDMM_GLOBAL *v4; // rcx

  switch ( *((_DWORD *)a2 + 108) )
  {
    case 1:
      if ( *(_WORD *)(*((_QWORD *)a2 + 63) + 4LL) == 2 )
      {
        *((_DWORD *)a2 + 20) |= 0x40u;
        VIDMM_GLOBAL::MarkGlobalAllocation(this[1], (DXGFASTMUTEX **)a2, 0LL, 0LL);
      }
      break;
    case 2:
      v2 = (char *)(this + 35);
      v3 = (char **)((char *)a2 + 400);
      v4 = this[36];
      if ( *(char **)v4 != v2 )
        __fastfail(3u);
LABEL_4:
      *v3 = v2;
      v3[1] = (char *)v4;
      *(_QWORD *)v4 = v3;
      *((_QWORD *)v2 + 1) = v3;
      return;
    case 3:
      v2 = (char *)(this + 37);
      v3 = (char **)((char *)a2 + 400);
      v4 = this[38];
      if ( *(char **)v4 != v2 )
        __fastfail(3u);
      goto LABEL_4;
  }
}
