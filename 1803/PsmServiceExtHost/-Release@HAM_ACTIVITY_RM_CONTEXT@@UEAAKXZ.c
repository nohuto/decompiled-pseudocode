/*
 * XREFs of ?Release@HAM_ACTIVITY_RM_CONTEXT@@UEAAKXZ @ 0x180022DF0
 * Callers:
 *     ?PerformReleaseResources@ResourceSet@ExecutionModel@@QEAAXK@Z @ 0x18001F380 (-PerformReleaseResources@ResourceSet@ExecutionModel@@QEAAXK@Z.c)
 *     ?HampActDestroy@@YAXPEAU_CEM_RC_OBJECT@@@Z @ 0x180024BF0 (-HampActDestroy@@YAXPEAU_CEM_RC_OBJECT@@@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18003E448 (--3@YAXPEAX@Z.c)
 */

__int64 __fastcall HAM_ACTIVITY_RM_CONTEXT::Release(HAM_ACTIVITY_RM_CONTEXT *this)
{
  int v1; // ebx

  v1 = _InterlockedDecrement((volatile signed __int32 *)this + 6);
  if ( v1 < 0 )
    __int2c();
  if ( !v1 && this )
  {
    *(_QWORD *)this = &HAM_ACTIVITY_RM_CONTEXT::`vftable';
    operator delete(this);
  }
  return (unsigned int)v1;
}
