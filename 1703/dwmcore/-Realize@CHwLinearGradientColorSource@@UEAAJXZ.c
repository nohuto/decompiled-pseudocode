/*
 * XREFs of ?Realize@CHwLinearGradientColorSource@@UEAAJXZ @ 0x1801A30A0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?FillGradientTexture@CHwLinearGradientColorSource@@AEAAJAEBVCGradientColorData@@W4Enum@MilGradientWrapMode@@W43MilColorInterpolationMode@@@Z @ 0x1801A2F0C (-FillGradientTexture@CHwLinearGradientColorSource@@AEAAJAEBVCGradientColorData@@W4Enum@MilGradie.c)
 *     ?IsSysMemSurfaceValid@CHwVidMemTextureManager@@QEAA_NXZ @ 0x1801A306C (-IsSysMemSurfaceValid@CHwVidMemTextureManager@@QEAA_NXZ.c)
 *     ?PrepareForNewRealization@CHwVidMemTextureManager@@QEAAXXZ @ 0x1801A3358 (-PrepareForNewRealization@CHwVidMemTextureManager@@QEAAXXZ.c)
 *     ?PushBitsToVidMemTexture@CHwVidMemTextureManager@@QEAAJXZ @ 0x1801A33A0 (-PushBitsToVidMemTexture@CHwVidMemTextureManager@@QEAAJXZ.c)
 */

__int64 __fastcall CHwLinearGradientColorSource::Realize(CHwLinearGradientColorSource *this)
{
  unsigned int v1; // ebx
  char *v2; // rsi
  int v4; // ecx
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  int v8; // ebx
  __int64 v9; // rdi
  int v10; // eax
  int v11; // eax
  int v12; // eax
  __int128 v14; // [rsp+30h] [rbp-18h]

  v1 = 0;
  v2 = (char *)this + 128;
  if ( !*((_QWORD *)this + 16) )
    goto LABEL_5;
  if ( *((_DWORD *)this + 26) != *((_DWORD *)this + 27) )
    CHwVidMemTextureManager::PrepareForNewRealization((CHwLinearGradientColorSource *)((char *)this + 128));
  if ( !*(_QWORD *)v2 )
  {
LABEL_5:
    v4 = *((_DWORD *)this + 26);
    *(_QWORD *)&v14 = "DWM Linear Gradient";
    v5 = *((_QWORD *)this + 2);
    *((_DWORD *)v2 + 16) = 0;
    *((_DWORD *)v2 + 17) = 0;
    *((_DWORD *)v2 + 19) = 0;
    *((_DWORD *)v2 + 20) = 0;
    *(_QWORD *)v2 = v5;
    *((_DWORD *)v2 + 11) = 1;
    *((_DWORD *)v2 + 12) = 1;
    *((_DWORD *)v2 + 13) = 1;
    *((_DWORD *)v2 + 15) = 1;
    *((_DWORD *)v2 + 10) = v4;
    *((_DWORD *)v2 + 14) = 87;
    *((_DWORD *)v2 + 18) = 8;
    DWORD2(v14) = 19;
    *(_OWORD *)(v2 + 24) = v14;
    *((_DWORD *)this + 27) = *((_DWORD *)this + 26);
  }
  if ( *((_BYTE *)this + 224) || !CHwVidMemTextureManager::IsSysMemSurfaceValid((CHwVidMemTextureManager *)v2) )
  {
    v7 = *((_QWORD *)this + 27);
    v8 = *(_DWORD *)(v7 + 216);
    v9 = v7 + 152;
    v10 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v7 + 112) + 40LL))(v7 + 112);
    v11 = CHwLinearGradientColorSource::FillGradientTexture((__int64)this, v9, v8, v10);
    v1 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x195u);
      return v1;
    }
    *((_BYTE *)this + 224) = 0;
    goto LABEL_15;
  }
  v6 = *((_QWORD *)v2 + 2);
  if ( !v6 || !*(_BYTE *)(v6 + 77) )
    v6 = 0LL;
  if ( !v6 )
  {
LABEL_15:
    v12 = CHwVidMemTextureManager::PushBitsToVidMemTexture((CHwVidMemTextureManager *)v2);
    v1 = v12;
    if ( v12 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x1A7u);
  }
  return v1;
}
