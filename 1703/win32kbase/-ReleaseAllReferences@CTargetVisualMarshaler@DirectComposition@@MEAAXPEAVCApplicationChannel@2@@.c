/*
 * XREFs of ?ReleaseAllReferences@CTargetVisualMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C000C260
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateRootVisual@CTargetVisualMarshaler@DirectComposition@@IEAAJPEAVCApplicationChannel@2@PEAVCVisualMarshaler@2@PEA_N@Z @ 0x1C000C19C (-UpdateRootVisual@CTargetVisualMarshaler@DirectComposition@@IEAAJPEAVCApplicationChannel@2@PEAVC.c)
 */

void __fastcall DirectComposition::CTargetVisualMarshaler::ReleaseAllReferences(
        DirectComposition::CTargetVisualMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2)
{
  __int64 v3; // rcx
  bool v4; // [rsp+30h] [rbp+8h] BYREF

  v4 = 0;
  DirectComposition::CTargetVisualMarshaler::UpdateRootVisual(this, a2, 0LL, &v4);
  *(_DWORD *)(*((_QWORD *)this + 5) + 28LL) = 0;
  v3 = *((_QWORD *)this + 5);
  if ( v3 )
  {
    ObfDereferenceObject((PVOID)(v3 - 24));
    *((_QWORD *)this + 5) = 0LL;
  }
}
