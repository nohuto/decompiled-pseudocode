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

void __fastcall sub_18007E9DC(__int64 a1, __int64 a2)
{
  char CurrentProcessorNumber; // al
  unsigned int v5; // edx
  unsigned int v6; // eax
  __int64 v7; // r15
  unsigned __int8 v8; // bl
  unsigned __int8 *v9; // rcx
  unsigned __int8 *v10; // r11
  unsigned int v11; // edx
  __int64 v12; // r8
  __int64 v13; // rax
  unsigned int v14; // ebx
  unsigned int v15; // ecx
  unsigned __int8 *v16; // r8
  unsigned __int8 v17; // r10
  unsigned int v18; // r9d
  unsigned int v19; // eax
  __int64 v20; // rdx
  _BYTE *v21; // rax
  _BYTE *v22; // rsi
  signed __int32 v23[8]; // [rsp+0h] [rbp-A8h] BYREF
  __int64 v24; // [rsp+20h] [rbp-88h]
  _BYTE v25[64]; // [rsp+30h] [rbp-78h] BYREF

  CurrentProcessorNumber = RtlGetCurrentProcessorNumber();
  v5 = *(unsigned __int8 *)(a1 + 48);
  v6 = CurrentProcessorNumber & 0x3F;
  if ( v6 >= v5 )
  {
    if ( v6 == v5 || (_BYTE)v5 == 1 )
      v6 = 0;
    else
      v6 = *(unsigned __int8 *)(v6 - v5 - 1 + *(_QWORD *)(a1 + 56));
  }
  v7 = v6;
  v8 = *(_BYTE *)(v6 + *(_QWORD *)(a2 + 88));
  memset(v25, 0, sizeof(v25));
  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a2 + 80));
  v9 = *(unsigned __int8 **)(a2 + 88);
  v10 = &v9[v7];
  if ( v8 != v9[v7] )
    goto LABEL_13;
  v11 = *(unsigned __int8 *)(a1 + 48);
  if ( *(_BYTE *)(a1 + 48) )
  {
    v12 = *(unsigned __int8 *)(a1 + 48);
    do
    {
      v13 = *v9++;
      ++v25[v13];
      --v12;
    }
    while ( v12 );
  }
  if ( v25[v8] == 1 )
    goto LABEL_13;
  v14 = v8 + 1;
  v15 = v14;
  if ( v14 < v11 )
  {
    v16 = &v25[v14];
    do
    {
      v17 = *v16;
      v18 = v15;
      if ( !*v16 )
        break;
      ++v15;
      ++v16;
      if ( v17 >= v25[v14] )
        v18 = v14;
      v14 = v18;
    }
    while ( v15 < v11 );
  }
  if ( v25[v14] )
  {
    *v10 = v14;
    goto LABEL_13;
  }
  v19 = *(unsigned __int8 *)(a2 + 77);
  if ( v19 < dword_180159764 )
  {
    *(_BYTE *)(a2 + 77) = v19 + 1;
LABEL_13:
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a2 + 80));
    return;
  }
  RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a2 + 80));
  v24 = 0LL;
  v20 = *(_QWORD *)(a2 + 96);
  LOWORD(v24) = 2;
  if ( !_InterlockedCompareExchange64((volatile signed __int64 *)(v20 + 8LL * v14), 2LL, 0LL) )
  {
    v21 = (_BYTE *)((__int64 (__fastcall *)(_QWORD, __int64))(a1 ^ qword_18015A440 ^ *(_QWORD *)(a1 + 40)))(
                     *(_QWORD *)a1,
                     64LL);
    v22 = v21;
    if ( v21 )
    {
      memset(v21, 0, 0x40uLL);
      sub_18005F5DC(v22, *(_BYTE *)(a2 + 1), v14);
    }
    *(_QWORD *)(*(_QWORD *)(a2 + 96) + 8LL * v14) = v22;
    if ( v22 )
    {
      _InterlockedOr(v23, 0);
      *(_BYTE *)(a2 + 2) = v14 + 1;
      *(_BYTE *)(v7 + *(_QWORD *)(a2 + 88)) = v14;
      *(_BYTE *)(a2 + 77) = 0;
    }
  }
}
