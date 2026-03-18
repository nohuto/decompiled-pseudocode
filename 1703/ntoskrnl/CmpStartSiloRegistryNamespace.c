/*
 * XREFs of CmpStartSiloRegistryNamespace @ 0x1405A383C
 * Callers:
 *     CmInitServerSiloState @ 0x1405A37B0 (CmInitServerSiloState.c)
 *     VrpHandleIoctlInitializeJobForVreg @ 0x140679E44 (VrpHandleIoctlInitializeJobForVreg.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     memset @ 0x140192D80 (memset.c)
 *     CmpLockKcbExclusive @ 0x1404916C8 (CmpLockKcbExclusive.c)
 *     CmpCleanupParseContext @ 0x1404D5440 (CmpCleanupParseContext.c)
 *     CmpLockRegistry @ 0x1404FF6F0 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x1404FF92C (CmpUnlockRegistry.c)
 *     CmpUnlockKcb @ 0x140500590 (CmpUnlockKcb.c)
 *     CmpCreateKeyBody @ 0x140538160 (CmpCreateKeyBody.c)
 */

__int64 __fastcall CmpStartSiloRegistryNamespace(__int64 a1)
{
  unsigned __int64 *v2; // rbx
  _QWORD *v3; // rbx
  int KeyBody; // eax
  __int64 v5; // rcx
  unsigned int v6; // edi
  signed __int64 v7; // rax
  char v9[8]; // [rsp+40h] [rbp-108h] BYREF
  signed __int64 v10; // [rsp+48h] [rbp-100h] BYREF
  _BYTE v11[224]; // [rsp+50h] [rbp-F8h] BYREF

  memset(v11, 0, sizeof(v11));
  v2 = 0LL;
  v10 = 0LL;
  if ( *(_QWORD *)(a1 + 32) )
    goto LABEL_4;
  CmpLockRegistry();
  v3 = CmpRegistryRootObject;
  CmpLockKcbExclusive(*((_QWORD *)CmpRegistryRootObject + 1));
  KeyBody = CmpCreateKeyBody(v3[1], 0, (__int64)v11, 0LL, 1, (unsigned __int64 **)&v10, v9);
  v5 = v3[1];
  v6 = KeyBody;
  if ( KeyBody >= 0 )
  {
    CmpUnlockKcb(v5);
    CmpUnlockRegistry();
    v7 = -_InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 32), v10, 0LL);
    v2 = (unsigned __int64 *)(v10 & -(__int64)(v7 != 0));
LABEL_4:
    v6 = 0;
    goto LABEL_5;
  }
  CmpUnlockKcb(v5);
  CmpUnlockRegistry();
  v2 = (unsigned __int64 *)v10;
LABEL_5:
  CmpCleanupParseContext((__int64)v11, 0);
  if ( v2 )
    ObfDereferenceObject(v2);
  return v6;
}
