/*
 * XREFs of ?QueryInterface@CAnimationEngine@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18008D640
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAnimationEngine::QueryInterface(CAnimationEngine *this, const struct _GUID *a2, void **a3)
{
  unsigned int v3; // r9d
  __int64 v4; // rax
  __int64 v5; // rax

  v3 = 0;
  v4 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&IID_IUnknown.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&IID_IUnknown.Data1 )
    v4 = *(_QWORD *)a2->Data4 - *(_QWORD *)IID_IUnknown.Data4;
  if ( !v4 )
    goto LABEL_7;
  v5 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&IID_IUIAnimationStoryboardEventHandler2.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&IID_IUIAnimationStoryboardEventHandler2.Data1 )
    v5 = *(_QWORD *)a2->Data4 - *(_QWORD *)IID_IUIAnimationStoryboardEventHandler2.Data4;
  if ( v5 )
  {
    return (unsigned int)-2147467262;
  }
  else
  {
LABEL_7:
    *a3 = this;
    _InterlockedIncrement((volatile signed __int32 *)this + 29);
  }
  return v3;
}
