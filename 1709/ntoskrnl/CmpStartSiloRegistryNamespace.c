/*
 * XREFs of CmpStartSiloRegistryNamespace @ 0x1405BFCC4
 * Callers:
 *     CmInitServerSiloState @ 0x1405BFC38 (CmInitServerSiloState.c)
 *     VrpHandleIoctlInitializeJobForVreg @ 0x1406A43C0 (VrpHandleIoctlInitializeJobForVreg.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     memset @ 0x140192F40 (memset.c)
 *     CmpLockKcbExclusive @ 0x140478D48 (CmpLockKcbExclusive.c)
 *     CmpLockRegistry @ 0x14047E6F0 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x14047E950 (CmpUnlockRegistry.c)
 *     CmpUnlockKcb @ 0x14047F670 (CmpUnlockKcb.c)
 *     CmpCreateKeyBody @ 0x1404B8240 (CmpCreateKeyBody.c)
 *     CmpCleanupParseContext @ 0x1404E322C (CmpCleanupParseContext.c)
 */

__int64 __fastcall CmpStartSiloRegistryNamespace(__int64 a1)
{
  ULONG_PTR *v2; // rbx
  signed __int32 **v3; // rbx
  int KeyBody; // eax
  ULONG_PTR v5; // rcx
  unsigned int v6; // edi
  signed __int64 v7; // rax
  __int64 v9; // [rsp+48h] [rbp-C0h] BYREF
  signed __int64 v10; // [rsp+50h] [rbp-B8h] BYREF
  _QWORD v11[30]; // [rsp+58h] [rbp-B0h] BYREF

  memset(v11, 0, sizeof(v11));
  v11[19] = &v11[18];
  v11[18] = &v11[18];
  memset(&v11[20], 0, 0x50uLL);
  v2 = 0LL;
  v10 = 0LL;
  if ( *(_QWORD *)(a1 + 32) )
    goto LABEL_4;
  CmpLockRegistry();
  v3 = (signed __int32 **)CmpRegistryRootObject;
  CmpLockKcbExclusive(*((_QWORD *)CmpRegistryRootObject + 1));
  KeyBody = CmpCreateKeyBody(v3[1], 0, (__int64)v11, 0LL, 1, (ULONG_PTR **)&v10, (bool *)&v9);
  v5 = (ULONG_PTR)v3[1];
  v6 = KeyBody;
  if ( KeyBody >= 0 )
  {
    CmpUnlockKcb(v5);
    CmpUnlockRegistry();
    v7 = -_InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 32), v10, 0LL);
    v2 = (ULONG_PTR *)(v10 & -(__int64)(v7 != 0));
LABEL_4:
    v6 = 0;
    goto LABEL_5;
  }
  CmpUnlockKcb(v5);
  CmpUnlockRegistry();
  v2 = (ULONG_PTR *)v10;
LABEL_5:
  CmpCleanupParseContext((__int64)v11, 0);
  if ( v2 )
    ObfDereferenceObject(v2);
  return v6;
}
