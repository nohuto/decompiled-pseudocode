/*
 * XREFs of ?FindClosestTargetMode@DMMVIDPNTARGETMODESET@@QEAAPEBVDMMVIDPNTARGETMODE@@IIU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@EEE@Z @ 0x1C0035A3C
 * Callers:
 *     ?FindClosestTargetMode@DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJPEBU_D3DKMT_DISPLAYMODE@@QEAUD3DKMDT_HVIDPNTARGETMODESET__@@EEEPEAPEBU_D3DKMDT_VIDPN_TARGET_MODE@@@Z @ 0x1C01F1380 (-FindClosestTargetMode@DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJPEBU_D3DKMT_DISPLAYMODE@@.c)
 * Callees:
 *     ?GetNextMode@DMMVIDPNSOURCEMODESET@@QEAAPEAVDMMVIDPNSOURCEMODE@@QEBV2@@Z @ 0x1C00051A0 (-GetNextMode@DMMVIDPNSOURCEMODESET@@QEAAPEAVDMMVIDPNSOURCEMODE@@QEBV2@@Z.c)
 *     ??$DIFF@I@@YAIII@Z @ 0x1C000EE68 (--$DIFF@I@@YAIII@Z.c)
 *     ?DmmMapVSyncFromRationalToInteger@@YAIAEBU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@PEAE@Z @ 0x1C00D5698 (-DmmMapVSyncFromRationalToInteger@@YAIAEBU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDE.c)
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
  __int64 v8; // r12
  DMMVIDPNTARGETMODESET *v9; // rdi
  unsigned int v10; // ebp
  struct DMMVIDPNSOURCEMODE *v11; // rsi
  unsigned int v13; // r14d
  struct DMMVIDPNSOURCEMODE *NextMode; // rdi
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
  v8 = a3;
  v9 = (DMMVIDPNTARGETMODESET *)*((_QWORD *)this + 6);
  v10 = -1;
  v11 = 0LL;
  v13 = -1;
  if ( v9 == (DMMVIDPNTARGETMODESET *)((char *)this + 48) )
    goto LABEL_3;
  NextMode = (DMMVIDPNTARGETMODESET *)((char *)v9 - 8);
  if ( !NextMode )
    goto LABEL_3;
  while ( 1 )
  {
    if ( (!a7 || *((_DWORD *)NextMode + 21) == a2 && *((_DWORD *)NextMode + 22) == (_DWORD)v8)
      && (!a8 || (int)(*((_DWORD *)NextMode + 30) << 29) >> 29 == a5) )
    {
      v19 = DmmMapVSyncFromRationalToInteger(&v25, a5, 0LL);
      v20 = DmmMapVSyncFromRationalToInteger(
              (const struct _D3DDDI_RATIONAL *)((char *)NextMode + 92),
              (enum _D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING)((int)(*((_DWORD *)NextMode + 30) << 29) >> 29),
              0LL);
      DIFF<unsigned int>(v20, v19);
      v21 = DIFF<unsigned int>(*((_DWORD *)NextMode + 21) * *((_DWORD *)NextMode + 22), (unsigned int)v8 * v24);
      if ( v22 < v10 )
      {
        v10 = v22;
LABEL_15:
        v11 = NextMode;
        v13 = v21;
        goto LABEL_16;
      }
      if ( v22 == v10 && v21 < v13 )
        goto LABEL_15;
    }
LABEL_16:
    NextMode = DMMVIDPNSOURCEMODESET::GetNextMode(this, NextMode);
    if ( !NextMode )
      break;
    a2 = v24;
  }
  if ( !v11 )
  {
LABEL_3:
    v15 = (_QWORD *)WdLogNewEntry5_WdDmmEvent();
    v16 = a5;
    v17 = v15;
    v15[3] = v24;
    v15[4] = v8;
    v15[5] = DmmMapVSyncFromRationalToInteger(&v25, v16, 0LL);
    v17[6] = this;
    WdLogEvent5_WdDmmEvent(v17);
    return v11;
  }
  if ( !a6 )
    return v11;
  v23 = DmmMapVSyncFromRationalToInteger(
          (const struct _D3DDDI_RATIONAL *)((char *)v11 + 92),
          (enum _D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING)((int)(*((_DWORD *)v11 + 30) << 29) >> 29),
          0LL);
  if ( v23 == DmmMapVSyncFromRationalToInteger(&v25, a5, 0LL) )
    return v11;
  return 0LL;
}
