/*
 * XREFs of PopWriteHiberPages @ 0x140435F04
 * Callers:
 *     PopWriteSecurePages @ 0x140242034 (PopWriteSecurePages.c)
 *     PopWriteSecurePagesCallback @ 0x1402420DC (PopWriteSecurePagesCallback.c)
 *     PopWriteChecksumPages @ 0x140435A30 (PopWriteChecksumPages.c)
 *     PopWriteHeaderPages @ 0x140435AC8 (PopWriteHeaderPages.c)
 *     PopWriteImageHeader @ 0x140436198 (PopWriteImageHeader.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x1400BBFC0 (MmGetPhysicalAddress.c)
 *     IoAddTriageDumpDataBlock @ 0x14015ACC8 (IoAddTriageDumpDataBlock.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     _PopInternalError @ 0x14023A308 (_PopInternalError.c)
 *     PopGetIoLocation @ 0x14043346C (PopGetIoLocation.c)
 *     PopGetRemainingHibernateRangeDataSize @ 0x1404334E0 (PopGetRemainingHibernateRangeDataSize.c)
 *     PopRecordHibernateDiagnosticInfo @ 0x14043407C (PopRecordHibernateDiagnosticInfo.c)
 *     PopCheckpointSystemSleep @ 0x14043A498 (PopCheckpointSystemSleep.c)
 *     MmGetNumberOfPhysicalPages @ 0x14056E6E0 (MmGetNumberOfPhysicalPages.c)
 */

__int64 *__fastcall PopWriteHiberPages(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4)
{
  __int64 *result; // rax
  ULONG_PTR BugCheckParameter4; // rsi
  __int64 v8; // r13
  __int64 v9; // rdi
  int v10; // ecx
  unsigned __int64 v11; // r12
  unsigned __int64 v12; // r14
  unsigned __int64 IoLocation; // rax
  __int64 *v14; // rcx
  __int64 v15; // rdx
  unsigned __int64 v16; // r15
  int v17; // eax
  __int64 v18; // rbx
  unsigned int i; // edi
  unsigned __int64 v20; // rbx
  int v21; // ecx
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // [rsp+38h] [rbp-C8h] BYREF
  __int64 NumberOfPhysicalPages; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v25; // [rsp+48h] [rbp-B8h]
  unsigned __int64 v26; // [rsp+50h] [rbp-B0h] BYREF
  __int64 *v27; // [rsp+58h] [rbp-A8h]
  __int64 *v28; // [rsp+60h] [rbp-A0h]
  __int64 v29; // [rsp+70h] [rbp-90h] BYREF
  __int16 v30; // [rsp+78h] [rbp-88h]
  __int16 v31; // [rsp+7Ah] [rbp-86h]
  __int64 v32; // [rsp+88h] [rbp-78h]
  unsigned __int64 v33; // [rsp+90h] [rbp-70h]
  int v34; // [rsp+98h] [rbp-68h]
  int v35; // [rsp+9Ch] [rbp-64h]
  _QWORD v36[34]; // [rsp+A0h] [rbp-60h]

  result = (__int64 *)(unsigned int)PopWatchdogTimerCount;
  BugCheckParameter4 = 0LL;
  v25 = a1;
  v8 = a2;
  v9 = a1;
  if ( (PopWatchdogTimerCount & 0x1F) == 0 )
    result = (__int64 *)off_140353600[0]();
  ++PopWatchdogTimerCount;
  if ( *(int *)(v9 + 188) >= 0 )
  {
    if ( (a4 + a3) << 12 > qword_140365B10 )
    {
      PopCheckpointSystemSleep(22LL, a2, a3, a4);
      if ( (unsigned int)(*(_DWORD *)(v9 + 184) - 4) <= 1 )
        BugCheckParameter4 = PopGetRemainingHibernateRangeDataSize(v9);
      NumberOfPhysicalPages = MmGetNumberOfPhysicalPages(0LL);
      IoAddTriageDumpDataBlock((int)&NumberOfPhysicalPages, v10 + 8);
      PopRecordHibernateDiagnosticInfo(v9);
      IoAddTriageDumpDataBlock((int)&PopHibernateDiagnosticInfo, 128);
      KeBugCheckEx(0xA0u, 0xBuLL, qword_140365B10, *(unsigned int *)(v9 + 184), BugCheckParameter4);
    }
    if ( a3 > 0xFFFFFFFFFFFFFLL )
      PopInternalError(0xA2006uLL);
    result = *(__int64 **)(v9 + 160);
    v11 = a4 << 12;
    v28 = result;
    v12 = a3 << 12;
    while ( v12 )
    {
      IoLocation = PopGetIoLocation(result, v11, &v23);
      v14 = (__int64 *)(unsigned int)v12;
      v26 = IoLocation;
      if ( v12 > v23 )
        v14 = (__int64 *)(unsigned int)v23;
      v15 = v8 & 0xFFF;
      v16 = ((unsigned __int64)(unsigned int)v14 + v15 + 4095) >> 12;
      if ( v16 > 0x10 )
      {
        v17 = v16 - 16;
        v16 = 16LL;
        v14 = (__int64 *)(unsigned int)((_DWORD)v14 - (v17 << 12));
      }
      v27 = v14;
      v29 = 0LL;
      v34 = (int)v14;
      v30 = 8 * ((((unsigned __int64)v14 + v15 + 4095) >> 12) + 6);
      v32 = v8;
      v33 = v8 & 0xFFFFFFFFFFFFF000uLL;
      v31 = 1;
      v35 = v8 & 0xFFF;
      if ( v16 )
      {
        v18 = 0LL;
        for ( i = 0; i < v16; v18 = i )
        {
          ++i;
          v36[v18] = (unsigned __int64)MmGetPhysicalAddress((PVOID)(v8 + (v18 << 12))).QuadPart >> 12;
        }
        v9 = v25;
      }
      v20 = __rdtsc();
      v21 = (*(__int64 (__fastcall **)(unsigned __int64 *, __int64 *))(*(_QWORD *)(v9 + 168) + 64LL))(&v26, &v29);
      v22 = __rdtsc();
      dword_140365E30 += v16;
      qword_140365C58 += (((unsigned __int64)HIDWORD(v22) << 32) | (unsigned int)v22) - v20;
      result = v27;
      v12 -= (unsigned __int64)v27;
      v11 += (unsigned __int64)v27;
      v8 += (__int64)v27;
      if ( v21 < 0 )
      {
        *(_DWORD *)(v9 + 188) = v21;
        return result;
      }
      result = v28;
    }
  }
  return result;
}
