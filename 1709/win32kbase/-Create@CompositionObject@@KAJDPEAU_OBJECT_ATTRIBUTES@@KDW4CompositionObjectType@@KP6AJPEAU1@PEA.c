/*
 * XREFs of ?Create@CompositionObject@@KAJDPEAU_OBJECT_ATTRIBUTES@@KDW4CompositionObjectType@@KP6AJPEAU1@PEAXPEAPEAVICompositionObject@@@Z3PEAPEAX@Z @ 0x1C00251A0
 * Callers:
 *     NtTokenManagerCreateCompositionTokenHandle @ 0x1C0024ED0 (NtTokenManagerCreateCompositionTokenHandle.c)
 *     NtCreateCompositionSurfaceHandle @ 0x1C0089F80 (NtCreateCompositionSurfaceHandle.c)
 *     CreateSharedResourceObject @ 0x1C008A328 (CreateSharedResourceObject.c)
 *     CreateSharedSystemVisualObject @ 0x1C00913E0 (CreateSharedSystemVisualObject.c)
 *     ?KernelCreateCompositionInputSink@CompositionInputObject@@SAJPEBUCOMPOSITION_INPUT_SINK_V2@@HPEAPEAX@Z @ 0x1C009E6A4 (-KernelCreateCompositionInputSink@CompositionInputObject@@SAJPEBUCOMPOSITION_INPUT_SINK_V2@@HPEA.c)
 *     DCompositionCreateSynchronizationObject @ 0x1C013DEC0 (DCompositionCreateSynchronizationObject.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00AB7F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CompositionObject::Create(
        __int64 a1,
        __int64 a2,
        ACCESS_MASK a3,
        __int64 a4,
        int a5,
        __int64 a6,
        __int64 (__fastcall *a7)(_QWORD, __int64, __int64),
        __int64 a8,
        void **Handle)
{
  NTSTATUS Object; // ebx

  if ( (unsigned int)(a5 - 1) > 5 )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    Object = ObCreateObject(a1, ExCompositionObjectType, a2);
    if ( Object >= 0 )
    {
      MEMORY[0] = gSessionId;
      Object = ZwAllocateLocallyUniqueId((PLUID)0x10);
      if ( Object < 0 || (Object = a7(0LL, a8, 8LL), Object < 0) )
        ObfDereferenceObject(0LL);
      else
        return (unsigned int)ObInsertObject(0LL, 0LL, a3, 0, 0LL, Handle);
    }
  }
  return (unsigned int)Object;
}
