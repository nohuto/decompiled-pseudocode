/*
 * XREFs of ??$As@UID3D11Texture2D@@@?$ComPtr@UIDXGISurface@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UID3D11Texture2D@@@WRL@Microsoft@@@Details@12@@Z @ 0x18015A168
 * Callers:
 *     ?FlushToD3DCubeMap@CCompositionCubeMap@@QEAAJPEAVID2DContextOwner@@@Z @ 0x18015A2A0 (-FlushToD3DCubeMap@CCompositionCubeMap@@QEAAJPEAVID2DContextOwner@@@Z.c)
 *     ?DebugInspectBitmap@@YAJPEAUID2D1Bitmap@@@Z @ 0x18018E58C (-DebugInspectBitmap@@YAJPEAUID2D1Bitmap@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x180001680 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<IDXGISurface>::As<ID3D11Texture2D>(_QWORD *a1, __int64 *a2)
{
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(a2);
  return (**(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*a1)(
           *a1,
           &GUID_6f15aaf2_d208_4e89_9ab4_489535d34f9c,
           a2);
}
