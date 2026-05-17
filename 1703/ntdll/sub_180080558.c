/*
 * XREFs of sub_180080558 @ 0x180080558
 * Callers:
 *     sub_18001FD40 @ 0x18001FD40 (sub_18001FD40.c)
 *     sub_180029FC0 @ 0x180029FC0 (sub_180029FC0.c)
 * Callees:
 *     sub_18000F1B0 @ 0x18000F1B0 (sub_18000F1B0.c)
 *     RtlReleaseSRWLockExclusive @ 0x180021A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028EC0 (RtlAcquireSRWLockExclusive.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     _guard_dispatch_icall_nop @ 0x1800A8C20 (_guard_dispatch_icall_nop.c)
 *     RtlGetCurrentProcessorNumber @ 0x1800A9950 (RtlGetCurrentProcessorNumber.c)
 *     memset @ 0x1800ABDC0 (memset.c)
 */

_BYTE *__fastcall sub_180080558(__int64 a1, __int64 a2)
{
  char CurrentProcessorNumber; // al
  unsigned int v5; // edx
  unsigned int v6; // eax
  __int64 v7; // r15
  unsigned __int8 v8; // bl
  unsigned __int8 *v9; // rcx
  unsigned __int8 *v10; // r10
  unsigned int v11; // edx
  __int64 v12; // r8
  __int64 v13; // rax
  __int64 v14; // rbx
  unsigned int v15; // r8d
  _BYTE *v16; // rcx
  unsigned int v17; // eax
  _BYTE *result; // rax
  __int64 v19; // rdx
  _BYTE *v20; // rbp
  signed __int32 v21[8]; // [rsp+0h] [rbp-A8h] BYREF
  __int64 v22; // [rsp+20h] [rbp-88h]
  _BYTE v23[64]; // [rsp+30h] [rbp-78h] BYREF

  CurrentProcessorNumber = RtlGetCurrentProcessorNumber(a1, a2);
  v5 = *(unsigned __int8 *)(a1 + 56);
  v6 = CurrentProcessorNumber & 0x3F;
  if ( v6 >= v5 )
  {
    if ( v6 == v5 || (_BYTE)v5 == 1 )
      v6 = 0;
    else
      v6 = *(unsigned __int8 *)(v6 - v5 - 1 + *(_QWORD *)(a1 + 64));
  }
  v7 = v6;
  v8 = *(_BYTE *)(v6 + *(_QWORD *)(a2 + 96));
  memset(v23, 0, sizeof(v23));
  RtlAcquireSRWLockExclusive((volatile signed __int64 *)(a2 + 80));
  v9 = *(unsigned __int8 **)(a2 + 96);
  v10 = &v9[v7];
  if ( v8 != v9[v7] )
    return (_BYTE *)RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a2 + 80));
  v11 = *(unsigned __int8 *)(a1 + 56);
  if ( *(_BYTE *)(a1 + 56) )
  {
    v12 = *(unsigned __int8 *)(a1 + 56);
    do
    {
      v13 = *v9++;
      ++v23[v13];
      --v12;
    }
    while ( v12 );
  }
  if ( v23[v8] == 1 )
    return (_BYTE *)RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a2 + 80));
  v14 = (unsigned int)v8 + 1;
  v15 = v14;
  if ( (unsigned int)v14 < v11 )
  {
    v16 = &v23[(unsigned int)v14];
    do
    {
      if ( !*v16 )
        break;
      if ( *v16 < v23[v14] )
        v14 = v15;
      ++v15;
      ++v16;
    }
    while ( v15 < v11 );
  }
  if ( v23[v14] )
  {
    *v10 = v14;
    return (_BYTE *)RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a2 + 80));
  }
  v17 = *(_DWORD *)(a2 + 88);
  if ( v17 < dword_180158688 )
  {
    *(_DWORD *)(a2 + 88) = v17 + 1;
    return (_BYTE *)RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a2 + 80));
  }
  RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a2 + 80));
  v22 = 0LL;
  v19 = *(_QWORD *)(a2 + 104);
  LOWORD(v22) = 2;
  result = (_BYTE *)_InterlockedCompareExchange64((volatile signed __int64 *)(v19 + 8 * v14), 2LL, 0LL);
  if ( !result )
  {
    result = (_BYTE *)((__int64 (__fastcall *)(_QWORD, __int64))(a1 ^ qword_18015BFA8 ^ *(_QWORD *)(a1 + 40)))(
                        *(_QWORD *)a1,
                        56LL);
    v20 = result;
    if ( result )
      result = sub_18000F1B0(result, *(_BYTE *)(a2 + 1), v14);
    *(_QWORD *)(*(_QWORD *)(a2 + 104) + 8 * v14) = v20;
    if ( v20 )
    {
      _InterlockedOr(v21, 0);
      *(_BYTE *)(a2 + 2) = v14 + 1;
      result = *(_BYTE **)(a2 + 96);
      result[v7] = v14;
      *(_DWORD *)(a2 + 88) = 0;
    }
  }
  return result;
}
