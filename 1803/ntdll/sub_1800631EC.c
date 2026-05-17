/*
 * XREFs of sub_1800631EC @ 0x1800631EC
 * Callers:
 *     sub_180011AE0 @ 0x180011AE0 (sub_180011AE0.c)
 *     sub_180016A80 @ 0x180016A80 (sub_180016A80.c)
 *     sub_180017F70 @ 0x180017F70 (sub_180017F70.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180017410 (RtlGetCurrentServiceSessionId.c)
 *     RtlRbRemoveNode @ 0x180021260 (RtlRbRemoveNode.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800262F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028090 (RtlAcquireSRWLockExclusive.c)
 *     sub_18005F840 @ 0x18005F840 (sub_18005F840.c)
 *     sub_1800624DC @ 0x1800624DC (sub_1800624DC.c)
 *     sub_18006337C @ 0x18006337C (sub_18006337C.c)
 *     sub_18009A5F0 @ 0x18009A5F0 (sub_18009A5F0.c)
 *     sub_1800FC524 @ 0x1800FC524 (sub_1800FC524.c)
 */

unsigned __int64 __fastcall sub_1800631EC(__int64 a1, unsigned __int64 a2, unsigned __int64 *a3, __int64 a4)
{
  volatile signed __int64 *v4; // rsi
  int v6; // edi
  unsigned __int64 v7; // rax
  int v8; // r10d
  __int64 v9; // r14
  unsigned __int64 v10; // rsi
  unsigned __int64 v11; // rax
  char v12; // cl
  __int64 v13; // rax
  unsigned __int64 v14; // rdi
  __int64 v15; // rcx
  __int128 v17; // [rsp+30h] [rbp-20h] BYREF
  __int128 v18; // [rsp+40h] [rbp-10h] BYREF
  unsigned __int64 v19; // [rsp+88h] [rbp+38h] BYREF
  unsigned __int64 v20; // [rsp+98h] [rbp+48h] BYREF

  v19 = a2;
  v4 = (volatile signed __int64 *)(a1 + 72);
  v6 = (unsigned __int8)a3 & 1;
  if ( ((unsigned __int8)a3 & 1) == 0 )
    RtlAcquireSRWLockExclusive(a1 + 72, a2, a3, a4);
  v7 = sub_18006337C(a1);
  v9 = v7;
  if ( v7 )
  {
    RtlRbRemoveNode(a1 + 80, v7);
    if ( !v6 )
      RtlReleaseSRWLockExclusive(v4);
    v11 = *(_QWORD *)(v9 + 32);
    v12 = (unsigned __int8)v11 >> 2;
    v17 = *(_OWORD *)a1;
    v13 = (((v11 >> 12) + ((v11 >> 1) & 1)) << 12) - 1;
    v20 = (1LL << v12) - (((1LL << v12) - 1) & ((1LL << v12) + v13)) + v13;
    sub_1800624DC(&v19, &v20, 0x8000, &v17);
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 104), -(*(_QWORD *)(v9 + 32) >> 12));
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 96), -(__int64)(v20 >> 12));
    v18 = *(_OWORD *)a1;
    sub_18005F840(v9, &v18);
    v14 = v20;
    v10 = v20;
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
    {
      v14 = v20;
      v15 = (__int64)NtCurrentPeb()->HotpatchInformation + 558;
    }
    else
    {
      v15 = 2147353480LL;
    }
    if ( *(_BYTE *)v15 )
      sub_1800FC524(a1, v19, v14);
  }
  else
  {
    if ( !v6 )
    {
      RtlReleaseSRWLockExclusive(v4);
      v8 = v19;
    }
    sub_18009A5F0(8, a1, v8, 0, 0LL, 0LL);
    return 0LL;
  }
  return v10;
}
