/*
 * XREFs of MmMapApiSetView @ 0x1404EA2A8
 * Callers:
 *     PspSetupUserProcessAddressSpace @ 0x1404E9DD0 (PspSetupUserProcessAddressSpace.c)
 *     PspAllocateProcess @ 0x1404ED888 (PspAllocateProcess.c)
 * Callees:
 *     PsGetServerSiloGlobals @ 0x14006CD90 (PsGetServerSiloGlobals.c)
 *     PsGetProcessServerSilo @ 0x14006CFF0 (PsGetProcessServerSilo.c)
 *     PsIsHostSilo @ 0x140108640 (PsIsHostSilo.c)
 *     MmMapViewOfSection @ 0x1404EA390 (MmMapViewOfSection.c)
 */

__int64 __fastcall MmMapApiSetView(__int64 a1)
{
  __int64 ProcessServerSilo; // rdi
  __int64 v3; // rcx
  __int64 result; // rax
  int v5; // r8d
  __int64 v6; // rcx
  __int64 *v7; // rdx
  __int16 v8; // r9
  __int64 v9; // [rsp+68h] [rbp+10h] BYREF
  __int64 v10; // [rsp+70h] [rbp+18h] BYREF
  __int64 v11; // [rsp+78h] [rbp+20h] BYREF

  v9 = 0LL;
  v11 = 0LL;
  v10 = 0LL;
  ProcessServerSilo = PsGetProcessServerSilo(a1);
  if ( PsIsHostSilo(ProcessServerSilo) )
    LODWORD(v3) = qword_1403CB478;
  else
    v3 = *((_QWORD *)PsGetServerSiloGlobals(ProcessServerSilo) + 128);
  result = MmMapViewOfSection(v3, a1, (unsigned int)&v9, 0, 0LL, (__int64)&v11, (__int64)&v10, 1, 0x400000, 2);
  if ( (int)result >= 0 )
  {
    v5 = v9;
    *(_QWORD *)(*(_QWORD *)(a1 + 1016) + 104LL) = v9;
    v6 = 0LL;
    v7 = *(__int64 **)(a1 + 1064);
    if ( v7 )
    {
      v8 = *((_WORD *)v7 + 4);
      if ( v8 == 332 || v8 == 452 )
        v6 = *v7;
    }
    if ( v6 )
      *(_DWORD *)(v6 + 56) = v5;
  }
  return result;
}
