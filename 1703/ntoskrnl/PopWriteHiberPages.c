/*
 * XREFs of PopWriteHiberPages @ 0x140405508
 * Callers:
 *     PopWriteSecurePages @ 0x14022E020 (PopWriteSecurePages.c)
 *     PopWriteSecurePagesCallback @ 0x14022E0C8 (PopWriteSecurePagesCallback.c)
 *     PopWriteHeaderPages @ 0x140405288 (PopWriteHeaderPages.c)
 *     PopWriteChecksumPages @ 0x140419D64 (PopWriteChecksumPages.c)
 *     PopWriteImageHeader @ 0x140419DFC (PopWriteImageHeader.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x1400A7A80 (MmGetPhysicalAddress.c)
 *     IoAddTriageDumpDataBlock @ 0x140166F20 (IoAddTriageDumpDataBlock.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     _PopInternalError @ 0x140227528 (_PopInternalError.c)
 *     PopGetIoLocation @ 0x140407FB4 (PopGetIoLocation.c)
 *     PopCheckpointSystemSleep @ 0x140408338 (PopCheckpointSystemSleep.c)
 *     PopGetRemainingHibernateRangeDataSize @ 0x140419CD8 (PopGetRemainingHibernateRangeDataSize.c)
 *     MmGetNumberOfPhysicalPages @ 0x140437454 (MmGetNumberOfPhysicalPages.c)
 */

__int64 __fastcall PopWriteHiberPages(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4)
{
  int v4; // eax
  ULONG_PTR BugCheckParameter4; // rdi
  __int64 v9; // r14
  __int64 result; // rax
  __int64 v11; // r12
  unsigned __int64 v12; // rsi
  __int64 IoLocation; // rax
  __int64 v14; // rcx
  __int64 v15; // rdx
  unsigned __int64 v16; // r15
  __int64 v17; // rbx
  unsigned int i; // r14d
  unsigned __int64 v19; // rbx
  int v20; // ecx
  unsigned __int64 v21; // rax
  int v22; // ecx
  int v23; // eax
  unsigned __int64 v24; // [rsp+38h] [rbp-C8h] BYREF
  __int64 NumberOfPhysicalPages; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v26; // [rsp+48h] [rbp-B8h]
  __int64 v27; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v28; // [rsp+58h] [rbp-A8h]
  __int64 v29; // [rsp+60h] [rbp-A0h]
  __int64 v30; // [rsp+70h] [rbp-90h] BYREF
  __int16 v31; // [rsp+78h] [rbp-88h]
  __int16 v32; // [rsp+7Ah] [rbp-86h]
  __int64 v33; // [rsp+88h] [rbp-78h]
  unsigned __int64 v34; // [rsp+90h] [rbp-70h]
  int v35; // [rsp+98h] [rbp-68h]
  int v36; // [rsp+9Ch] [rbp-64h]
  _QWORD v37[34]; // [rsp+A0h] [rbp-60h]

  v4 = PopWatchdogTimerCount;
  BugCheckParameter4 = 0LL;
  v26 = a1;
  v9 = a1;
  if ( (PopWatchdogTimerCount & 0x1F) == 0 )
  {
    off_14033B5D0[0]();
    v4 = PopWatchdogTimerCount;
  }
  result = (unsigned int)(v4 + 1);
  PopWatchdogTimerCount = result;
  if ( *(int *)(v9 + 188) >= 0 )
  {
    if ( (a4 + a3) << 12 > qword_14034B2B0 )
    {
      PopCheckpointSystemSleep(22LL);
      if ( (unsigned int)(*(_DWORD *)(v9 + 184) - 4) <= 1 )
        BugCheckParameter4 = PopGetRemainingHibernateRangeDataSize(v9);
      NumberOfPhysicalPages = MmGetNumberOfPhysicalPages(0LL);
      IoAddTriageDumpDataBlock((int)&NumberOfPhysicalPages, v22 + 8);
      KeBugCheckEx(0xA0u, 0xBuLL, qword_14034B2B0, *(unsigned int *)(v9 + 184), BugCheckParameter4);
    }
    if ( a3 > 0xFFFFFFFFFFFFFLL )
      PopInternalError(0xA1FB2uLL);
    result = *(_QWORD *)(v9 + 160);
    v11 = a4 << 12;
    v29 = result;
    v12 = a3 << 12;
    while ( v12 )
    {
      IoLocation = PopGetIoLocation(result, v11, &v24);
      v14 = (unsigned int)v12;
      v27 = IoLocation;
      if ( v12 > v24 )
        v14 = (unsigned int)v24;
      v15 = a2 & 0xFFF;
      v16 = ((unsigned __int64)(unsigned int)v14 + v15 + 4095) >> 12;
      if ( v16 > 0x10 )
      {
        v23 = v16 - 16;
        v16 = 16LL;
        v14 = (unsigned int)(v14 - (v23 << 12));
      }
      v28 = v14;
      v30 = 0LL;
      v35 = v14;
      v31 = 8 * (((unsigned __int64)(v15 + v14 + 4095) >> 12) + 6);
      v33 = a2;
      v34 = a2 & 0xFFFFFFFFFFFFF000uLL;
      v32 = 1;
      v36 = a2 & 0xFFF;
      if ( v16 )
      {
        v17 = 0LL;
        for ( i = 0; i < v16; v17 = i )
        {
          ++i;
          v37[v17] = (unsigned __int64)MmGetPhysicalAddress((PVOID)(a2 + (v17 << 12))).QuadPart >> 12;
        }
        v9 = v26;
      }
      v19 = __rdtsc();
      v20 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(*(_QWORD *)(v9 + 168) + 64LL))(&v27, &v30);
      v21 = __rdtsc();
      LODWORD(qword_14034B7B0) = v16 + qword_14034B7B0;
      qword_14034B5D8 += (((unsigned __int64)HIDWORD(v21) << 32) | (unsigned int)v21) - v19;
      result = v28;
      v12 -= v28;
      v11 += v28;
      a2 += v28;
      if ( v20 < 0 )
      {
        *(_DWORD *)(v9 + 188) = v20;
        return result;
      }
      result = v29;
    }
  }
  return result;
}
