/*
 * XREFs of RtlpHpAllocVA @ 0x1402943E0
 * Callers:
 *     RtlpHpHeapAllocate @ 0x140294D44 (RtlpHpHeapAllocate.c)
 *     RtlpHpHeapExtendContext @ 0x1402953E0 (RtlpHpHeapExtendContext.c)
 *     RtlpHpSegPageRangeCommit @ 0x140298980 (RtlpHpSegPageRangeCommit.c)
 *     RtlpHpSegSegmentAllocate @ 0x140298F5C (RtlpHpSegSegmentAllocate.c)
 *     RtlpHpLargeAlloc @ 0x14029E2A0 (RtlpHpLargeAlloc.c)
 * Callees:
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     RtlpHpVaMgrCtxAlloc @ 0x1402966FC (RtlpHpVaMgrCtxAlloc.c)
 *     RtlpHpEnvAllocVA @ 0x1402975D8 (RtlpHpEnvAllocVA.c)
 *     RtlpHpEnvGetHeapManager @ 0x1402BD820 (RtlpHpEnvGetHeapManager.c)
 */

__int64 __fastcall RtlpHpAllocVA(__int64 *a1, __int64 *a2, __int64 a3, int a4, int a5, __int128 *a6, __int64 a7)
{
  unsigned int v9; // r11d
  int HeapManager; // eax
  int v11; // r8d
  __int64 v12; // r9
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 result; // rax
  __int64 v16; // r8
  __int64 v17; // rdx
  __int64 v18; // r8
  unsigned int v19; // r9d
  __int128 v20; // [rsp+40h] [rbp-21h]
  __int64 v21; // [rsp+50h] [rbp-11h] BYREF
  __int64 v22; // [rsp+58h] [rbp-9h]
  __int64 v23; // [rsp+60h] [rbp-1h]
  __int128 v24; // [rsp+70h] [rbp+Fh] BYREF

  HIDWORD(v24) = 0x40000000;
  LODWORD(v24) = 4096;
  *(_QWORD *)((char *)&v24 + 4) = 0x20000000001000LL;
  v9 = a4 & 0xFEFFFFFF;
  v20 = *a6;
  if ( (a4 & 0xFEFFFFFF) == 0x2000 && (a4 & 0x1000000) == 0 )
  {
    v24 = *a6;
    HeapManager = RtlpHpEnvGetHeapManager(&v24, 0x2000LL, a3, a7);
    v21 = 0LL;
    v22 = 0LL;
    v23 = 0LL;
    if ( BYTE3(v20) )
      LODWORD(v21) = BYTE3(v20) - 1;
    else
      LODWORD(v21) = -1;
    HIDWORD(v21) = BYTE1(v20);
    LODWORD(v22) = BYTE2(v20);
    if ( (v20 & 8) != 0 )
      HIDWORD(v22) |= 1u;
    v13 = *a2;
    v23 = *((_QWORD *)&v20 + 1);
    *(_QWORD *)&v24 = v13 - ((v13 - 1) & 0xFFFFF) + 0xFFFFF;
    v14 = RtlpHpVaMgrCtxAlloc(HeapManager + 80, (unsigned int)&v24, v11, (unsigned int)&v21, v12);
    if ( !v14 )
      return 3221225626LL;
    *a2 = v24;
    *a1 = v14;
    return 0LL;
  }
  v16 = *a2;
  if ( (a4 & 0x2000) != 0 )
  {
    v17 = *((unsigned int *)&v24 + BYTE1(v20));
    v18 = v17 - (((_DWORD)v17 + (_DWORD)v16 - 1) & (unsigned int)(v17 - 1)) + v16 - 1;
  }
  else
  {
    v18 = v16 - ((v16 - 1) & 0xFFF) + 4095;
  }
  *(_QWORD *)&v24 = v18;
  if ( (a4 & 0x1000) != 0 && BYTE1(v20) >= 2u )
  {
    *a2 = v18;
    return 0LL;
  }
  v19 = a4 & 0xFEFBFFFF | 0x40000;
  if ( (((unsigned __int8)v20 >> 3) & ((v9 & 0x2000) != 0)) == 0 )
    v19 = v9;
  result = RtlpHpEnvAllocVA((_DWORD)a1, (unsigned int)&v24, 0, v19, a5, ((unsigned __int8)v20 >> 1) & 3, BYTE1(v20));
  if ( (int)result >= 0 )
  {
    *a2 = v24;
    return 0LL;
  }
  return result;
}
