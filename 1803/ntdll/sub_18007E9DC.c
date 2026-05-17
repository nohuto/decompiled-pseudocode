/*
 * XREFs of sub_18007E9DC @ 0x18007E9DC
 * Callers:
 *     sub_18001AC70 @ 0x18001AC70 (sub_18001AC70.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x1800262F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028090 (RtlAcquireSRWLockExclusive.c)
 *     sub_18005F5DC @ 0x18005F5DC (sub_18005F5DC.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009E4A0 (_guard_dispatch_icall_nop.c)
 *     RtlGetCurrentProcessorNumber @ 0x18009F270 (RtlGetCurrentProcessorNumber.c)
 *     memset @ 0x1800A16C0 (memset.c)
 */

_BYTE *__fastcall sub_18007E9DC(__int64 a1, __int64 a2, __int64 a3)
{
  char CurrentProcessorNumber; // al
  unsigned int v6; // edx
  unsigned int v7; // eax
  __int64 v8; // r15
  unsigned __int8 v9; // bl
  unsigned __int64 v10; // rdx
  unsigned __int64 *v11; // r8
  __int64 v12; // r9
  unsigned __int8 *v13; // rcx
  unsigned __int8 *v14; // r11
  unsigned int v15; // edx
  __int64 v16; // r8
  __int64 v17; // rax
  unsigned int v18; // ebx
  unsigned int v19; // ecx
  unsigned __int8 *v20; // r8
  unsigned __int8 v21; // r10
  unsigned int v22; // r9d
  unsigned int v23; // eax
  _BYTE *result; // rax
  __int64 v25; // rdx
  _BYTE *v26; // rsi
  signed __int32 v27[8]; // [rsp+0h] [rbp-A8h] BYREF
  __int64 v28; // [rsp+20h] [rbp-88h]
  _BYTE v29[64]; // [rsp+30h] [rbp-78h] BYREF

  CurrentProcessorNumber = RtlGetCurrentProcessorNumber(a1, a2, a3);
  v6 = *(unsigned __int8 *)(a1 + 48);
  v7 = CurrentProcessorNumber & 0x3F;
  if ( v7 >= v6 )
  {
    if ( v7 == v6 || (_BYTE)v6 == 1 )
      v7 = 0;
    else
      v7 = *(unsigned __int8 *)(v7 - v6 - 1 + *(_QWORD *)(a1 + 56));
  }
  v8 = v7;
  v9 = *(_BYTE *)(v7 + *(_QWORD *)(a2 + 88));
  memset(v29, 0, sizeof(v29));
  RtlAcquireSRWLockExclusive(a2 + 80, v10, v11, v12);
  v13 = *(unsigned __int8 **)(a2 + 88);
  v14 = &v13[v8];
  if ( v9 != v13[v8] )
    return (_BYTE *)RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a2 + 80));
  v15 = *(unsigned __int8 *)(a1 + 48);
  if ( *(_BYTE *)(a1 + 48) )
  {
    v16 = *(unsigned __int8 *)(a1 + 48);
    do
    {
      v17 = *v13++;
      ++v29[v17];
      --v16;
    }
    while ( v16 );
  }
  if ( v29[v9] == 1 )
    return (_BYTE *)RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a2 + 80));
  v18 = v9 + 1;
  v19 = v18;
  if ( v18 < v15 )
  {
    v20 = &v29[v18];
    do
    {
      v21 = *v20;
      v22 = v19;
      if ( !*v20 )
        break;
      ++v19;
      ++v20;
      if ( v21 >= v29[v18] )
        v22 = v18;
      v18 = v22;
    }
    while ( v19 < v15 );
  }
  if ( v29[v18] )
  {
    *v14 = v18;
    return (_BYTE *)RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a2 + 80));
  }
  v23 = *(unsigned __int8 *)(a2 + 77);
  if ( v23 < dword_180159764 )
  {
    *(_BYTE *)(a2 + 77) = v23 + 1;
    return (_BYTE *)RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a2 + 80));
  }
  RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a2 + 80));
  v28 = 0LL;
  v25 = *(_QWORD *)(a2 + 96);
  LOWORD(v28) = 2;
  result = (_BYTE *)_InterlockedCompareExchange64((volatile signed __int64 *)(v25 + 8LL * v18), 2LL, 0LL);
  if ( !result )
  {
    result = (_BYTE *)((__int64 (__fastcall *)(_QWORD, __int64))(a1 ^ qword_18015A440 ^ *(_QWORD *)(a1 + 40)))(
                        *(_QWORD *)a1,
                        64LL);
    v26 = result;
    if ( result )
    {
      memset(result, 0, 0x40uLL);
      result = sub_18005F5DC(v26, *(_BYTE *)(a2 + 1), v18);
    }
    *(_QWORD *)(*(_QWORD *)(a2 + 96) + 8LL * v18) = v26;
    if ( v26 )
    {
      _InterlockedOr(v27, 0);
      *(_BYTE *)(a2 + 2) = v18 + 1;
      result = *(_BYTE **)(a2 + 88);
      result[v8] = v18;
      *(_BYTE *)(a2 + 77) = 0;
    }
  }
  return result;
}
