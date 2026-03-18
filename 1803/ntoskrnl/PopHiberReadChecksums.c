/*
 * XREFs of PopHiberReadChecksums @ 0x140486128
 * Callers:
 *     PopRestoreHiberContext @ 0x1404734E4 (PopRestoreHiberContext.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x14003C3D0 (MmGetPhysicalAddress.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     PopInternalAddToDumpFile @ 0x1402712F8 (PopInternalAddToDumpFile.c)
 *     PopGetIoLocation @ 0x140474780 (PopGetIoLocation.c)
 */

void __fastcall PopHiberReadChecksums(ULONG_PTR BugCheckParameter3)
{
  char *v1; // rsi
  __int64 v2; // r15
  __int64 v4; // r14
  __int64 v5; // r13
  __int64 v6; // rcx
  unsigned __int64 v7; // rbp
  unsigned __int64 v8; // rdi
  __int64 IoLocation; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  int v13; // r9d
  unsigned __int64 v14; // rax
  bool v15; // cf
  size_t v16; // rcx
  size_t v17; // r8
  size_t v18; // r12
  unsigned __int64 v19; // r9
  unsigned int v20; // r14d
  unsigned __int64 v21; // r12
  int v22; // eax
  ULONG_PTR BugCheckParameter4; // r15
  unsigned __int64 v24; // rax
  __int64 v25; // [rsp+30h] [rbp-68h]
  size_t v26; // [rsp+38h] [rbp-60h]
  __int64 v27; // [rsp+40h] [rbp-58h] BYREF
  unsigned __int64 v28; // [rsp+48h] [rbp-50h]
  char *v29; // [rsp+A8h] [rbp+10h]
  unsigned __int64 v30; // [rsp+B0h] [rbp+18h] BYREF

  v1 = *(char **)(BugCheckParameter3 + 432);
  v2 = 0LL;
  v29 = v1;
  if ( v1 )
  {
    v4 = *(_QWORD *)(BugCheckParameter3 + 200);
    v5 = *(_QWORD *)(BugCheckParameter3 + 320);
    v25 = v4;
    v6 = *(_QWORD *)(v4 + 128);
    v7 = *(_QWORD *)(v4 + 120) << 12;
    v28 = __rdtsc();
    v8 = (2 * v6 + 4095) & 0xFFFFFFFFFFFFF000uLL;
    if ( v8 )
    {
      do
      {
        IoLocation = PopGetIoLocation(*(_QWORD *)(BugCheckParameter3 + 160), v7, &v30);
        v10 = *(_QWORD *)(BugCheckParameter3 + 144);
        v11 = *(unsigned int *)(BugCheckParameter3 + 152);
        v12 = *(unsigned int *)(BugCheckParameter3 + 408);
        v13 = *(_DWORD *)(BugCheckParameter3 + 144);
        v27 = IoLocation;
        v14 = v30;
        v15 = v8 < v30;
        *(_WORD *)(v5 + 10) = 0;
        *(_QWORD *)v5 = 0LL;
        if ( v15 )
          v14 = v8;
        v16 = v11 << 12;
        if ( v14 < v16 )
          v16 = v14;
        v17 = v12 << 12;
        v18 = v16;
        if ( v16 < v17 )
          v17 = v16;
        else
          v18 = v17;
        *(_DWORD *)(v5 + 40) = v18;
        v26 = v18;
        *(_QWORD *)(v5 + 32) = v10 & 0xFFFFFFFFFFFFF000uLL;
        v19 = (v17 + (v13 & 0xFFF) + 4095LL) >> 12;
        *(_DWORD *)(v5 + 44) = v10 & 0xFFF;
        *(_WORD *)(v5 + 8) = 8 * (((v17 + (v10 & 0xFFF) + 4095) >> 12) + 6);
        *(_QWORD *)(v5 + 24) = *(_QWORD *)(BugCheckParameter3 + 144);
        *(_WORD *)(v5 + 10) = 1;
        if ( v19 )
        {
          v20 = 0;
          v21 = v19;
          do
          {
            ++v20;
            *(_QWORD *)(v5 + 8 * v2 + 48) = (unsigned __int64)MmGetPhysicalAddress((PVOID)(*(_QWORD *)(BugCheckParameter3 + 144)
                                                                                         + (v2 << 12))).QuadPart >> 12;
            v2 = v20;
          }
          while ( v20 < v21 );
          v1 = v29;
          v4 = v25;
          v18 = v26;
        }
        v22 = (*(__int64 (__fastcall **)(_QWORD, __int64 *, __int64))(*(_QWORD *)(BugCheckParameter3 + 168) + 160LL))(
                0LL,
                &v27,
                v5);
        BugCheckParameter4 = v22;
        if ( v22 < 0 )
        {
          PopInternalAddToDumpFile(*(_QWORD *)(BugCheckParameter3 + 168), 0x178u, 0LL);
          KeBugCheckEx(0xA0u, 0x10AuLL, 0xAuLL, BugCheckParameter3, BugCheckParameter4);
        }
        memmove(v1, *(const void **)(BugCheckParameter3 + 144), v18);
        v1 += v18;
        v7 += v18;
        v2 = 0LL;
        v29 = v1;
        v8 -= v18;
      }
      while ( v8 );
      v6 = *(_QWORD *)(v4 + 128);
    }
    *(_QWORD *)(BugCheckParameter3 + 416) = v6;
    v24 = __rdtsc();
    qword_1403AA670 += (((unsigned __int64)HIDWORD(v24) << 32) | (unsigned int)v24) - v28;
  }
}
