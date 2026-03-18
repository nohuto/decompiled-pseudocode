/*
 * XREFs of PipSendQueryRemoveIrpAndCheckOpenHandles @ 0x14055BC8C
 * Callers:
 *     PipProcessQueryRemovalInKernelMode @ 0x14055BBFC (PipProcessQueryRemovalInKernelMode.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     PnpLogVetoInformation @ 0x14055BDB8 (PnpLogVetoInformation.c)
 *     PipEventRemovalCheckOpenHandles @ 0x14055BE10 (PipEventRemovalCheckOpenHandles.c)
 *     PnpDeleteLockedDeviceNodes @ 0x14055D2E8 (PnpDeleteLockedDeviceNodes.c)
 *     PnpCollectOpenHandles @ 0x1406CAD60 (PnpCollectOpenHandles.c)
 *     PipRecordOpenHandleVeto @ 0x1406D54D4 (PipRecordOpenHandleVeto.c)
 */

__int64 __fastcall PipSendQueryRemoveIrpAndCheckOpenHandles(int a1, __int64 a2, int a3, int a4, __int64 a5, _DWORD *a6)
{
  __int64 v6; // r15
  _DWORD *v8; // r14
  unsigned int v9; // edi
  int v11; // esi
  char v12; // cl
  __int64 v13; // rax
  __int64 v14; // rdi
  int v16; // r9d
  __int64 v17; // rax
  _QWORD *v18; // rdi
  _QWORD *v19; // rbx
  __int64 v20; // rax
  _QWORD v21[6]; // [rsp+40h] [rbp-30h] BYREF
  __int64 v22; // [rsp+A8h] [rbp+38h] BYREF

  v6 = *(_QWORD *)(a2 + 144);
  v8 = a6;
  v9 = a4;
  v22 = 0LL;
  LOBYTE(a4) = 1;
  v11 = PnpDeleteLockedDeviceNodes(
          v6,
          a3,
          0,
          a4,
          *(_DWORD *)(a2 + 16),
          *(_DWORD *)(a2 + 20),
          (ULONG_PTR)a6,
          (__int64)(a6 + 2));
  memset(v21, 0, 0x28uLL);
  v12 = BYTE5(v21[4]);
  if ( (a1 & 0xFFFFFFFB) == 0 )
    v12 = 1;
  BYTE5(v21[4]) = v12;
  if ( v6 )
    v13 = *(_QWORD *)(*(_QWORD *)(v6 + 312) + 40LL);
  else
    v13 = 0LL;
  LODWORD(v21[4]) = 0;
  v21[0] = 0LL;
  v21[1] = v13 + 40;
  v21[3] = &v21[2];
  v21[2] = &v21[2];
  BYTE4(v21[4]) = (NtGlobalFlag & 0x4000) != 0;
  if ( v11 < 0 )
  {
    if ( *v8 == 6 )
      PnpCollectOpenHandles(a5, v9, v21);
  }
  else
  {
    v11 = PipEventRemovalCheckOpenHandles(a5, v9, &v22);
    if ( v11 < 0 )
    {
      PipRecordOpenHandleVeto(v9, a5, v22, v21, v8);
      LOBYTE(v16) = 1;
      PnpDeleteLockedDeviceNodes(v6, a3, 1, v16, 0, 0, 0LL, 0LL);
      v11 = -2147483608;
    }
  }
  if ( BYTE5(v21[4]) )
  {
    PnpLogVetoInformation(v21[1], &v21[2]);
    while ( 1 )
    {
      v14 = v21[2];
      if ( (_QWORD *)v21[2] == &v21[2] )
        break;
      if ( *(_QWORD **)(v21[2] + 8LL) != &v21[2]
        || (v17 = *(_QWORD *)v21[2], *(_QWORD *)(*(_QWORD *)v21[2] + 8LL) != v21[2]) )
      {
        __fastfail(3u);
      }
      v21[2] = *(_QWORD *)v21[2];
      *(_QWORD *)(v17 + 8) = &v21[2];
      v18 = (_QWORD *)(v14 - 24);
      while ( 1 )
      {
        v19 = (_QWORD *)*v18;
        if ( (_QWORD *)*v18 == v18 )
          break;
        if ( (_QWORD *)v19[1] != v18 || (v20 = *v19, *(_QWORD **)(*v19 + 8LL) != v19) )
          __fastfail(3u);
        *v18 = v20;
        *(_QWORD *)(v20 + 8) = v18;
        ObfDereferenceObject((PVOID)*(v19 - 1));
        ExFreePoolWithTag(v19 - 1, 0x50706E50u);
      }
      ExFreePoolWithTag(v18, 0x4F706E50u);
    }
  }
  return (unsigned int)v11;
}
