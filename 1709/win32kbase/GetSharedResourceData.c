/*
 * XREFs of GetSharedResourceData @ 0x1C008B5A0
 * Callers:
 *     ?OpenInternalSharedResource@CApplicationChannel@DirectComposition@@QEAAJPEAXI_NPEAPEAVCResourceMarshaler@2@@Z @ 0x1C0030750 (-OpenInternalSharedResource@CApplicationChannel@DirectComposition@@QEAAJPEAXI_NPEAPEAVCResourceM.c)
 *     ?CreateInternalSharedResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C0030844 (-CreateInternalSharedResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarsh.c)
 * Callees:
 *     <none>
 */

char __fastcall GetSharedResourceData(unsigned int a1, __int64 a2)
{
  char v2; // r8
  unsigned int v3; // ecx
  unsigned int v4; // ecx
  unsigned int v5; // ecx
  unsigned int v6; // ecx
  unsigned int v7; // ecx
  __int64 (__fastcall *v8)(); // rax
  unsigned int v10; // ecx
  unsigned int v11; // ecx
  unsigned int v12; // ecx
  unsigned int v13; // ecx
  unsigned int v14; // ecx
  unsigned int v15; // ecx

  *(_DWORD *)a2 = a1;
  v2 = 1;
  if ( a1 > 0x61 )
  {
    v10 = a1 - 106;
    if ( !v10 )
    {
      *(_QWORD *)(a2 + 8) = CreateSharedReadRemotingRenderTargetMarshaler;
      v8 = CreateSharedWriteRemotingRenderTargetMarshaler;
      goto LABEL_9;
    }
    v11 = v10 - 7;
    if ( !v11 )
    {
      *(_QWORD *)(a2 + 8) = CreateSharedReadScalarMarshaler;
      v8 = CreateSharedWriteScalarMarshaler;
      goto LABEL_9;
    }
    v12 = v11 - 14;
    if ( !v12 || (v13 = v12 - 1) == 0 )
    {
      *(_QWORD *)(a2 + 16) = 0LL;
      *(_QWORD *)(a2 + 8) = CreateSharedReadTransformMarshaler;
      return v2;
    }
    v14 = v13 - 6;
    if ( v14 )
    {
      if ( v14 != 3 )
        return 0;
      *(_DWORD *)a2 = 134;
      v8 = (__int64 (__fastcall *)())CreateVisualTargetMarshaler;
    }
    else
    {
      v8 = (__int64 (__fastcall *)())CreateHostVisualMarshaler;
    }
    *(_QWORD *)(a2 + 8) = v8;
    goto LABEL_9;
  }
  if ( a1 == 97 )
  {
    *(_QWORD *)(a2 + 8) = CreateSharedReadPrimitiveColorMarshaler;
    v8 = CreateSharedWritePrimitiveColorMarshaler;
    goto LABEL_9;
  }
  v3 = a1 - 4;
  if ( !v3 )
  {
    *(_QWORD *)(a2 + 8) = CreateSharedReadAnimationTriggerMarshaler;
    v8 = (__int64 (__fastcall *)())CreateSharedWriteAnimationTriggerMarshaler;
    goto LABEL_9;
  }
  v4 = v3 - 37;
  if ( !v4 )
  {
    *(_QWORD *)(a2 + 8) = CreateSharedReadDesktopTargetMarshaler;
    v8 = CreateSharedWriteDesktopTargetMarshaler;
    goto LABEL_9;
  }
  v5 = v4 - 25;
  if ( !v5 )
  {
    *(_QWORD *)(a2 + 8) = CreateSharedReadHolographicInteropTextureMarshaler;
    v8 = CreateSharedHolographicInteropTextureMarshaler;
    goto LABEL_9;
  }
  v6 = v5 - 10;
  if ( !v6 )
  {
    *(_QWORD *)(a2 + 8) = CreateSharedReadInteractionMarshaler;
    v8 = (__int64 (__fastcall *)())CreateSharedInteractionMarshaler;
    goto LABEL_9;
  }
  v7 = v6 - 10;
  if ( v7 )
  {
    v15 = v7 - 3;
    if ( !v15 )
    {
      *(_QWORD *)(a2 + 8) = 0LL;
      v8 = (__int64 (__fastcall *)())CreateSharedMatrixTransformMarshaler;
      goto LABEL_9;
    }
    if ( v15 == 1 )
    {
      *(_QWORD *)(a2 + 8) = 0LL;
      v8 = CreateSharedMatrixTransform3DMarshaler;
      goto LABEL_9;
    }
    return 0;
  }
  *(_QWORD *)(a2 + 8) = CreateSharedReadTransformMarshaler;
  v8 = (__int64 (__fastcall *)())CreateSharedManipulationTransformMarshaler;
LABEL_9:
  *(_QWORD *)(a2 + 16) = v8;
  return v2;
}
