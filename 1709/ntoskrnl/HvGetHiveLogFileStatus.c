/*
 * XREFs of HvGetHiveLogFileStatus @ 0x1404E5FF0
 * Callers:
 *     CmpGenerateFlushControlData @ 0x1404E5CC4 (CmpGenerateFlushControlData.c)
 * Callees:
 *     RtlAreBitsClear @ 0x1400AFA40 (RtlAreBitsClear.c)
 *     HvpCountSetRangesInVector @ 0x1405096E4 (HvpCountSetRangesInVector.c)
 */

unsigned __int64 __fastcall HvGetHiveLogFileStatus(__int64 a1, unsigned int a2, int *a3)
{
  unsigned __int64 v4; // r14
  __int64 v6; // rbp
  __int64 v7; // rcx
  unsigned __int64 v8; // rcx
  int v9; // eax
  int v10; // ecx
  unsigned __int64 result; // rax

  v4 = a2;
  v6 = (unsigned int)(*(_DWORD *)(a1 + 88) << 9)
     + 40LL
     + 8LL * (unsigned int)HvpCountSetRangesInVector((PRTL_BITMAP)(a1 + 72));
  if ( RtlAreBitsClear((PRTL_BITMAP)(a1 + 72), 0, 8u) )
    v6 += 4104LL;
  v7 = *(unsigned int *)(a1 + 160);
  *a3 = 0;
  v8 = v6 + v7;
  v9 = *a3;
  if ( *(_BYTE *)(a1 + 175) )
    v9 = 2;
  *a3 = v9;
  if ( v8 > 0x2000000 )
    *a3 |= 4u;
  if ( *(_DWORD *)(a1 + 152) == -1 )
    *a3 |= 8u;
  v10 = *a3;
  if ( *a3 && (result = *(unsigned int *)(a1 + 5488), (result & 2) != 0) )
  {
    *a3 = v10 | 1;
  }
  else
  {
    if ( v6 + (unsigned __int64)*(unsigned int *)(a1 + 160) >= v4 )
      *a3 = v10 | 0x10;
    result = v6 + *(unsigned int *)(a1 + 160);
    if ( result >= v4 )
      *a3 |= 0x20u;
  }
  return result;
}
