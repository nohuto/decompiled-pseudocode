/*
 * XREFs of ?RepositionStopsForSmallGradientSpans@CGradientTextureGenerator@@CAJPEBVCGradientSpanInfo@@PEBU_D3DCOLORVALUE@@1PEAV?$DynArray@UMILGradientStop@@$0A@@@@Z @ 0x1801C12B4
 * Callers:
 *     ??$GenerateGradientTexture@I@CGradientTextureGenerator@@SAJPEBU_D3DCOLORVALUE@@PEBMIW4Enum@MilGradientWrapMode@@W42MilColorInterpolationMode@@PEBVCGradientSpanInfo@@IPEAI@Z @ 0x1801C0558 (--$GenerateGradientTexture@I@CGradientTextureGenerator@@SAJPEBU_D3DCOLORVALUE@@PEBMIW4Enum@MilGr.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     ?AddMultipleAndSet@?$DynArray@UPendingStateChangeInfo@CInteractionTracker@@$0A@@@QEAAJPEFBUPendingStateChangeInfo@CInteractionTracker@@I@Z @ 0x18016C018 (-AddMultipleAndSet@-$DynArray@UPendingStateChangeInfo@CInteractionTracker@@$0A@@@QEAAJPEFBUPendi.c)
 *     ?InsertAt@?$DynArray@UMILGradientStop@@$0A@@@QEAAJAEBUMILGradientStop@@I@Z @ 0x1801C104C (-InsertAt@-$DynArray@UMILGradientStop@@$0A@@@QEAAJAEBUMILGradientStop@@I@Z.c)
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
  unsigned int v12; // ebx
  int v13; // eax
  unsigned int v14; // r8d
  __int128 v15; // xmm0
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rax
  int v20; // eax
  int v21; // eax
  unsigned int v22; // edx
  __int64 v23; // r8
  float i; // xmm6_4
  __int64 v25; // rax
  int v27; // [rsp+30h] [rbp-48h] BYREF
  __int128 v28; // [rsp+34h] [rbp-44h]

  v4 = *a2;
  v5 = *(_QWORD *)a2;
  v7 = *(_QWORD *)a4;
  v27 = 0;
  v28 = v4;
  v10 = v5 - *(_QWORD *)(v7 + 4);
  if ( !v10 )
    v10 = *((_QWORD *)a2 + 1) - *(_QWORD *)(v7 + 12);
  if ( v10 && (v11 = DynArray<MILGradientStop,0>::InsertAt(a4, (unsigned __int64)&v27), v12 = v11, v11 < 0) )
  {
    MilInstrumentationCheckHR(5u, 0LL, 0, v11, 0x392u);
  }
  else
  {
    v13 = DynArray<MILGradientStop,0>::InsertAt(a4, (unsigned __int64)&v27);
    v12 = v13;
    if ( v13 < 0 )
    {
      MilInstrumentationCheckHR(5u, 0LL, 0, v13, 0x398u);
    }
    else
    {
      v15 = *a3;
      v16 = *(_QWORD *)a4;
      v17 = (unsigned int)(*(_DWORD *)(a4 + 24) - 1);
      v27 = 1065353216;
      v28 = v15;
      v18 = 5 * v17;
      v19 = *(_QWORD *)a3 - *(_QWORD *)(v16 + 20 * v17 + 4);
      if ( !v19 )
        v19 = *((_QWORD *)a3 + 1) - *(_QWORD *)(v16 + 4 * v18 + 12);
      if ( v19
        && (v20 = DynArray<CInteractionTracker::PendingStateChangeInfo,0>::AddMultipleAndSet(a4, (__int64)&v27, v14),
            v12 = v20,
            v20 < 0) )
      {
        MilInstrumentationCheckHR(5u, 0LL, 0, v20, 0x3AAu);
      }
      else
      {
        v21 = DynArray<CInteractionTracker::PendingStateChangeInfo,0>::AddMultipleAndSet(a4, (__int64)&v27, v14);
        v12 = v21;
        if ( v21 < 0 )
        {
          MilInstrumentationCheckHR(5u, 0LL, 0, v21, 0x3AFu);
        }
        else
        {
          v22 = 1;
          v23 = *(_QWORD *)a4;
          for ( i = (float)(1.0 - *(float *)(a1 + 12)) * 0.5;
                v22 < *(_DWORD *)(a4 + 24) - 1;
                *(float *)(v23 + 20 * v25) = (float)(*(float *)(a1 + 12) * *(float *)(v23 + 20 * v25)) + i )
          {
            v25 = v22++;
          }
        }
      }
    }
  }
  return v12;
}
