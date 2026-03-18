/*
 * XREFs of ?Realize@CHwLinearGradientColorSource@@UEAAJXZ @ 0x1801F74B0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?FillGradientTexture@CHwLinearGradientColorSource@@AEAAJAEBVCGradientColorData@@W4Enum@MilGradientWrapMode@@W43MilColorInterpolationMode@@@Z @ 0x1801F7314 (-FillGradientTexture@CHwLinearGradientColorSource@@AEAAJAEBVCGradientColorData@@W4Enum@MilGradie.c)
 *     ?IsSysMemSurfaceValid@CHwVidMemTextureManager@@QEAA_NXZ @ 0x1801F747C (-IsSysMemSurfaceValid@CHwVidMemTextureManager@@QEAA_NXZ.c)
 *     ?PrepareForNewRealization@CHwVidMemTextureManager@@QEAAXXZ @ 0x1801F777C (-PrepareForNewRealization@CHwVidMemTextureManager@@QEAAXXZ.c)
 *     ?PushBitsToVidMemTexture@CHwVidMemTextureManager@@QEAAJXZ @ 0x1801F77C0 (-PushBitsToVidMemTexture@CHwVidMemTextureManager@@QEAAJXZ.c)
 */

__int64 __fastcall CHwLinearGradientColorSource::Realize(CHwLinearGradientColorSource *this)
{
  char *v1; // rsi
  __int64 v3; // rcx
  unsigned int v4; // ebx
  int v5; // ecx
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rbx
  int v9; // edi
  int v10; // eax
  int v11; // eax
  int v12; // eax
  __int128 v14; // [rsp+30h] [rbp-18h]

  v1 = (char *)this + 136;
  v3 = *((_QWORD *)this + 17);
  v4 = 0;
  if ( !v3 )
    goto LABEL_5;
  if ( *((_DWORD *)this + 28) != *((_DWORD *)this + 29) )
  {
    CHwVidMemTextureManager::PrepareForNewRealization((CHwVidMemTextureManager *)v1);
    v3 = *(_QWORD *)v1;
  }
  if ( !v3 )
  {
LABEL_5:
    v5 = *((_DWORD *)this + 28);
    *(_QWORD *)&v14 = "DWM Linear Gradient";
    v6 = *((_QWORD *)this + 2);
    *((_DWORD *)v1 + 16) = 0;
    *((_DWORD *)v1 + 17) = 0;
    *((_DWORD *)v1 + 19) = 0;
    *((_DWORD *)v1 + 20) = 0;
    *(_QWORD *)v1 = v6;
    *((_DWORD *)v1 + 11) = 1;
    *((_DWORD *)v1 + 12) = 1;
    *((_DWORD *)v1 + 13) = 1;
    *((_DWORD *)v1 + 15) = 1;
    *((_DWORD *)v1 + 10) = v5;
    *((_DWORD *)v1 + 14) = 87;
    *((_DWORD *)v1 + 18) = 8;
    DWORD2(v14) = 19;
    *(_OWORD *)(v1 + 24) = v14;
    *((_DWORD *)this + 29) = *((_DWORD *)this + 28);
  }
  if ( *((_BYTE *)this + 232) || !CHwVidMemTextureManager::IsSysMemSurfaceValid((CHwVidMemTextureManager *)v1) )
  {
    v8 = *((_QWORD *)this + 28);
    v9 = *(_DWORD *)(v8 + 216);
    v10 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v8 + 112) + 40LL))(v8 + 112);
    v11 = CHwLinearGradientColorSource::FillGradientTexture((__int64)this, v8 + 152, v9, v10);
    v4 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x195u);
      return v4;
    }
    *((_BYTE *)this + 232) = 0;
    goto LABEL_15;
  }
  v7 = *((_QWORD *)this + 19);
  if ( !v7 || !*(_BYTE *)(v7 + 69) )
    v7 = 0LL;
  if ( !v7 )
  {
LABEL_15:
    v12 = CHwVidMemTextureManager::PushBitsToVidMemTexture((CHwVidMemTextureManager *)v1);
    v4 = v12;
    if ( v12 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0x1A7u);
  }
  return v4;
}
