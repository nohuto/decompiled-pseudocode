/*
 * XREFs of ?FindClosestTargetMode@DMMVIDPNTARGETMODESET@@QEAAPEBVDMMVIDPNTARGETMODE@@IIU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@EEE@Z @ 0x1C004526C
 * Callers:
 *     ?FindClosestTargetMode@DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJPEBU_D3DKMT_DISPLAYMODE@@QEAUD3DKMDT_HVIDPNTARGETMODESET__@@EEEPEAPEBU_D3DKMDT_VIDPN_TARGET_MODE@@@Z @ 0x1C021A680 (-FindClosestTargetMode@DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJPEBU_D3DKMT_DISPLAYMODE@@.c)
 * Callees:
 *     ?GetNextMode@DMMVIDPNTARGETMODESET@@QEAAPEAVDMMVIDPNTARGETMODE@@QEBV2@@Z @ 0x1C0005350 (-GetNextMode@DMMVIDPNTARGETMODESET@@QEAAPEAVDMMVIDPNTARGETMODE@@QEBV2@@Z.c)
 *     ??$DIFF@I@@YAIII@Z @ 0x1C0007E04 (--$DIFF@I@@YAIII@Z.c)
 *     ?DmmMapVSyncFromRationalToInteger@@YAIAEBU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@PEAE@Z @ 0x1C00C3E6C (-DmmMapVSyncFromRationalToInteger@@YAIAEBU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDE.c)
 */

const struct DMMVIDPNTARGETMODE *__fastcall DMMVIDPNTARGETMODESET::FindClosestTargetMode(
        DMMVIDPNTARGETMODESET *this,
        unsigned int a2,
        unsigned int a3,
        struct _D3DDDI_RATIONAL a4,
        enum _D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING a5,
        unsigned __int8 a6,
        unsigned __int8 a7,
        unsigned __int8 a8)
{
  unsigned int v8; // r14d
  __int64 v9; // r12
  struct DMMVIDPNTARGETMODE *NextMode; // rdi
  DMMVIDPNTARGETMODESET *v11; // r9
  struct DMMVIDPNTARGETMODE *v12; // rsi
  unsigned int v14; // ebp
  _QWORD *v15; // rax
  enum _D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING v16; // edx
  _QWORD *v17; // rbx
  unsigned int v19; // ebx
  unsigned int v20; // eax
  unsigned int v21; // eax
  unsigned int v22; // r8d
  unsigned int v23; // ebx
  unsigned int v24; // [rsp+58h] [rbp+10h]
  struct _D3DDDI_RATIONAL v25; // [rsp+68h] [rbp+20h] BYREF

  v25 = a4;
  v24 = a2;
  v8 = -1;
  v9 = a3;
  NextMode = 0LL;
  v11 = (DMMVIDPNTARGETMODESET *)*((_QWORD *)this + 6);
  v12 = 0LL;
  v14 = -1;
  if ( v11 != (DMMVIDPNTARGETMODESET *)((char *)this + 48) )
    NextMode = (DMMVIDPNTARGETMODESET *)((char *)v11 - 8);
  if ( !NextMode )
    goto LABEL_4;
  while ( 1 )
  {
    if ( (!a7 || *((_DWORD *)NextMode + 21) == a2 && *((_DWORD *)NextMode + 22) == (_DWORD)v9)
      && (!a8 || (int)(*((_DWORD *)NextMode + 30) << 29) >> 29 == a5) )
    {
      v19 = DmmMapVSyncFromRationalToInteger(&v25, a5, 0LL);
      v20 = DmmMapVSyncFromRationalToInteger(
              (const struct _D3DDDI_RATIONAL *)((char *)NextMode + 92),
              (enum _D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING)((int)(*((_DWORD *)NextMode + 30) << 29) >> 29),
              0LL);
      DIFF<unsigned int>(v20, v19);
      v21 = DIFF<unsigned int>(*((_DWORD *)NextMode + 21) * *((_DWORD *)NextMode + 22), (unsigned int)v9 * v24);
      if ( v22 < v8 )
      {
        v8 = v22;
LABEL_16:
        v12 = NextMode;
        v14 = v21;
        goto LABEL_17;
      }
      if ( v22 == v8 && v21 < v14 )
        goto LABEL_16;
    }
LABEL_17:
    NextMode = DMMVIDPNTARGETMODESET::GetNextMode(this, NextMode);
    if ( !NextMode )
      break;
    a2 = v24;
  }
  if ( !v12 )
  {
LABEL_4:
    v15 = (_QWORD *)WdLogNewEntry5_WdDmmEvent();
    v16 = a5;
    v17 = v15;
    v15[3] = v24;
    v15[4] = v9;
    v15[5] = DmmMapVSyncFromRationalToInteger(&v25, v16, 0LL);
    v17[6] = this;
    WdLogEvent5_WdDmmEvent(v17);
    return v12;
  }
  if ( !a6 )
    return v12;
  v23 = DmmMapVSyncFromRationalToInteger(
          (const struct _D3DDDI_RATIONAL *)((char *)v12 + 92),
          (enum _D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING)((int)(*((_DWORD *)v12 + 30) << 29) >> 29),
          0LL);
  if ( v23 == DmmMapVSyncFromRationalToInteger(&v25, a5, 0LL) )
    return v12;
  return 0LL;
}
