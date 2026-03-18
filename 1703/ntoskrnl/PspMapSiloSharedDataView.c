/*
 * XREFs of PspMapSiloSharedDataView @ 0x14049BEE0
 * Callers:
 *     PspSetupUserProcessAddressSpace @ 0x14049BA50 (PspSetupUserProcessAddressSpace.c)
 *     PspAllocateProcess @ 0x14049E8B8 (PspAllocateProcess.c)
 * Callees:
 *     PsIsHostSilo @ 0x140050C00 (PsIsHostSilo.c)
 *     PsGetProcessServerSilo @ 0x140085020 (PsGetProcessServerSilo.c)
 *     MmMapViewOfSection @ 0x14049C1F0 (MmMapViewOfSection.c)
 */

__int64 __fastcall PspMapSiloSharedDataView(__int64 a1)
{
  __int64 ProcessServerSilo; // rsi
  __int64 result; // rax
  int v4; // edx
  __int64 v5; // rax
  __int64 *v6; // rcx
  __int16 v7; // r8
  __int64 v8; // [rsp+78h] [rbp+10h] BYREF
  __int64 v9; // [rsp+80h] [rbp+18h] BYREF
  __int64 v10; // [rsp+88h] [rbp+20h] BYREF

  ProcessServerSilo = PsGetProcessServerSilo(a1);
  if ( PsIsHostSilo(ProcessServerSilo) )
    return 0LL;
  v8 = 0LL;
  v10 = 0LL;
  v9 = 0LL;
  result = MmMapViewOfSection(
             *(_QWORD *)(*(_QWORD *)(ProcessServerSilo + 1256) + 1080LL),
             a1,
             (unsigned int)&v8,
             0,
             0LL,
             (__int64)&v10,
             (__int64)&v9,
             1,
             0x400000,
             2);
  if ( (int)result >= 0 )
  {
    v4 = v8;
    *(_QWORD *)(*(_QWORD *)(a1 + 1016) + 144LL) = v8;
    v5 = 0LL;
    v6 = *(__int64 **)(a1 + 1064);
    if ( v6 )
    {
      v7 = *((_WORD *)v6 + 4);
      if ( v7 == 332 || v7 == 452 )
        v5 = *v6;
    }
    if ( v5 )
      *(_DWORD *)(v5 + 80) = v4;
    return 0LL;
  }
  return result;
}
