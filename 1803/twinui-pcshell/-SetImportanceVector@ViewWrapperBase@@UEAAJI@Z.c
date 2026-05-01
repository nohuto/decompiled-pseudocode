/*
 * XREFs of ?SetImportanceVector@ViewWrapperBase@@UEAAJI@Z @ 0x18004EB00
 * Callers:
 *     ?SetImportanceValues@CSingleViewShellExperience@@AEAAJW4ImportanceVectorOptions@1@@Z @ 0x180069838 (-SetImportanceValues@CSingleViewShellExperience@@AEAAJW4ImportanceVectorOptions@1@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ViewWrapperBase::SetImportanceVector(ViewWrapperBase *this, __int64 a2)
{
  __int64 (__fastcall *v2)(ViewWrapperBase *, __int64, __int64); // rax

  v2 = *(__int64 (__fastcall **)(ViewWrapperBase *, __int64, __int64))(*(_QWORD *)this + 72LL);
  if ( (char *)v2 == (char *)ViewWrapperBase::SetImportanceVectorUsingMask )
    return ViewWrapperBase::SetImportanceVectorUsingMask(this, a2, 0xFFFFFFFFLL);
  else
    return v2(this, a2, 0xFFFFFFFFLL);
}
