/*
 * XREFs of MiValidatePagefilePageHash @ 0x140232750
 * Callers:
 *     MiWaitForInPageComplete @ 0x14002D860 (MiWaitForInPageComplete.c)
 *     MiMakeOutswappedPageResident @ 0x1402125D4 (MiMakeOutswappedPageResident.c)
 * Callees:
 *     MmMapLockedPagesSpecifyCache @ 0x14009A990 (MmMapLockedPagesSpecifyCache.c)
 *     MiLockPageInline @ 0x1400E1510 (MiLockPageInline.c)
 *     MiGetPagingFileOffset @ 0x14010C6B8 (MiGetPagingFileOffset.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     MiComparePageHash @ 0x140231DDC (MiComparePageHash.c)
 *     MiComputePageHash @ 0x140231ED8 (MiComputePageHash.c)
 *     MiObtainPagefileHashes @ 0x14023264C (MiObtainPagefileHashes.c)
 */

__int64 __fastcall MiValidatePagefilePageHash(__int64 a1)
{
  __int64 v1; // r10
  __int64 v2; // r13
  __int64 v3; // rbp
  __int64 *v4; // r14
  unsigned __int64 v5; // rdi
  unsigned __int64 v6; // r15
  unsigned __int64 v7; // rsi
  PVOID v8; // rax
  __int64 v9; // r12
  __int64 v10; // rbx
  unsigned int v11; // edx
  ULONG_PTR v12; // r15
  unsigned int PagingFileOffset; // eax
  __int64 v14; // r10
  ULONG_PTR v15; // rbp
  __int64 v16; // rax
  ULONG_PTR BugCheckParameter4; // rdi
  int v18; // eax
  unsigned __int8 v20; // [rsp+30h] [rbp-A8h]
  __int64 v21; // [rsp+38h] [rbp-A0h]
  __int64 v22; // [rsp+40h] [rbp-98h]
  unsigned __int64 v23; // [rsp+48h] [rbp-90h]
  unsigned int v24; // [rsp+50h] [rbp-88h]
  unsigned int v25[16]; // [rsp+60h] [rbp-78h] BYREF

  v1 = a1 + 256;
  if ( *(_QWORD *)(a1 + 248) )
    v1 = *(_QWORD *)(a1 + 248);
  v2 = 0LL;
  v3 = 0LL;
  v24 = 0;
  v22 = 0LL;
  v4 = (__int64 *)(v1 + 48);
  v5 = 8
     * (((unsigned __int64)((*(_DWORD *)(v1 + 32) + *(_DWORD *)(v1 + 44)) & 0xFFF) + *(_QWORD *)(a1 + 88) + 4095LL) >> 12);
  v21 = v5;
  v6 = v5 + v1 + 48;
  v23 = v6;
  if ( (*(_BYTE *)(v1 + 10) & 5) == 0 )
  {
    v8 = MmMapLockedPagesSpecifyCache((PMDL)v1, 0, MmCached, 0LL, 0, 0xC0000010);
    goto LABEL_36;
  }
  v7 = *(_QWORD *)(v1 + 24);
  while ( (unsigned __int64)v4 < v6 )
  {
    v9 = *v4;
    v10 = 48 * *v4 - 0x58000000000LL;
    if ( v10 != qword_140389190 )
    {
      v20 = MiLockPageInline(48 * *v4 - 0x58000000000LL);
      if ( (*(_QWORD *)(v10 + 24) & 0x4000000000000000LL) == 0 )
      {
        v11 = (*(_DWORD *)(v10 + 16) >> 5) & 0x1F;
        if ( (dword_140400114 & 1) != 0
          || v11 == 31
          || (v11 >> 3 != 3 || ((*(_DWORD *)(v10 + 16) >> 5) & 7) == 0) && v11 >> 3 != 1 )
        {
          v12 = (unsigned int)MiComputePageHash(v10, v7);
          if ( !v3 )
            v22 = *(_QWORD *)(*(_QWORD *)(qword_140388AF0 + 8 * ((*(_QWORD *)(v10 + 40) >> 40) & 0x3FFLL))
                            + 8LL * ((unsigned __int8)HIBYTE(*(_WORD *)(v10 + 16)) >> 4)
                            + 5792);
          PagingFileOffset = MiGetPagingFileOffset((__int64 *)(v10 + 16));
          v15 = PagingFileOffset;
          if ( !PagingFileOffset )
          {
            v3 = 0LL;
            v22 = 0LL;
            goto LABEL_30;
          }
          if ( (unsigned int)v2 >= v24 )
          {
            v16 = v21 >> 3;
            if ( (unsigned int)(v21 >> 3) > 0x10 )
              LODWORD(v16) = 16;
            v24 = v16;
            MiObtainPagefileHashes(v14, v15, v16, v25);
            v2 = 0LL;
          }
          BugCheckParameter4 = v25[v2];
          if ( (_DWORD)v12 != (_DWORD)BugCheckParameter4
            && (*(_QWORD *)(v10 + 24) & 0x4000000000000000LL) == 0
            && (_DWORD)BugCheckParameter4 != 2 )
          {
            if ( (_DWORD)BugCheckParameter4 )
            {
              if ( byte_140388CC0 != 1 )
              {
                v18 = -1073741761;
                goto LABEL_28;
              }
            }
            else
            {
              v18 = MiComparePageHash(v22, v15, v12);
LABEL_28:
              if ( v18 < 0 )
              {
                ++dword_140388C0C;
                qword_140388BB8 = v9;
                KeBugCheckEx(0x1Au, 0x3FuLL, v15, v12, BugCheckParameter4);
              }
            }
          }
          v3 = v22;
LABEL_30:
          v6 = v23;
        }
        v5 = v21;
      }
      if ( v20 != 17 )
      {
        _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        __writecr8(v20);
      }
    }
    v5 -= 8LL;
    v8 = (PVOID)(v7 + 4096);
    v2 = (unsigned int)(v2 + 1);
    v21 = v5;
    ++v4;
    if ( !v7 )
      v8 = 0LL;
LABEL_36:
    v7 = (unsigned __int64)v8;
  }
  return 0LL;
}
