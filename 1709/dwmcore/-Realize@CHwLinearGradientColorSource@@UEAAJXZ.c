/*
 * XREFs of ?Realize@CHwLinearGradientColorSource@@UEAAJXZ @ 0x1801BC990
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?FillGradientTexture@CHwLinearGradientColorSource@@AEAAJAEBVCGradientColorData@@W4Enum@MilGradientWrapMode@@W43MilColorInterpolationMode@@@Z @ 0x1801BC7F0 (-FillGradientTexture@CHwLinearGradientColorSource@@AEAAJAEBVCGradientColorData@@W4Enum@MilGradie.c)
 *     ?IsSysMemSurfaceValid@CHwVidMemTextureManager@@QEAA_NXZ @ 0x1801BC95C (-IsSysMemSurfaceValid@CHwVidMemTextureManager@@QEAA_NXZ.c)
 *     ?PrepareForNewRealization@CHwVidMemTextureManager@@QEAAXXZ @ 0x1801BCC54 (-PrepareForNewRealization@CHwVidMemTextureManager@@QEAAXXZ.c)
 *     ?PushBitsToVidMemTexture@CHwVidMemTextureManager@@QEAAJXZ @ 0x1801BCC98 (-PushBitsToVidMemTexture@CHwVidMemTextureManager@@QEAAJXZ.c)
 */

__int64 __fastcall CHwLinearGradientColorSource::Realize(CHwLinearGradientColorSource *this)
{
  unsigned int v1; // ebx
  char *v2; // rsi
  int v4; // ecx
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rbx
  int v8; // edi
  int v9; // eax
  signed int v10; // eax
  signed int v11; // eax
  __int128 v13; // [rsp+30h] [rbp-18h]

  v1 = 0;
  v2 = (char *)this + 136;
  if ( !*((_QWORD *)this + 17) )
    goto LABEL_5;
  if ( *((_DWORD *)this + 28) != *((_DWORD *)this + 29) )
    CHwVidMemTextureManager::PrepareForNewRealization((CHwLinearGradientColorSource *)((char *)this + 136));
  if ( !*(_QWORD *)v2 )
  {
LABEL_5:
    v4 = *((_DWORD *)this + 28);
    *(_QWORD *)&v13 = "DWM Linear Gradient";
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
    DWORD2(v13) = 19;
    *(_OWORD *)(v2 + 24) = v13;
    *((_DWORD *)this + 29) = *((_DWORD *)this + 28);
  }
  if ( *((_BYTE *)this + 232) || !CHwVidMemTextureManager::IsSysMemSurfaceValid((CHwVidMemTextureManager *)v2) )
  {
    v7 = *((_QWORD *)this + 28);
    v8 = *(_DWORD *)(v7 + 216);
    v9 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v7 + 112) + 40LL))(v7 + 112);
    v10 = CHwLinearGradientColorSource::FillGradientTexture((__int64)this, v7 + 152, v8, v9);
    v1 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v10, 0x195u);
      return v1;
    }
    *((_BYTE *)this + 232) = 0;
    goto LABEL_15;
  }
  v6 = *((_QWORD *)v2 + 2);
  if ( !v6 || !*(_BYTE *)(v6 + 69) )
    v6 = 0LL;
  if ( !v6 )
  {
LABEL_15:
    v11 = CHwVidMemTextureManager::PushBitsToVidMemTexture((CHwVidMemTextureManager *)v2);
    v1 = v11;
    if ( v11 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v11, 0x1A7u);
  }
  return v1;
}
