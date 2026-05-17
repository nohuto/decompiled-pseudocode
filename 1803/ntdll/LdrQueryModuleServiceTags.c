/*
 * XREFs of LdrQueryModuleServiceTags @ 0x1800CA9A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001F5FC @ 0x18001F5FC (sub_18001F5FC.c)
 *     sub_18001FA3C @ 0x18001FA3C (sub_18001FA3C.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800262F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028090 (RtlAcquireSRWLockExclusive.c)
 */

__int64 __fastcall LdrQueryModuleServiceTags(unsigned __int64 a1, __int64 a2, unsigned int *a3)
{
  __int64 result; // rax
  unsigned __int64 v6; // rdx
  unsigned __int64 *v7; // r8
  __int64 v8; // r9
  unsigned __int64 v9; // rsi
  __int64 v10; // rbx
  unsigned int v11; // edi
  __int64 *v12; // r8
  unsigned __int64 v13[5]; // [rsp+20h] [rbp-28h] BYREF
  int v14; // [rsp+68h] [rbp+20h] BYREF

  result = sub_18001FA3C(a1, (__int64 *)v13, &v14);
  if ( (int)result >= 0 )
  {
    RtlAcquireSRWLockExclusive((unsigned __int64)&qword_18015D070, v6, v7, v8);
    v9 = v13[0];
    v10 = 0LL;
    v11 = *a3;
    v12 = *(__int64 **)(*(_QWORD *)(v13[0] + 152) + 16LL);
    while ( v12 )
    {
      if ( (unsigned int)v10 < v11 )
        *(_DWORD *)(a2 + 4 * v10) = *((_DWORD *)v12 + 2);
      v12 = (__int64 *)*v12;
      v10 = (unsigned int)(v10 + 1);
    }
    RtlReleaseSRWLockExclusive(&qword_18015D070);
    *a3 = v10;
    sub_18001F5FC(v9);
    return v11 < (unsigned int)v10 ? 0xC0000023 : 0;
  }
  return result;
}
