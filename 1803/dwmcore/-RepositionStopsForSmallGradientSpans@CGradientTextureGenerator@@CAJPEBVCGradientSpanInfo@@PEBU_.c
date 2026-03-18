/*
 * XREFs of ?RepositionStopsForSmallGradientSpans@CGradientTextureGenerator@@CAJPEBVCGradientSpanInfo@@PEBU_D3DCOLORVALUE@@1PEAV?$DynArray@UMILGradientStop@@$0A@@@@Z @ 0x180221438
 * Callers:
 *     ??$GenerateGradientTexture@I@CGradientTextureGenerator@@SAJPEBU_D3DCOLORVALUE@@PEBMIW4Enum@MilGradientWrapMode@@W42MilColorInterpolationMode@@PEBVCGradientSpanInfo@@IPEAI@Z @ 0x180220648 (--$GenerateGradientTexture@I@CGradientTextureGenerator@@SAJPEBU_D3DCOLORVALUE@@PEBMIW4Enum@MilGr.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18007968C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     ?InsertAt@?$DynArray@UMILGradientStop@@$0A@@@QEAAJAEBUMILGradientStop@@I@Z @ 0x1802211D4 (-InsertAt@-$DynArray@UMILGradientStop@@$0A@@@QEAAJAEBUMILGradientStop@@I@Z.c)
 */

__int64 __fastcall CGradientTextureGenerator::RepositionStopsForSmallGradientSpans(
        __int64 a1,
        __int128 *a2,
        __int128 *a3,
        __int64 a4)
{
  __int128 v4; // xmm1
  __int64 v5; // rax
  __int64 v7; // r9
  __int64 v10; // rax
  int v11; // eax
  int v12; // ebx
  __int64 v13; // rdx
  __int128 v14; // xmm0
  __int64 v15; // r9
  __int64 v16; // rax
  __int64 v17; // rax
  unsigned int v18; // r8d
  __int64 v19; // rcx
  int v20; // eax
  int v21; // r9d
  __int64 v22; // rax
  unsigned int v23; // r8d
  __int64 v24; // rcx
  __int64 v25; // rdx
  int v26; // eax
  unsigned int v27; // edx
  __int64 v28; // r8
  float i; // xmm6_4
  __int64 v30; // rax
  unsigned int v32; // [rsp+20h] [rbp-40h]
  _BYTE v33[20]; // [rsp+30h] [rbp-30h] BYREF

  v4 = *a2;
  v5 = *(_QWORD *)a2;
  v7 = *(_QWORD *)a4;
  *(_DWORD *)v33 = 0;
  *(_OWORD *)&v33[4] = v4;
  v10 = v5 - *(_QWORD *)(v7 + 4);
  if ( !v10 )
    v10 = *((_QWORD *)a2 + 1) - *(_QWORD *)(v7 + 12);
  if ( v10 )
  {
    v11 = DynArray<MILGradientStop,0>::InsertAt(a4, (unsigned __int64)v33);
    v12 = v11;
    if ( v11 < 0 )
    {
      v32 = 914;
LABEL_31:
      v21 = v11;
      goto LABEL_32;
    }
  }
  v11 = DynArray<MILGradientStop,0>::InsertAt(a4, (unsigned __int64)v33);
  v12 = v11;
  if ( v11 < 0 )
  {
    v32 = 920;
    goto LABEL_31;
  }
  v13 = *(unsigned int *)(a4 + 24);
  v14 = *a3;
  v15 = *(_QWORD *)a4;
  *(_DWORD *)v33 = 1065353216;
  v16 = *(_QWORD *)a3;
  *(_OWORD *)&v33[4] = v14;
  v17 = v16 - *(_QWORD *)(v15 + 20LL * (unsigned int)(v13 - 1) + 4);
  if ( !v17 )
    v17 = *((_QWORD *)a3 + 1) - *(_QWORD *)(v15 + 20LL * (unsigned int)(v13 - 1) + 12);
  if ( v17 )
  {
    v18 = v13 + 1;
    v12 = (int)v13 + 1 < (unsigned int)v13 ? 0x80070216 : 0;
    if ( (int)v13 + 1 < (unsigned int)v13 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0xB5u);
    }
    else if ( v18 > *(_DWORD *)(a4 + 20) )
    {
      v20 = DynArrayImpl<0>::AddMultipleAndSet(a4, 0x14u, 1, v33);
      v12 = v20;
      if ( v20 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v20, 0xC0u);
    }
    else
    {
      v19 = 5 * v13;
      *(_OWORD *)(v15 + 4 * v19) = *(_OWORD *)v33;
      *(_DWORD *)(v15 + 4 * v19 + 16) = *(_DWORD *)&v33[16];
      *(_DWORD *)(a4 + 24) = v18;
    }
    if ( v12 < 0 )
    {
      v32 = 938;
LABEL_18:
      v21 = v12;
LABEL_32:
      MilInstrumentationCheckHR_MaybeFailFast(5u, 0LL, 0, v21, v32);
      return (unsigned int)v12;
    }
  }
  v22 = *(unsigned int *)(a4 + 24);
  v23 = v22 + 1;
  v12 = (int)v22 + 1 < (unsigned int)v22 ? 0x80070216 : 0;
  if ( (int)v22 + 1 < (unsigned int)v22 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0xB5u);
  }
  else if ( v23 > *(_DWORD *)(a4 + 20) )
  {
    v26 = DynArrayImpl<0>::AddMultipleAndSet(a4, 0x14u, 1, v33);
    v12 = v26;
    if ( v26 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v26, 0xC0u);
  }
  else
  {
    v24 = *(_QWORD *)a4;
    v25 = 5 * v22;
    *(_OWORD *)(v24 + 4 * v25) = *(_OWORD *)v33;
    *(_DWORD *)(v24 + 4 * v25 + 16) = *(_DWORD *)&v33[16];
    *(_DWORD *)(a4 + 24) = v23;
  }
  if ( v12 < 0 )
  {
    v32 = 943;
    goto LABEL_18;
  }
  v27 = 1;
  v28 = *(_QWORD *)a4;
  for ( i = (float)(1.0 - *(float *)(a1 + 12)) * 0.5;
        v27 < *(_DWORD *)(a4 + 24) - 1;
        *(float *)(v28 + 20 * v30) = (float)(*(float *)(a1 + 12) * *(float *)(v28 + 20 * v30)) + i )
  {
    v30 = v27++;
  }
  return (unsigned int)v12;
}
