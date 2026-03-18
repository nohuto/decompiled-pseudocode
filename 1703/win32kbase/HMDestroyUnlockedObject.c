/*
 * XREFs of HMDestroyUnlockedObject @ 0x1C0041FC0
 * Callers:
 *     ThreadUnlock1 @ 0x1C0026B00 (ThreadUnlock1.c)
 *     ?DestroyProcessesObjects@@YAXPEAUtagPROCESSINFO@@@Z @ 0x1C0040840 (-DestroyProcessesObjects@@YAXPEAUtagPROCESSINFO@@@Z.c)
 *     DestroyThreadsObjects @ 0x1C0040A10 (DestroyThreadsObjects.c)
 *     HMUnlockObjectInternal @ 0x1C0049030 (HMUnlockObjectInternal.c)
 *     ?DestroyHandleSecondPass@@YAXPEAU_HANDLEENTRY@@@Z @ 0x1C00D8C40 (-DestroyHandleSecondPass@@YAXPEAU_HANDLEENTRY@@@Z.c)
 *     UserDeleteBaseWindowHandle @ 0x1C00E68A0 (UserDeleteBaseWindowHandle.c)
 * Callees:
 *     ?RegisterStack@UserAtomicCheck@@AEAAXXZ @ 0x1C00420B4 (-RegisterStack@UserAtomicCheck@@AEAAXXZ.c)
 *     ?UnregisterStack@UserAtomicCheck@@AEAAXXZ @ 0x1C0042180 (-UnregisterStack@UserAtomicCheck@@AEAAXXZ.c)
 *     HMUnlockObject @ 0x1C004A168 (HMUnlockObject.c)
 *     HMRemoveHandleForObjectWorker @ 0x1C008B60C (HMRemoveHandleForObjectWorker.c)
 *     _guard_dispatch_icall_nop @ 0x1C00A20B0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall HMDestroyUnlockedObject(_BYTE *a1)
{
  __int64 v2; // rbx
  unsigned __int8 v3; // al
  ULONG_PTR *v4; // rcx
  void *v5; // rcx
  char v6; // [rsp+30h] [rbp+8h] BYREF

  LODWORD(gdwInAtomicOperation) = gdwInAtomicOperation + 1;
  v6 = 0;
  UserAtomicCheck::RegisterStack((UserAtomicCheck *)&v6);
  v2 = 0LL;
  v3 = a1[24];
  v4 = (ULONG_PTR *)((char *)gpKernelHandleTable + 16 * (unsigned int)((a1 - (_BYTE *)qword_1C0189E38) >> 5));
  a1[25] |= 2u;
  if ( v3 == 19 )
  {
    v5 = *(void **)(*v4 + 32);
    goto LABEL_12;
  }
  if ( v3 == 22 )
  {
    v2 = *(_QWORD *)(*v4 + 16);
    v5 = *(void **)(v2 + 32);
LABEL_12:
    ObfDereferenceObject(v5);
    HMRemoveHandleForObjectWorker(a1);
    goto LABEL_4;
  }
  (*(&gahti + 3 * v3))(*v4);
LABEL_4:
  if ( !gbInDestroyHandleTableObjects && v2 )
    HMUnlockObject(v2);
  if ( !v6 )
  {
    LODWORD(gdwInAtomicOperation) = gdwInAtomicOperation - 1;
    UserAtomicCheck::UnregisterStack((UserAtomicCheck *)&v6);
  }
}
