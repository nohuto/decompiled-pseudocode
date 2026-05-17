/*
 * XREFs of sub_180047198 @ 0x180047198
 * Callers:
 *     sub_180024608 @ 0x180024608 (sub_180024608.c)
 *     sub_180024CB8 @ 0x180024CB8 (sub_180024CB8.c)
 *     sub_180026330 @ 0x180026330 (sub_180026330.c)
 *     sub_180047138 @ 0x180047138 (sub_180047138.c)
 *     sub_1800484B8 @ 0x1800484B8 (sub_1800484B8.c)
 *     TpSetDefaultPoolStackInformation @ 0x180048900 (TpSetDefaultPoolStackInformation.c)
 *     TpReleasePool @ 0x18007E670 (TpReleasePool.c)
 *     TpSetDefaultPoolMaxThreads @ 0x180108120 (TpSetDefaultPoolMaxThreads.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x1800262F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028090 (RtlAcquireSRWLockExclusive.c)
 *     TpReleasePool @ 0x18007E670 (TpReleasePool.c)
 */

signed __int64 __fastcall sub_180047198(const void **a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  volatile signed __int64 *v4; // rdi
  volatile signed __int32 *v6; // r8
  signed __int32 v7; // ecx
  bool v8; // zf
  signed __int32 v9; // eax
  signed __int64 result; // rax
  volatile signed __int32 *v11; // rdx
  signed __int32 v12; // ecx
  signed __int32 v13; // r8d
  signed __int32 v14; // eax
  signed __int32 v15; // eax
  const void *v16; // [rsp+30h] [rbp+8h]

  v4 = (volatile signed __int64 *)a2;
  v16 = 0LL;
  v6 = (volatile signed __int32 *)*a1;
  _m_prefetchw(*a1);
  v7 = *v6;
  while ( v7 > 1 )
  {
    a2 = (unsigned int)v7;
    v9 = _InterlockedCompareExchange(v6, v7 - 1, v7);
    v8 = v7 == v9;
    v7 = v9;
    if ( v8 )
    {
      result = (unsigned int)(a2 - 1);
      goto LABEL_5;
    }
  }
  result = 0LL;
LABEL_5:
  if ( !(_DWORD)result )
  {
    RtlAcquireSRWLockExclusive((unsigned __int64)v4, a2, (unsigned __int64 *)v6, a4);
    v11 = (volatile signed __int32 *)*a1;
    _m_prefetchw(*a1);
    v12 = *v11;
    while ( v12 > 1 )
    {
      v13 = v12;
      v14 = _InterlockedCompareExchange(v11, v12 - 1, v12);
      v8 = v12 == v14;
      v12 = v14;
      if ( v8 )
      {
        v15 = v13 - 1;
        goto LABEL_13;
      }
    }
    v15 = 0;
LABEL_13:
    if ( !v15 )
    {
      v16 = *a1;
      *a1 = 0LL;
    }
    result = RtlReleaseSRWLockExclusive(v4);
    if ( v16 )
      return TpReleasePool();
  }
  return result;
}
