/*
 * XREFs of MiValidatePagefilePageHash @ 0x14013B100
 * Callers:
 *     MiWaitForInPageComplete @ 0x140097510 (MiWaitForInPageComplete.c)
 *     MiMakeOutswappedPageResident @ 0x14020B6DC (MiMakeOutswappedPageResident.c)
 * Callees:
 *     MiLockPageInline @ 0x140040640 (MiLockPageInline.c)
 *     MiGetPagingFileOffset @ 0x14007720C (MiGetPagingFileOffset.c)
 *     MmMapLockedPagesSpecifyCache @ 0x1400F8330 (MmMapLockedPagesSpecifyCache.c)
 *     MiComputePageHash @ 0x14013B500 (MiComputePageHash.c)
 *     MiObtainPagefileHashes @ 0x14013B5A0 (MiObtainPagefileHashes.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     MiComparePageHash @ 0x140223D5C (MiComparePageHash.c)
 */

__int64 __fastcall MiValidatePagefilePageHash(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // r10
  __int64 v3; // rcx
  __int64 v4; // r14
  __int64 *v5; // rdi
  unsigned __int64 v6; // rbp
  char *v7; // rsi
  __int64 v8; // r15
  __int64 v9; // r13
  __int64 v10; // rbx
  unsigned int v11; // edx
  ULONG_PTR v12; // r12
  unsigned int PagingFileOffset; // eax
  __int64 v14; // r10
  ULONG_PTR v15; // rbp
  unsigned int v16; // ecx
  char *v17; // rax
  __int64 v19; // rax
  int v20; // eax
  ULONG_PTR BugCheckParameter4; // rcx
  unsigned __int8 v22; // [rsp+30h] [rbp-98h]
  unsigned __int64 v23; // [rsp+38h] [rbp-90h]
  __int64 v24; // [rsp+40h] [rbp-88h]
  unsigned int v25; // [rsp+48h] [rbp-80h]
  unsigned int v26[16]; // [rsp+50h] [rbp-78h] BYREF

  v1 = *(_QWORD *)(a1 + 248);
  v2 = a1 + 256;
  v3 = *(_QWORD *)(a1 + 88);
  if ( v1 )
    v2 = v1;
  v4 = 0LL;
  v25 = 0;
  v5 = (__int64 *)(v2 + 48);
  v6 = v2 + 48 + 8 * (((unsigned __int64)((*(_DWORD *)(v2 + 32) + *(_DWORD *)(v2 + 44)) & 0xFFF) + v3 + 4095) >> 12);
  v23 = v6;
  v24 = 0LL;
  if ( (*(_BYTE *)(v2 + 10) & 5) != 0 )
    v7 = *(char **)(v2 + 24);
  else
    v7 = (char *)MmMapLockedPagesSpecifyCache((PMDL)v2, 0, MmCached, 0LL, 0, 0xC0000010);
  if ( (unsigned __int64)v5 < v6 )
  {
    v8 = v6 - (_QWORD)v5;
    while ( 1 )
    {
      v9 = *v5;
      v10 = 48 * *v5 - 0x58000000000LL;
      if ( v10 != qword_14036CED0 )
        break;
LABEL_21:
      v4 = (unsigned int)(v4 + 1);
      v17 = v7 + 4096;
      ++v5;
      v8 -= 8LL;
      if ( !v7 )
        v17 = 0LL;
      v7 = v17;
      if ( (unsigned __int64)v5 >= v6 )
        return 0LL;
    }
    v22 = MiLockPageInline(48 * *v5 - 0x58000000000LL);
    if ( (*(_QWORD *)(v10 + 24) & 0x4000000000000000LL) != 0 )
    {
LABEL_19:
      if ( v22 != 17 )
      {
        _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        __writecr8(v22);
      }
      goto LABEL_21;
    }
    v11 = (*(_DWORD *)(v10 + 16) >> 5) & 0x1F;
    if ( (dword_1403E3114 & 1) != 0
      || v11 == 31
      || (v11 >> 3 != 3 || ((*(_DWORD *)(v10 + 16) >> 5) & 7) == 0) && v11 >> 3 != 1 )
    {
      v12 = (unsigned int)MiComputePageHash(v10, v7);
      if ( !v24 )
        v24 = *(_QWORD *)(*(_QWORD *)(qword_14036C8F8 + 8 * ((*(_QWORD *)(v10 + 40) >> 40) & 0x3FFLL))
                        + 8LL * ((unsigned __int8)HIBYTE(*(_WORD *)(v10 + 16)) >> 4)
                        + 5600);
      PagingFileOffset = MiGetPagingFileOffset(v10 + 16);
      v15 = PagingFileOffset;
      if ( PagingFileOffset )
      {
        if ( (unsigned int)v4 >= v25 )
        {
          v19 = v8 >> 3;
          if ( (unsigned int)(v8 >> 3) > 0x10 )
            LODWORD(v19) = 16;
          v25 = v19;
          MiObtainPagefileHashes(v14, (unsigned int)v15, (unsigned int)v19, v26);
          v4 = 0LL;
        }
        v16 = v26[v4];
        if ( (_DWORD)v12 == v16 || (*(_QWORD *)(v10 + 24) & 0x4000000000000000LL) != 0 || v16 == 2 )
          goto LABEL_18;
        if ( !v16 )
        {
          v20 = MiComparePageHash(v24, (unsigned int)v15, (unsigned int)v12);
          goto LABEL_38;
        }
        if ( byte_14036CAC0 != 1 )
        {
          v20 = -1073741761;
LABEL_38:
          if ( v20 < 0 )
          {
            BugCheckParameter4 = v26[v4];
            ++dword_14036CA14;
            qword_14036C9C0 = v9;
            KeBugCheckEx(0x1Au, 0x3FuLL, v15, v12, BugCheckParameter4);
          }
        }
      }
      else
      {
        v24 = 0LL;
      }
    }
LABEL_18:
    v6 = v23;
    goto LABEL_19;
  }
  return 0LL;
}
