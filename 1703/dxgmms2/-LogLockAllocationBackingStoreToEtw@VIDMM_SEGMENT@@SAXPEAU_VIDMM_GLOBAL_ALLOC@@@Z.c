/*
 * XREFs of ?LogLockAllocationBackingStoreToEtw@VIDMM_SEGMENT@@SAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00491B4
 * Callers:
 *     ?LockAllocationBackingStore@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C004ABC4 (-LockAllocationBackingStore@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?ReportSegmentState@VIDMM_SEGMENT@@QEAAXXZ @ 0x1C00A31FC (-ReportSegmentState@VIDMM_SEGMENT@@QEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0014430 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0015BC0 (_guard_dispatch_icall_nop.c)
 *     Template_xxqXR2 @ 0x1C0021C0C (Template_xxqXR2.c)
 */

void __fastcall VIDMM_SEGMENT::LogLockAllocationBackingStoreToEtw(
        struct _VIDMM_GLOBAL_ALLOC *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // r14
  struct _VIDMM_GLOBAL_ALLOC *v4; // rbx
  _QWORD *v5; // rax
  __int64 v6; // rsi
  __int64 v7; // rcx
  __int64 v8; // r15
  __int64 i; // rdi
  unsigned int v10; // ebp
  __int64 *v11; // rdx
  __int64 v12; // r8
  __int64 v13; // rcx
  __int64 v14; // [rsp+28h] [rbp-240h]
  _BYTE v15[512]; // [rsp+40h] [rbp-228h] BYREF

  v3 = 0LL;
  v4 = a1;
  if ( bTracingEnabled )
  {
    v5 = (_QWORD *)*((_QWORD *)a1 + 13);
    v6 = 0LL;
    if ( v5 )
    {
      a2 = v5[3];
      if ( a2 )
      {
        v6 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v5[1] + 24LL) + 88LL))(*(_QWORD *)(v5[1] + 24LL));
      }
      else
      {
        v7 = v5[10];
        if ( v7 )
          v6 = *(_QWORD *)(v7 + 8);
      }
      a1 = *(struct _VIDMM_GLOBAL_ALLOC **)(*((_QWORD *)v4 + 13) + 8LL);
      v3 = *((_QWORD *)a1 + 1);
    }
    else
    {
      v6 = *(_QWORD *)(*((_QWORD *)a1 + 14) + 8LL);
    }
    if ( v6 )
    {
      v8 = 0LL;
      for ( i = *((_QWORD *)v4 + 1) >> 12; (_DWORD)i; LODWORD(i) = i - v10 )
      {
        v10 = 64;
        if ( (unsigned int)i < 0x40 )
          v10 = i;
        v11 = (__int64 *)v15;
        v12 = v10;
        do
        {
          v13 = *(_QWORD *)(v6 + 8 * v8 + 48);
          v8 = (unsigned int)(v8 + 1);
          *v11++ = v13;
          --v12;
        }
        while ( v12 );
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400) != 0 )
        {
          LODWORD(v14) = v10;
          Template_xxqXR2(v13, (__int64)v11, 0LL, v3, v4, v14, v15);
        }
      }
    }
    else if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400) != 0 )
    {
      Template_xxqXR2((__int64)a1, a2, a3, v3, v4, 0, 0LL);
    }
  }
}
