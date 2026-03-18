/*
 * XREFs of ?FindTemporarySegmentLocationForResource@VIDMM_LINEAR_POOL@@QEAAJPEBUVIDMM_FIND_TEMPORARY_LOCATION_ARGS@@_NPEA_K2@Z @ 0x1C00BAA04
 * Callers:
 *     ?MoveDisplayingResource@VIDMM_MEMORY_SEGMENT@@QEAA_K_K0PEBUVIDMM_DISPLAYING_BLOCK@@@Z @ 0x1C00B0C0C (-MoveDisplayingResource@VIDMM_MEMORY_SEGMENT@@QEAA_K_K0PEBUVIDMM_DISPLAYING_BLOCK@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0017A50 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall VIDMM_LINEAR_POOL::FindTemporarySegmentLocationForResource(
        VIDMM_LINEAR_POOL *this,
        const struct VIDMM_FIND_TEMPORARY_LOCATION_ARGS *a2,
        __int64 a3,
        unsigned __int64 *a4,
        unsigned __int64 *a5)
{
  char *v5; // r13
  unsigned __int64 v6; // r15
  char *v7; // r14
  VIDMM_LINEAR_POOL *v8; // rbx
  __int64 v9; // r12
  char v10; // bp
  char *v12; // rsi
  VIDMM_LINEAR_POOL *v13; // rcx
  bool v14; // zf
  __int64 v16; // rax
  _QWORD v17[5]; // [rsp+20h] [rbp-68h] BYREF
  char *v18; // [rsp+48h] [rbp-40h] BYREF
  char v19; // [rsp+58h] [rbp-30h]

  v17[2] = 0LL;
  v5 = (char *)this + 72;
  v6 = 0LL;
  v7 = (char *)*((_QWORD *)this + 9);
  v8 = 0LL;
  v9 = *((_QWORD *)a2 + 3) - 1LL;
  v19 = 2;
  v10 = a3;
  while ( v7 != v5 )
  {
    v12 = v7 - 40;
    v13 = (VIDMM_LINEAR_POOL *)*((_QWORD *)v7 - 5);
    v14 = v13 == v8;
    if ( v13 != v8 )
    {
      v18 = v7;
      v17[0] = v8;
      v17[1] = v13 - v8;
      v12 = (char *)v17;
      v14 = v13 == v8;
      v7 = (char *)&v18;
    }
    if ( v14 )
      v8 = v13;
    this = v8;
    v8 = (VIDMM_LINEAR_POOL *)((char *)v8 + *((_QWORD *)v12 + 1));
    if ( (unsigned __int64)v8 > *((_QWORD *)a2 + 1) )
      break;
    if ( (unsigned __int64)this < *(_QWORD *)a2
      || (LOBYTE(this) = v12[56], (unsigned __int8)((_BYTE)this - 2) > 1u)
      || v10 && (_BYTE)this != 2
      || (this = (VIDMM_LINEAR_POOL *)*((_QWORD *)v12 + 2)) != 0LL
      && !(*((unsigned __int8 (__fastcall **)(VIDMM_LINEAR_POOL *, const struct VIDMM_FIND_TEMPORARY_LOCATION_ARGS *, __int64))a2
           + 4))(
            this,
            a2,
            a3)
      || *(_QWORD *)v12 < *((_QWORD *)a2 + 6) && (unsigned __int64)v8 > *((_QWORD *)a2 + 5) )
    {
      v6 = ~v9 & ((unsigned __int64)v8 + v9);
    }
    else
    {
      this = (VIDMM_LINEAR_POOL *)(v6 + *((_QWORD *)a2 + 2));
      if ( this <= v8 )
      {
        *a4 = v6;
        *a5 = (unsigned __int64)v8;
        return 0LL;
      }
    }
    v7 = *(char **)v7;
  }
  if ( !v10 )
  {
    v16 = WdLogNewEntry5_WdWarning(this, a2);
    *(_QWORD *)(v16 + 24) = *((_QWORD *)a2 + 2);
    WdLogEvent5_WdWarning(v16);
  }
  return 3221225473LL;
}
