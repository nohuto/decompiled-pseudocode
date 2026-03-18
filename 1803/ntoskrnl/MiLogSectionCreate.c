/*
 * XREFs of MiLogSectionCreate @ 0x14074C154
 * Callers:
 *     MiSegmentDelete @ 0x1404BC75C (MiSegmentDelete.c)
 *     MiCreatePagingFileMap @ 0x1404BC908 (MiCreatePagingFileMap.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x1400C1C38 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     MiLogPerfMemoryRangeEvent @ 0x1402547CC (MiLogPerfMemoryRangeEvent.c)
 *     MiInitPerfMemoryFlags @ 0x1402602EC (MiInitPerfMemoryFlags.c)
 */

__int64 *__fastcall MiLogSectionCreate(__int64 *a1, int a2)
{
  __int64 v2; // rsi
  __int64 *v3; // rbx
  int v5; // r15d
  __int64 v6; // rdi
  __int64 v7; // rax
  unsigned int inited; // eax
  __int64 *result; // rax
  _QWORD v10[2]; // [rsp+30h] [rbp-40h] BYREF
  int v11; // [rsp+40h] [rbp-30h]
  _QWORD *v12; // [rsp+48h] [rbp-28h] BYREF
  int v13; // [rsp+50h] [rbp-20h]
  int v14; // [rsp+54h] [rbp-1Ch]
  _QWORD *v15; // [rsp+58h] [rbp-18h] BYREF
  int v16; // [rsp+60h] [rbp-10h]
  int v17; // [rsp+64h] [rbp-Ch]

  v2 = *a1;
  v3 = a1 + 16;
  v5 = *(_DWORD *)(*a1 + 48);
  do
  {
    v6 = v3[1];
    if ( v6 )
    {
      v7 = *((unsigned int *)v3 + 11);
      v10[0] = v3[1];
      v10[1] = v6 + 8 * v7;
      if ( a2 == 1 )
      {
        v14 = 0;
        v11 = v5;
        v12 = v10;
        v13 = 24;
        EtwTraceKernelEvent((int)&v12, 1, 0x20400001u, 585, 4200706);
        if ( (*(_WORD *)(v2 + 12) & 0x1000) != 0 && (BYTE4(PerfGlobalGroupMask[0]) & 1) != 0 )
        {
          inited = MiInitPerfMemoryFlags(1, 2);
          MiLogPerfMemoryRangeEvent(v6, 0LL, inited, *((unsigned int *)v3 + 11));
        }
      }
      else
      {
        v11 = -1;
        v17 = 0;
        v15 = v10;
        v16 = 24;
        EtwTraceKernelEvent((int)&v15, 1, 0x20400001u, 591, 20977922);
      }
    }
    result = (__int64 *)v3[2];
    v3 = result;
  }
  while ( result );
  return result;
}
