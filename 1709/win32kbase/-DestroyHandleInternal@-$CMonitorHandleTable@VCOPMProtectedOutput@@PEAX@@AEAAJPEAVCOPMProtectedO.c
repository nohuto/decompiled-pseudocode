/*
 * XREFs of ?DestroyHandleInternal@?$CMonitorHandleTable@VCOPMProtectedOutput@@PEAX@@AEAAJPEAVCOPMProtectedOutput@@KPEAVCMutex@@@Z @ 0x1C0074D38
 * Callers:
 *     ?DestroyProtectedOutputsOwnedByProcess@COPM@@QEAAXPEAX@Z @ 0x1C0074B10 (-DestroyProtectedOutputsOwnedByProcess@COPM@@QEAAXPEAX@Z.c)
 *     ?DestroyAllHandlesFromAdapter@?$CMonitorHandleTable@VCOPMProtectedOutput@@PEAX@@QEAAXPEAU_LUID@@PEAVCMutex@@@Z @ 0x1C0074CF0 (-DestroyAllHandlesFromAdapter@-$CMonitorHandleTable@VCOPMProtectedOutput@@PEAX@@QEAAXPEAU_LUID@@.c)
 *     ?DestroyProtectedOutput@COPM@@QEAAJPEAX@Z @ 0x1C00A0DBC (-DestroyProtectedOutput@COPM@@QEAAJPEAX@Z.c)
 * Callees:
 *     ??1CAutoMutex@@QEAA@XZ @ 0x1C0074BB0 (--1CAutoMutex@@QEAA@XZ.c)
 *     ??0CAutoMutex@@QEAA@PEAVCMutex@@@Z @ 0x1C0074BE0 (--0CAutoMutex@@QEAA@PEAVCMutex@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AB7F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CMonitorHandleTable<COPMProtectedOutput,void *>::DestroyHandleInternal(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        struct CMutex *a4)
{
  __int64 v5; // rdi
  int v8; // ebp
  unsigned int v9; // ebx
  struct _KMUTANT **v11; // [rsp+40h] [rbp+8h] BYREF

  v5 = a3;
  v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
  CAutoMutex::CAutoMutex((CAutoMutex *)&v11, a4);
  v9 = 0;
  *(_QWORD *)(*(_QWORD *)a1 + 8 * v5) = 0LL;
  --*(_DWORD *)(a1 + 8);
  (**(void (__fastcall ***)(__int64, __int64))a2)(a2, 1LL);
  if ( v8 < 0 )
    v9 = v8;
  CAutoMutex::~CAutoMutex(&v11);
  return v9;
}
