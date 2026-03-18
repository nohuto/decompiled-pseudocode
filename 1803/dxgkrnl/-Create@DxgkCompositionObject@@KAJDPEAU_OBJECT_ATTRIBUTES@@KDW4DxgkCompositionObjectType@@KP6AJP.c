/*
 * XREFs of ?Create@DxgkCompositionObject@@KAJDPEAU_OBJECT_ATTRIBUTES@@KDW4DxgkCompositionObjectType@@KP6AJPEAU1@PEAXPEAPEAVIDxgkCompositionObject@@@Z3PEAPEAX@Z @ 0x1C000DDD0
 * Callers:
 *     NtCreateCompositionSurfaceHandle @ 0x1C000AD30 (NtCreateCompositionSurfaceHandle.c)
 *     NtTokenManagerCreateCompositionTokenHandle @ 0x1C000D900 (NtTokenManagerCreateCompositionTokenHandle.c)
 *     NtTokenManagerCreateFlipObjectReturnTokenHandle @ 0x1C0049620 (NtTokenManagerCreateFlipObjectReturnTokenHandle.c)
 *     NtTokenManagerCreateFlipObjectTokenHandle @ 0x1C0049820 (NtTokenManagerCreateFlipObjectTokenHandle.c)
 *     NtFlipObjectCreate @ 0x1C004ED30 (NtFlipObjectCreate.c)
 *     ?Create@DXGVAILOBJECT@@SAJPEAXPEAPEAV1@@Z @ 0x1C01E61C8 (-Create@DXGVAILOBJECT@@SAJPEAXPEAPEAV1@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DxgkCompositionObject::Create(
        __int64 a1,
        __int64 a2,
        ACCESS_MASK a3,
        __int64 a4,
        int a5,
        int a6,
        __int64 (__fastcall *a7)(PVOID, __int64, char *),
        __int64 a8,
        void **Handle)
{
  int v10; // ebx
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // eax
  NTSTATUS LocallyUniqueId; // eax
  PVOID v14; // rcx
  int v15; // eax
  PVOID Object[3]; // [rsp+50h] [rbp-18h] BYREF

  Object[0] = 0LL;
  if ( (unsigned int)(a5 - 1) > 4 )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    LOBYTE(a4) = 1;
    v10 = ObCreateObject(a1, g_pDxgkCompositionObjectType, a2, a4, 0LL, a6, 0, 0, Object);
    if ( v10 >= 0 )
    {
      CurrentProcess = PsGetCurrentProcess();
      ProcessSessionId = PsGetProcessSessionId(CurrentProcess);
      *(_DWORD *)Object[0] = ProcessSessionId;
      LocallyUniqueId = ZwAllocateLocallyUniqueId((PLUID)Object[0] + 2);
      v14 = Object[0];
      v10 = LocallyUniqueId;
      if ( LocallyUniqueId < 0 || (v15 = a7(Object[0], a8, (char *)Object[0] + 8), v14 = Object[0], v10 = v15, v15 < 0) )
        ObfDereferenceObject(v14);
      else
        return (unsigned int)ObInsertObject(Object[0], 0LL, a3, 0, 0LL, Handle);
    }
  }
  return (unsigned int)v10;
}
