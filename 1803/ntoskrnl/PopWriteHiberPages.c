/*
 * XREFs of PopWriteHiberPages @ 0x140473A24
 * Callers:
 *     PopWriteSecurePages @ 0x140278B70 (PopWriteSecurePages.c)
 *     PopWriteSecurePagesCallback @ 0x140278C18 (PopWriteSecurePagesCallback.c)
 *     PopWriteHeaderPages @ 0x140473794 (PopWriteHeaderPages.c)
 *     PopWriteChecksumPages @ 0x140486A20 (PopWriteChecksumPages.c)
 *     PopWriteImageHeader @ 0x140486AB8 (PopWriteImageHeader.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x14003C3D0 (MmGetPhysicalAddress.c)
 *     IoAddTriageDumpDataBlock @ 0x140185870 (IoAddTriageDumpDataBlock.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     _PopInternalError @ 0x140271708 (_PopInternalError.c)
 *     PopCheckpointSystemSleep @ 0x140473498 (PopCheckpointSystemSleep.c)
 *     PopGetIoLocation @ 0x140474780 (PopGetIoLocation.c)
 *     PopGetRemainingHibernateRangeDataSize @ 0x140486054 (PopGetRemainingHibernateRangeDataSize.c)
 *     PopRecordHibernateDiagnosticInfo @ 0x140486508 (PopRecordHibernateDiagnosticInfo.c)
 *     MmGetNumberOfPhysicalPages @ 0x1405587B8 (MmGetNumberOfPhysicalPages.c)
 */

__int64 __fastcall PopWriteHiberPages(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4)
{
  __int64 result; // rax
  ULONG_PTR BugCheckParameter4; // rsi
  __int64 v9; // rdi
  __int64 v10; // r12
  unsigned __int64 v11; // r14
  __int64 IoLocation; // rax
  __int64 v13; // rcx
  __int64 v14; // rdx
  unsigned __int64 v15; // r15
  __int64 v16; // rbx
  unsigned int i; // edi
  unsigned __int64 v18; // rbx
  int v19; // ecx
  unsigned __int64 v20; // rax
  int v21; // ecx
  int v22; // eax
  unsigned __int64 v23; // [rsp+38h] [rbp-C8h] BYREF
  __int64 NumberOfPhysicalPages; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v25; // [rsp+48h] [rbp-B8h]
  __int64 v26; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v27; // [rsp+58h] [rbp-A8h]
  __int64 v28; // [rsp+60h] [rbp-A0h]
  __int64 v29; // [rsp+70h] [rbp-90h] BYREF
  __int16 v30; // [rsp+78h] [rbp-88h]
  __int16 v31; // [rsp+7Ah] [rbp-86h]
  __int64 v32; // [rsp+88h] [rbp-78h]
  unsigned __int64 v33; // [rsp+90h] [rbp-70h]
  int v34; // [rsp+98h] [rbp-68h]
  int v35; // [rsp+9Ch] [rbp-64h]
  _QWORD v36[34]; // [rsp+A0h] [rbp-60h]

  result = (unsigned int)PopWatchdogTimerCount;
  BugCheckParameter4 = 0LL;
  v25 = a1;
  v9 = a1;
  if ( (PopWatchdogTimerCount & 0x1F) == 0 )
    result = off_1403989A0[0]();
  ++PopWatchdogTimerCount;
  if ( *(int *)(v9 + 188) >= 0 )
  {
    if ( (a4 + a3) << 12 > qword_1403AA190 )
    {
      PopCheckpointSystemSleep(22);
      if ( (unsigned int)(*(_DWORD *)(v9 + 184) - 4) <= 1 )
        BugCheckParameter4 = PopGetRemainingHibernateRangeDataSize(v9);
      NumberOfPhysicalPages = MmGetNumberOfPhysicalPages(0LL);
      IoAddTriageDumpDataBlock((int)&NumberOfPhysicalPages, v21 + 8);
      PopRecordHibernateDiagnosticInfo(v9);
      IoAddTriageDumpDataBlock((int)&PopHibernateDiagnosticInfo, 128);
      KeBugCheckEx(0xA0u, 0xBuLL, qword_1403AA190, *(unsigned int *)(v9 + 184), BugCheckParameter4);
    }
    if ( a3 > 0xFFFFFFFFFFFFFLL )
      PopInternalError(0xA2055uLL);
    result = *(_QWORD *)(v9 + 160);
    v10 = a4 << 12;
    v28 = result;
    v11 = a3 << 12;
    while ( v11 )
    {
      IoLocation = PopGetIoLocation(result, v10, &v23);
      v13 = (unsigned int)v11;
      v26 = IoLocation;
      if ( v11 > v23 )
        v13 = (unsigned int)v23;
      v14 = a2 & 0xFFF;
      v15 = ((unsigned __int64)(unsigned int)v13 + v14 + 4095) >> 12;
      if ( v15 > 0x10 )
      {
        v22 = v15 - 16;
        v15 = 16LL;
        v13 = (unsigned int)(v13 - (v22 << 12));
      }
      v27 = v13;
      v29 = 0LL;
      v34 = v13;
      v30 = 8 * (((unsigned __int64)(v14 + v13 + 4095) >> 12) + 6);
      v32 = a2;
      v33 = a2 & 0xFFFFFFFFFFFFF000uLL;
      v31 = 1;
      v35 = a2 & 0xFFF;
      if ( v15 )
      {
        v16 = 0LL;
        for ( i = 0; i < v15; v16 = i )
        {
          ++i;
          v36[v16] = (unsigned __int64)MmGetPhysicalAddress((PVOID)(a2 + (v16 << 12))).QuadPart >> 12;
        }
        v9 = v25;
      }
      v18 = __rdtsc();
      v19 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(*(_QWORD *)(v9 + 168) + 64LL))(&v26, &v29);
      v20 = __rdtsc();
      dword_1403AA6D0 += v15;
      qword_1403AA4F8 += (((unsigned __int64)HIDWORD(v20) << 32) | (unsigned int)v20) - v18;
      result = v27;
      v11 -= v27;
      v10 += v27;
      a2 += v27;
      if ( v19 < 0 )
      {
        *(_DWORD *)(v9 + 188) = v19;
        return result;
      }
      result = v28;
    }
  }
  return result;
}
