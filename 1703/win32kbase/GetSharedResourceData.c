/*
 * XREFs of GetSharedResourceData @ 0x1C0083FCC
 * Callers:
 *     ?OpenInternalSharedResource@CApplicationChannel@DirectComposition@@QEAAJPEAXI_NPEAPEAVCResourceMarshaler@2@@Z @ 0x1C001B1EC (-OpenInternalSharedResource@CApplicationChannel@DirectComposition@@QEAAJPEAXI_NPEAPEAVCResourceM.c)
 *     ?CreateInternalSharedResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C001B2E0 (-CreateInternalSharedResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarsh.c)
 * Callees:
 *     <none>
 */

char __fastcall GetSharedResourceData(unsigned int a1, __int64 a2)
{
  char v2; // r8
  unsigned int v3; // ecx
  __int64 (__fastcall *v4)(); // rax
  unsigned int v6; // ecx
  unsigned int v7; // ecx
  unsigned int v8; // ecx
  unsigned int v9; // ecx
  unsigned int v10; // ecx
  unsigned int v11; // ecx
  unsigned int v12; // ecx
  unsigned int v13; // ecx
  unsigned int v14; // ecx
  unsigned int v15; // ecx

  *(_DWORD *)a2 = a1;
  v2 = 1;
  if ( a1 <= 0x44 )
  {
    if ( a1 == 68 )
    {
      *(_QWORD *)(a2 + 8) = 0LL;
      v4 = CreateSharedMatrixTransformMarshaler;
      goto LABEL_4;
    }
    v10 = a1 - 23;
    if ( !v10 )
      goto LABEL_25;
    v11 = v10 - 4;
    if ( !v11 )
    {
      *(_QWORD *)(a2 + 8) = 0LL;
      v4 = CreateSharedMatrixTransform3DMarshaler;
      goto LABEL_4;
    }
    v12 = v11 - 4;
    if ( !v12 )
    {
      v4 = (__int64 (__fastcall *)())CreateHostVisualMarshaler;
      goto LABEL_13;
    }
    v13 = v12 - 8;
    if ( !v13 )
    {
      *(_QWORD *)(a2 + 8) = CreateSharedReadDesktopTargetMarshaler;
      v4 = CreateSharedWriteDesktopTargetMarshaler;
      goto LABEL_4;
    }
    v14 = v13 - 1;
    if ( !v14 )
    {
      *(_QWORD *)(a2 + 8) = CreateSharedReadRemotingRenderTargetMarshaler;
      v4 = CreateSharedWriteRemotingRenderTargetMarshaler;
      goto LABEL_4;
    }
    v15 = v14 - 7;
    if ( !v15 )
    {
      *(_QWORD *)(a2 + 8) = CreateSharedReadHolographicInteropTextureMarshaler;
      v4 = CreateSharedHolographicInteropTextureMarshaler;
      goto LABEL_4;
    }
    if ( v15 == 15 )
    {
LABEL_25:
      *(_QWORD *)(a2 + 16) = 0LL;
      *(_QWORD *)(a2 + 8) = CreateSharedReadTransformMarshaler;
      return v2;
    }
    return 0;
  }
  v3 = a1 - 69;
  if ( v3 )
  {
    v6 = v3 - 25;
    if ( !v6 )
    {
      *(_QWORD *)(a2 + 8) = CreateSharedReadScalarMarshaler;
      v4 = CreateSharedWriteScalarMarshaler;
      goto LABEL_4;
    }
    v7 = v6 - 7;
    if ( !v7 )
    {
      *(_QWORD *)(a2 + 8) = CreateSharedReadAnimationTriggerMarshaler;
      v4 = (__int64 (__fastcall *)())CreateSharedWriteAnimationTriggerMarshaler;
      goto LABEL_4;
    }
    v8 = v7 - 3;
    if ( !v8 )
    {
      *(_QWORD *)(a2 + 8) = CreateSharedReadPrimitiveColorMarshaler;
      v4 = CreateSharedWritePrimitiveColorMarshaler;
      goto LABEL_4;
    }
    v9 = v8 - 3;
    if ( !v9 )
    {
      *(_QWORD *)(a2 + 8) = CreateSharedReadInteractionMarshaler;
      v4 = (__int64 (__fastcall *)())CreateSharedInteractionMarshaler;
      goto LABEL_4;
    }
    if ( v9 == 25 )
    {
      *(_DWORD *)a2 = 31;
      v4 = (__int64 (__fastcall *)())CreateTargetVisualMarshaler;
LABEL_13:
      *(_QWORD *)(a2 + 8) = v4;
      goto LABEL_4;
    }
    return 0;
  }
  *(_QWORD *)(a2 + 8) = CreateSharedReadTransformMarshaler;
  v4 = (__int64 (__fastcall *)())CreateSharedManipulationTransformMarshaler;
LABEL_4:
  *(_QWORD *)(a2 + 16) = v4;
  return v2;
}
