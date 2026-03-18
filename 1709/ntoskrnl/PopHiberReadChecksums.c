/*
 * XREFs of PopHiberReadChecksums @ 0x140433A00
 * Callers:
 *     PopRestoreHiberContext @ 0x140434AE0 (PopRestoreHiberContext.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x1400BBFC0 (MmGetPhysicalAddress.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     PopInternalAddToDumpFile @ 0x140239DE4 (PopInternalAddToDumpFile.c)
 *     PopGetIoLocation @ 0x14043346C (PopGetIoLocation.c)
 */

void __fastcall PopHiberReadChecksums(ULONG_PTR BugCheckParameter3)
{
  char *v1; // rsi
  __int64 v2; // r12
  __int64 v4; // r15
  __int64 v5; // r13
  __int64 v6; // rcx
  unsigned __int64 v7; // rbp
  unsigned __int64 i; // rdi
  unsigned __int64 IoLocation; // rax
  __int64 v10; // rdx
  __int64 v11; // r9
  int v12; // r8d
  size_t v13; // r14
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // r8
  unsigned int v16; // r15d
  unsigned __int64 v17; // r14
  int v18; // eax
  ULONG_PTR BugCheckParameter4; // r12
  unsigned __int64 v20; // rax
  size_t v21; // [rsp+30h] [rbp-68h]
  __int64 v22; // [rsp+38h] [rbp-60h]
  unsigned __int64 v23; // [rsp+40h] [rbp-58h] BYREF
  unsigned __int64 v24; // [rsp+48h] [rbp-50h]
  char *v25; // [rsp+A8h] [rbp+10h]
  size_t v26; // [rsp+B0h] [rbp+18h] BYREF

  v1 = *(char **)(BugCheckParameter3 + 440);
  v2 = 0LL;
  v25 = v1;
  if ( v1 )
  {
    v4 = *(_QWORD *)(BugCheckParameter3 + 200);
    v5 = *(_QWORD *)(BugCheckParameter3 + 328);
    v22 = v4;
    v6 = *(_QWORD *)(v4 + 128);
    v7 = *(_QWORD *)(v4 + 120) << 12;
    v24 = __rdtsc();
    for ( i = (2 * v6 + 4095) & 0xFFFFFFFFFFFFF000uLL; i; i -= v13 )
    {
      IoLocation = PopGetIoLocation(*(__int64 **)(BugCheckParameter3 + 160), v7, &v26);
      v10 = *(_QWORD *)(BugCheckParameter3 + 144);
      v11 = 4095LL;
      v12 = *(_DWORD *)(BugCheckParameter3 + 144);
      v13 = v26;
      v23 = IoLocation;
      if ( i < v26 )
        v13 = i;
      if ( v13 >= (unsigned __int64)*(unsigned int *)(BugCheckParameter3 + 152) << 12 )
        v13 = (unsigned __int64)*(unsigned int *)(BugCheckParameter3 + 152) << 12;
      v14 = (unsigned __int64)*(unsigned int *)(BugCheckParameter3 + 416) << 12;
      *(_WORD *)(v5 + 10) = 0;
      *(_QWORD *)v5 = 0LL;
      if ( v13 >= v14 )
        v13 = v14;
      *(_DWORD *)(v5 + 40) = v13;
      v21 = v13;
      *(_WORD *)(v5 + 8) = 8 * (((v13 + (v10 & 0xFFF) + 4095) >> 12) + 6);
      *(_QWORD *)(v5 + 32) = v10 & 0xFFFFFFFFFFFFF000uLL;
      *(_DWORD *)(v5 + 44) = v10 & 0xFFF;
      *(_QWORD *)(v5 + 24) = *(_QWORD *)(BugCheckParameter3 + 144);
      v15 = (v13 + (v12 & 0xFFF) + 4095LL) >> 12;
      *(_WORD *)(v5 + 10) = 1;
      if ( v15 )
      {
        v16 = 0;
        v17 = v15;
        do
        {
          ++v16;
          *(_QWORD *)(v5 + 8 * v2 + 48) = (unsigned __int64)MmGetPhysicalAddress((PVOID)(*(_QWORD *)(BugCheckParameter3 + 144)
                                                                                       + (v2 << 12))).QuadPart >> 12;
          v2 = v16;
        }
        while ( v16 < v17 );
        v1 = v25;
        v13 = v21;
        v4 = v22;
      }
      v18 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64 *, __int64, __int64))(*(_QWORD *)(BugCheckParameter3
                                                                                                + 168)
                                                                                    + 160LL))(
              0LL,
              &v23,
              v5,
              v11);
      BugCheckParameter4 = v18;
      if ( v18 < 0 )
      {
        PopInternalAddToDumpFile(*(_QWORD *)(BugCheckParameter3 + 168), 0x178u, 0LL);
        KeBugCheckEx(0xA0u, 0x10AuLL, 0xAuLL, BugCheckParameter3, BugCheckParameter4);
      }
      memmove(v1, *(const void **)(BugCheckParameter3 + 144), v13);
      v1 += v13;
      v7 += v13;
      v2 = 0LL;
      v25 = v1;
    }
    *(_QWORD *)(BugCheckParameter3 + 424) = *(_QWORD *)(v4 + 128);
    v20 = __rdtsc();
    qword_140365DD0 += (((unsigned __int64)HIDWORD(v20) << 32) | (unsigned int)v20) - v24;
  }
}
