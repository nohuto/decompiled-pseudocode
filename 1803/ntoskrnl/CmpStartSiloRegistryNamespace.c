/*
 * XREFs of CmpStartSiloRegistryNamespace @ 0x140620458
 * Callers:
 *     CmInitServerSiloState @ 0x1406203CC (CmInitServerSiloState.c)
 *     VrpHandleIoctlInitializeJobForVreg @ 0x140708A30 (VrpHandleIoctlInitializeJobForVreg.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     CmpLockKcbExclusive @ 0x14049D0D8 (CmpLockKcbExclusive.c)
 *     CmpCleanupParseContext @ 0x14049FF18 (CmpCleanupParseContext.c)
 *     CmpLockRegistry @ 0x1404A71E0 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x1404A8188 (CmpUnlockRegistry.c)
 *     CmpUnlockKcb @ 0x1404AA790 (CmpUnlockKcb.c)
 *     CmpCreateKeyBody @ 0x14054C380 (CmpCreateKeyBody.c)
 */

__int64 __fastcall CmpStartSiloRegistryNamespace(__int64 a1)
{
  ULONG_PTR *v2; // rbx
  signed __int32 **v3; // rbx
  int KeyBody; // edi
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  signed __int64 v8; // rax
  __int64 v10; // [rsp+48h] [rbp-C0h] BYREF
  signed __int64 v11; // [rsp+50h] [rbp-B8h] BYREF
  _QWORD v12[38]; // [rsp+58h] [rbp-B0h] BYREF

  memset(v12, 0, 0x128uLL);
  v12[19] = &v12[18];
  v12[18] = &v12[18];
  memset(&v12[27], 0, 0x50uLL);
  v2 = 0LL;
  v11 = 0LL;
  if ( *(_QWORD *)(a1 + 32) )
    goto LABEL_4;
  CmpLockRegistry();
  v3 = (signed __int32 **)CmpRegistryRootObject;
  CmpLockKcbExclusive(*((_QWORD *)CmpRegistryRootObject + 1));
  KeyBody = CmpCreateKeyBody(v3[1], 0, (__int64)v12, 0LL, 1, (ULONG_PTR **)&v11, (bool *)&v10);
  CmpUnlockKcb((ULONG_PTR)v3[1], v5, v6, v7);
  CmpUnlockRegistry();
  if ( KeyBody >= 0 )
  {
    v8 = -_InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 32), v11, 0LL);
    v2 = (ULONG_PTR *)(v11 & -(__int64)(v8 != 0));
LABEL_4:
    KeyBody = 0;
    goto LABEL_5;
  }
  v2 = (ULONG_PTR *)v11;
LABEL_5:
  CmpCleanupParseContext((__int64)v12, 0);
  if ( v2 )
    ObfDereferenceObject(v2);
  return (unsigned int)KeyBody;
}
