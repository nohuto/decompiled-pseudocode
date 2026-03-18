/*
 * XREFs of ?LogLockAllocationBackingStoreToEtw@VIDMM_SEGMENT@@SAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C004D190
 * Callers:
 *     ?LockAllocationBackingStore@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C004EE1C (-LockAllocationBackingStore@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?ReportSegmentState@VIDMM_SEGMENT@@QEAAXXZ @ 0x1C00AB7E4 (-ReportSegmentState@VIDMM_SEGMENT@@QEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0016910 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00180A0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0xxqXR2 @ 0x1C0023E78 (McTemplateK0xxqXR2.c)
 */

void __fastcall VIDMM_SEGMENT::LogLockAllocationBackingStoreToEtw(
        struct _VIDMM_GLOBAL_ALLOC *a1,
        __int64 a2,
        __int64 a3)
{
  unsigned int v3; // ebx
  struct _VIDMM_GLOBAL_ALLOC *v4; // r14
  __int64 v5; // r15
  __int64 v6; // rdi
  _QWORD *v7; // rax
  __int64 i; // rsi
  unsigned int v9; // ebp
  _BYTE *v10; // rax
  __int64 v11; // r8
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // [rsp+28h] [rbp-240h]
  _BYTE v16[512]; // [rsp+40h] [rbp-228h] BYREF

  v3 = 0;
  v4 = a1;
  v5 = 0LL;
  if ( bTracingEnabled )
  {
    v6 = 0LL;
    if ( (*((_DWORD *)a1 + 20) & 0x3000) != 0 )
    {
      v6 = *((_QWORD *)a1 + 64);
    }
    else
    {
      v7 = (_QWORD *)*((_QWORD *)a1 + 13);
      if ( v7 )
      {
        a2 = v7[3];
        if ( a2 )
        {
          v6 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v7[1] + 24LL) + 88LL))(*(_QWORD *)(v7[1] + 24LL));
        }
        else
        {
          v14 = v7[10];
          if ( v14 )
            v6 = *(_QWORD *)(v14 + 8);
        }
        a1 = *(struct _VIDMM_GLOBAL_ALLOC **)(*((_QWORD *)v4 + 13) + 8LL);
        v5 = *((_QWORD *)a1 + 1);
      }
      else
      {
        v6 = *(_QWORD *)(*((_QWORD *)a1 + 14) + 8LL);
      }
    }
    if ( v6 )
    {
      for ( i = *((_QWORD *)v4 + 1) >> 12; (_DWORD)i; LODWORD(i) = i - v9 )
      {
        if ( (unsigned int)i < 0x40 )
          v9 = i;
        else
          v9 = 64;
        v10 = v16;
        v11 = v9;
        do
        {
          v12 = v3;
          v10 += 8;
          ++v3;
          v13 = *(_QWORD *)(v6 + 8 * v12 + 48);
          *((_QWORD *)v10 - 1) = v13;
          --v11;
        }
        while ( v11 );
        if ( ((unsigned __int16)Microsoft_Windows_DxgKrnlEnableBits & 0x400) != 0 )
        {
          LODWORD(v15) = v9;
          McTemplateK0xxqXR2(v12, v13, v11, v5, v4, v15, v16);
        }
      }
    }
    else if ( ((unsigned __int16)Microsoft_Windows_DxgKrnlEnableBits & 0x400) != 0 )
    {
      McTemplateK0xxqXR2((__int64)a1, a2, a3, v5, v4, 0, 0LL);
    }
  }
}
