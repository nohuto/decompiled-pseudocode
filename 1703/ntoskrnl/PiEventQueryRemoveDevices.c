/*
 * XREFs of PiEventQueryRemoveDevices @ 0x14059A3AC
 * Callers:
 *     PnpProcessQueryRemoveAndEject @ 0x14056E6B4 (PnpProcessQueryRemoveAndEject.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     PnpDeleteLockedDeviceNodes @ 0x14056FE2C (PnpDeleteLockedDeviceNodes.c)
 *     PnpLogVetoInformation @ 0x14059A4E0 (PnpLogVetoInformation.c)
 *     PiEventRemovalCheckOpenHandles @ 0x14059A538 (PiEventRemovalCheckOpenHandles.c)
 *     PnpCollectOpenHandles @ 0x1406A0430 (PnpCollectOpenHandles.c)
 *     PiEventRemovalOpenHandleVeto @ 0x1406AA3FC (PiEventRemovalOpenHandleVeto.c)
 */

__int64 __fastcall PiEventQueryRemoveDevices(
        int a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        __int64 a6,
        _DWORD *a7,
        __int64 a8,
        _QWORD *a9)
{
  int v12; // esi
  char v13; // cl
  __int64 v14; // rax
  __int64 v15; // rdi
  __int64 v17; // rax
  __int64 **v18; // rdi
  __int64 *v19; // rbx
  __int64 v20; // rax
  _QWORD v21[6]; // [rsp+40h] [rbp-30h] BYREF

  v12 = PnpDeleteLockedDeviceNodes(a3, a4, 0, 1, *(_DWORD *)(a2 + 16), *(_DWORD *)(a2 + 20), (ULONG_PTR)a7, a8);
  memset(v21, 0, 0x28uLL);
  v13 = BYTE5(v21[4]);
  if ( (a1 & 0xFFFFFFFB) == 0 )
    v13 = 1;
  BYTE5(v21[4]) = v13;
  if ( a3 )
    v14 = *(_QWORD *)(*(_QWORD *)(a3 + 312) + 40LL);
  else
    v14 = 0LL;
  LODWORD(v21[4]) = 0;
  v21[1] = v14 + 40;
  v21[3] = &v21[2];
  v21[2] = &v21[2];
  v21[0] = 0LL;
  BYTE4(v21[4]) = (NtGlobalFlag & 0x4000) != 0;
  if ( v12 < 0 )
  {
    if ( *a7 == 6 )
      PnpCollectOpenHandles(a6, a5, v21);
  }
  else
  {
    v12 = PiEventRemovalCheckOpenHandles(a6, a5, a9);
    if ( v12 < 0 )
    {
      PiEventRemovalOpenHandleVeto(a5, a6, *a9, v21, a7, a8);
      PnpDeleteLockedDeviceNodes(a3, a4, 1, 1, 0, 0, 0LL, 0LL);
      v12 = -2147483608;
    }
  }
  if ( BYTE5(v21[4]) )
  {
    PnpLogVetoInformation(v21[1], &v21[2]);
    while ( 1 )
    {
      v15 = v21[2];
      if ( (_QWORD *)v21[2] == &v21[2] )
        break;
      v17 = *(_QWORD *)v21[2];
      if ( *(_QWORD **)(v21[2] + 8LL) != &v21[2] || *(_QWORD *)(v17 + 8) != v21[2] )
        __fastfail(3u);
      v21[2] = *(_QWORD *)v21[2];
      *(_QWORD *)(v17 + 8) = &v21[2];
      v18 = (__int64 **)(v15 - 24);
      while ( 1 )
      {
        v19 = *v18;
        if ( *v18 == (__int64 *)v18 )
          break;
        v20 = *v19;
        if ( (__int64 **)v19[1] != v18 || *(__int64 **)(v20 + 8) != v19 )
          __fastfail(3u);
        *v18 = (__int64 *)v20;
        *(_QWORD *)(v20 + 8) = v18;
        ObfDereferenceObject((PVOID)*(v19 - 1));
        ExFreePoolWithTag(v19 - 1, 0x50706E50u);
      }
      ExFreePoolWithTag(v18, 0x4F706E50u);
    }
  }
  return (unsigned int)v12;
}
