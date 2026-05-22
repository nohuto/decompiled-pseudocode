/*
 * XREFs of ?ParseInputReport@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@PEAUHID_REPORT@1@PEAUInputReport@1@@Z @ 0x18009DC54
 * Callers:
 *     ?Parse@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@UEAAJPEADKPEAUISpatialGraphNodeReference@Holographic@34@_JAEBUMatrix4x4@Numerics@Foundation@4@3PEA_NPEAW4MPCAugmentedInputGestureType@@44@Z @ 0x1800D69A0 (-Parse@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@UEAAJPEADKPEAUIS.c)
 * Callees:
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180075ACC (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     SpatialInteractionDevices::ReadPosePosition @ 0x18009D9DC (SpatialInteractionDevices--ReadPosePosition.c)
 *     SpatialInteractionDevices::ReadPoseOrientation @ 0x18009DA9C (SpatialInteractionDevices--ReadPoseOrientation.c)
 *     SpatialInteractionDevices::ReadLocalOrientation @ 0x18009DB64 (SpatialInteractionDevices--ReadLocalOrientation.c)
 *     SpatialInteractionDevices::ReadKnownFloats_DirectX::XMFLOAT2_2_ @ 0x18009F604 (SpatialInteractionDevices--ReadKnownFloats_DirectX--XMFLOAT2_2_.c)
 *     SpatialInteractionDevices::ReadKnownFloats_float_1_ @ 0x18009F784 (SpatialInteractionDevices--ReadKnownFloats_float_1_.c)
 */

__int64 __fastcall SpatialInteractionDevices::ParseInputReport(
        SpatialInteractionDevices *this,
        struct SpatialInteractionDevices::HID_HANDLE *a2,
        struct SpatialInteractionDevices::HID_REPORT *a3,
        struct SpatialInteractionDevices::InputReport *a4)
{
  __int64 *v6; // rcx
  USHORT v7; // r12
  __int64 *v9; // rbx
  unsigned __int8 v10; // dl
  __int64 *v11; // rax
  unsigned __int8 v12; // r8
  __int64 *v13; // r9
  float v14; // xmm1_4
  float v15; // xmm1_4
  float v16; // xmm1_4
  float v17; // xmm1_4
  int v18; // r8d
  __int64 v19; // r9
  __int64 v20; // r9
  __int64 v21; // r9
  __int64 v22; // r9
  int v23; // ebp
  __int64 v24; // rax
  __int64 v25; // r15
  __int64 v26; // rbx
  ULONG v27; // edx
  char v28; // r13
  struct _USAGE_AND_PAGE *v29; // r8
  USHORT v30; // dx
  NTSTATUS Usages; // eax
  __int64 v32; // rcx
  __int64 v33; // r9
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  ULONG UsageLength; // [rsp+80h] [rbp+8h] BYREF

  v6 = (__int64 *)*((_QWORD *)this + 31);
  v7 = 0;
  v9 = v6;
  v10 = **((_BYTE **)a2 + 1);
  v11 = (__int64 *)v6[1];
  if ( *((_BYTE *)v11 + 25) )
    goto LABEL_10;
  do
  {
    v12 = *((_BYTE *)v11 + 32);
    v13 = v11;
    if ( v12 >= v10 )
      v11 = (__int64 *)*v11;
    else
      v11 = (__int64 *)v11[2];
    if ( v12 >= v10 )
      v9 = v13;
  }
  while ( !*((_BYTE *)v11 + 25) );
  if ( v9 == v6 || v10 < *((_BYTE *)v9 + 32) )
LABEL_10:
    v9 = v6;
  if ( v9 != v6 && *(_BYTE *)(v9[5] + 143) )
  {
    SpatialInteractionDevices::ReadPosePosition(this, a2, (__int64)a3);
    SpatialInteractionDevices::ReadPoseOrientation(this, a2, (__int64)a3);
    if ( *((_BYTE *)a3 + 29) )
    {
      if ( *((_BYTE *)a3 + 28) )
      {
        v14 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)a3 + 3)) & _xmm);
        if ( v14 <= 0.001 )
        {
          v15 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)a3 + 4)) & _xmm);
          if ( v15 <= 0.001 )
          {
            v16 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)a3 + 5)) & _xmm);
            if ( v16 <= 0.001 )
            {
              v17 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)a3 + 6)) & _xmm);
              if ( v17 <= 0.001 )
                *((_WORD *)a3 + 14) = 0;
            }
          }
        }
      }
    }
    SpatialInteractionDevices::ReadLocalOrientation((__int64)this, v9[5], (int)a2, (__int64)a3);
    v19 = v9[5];
    if ( *(_BYTE *)(v19 + 138) )
    {
      if ( (int)SpatialInteractionDevices::ReadKnownFloats_DirectX::XMFLOAT2_2_(
                  (_DWORD)this,
                  (_DWORD)a2,
                  v18,
                  (int)v19 + 8,
                  (__int64)a3 + 44) >= 0 )
      {
        *((_BYTE *)a3 + 52) = 1;
        if ( !*((_BYTE *)this + 232) )
        {
          if ( *((_BYTE *)this + 233) )
            *((float *)a3 + 11) = 1.0 - *((float *)a3 + 11);
          if ( *((_BYTE *)this + 234) )
            *((float *)a3 + 12) = 1.0 - *((float *)a3 + 12);
        }
      }
    }
    v20 = v9[5];
    if ( *(_BYTE *)(v20 + 139) )
    {
      if ( (int)SpatialInteractionDevices::ReadKnownFloats_DirectX::XMFLOAT2_2_(
                  (_DWORD)this,
                  (_DWORD)a2,
                  v18,
                  (int)v20 + 24,
                  (__int64)a3 + 56) >= 0 )
      {
        *((_BYTE *)a3 + 64) = 1;
        if ( !*((_BYTE *)this + 232) )
        {
          if ( *((_BYTE *)this + 235) )
            *((float *)a3 + 14) = 1.0 - *((float *)a3 + 14);
          if ( *((_BYTE *)this + 236) )
            *((float *)a3 + 15) = 1.0 - *((float *)a3 + 15);
        }
      }
    }
    v21 = v9[5];
    if ( *(_BYTE *)(v21 + 136)
      && (int)SpatialInteractionDevices::ReadKnownFloats_float_1_((_DWORD)this, (_DWORD)a2, v18, v21, (__int64)a3 + 68) >= 0 )
    {
      *((_BYTE *)a3 + 72) = 1;
    }
    v22 = v9[5];
    if ( *(_BYTE *)(v22 + 137)
      && (int)SpatialInteractionDevices::ReadKnownFloats_float_1_(
                (_DWORD)this,
                (_DWORD)a2,
                v18,
                (int)v22 + 40,
                (__int64)a3 + 96) >= 0 )
    {
      *((_BYTE *)a3 + 100) = 1;
    }
    v23 = 0;
    *((_DWORD *)a3 + 8) = *((_DWORD *)this + 60);
    *((_DWORD *)a3 + 9) = *(_DWORD *)(v9[5] + 144);
    v24 = v9[5];
    v25 = *(_QWORD *)(v24 + 160);
    v26 = *(_QWORD *)(v24 + 152);
    if ( (v25 - v26) / 12 )
    {
      v27 = 0;
      v28 = 1;
      UsageLength = 0;
      while ( v26 != v25 )
      {
        if ( v28 || v7 != *(_WORD *)v26 )
        {
          v7 = *(_WORD *)v26;
          v29 = (struct _USAGE_AND_PAGE *)*((_QWORD *)this + 34);
          v30 = *(_WORD *)v26;
          UsageLength = *((_DWORD *)this + 66);
          v28 = 0;
          Usages = HidP_GetUsagesEx(
                     HidP_Input,
                     v30,
                     v29,
                     &UsageLength,
                     *((PHIDP_PREPARSED_DATA *)this + 7),
                     *((PCHAR *)a2 + 1),
                     *(_DWORD *)a2);
          if ( Usages < 0 )
            return wil::details::in1diag3::Return_NtStatus(
                     retaddr,
                     (void *)0x290,
                     (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\lib\\spatialinteractionhidparser.cpp",
                     (const char *)(unsigned int)Usages);
          v27 = UsageLength;
        }
        v32 = 0LL;
        if ( v27 )
        {
          v33 = *((_QWORD *)this + 34);
          while ( *(_WORD *)(v33 + 4 * v32) != *(_WORD *)(v26 + 4)
               || *(_WORD *)(v33 + 4 * v32 + 2) != *(_WORD *)(v26 + 2) )
          {
            v32 = (unsigned int)(v32 + 1);
            if ( (unsigned int)v32 >= v27 )
              goto LABEL_53;
          }
          v23 |= *(_DWORD *)(v26 + 8);
        }
LABEL_53:
        v26 += 12LL;
      }
    }
    *((_DWORD *)a3 + 10) = v23;
  }
  return 0LL;
}
