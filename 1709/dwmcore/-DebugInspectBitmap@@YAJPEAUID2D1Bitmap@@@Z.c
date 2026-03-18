/*
 * XREFs of ?DebugInspectBitmap@@YAJPEAUID2D1Bitmap@@@Z @ 0x18018E58C
 * Callers:
 *     ?ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ @ 0x180012360 (-ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x180001680 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18007950C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ??$As@UID3D11Texture2D@@@?$ComPtr@UIDXGISurface@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UID3D11Texture2D@@@WRL@Microsoft@@@Details@12@@Z @ 0x18015A168 (--$As@UID3D11Texture2D@@@-$ComPtr@UIDXGISurface@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UID.c)
 *     ?DebugInspectTexture@@YAJPEAUID3D11Texture2D@@I@Z @ 0x18018E758 (-DebugInspectTexture@@YAJPEAUID3D11Texture2D@@I@Z.c)
 */

__int64 __fastcall DebugInspectBitmap(struct ID2D1Bitmap *a1)
{
  signed int v2; // eax
  unsigned int v3; // ebx
  __int64 v4; // rbx
  signed int v5; // eax
  signed int v6; // eax
  signed int v7; // eax
  __int64 v9; // [rsp+50h] [rbp+20h] BYREF
  __int64 v10; // [rsp+58h] [rbp+28h] BYREF
  struct ID3D11Texture2D *v11; // [rsp+60h] [rbp+30h] BYREF

  if ( a1 )
    (*(void (__fastcall **)(struct ID2D1Bitmap *))(*(_QWORD *)a1 + 8LL))(a1);
  v10 = 0LL;
  v9 = 0LL;
  v11 = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v10);
  v2 = (**(__int64 (__fastcall ***)(struct ID2D1Bitmap *, GUID *, __int64 *))a1)(
         a1,
         &GUID_a898a84c_3873_4588_b08b_ebbf978df041,
         &v10);
  v3 = v2;
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v2, 0xBEu);
  }
  else
  {
    v4 = v10;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v9);
    v5 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v4 + 104LL))(v4, &v9);
    v3 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v5, 0xBFu);
    }
    else
    {
      v6 = Microsoft::WRL::ComPtr<IDXGISurface>::As<ID3D11Texture2D>(&v9, (__int64 *)&v11);
      v3 = v6;
      if ( v6 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v6, 0xC0u);
      }
      else
      {
        v7 = DebugInspectTexture(v11, 0);
        v3 = v7;
        if ( v7 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v7, 0xC2u);
      }
    }
  }
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v11);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v9);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v10);
  (*(void (__fastcall **)(struct ID2D1Bitmap *))(*(_QWORD *)a1 + 16LL))(a1);
  return v3;
}
