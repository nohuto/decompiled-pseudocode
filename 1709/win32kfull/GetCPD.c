/*
 * XREFs of GetCPD @ 0x1C00F5458
 * Callers:
 *     _GetClassInfoEx @ 0x1C009DAA0 (_GetClassInfoEx.c)
 *     xxxSetWindowData @ 0x1C00A40EC (xxxSetWindowData.c)
 *     NtUserGetCPD @ 0x1C00F53E0 (NtUserGetCPD.c)
 *     xxxSetClassData @ 0x1C011CDDC (xxxSetClassData.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetCPD(__int64 a1, __int16 a2, __int64 a3)
{
  __int64 v3; // rbp
  _QWORD *v5; // rsi
  __int64 *i; // rax
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 result; // rax
  _QWORD *v10; // rdi
  _QWORD *v11; // [rsp+20h] [rbp-18h] BYREF
  _QWORD *v12; // [rsp+28h] [rbp-10h]

  v3 = a3;
  if ( (a2 & 0x60) != 0 || (a2 & 0x80u) != 0 )
    a1 = *(_QWORD *)(a1 + 168);
  v5 = (_QWORD *)(a1 + 56);
  for ( i = *(__int64 **)(a1 + 56); i; i = (__int64 *)i[7] )
  {
    v7 = i[5];
    if ( *(_QWORD *)(v7 + 16) == a3 && *(_WORD *)(v7 + 24) == a2 )
      break;
  }
  if ( i )
  {
    v8 = *i;
    return (unsigned int)v8 | 0xFFFF0000LL;
  }
  LOBYTE(a3) = 7;
  result = HMAllocObject(gptiCurrent, *(_QWORD *)(gptiCurrent + 432LL), a3, 72LL);
  v10 = (_QWORD *)result;
  if ( result )
  {
    v11 = (_QWORD *)(result + 56);
    v12 = (_QWORD *)*v5;
    HMAssignmentLock(&v11);
    v11 = v5;
    v12 = v10;
    HMAssignmentLock(&v11);
    *(_QWORD *)(v10[5] + 16LL) = v3;
    *(_WORD *)(v10[5] + 24LL) = a2;
    v8 = *v10;
    return (unsigned int)v8 | 0xFFFF0000LL;
  }
  return result;
}
