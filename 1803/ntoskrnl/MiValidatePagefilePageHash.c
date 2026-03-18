/*
 * XREFs of MiValidatePagefilePageHash @ 0x140153348
 * Callers:
 *     MiWaitForInPageComplete @ 0x1400583A0 (MiWaitForInPageComplete.c)
 *     MiMakeOutswappedPageResident @ 0x140250B10 (MiMakeOutswappedPageResident.c)
 * Callees:
 *     MiLockPageInline @ 0x1400EB9C0 (MiLockPageInline.c)
 *     MmMapLockedPagesSpecifyCache @ 0x14010AF00 (MmMapLockedPagesSpecifyCache.c)
 *     MiGetPagingFileOffset @ 0x14013C69C (MiGetPagingFileOffset.c)
 *     MiComputePageHash @ 0x140153754 (MiComputePageHash.c)
 *     MiObtainPagefileHashes @ 0x1401537F4 (MiObtainPagefileHashes.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     MiComparePageHash @ 0x14026BEAC (MiComparePageHash.c)
 */

__int64 __fastcall MiValidatePagefilePageHash(__int64 a1)
{
  __int64 v1; // r10
  __int64 v2; // r13
  __int64 v3; // r14
  __int64 *v4; // rsi
  unsigned __int64 v5; // rdi
  char *v6; // rbp
  __int64 v7; // r15
  __int64 v8; // rbx
  unsigned int v9; // edx
  ULONG_PTR v10; // r12
  unsigned int PagingFileOffset; // eax
  __int64 v12; // r10
  ULONG_PTR v13; // r14
  ULONG_PTR BugCheckParameter4; // rdi
  char *v15; // rax
  __int64 v17; // rax
  int v18; // eax
  unsigned __int8 v19; // [rsp+30h] [rbp-A8h]
  __int64 v20; // [rsp+38h] [rbp-A0h]
  unsigned __int64 v21; // [rsp+40h] [rbp-98h]
  unsigned int v22; // [rsp+48h] [rbp-90h]
  __int64 v23; // [rsp+50h] [rbp-88h]
  unsigned int v24[16]; // [rsp+60h] [rbp-78h] BYREF

  v1 = a1 + 264;
  if ( *(_QWORD *)(a1 + 248) )
    v1 = *(_QWORD *)(a1 + 248);
  v2 = 0LL;
  v3 = 0LL;
  v22 = 0;
  v20 = 0LL;
  v4 = (__int64 *)(v1 + 48);
  v5 = v1
     + 8
     * ((((unsigned __int64)((*(_DWORD *)(v1 + 32) + *(_DWORD *)(v1 + 44)) & 0xFFF) + *(_QWORD *)(a1 + 88) + 4095LL) >> 12)
      + 6);
  v21 = v5;
  if ( (*(_BYTE *)(v1 + 10) & 5) != 0 )
    v6 = *(char **)(v1 + 24);
  else
    v6 = (char *)MmMapLockedPagesSpecifyCache((PMDL)v1, 0, MmCached, 0LL, 0, 0xC0000010);
  if ( (unsigned __int64)v4 < v5 )
  {
    v7 = v5 - (_QWORD)v4;
    while ( 1 )
    {
      v23 = *v4;
      v8 = 48 * *v4 - 0x58000000000LL;
      if ( v8 != qword_1403CC410 )
        break;
LABEL_22:
      v2 = (unsigned int)(v2 + 1);
      v15 = v6 + 4096;
      ++v4;
      v7 -= 8LL;
      if ( !v6 )
        v15 = 0LL;
      v6 = v15;
      if ( (unsigned __int64)v4 >= v5 )
        return 0LL;
    }
    v19 = MiLockPageInline(48 * v23 - 0x58000000000LL);
    if ( (*(_QWORD *)(v8 + 24) & 0x4000000000000000LL) != 0 )
    {
LABEL_20:
      if ( v19 != 17 )
      {
        _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        __writecr8(v19);
      }
      goto LABEL_22;
    }
    v9 = (*(_DWORD *)(v8 + 16) >> 5) & 0x1F;
    if ( (dword_14044B174 & 1) == 0
      && v9 != 31
      && (v9 >> 3 == 3 && ((*(_DWORD *)(v8 + 16) >> 5) & 7) != 0 || v9 >> 3 == 1) )
    {
LABEL_19:
      v5 = v21;
      goto LABEL_20;
    }
    v10 = (unsigned int)MiComputePageHash(v8, v6);
    if ( !v3 )
      v20 = *(_QWORD *)(*(_QWORD *)(qword_1403CBD88 + 8 * ((*(_QWORD *)(v8 + 40) >> 40) & 0x3FFLL))
                      + 8LL * ((unsigned __int8)HIBYTE(*(_WORD *)(v8 + 16)) >> 4)
                      + 6880);
    PagingFileOffset = MiGetPagingFileOffset(v8 + 16);
    v13 = PagingFileOffset;
    if ( !PagingFileOffset )
    {
      v3 = 0LL;
      v20 = 0LL;
      goto LABEL_19;
    }
    if ( (unsigned int)v2 >= v22 )
    {
      v17 = v7 >> 3;
      if ( (unsigned int)(v7 >> 3) > 0x10 )
        LODWORD(v17) = 16;
      v22 = v17;
      MiObtainPagefileHashes(v12, (unsigned int)v13, (unsigned int)v17, v24);
      v2 = 0LL;
    }
    BugCheckParameter4 = v24[v2];
    if ( (_DWORD)v10 != (_DWORD)BugCheckParameter4
      && (*(_QWORD *)(v8 + 24) & 0x4000000000000000LL) == 0
      && (_DWORD)BugCheckParameter4 != 2 )
    {
      if ( !(_DWORD)BugCheckParameter4 )
      {
        v18 = MiComparePageHash(v20, (unsigned int)v13, (unsigned int)v10);
        goto LABEL_39;
      }
      if ( byte_1403CBF80 != 1 )
      {
        v18 = -1073741761;
LABEL_39:
        if ( v18 < 0 )
        {
          ++dword_1403CBEA8;
          qword_1403CBE50 = v23;
          KeBugCheckEx(0x1Au, 0x3FuLL, v13, v10, BugCheckParameter4);
        }
      }
    }
    v3 = v20;
    goto LABEL_19;
  }
  return 0LL;
}
