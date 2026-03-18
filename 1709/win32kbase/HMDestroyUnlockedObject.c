/*
 * XREFs of HMDestroyUnlockedObject @ 0x1C009E950
 * Callers:
 *     ?DestroyProcessesObjects@@YAXPEAUtagPROCESSINFO@@@Z @ 0x1C003EB90 (-DestroyProcessesObjects@@YAXPEAUtagPROCESSINFO@@@Z.c)
 *     DestroyThreadsObjects @ 0x1C003ED90 (DestroyThreadsObjects.c)
 *     HMUnlockObjectInternal @ 0x1C0047A80 (HMUnlockObjectInternal.c)
 *     ?DestroyHandleSecondPass@@YAXPEAU_HANDLEENTRY@@@Z @ 0x1C00DEF80 (-DestroyHandleSecondPass@@YAXPEAU_HANDLEENTRY@@@Z.c)
 *     UserDeleteBaseWindowHandle @ 0x1C00EBF10 (UserDeleteBaseWindowHandle.c)
 * Callees:
 *     HMUnlockObject @ 0x1C00176F4 (HMUnlockObject.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C001774C (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0017790 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     HMRemoveHandleForObjectWorker @ 0x1C0092008 (HMRemoveHandleForObjectWorker.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AB7F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall HMDestroyUnlockedObject(_BYTE *a1)
{
  _QWORD *v2; // r8
  signed __int64 v3; // rax
  __int64 v4; // rbx
  __int64 v5; // rdx
  unsigned __int8 v6; // al
  void *v7; // rcx
  char v8; // [rsp+30h] [rbp+8h] BYREF

  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v8);
  v2 = gpKernelHandleTable;
  v3 = a1 - (_BYTE *)qword_1C018E9B8;
  v4 = 0LL;
  a1[25] |= 2u;
  v5 = 3LL * (unsigned int)(v3 >> 5);
  v6 = a1[24];
  if ( v6 == 19 )
  {
    v7 = *(void **)(v2[v5] + 32LL);
    goto LABEL_10;
  }
  if ( v6 == 22 )
  {
    v4 = *(_QWORD *)(v2[v5] + 16LL);
    v7 = *(void **)(v4 + 32);
LABEL_10:
    ObfDereferenceObject(v7);
    HMRemoveHandleForObjectWorker(a1);
    goto LABEL_4;
  }
  (*(&gahti + 3 * v6))(v2[v5]);
LABEL_4:
  if ( !gbInDestroyHandleTableObjects && v4 )
    HMUnlockObject(v4);
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v8);
}
