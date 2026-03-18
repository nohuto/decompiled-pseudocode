/*
 * XREFs of ?UpdateConstantBufferIfNeeded@CHwLightCollectionBuffer@@QEAAJPEAVCD3DDeviceLevel1@@AEA_KPEAUID3D11Buffer@@2@Z @ 0x180199CFC
 * Callers:
 *     ?Render@CHWCallbackRenderer@@UEAAJXZ @ 0x18008E060 (-Render@CHWCallbackRenderer@@UEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Unmap@CD3DDeviceLevel1@@QEAAXPEAUID3D11Resource@@I@Z @ 0x1800778A8 (-Unmap@CD3DDeviceLevel1@@QEAAXPEAUID3D11Resource@@I@Z.c)
 *     ?Map@CD3DDeviceLevel1@@QEAAJPEAUID3D11Resource@@IW4D3D11_MAP@@IPEAUD3D11_MAPPED_SUBRESOURCE@@@Z @ 0x1800778C0 (-Map@CD3DDeviceLevel1@@QEAAJPEAUID3D11Resource@@IW4D3D11_MAP@@IPEAUD3D11_MAPPED_SUBRESOURCE@@@Z.c)
 */

__int64 __fastcall CHwLightCollectionBuffer::UpdateConstantBufferIfNeeded(
        CHwLightCollectionBuffer *this,
        struct CD3DDeviceLevel1 *a2,
        unsigned __int64 *a3,
        struct ID3D11Resource *a4,
        struct ID3D11Resource *a5)
{
  unsigned int v5; // edi
  _OWORD *v6; // rbx
  unsigned __int8 *v11; // r11
  __int64 v12; // rsi
  __int64 v13; // r8
  __int64 v14; // rax
  int v15; // eax
  _OWORD *pData; // rax
  __int64 v17; // rcx
  __int128 v18; // xmm1
  int v19; // eax
  _OWORD *v20; // rcx
  unsigned int v22; // [rsp+20h] [rbp-48h]
  unsigned int v23; // [rsp+20h] [rbp-48h]
  struct D3D11_MAPPED_SUBRESOURCE v24; // [rsp+30h] [rbp-38h] BYREF

  v5 = 0;
  v6 = (_OWORD *)((char *)this + 32);
  v11 = (unsigned __int8 *)this + 32;
  v12 = 314159LL;
  v13 = 62LL;
  do
  {
    v14 = *v11;
    v11 += 8;
    v12 = *(v11 - 1)
        + 37
        * (*(v11 - 2)
         + 37
         * (*(v11 - 3)
          + 37 * (*(v11 - 4) + 37 * (*(v11 - 5) + 37 * (*(v11 - 6) + 37 * (*(v11 - 7) + 37 * (v14 + 37 * v12)))))));
    --v13;
  }
  while ( v13 );
  if ( v12 != *a3 )
  {
    v15 = CD3DDeviceLevel1::Map(a2, a4, 0LL, 4LL, v22, &v24);
    v5 = v15;
    if ( v15 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0xCEu);
    }
    else
    {
      pData = v24.pData;
      v17 = 2LL;
      do
      {
        *pData = *v6;
        pData[1] = v6[1];
        pData[2] = v6[2];
        pData[3] = v6[3];
        pData[4] = v6[4];
        pData[5] = v6[5];
        pData[6] = v6[6];
        pData += 8;
        v18 = v6[7];
        v6 += 8;
        *(pData - 1) = v18;
        --v17;
      }
      while ( v17 );
      *pData = *v6;
      CD3DDeviceLevel1::Unmap(a2, a4);
      v19 = CD3DDeviceLevel1::Map(a2, a5, 0LL, 4LL, v23, &v24);
      v5 = v19;
      if ( v19 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v19, 0xD4u);
      }
      else
      {
        v20 = v24.pData;
        *(_OWORD *)v24.pData = *((_OWORD *)this + 19);
        v20[1] = *((_OWORD *)this + 20);
        v20[2] = *((_OWORD *)this + 21);
        v20[3] = *((_OWORD *)this + 22);
        v20[4] = *((_OWORD *)this + 23);
        v20[5] = *((_OWORD *)this + 24);
        v20[6] = *((_OWORD *)this + 25);
        v20 += 8;
        *(v20 - 1) = *((_OWORD *)this + 26);
        *v20 = *((_OWORD *)this + 27);
        v20[1] = *((_OWORD *)this + 28);
        v20[2] = *((_OWORD *)this + 29);
        v20[3] = *((_OWORD *)this + 30);
        v20[4] = *((_OWORD *)this + 31);
        v20[5] = *((_OWORD *)this + 32);
        CD3DDeviceLevel1::Unmap(a2, a5);
        *a3 = v12;
      }
    }
  }
  return v5;
}
