/*
 * XREFs of ?ParseInputReport@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@PEAUHID_REPORT@1@PEAUInputReport@1@@Z @ 0x1800784C8
 * Callers:
 *     ?ReadHidReport@SpatialInteractionDevice@@UEAAJPEAUInputReport@SpatialInteractionDevices@@PEAE@Z @ 0x180074C30 (-ReadHidReport@SpatialInteractionDevice@@UEAAJPEAUInputReport@SpatialInteractionDevices@@PEAE@Z.c)
 *     _lambda_ac879a184350821f45c5795b09041ac5_::operator() @ 0x180074E2C (_lambda_ac879a184350821f45c5795b09041ac5_--operator().c)
 *     ?Parse@SpatialInteractionController@SpatialInteractionDevices@@QEAAJPEADKPEAUISpatialGraphNodeReference@Holographic@Internal@Windows@@_JAEBUMatrix4x4@Numerics@Foundation@6@3PEA_NPEAW4MPCAugmentedInputGestureType@@44@Z @ 0x1800C4A3C (-Parse@SpatialInteractionController@SpatialInteractionDevices@@QEAAJPEADKPEAUISpatialGraphNodeRe.c)
 * Callees:
 *     SpatialInteractionDevices::ReadPosePosition @ 0x180078250 (SpatialInteractionDevices--ReadPosePosition.c)
 *     SpatialInteractionDevices::ReadPoseOrientation @ 0x180078310 (SpatialInteractionDevices--ReadPoseOrientation.c)
 *     SpatialInteractionDevices::ReadLocalOrientation @ 0x1800783D8 (SpatialInteractionDevices--ReadLocalOrientation.c)
 *     SpatialInteractionDevices::ReadKnownFloats_DirectX::XMFLOAT2_2_ @ 0x180079ED4 (SpatialInteractionDevices--ReadKnownFloats_DirectX--XMFLOAT2_2_.c)
 *     SpatialInteractionDevices::ReadKnownFloats_float_1_ @ 0x18007A054 (SpatialInteractionDevices--ReadKnownFloats_float_1_.c)
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x18007BCE4 (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall SpatialInteractionDevices::ParseInputReport(
        SpatialInteractionDevices *this,
        struct SpatialInteractionDevices::HID_HANDLE *a2,
        struct SpatialInteractionDevices::HID_REPORT *a3,
        struct SpatialInteractionDevices::InputReport *a4)
{
  USHORT v7; // r12
  unsigned __int8 v8; // dl
  __int64 *v9; // rax
  __int64 *v10; // rbx
  __int64 *v11; // rcx
  float v12; // xmm1_4
  float v13; // xmm1_4
  float v14; // xmm1_4
  float v15; // xmm1_4
  int v16; // r8d
  __int64 v17; // r9
  __int64 v18; // r9
  __int64 v19; // r9
  __int64 v20; // r9
  int v21; // r15d
  __int64 v22; // rbx
  __int64 v23; // rdi
  __int64 v24; // rbx
  ULONG v25; // edx
  char v26; // r13
  struct _USAGE_AND_PAGE *v27; // r8
  USHORT v28; // dx
  NTSTATUS Usages; // eax
  __int64 v30; // rcx
  __int64 v31; // r9
  int PreparsedData; // [rsp+20h] [rbp-58h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  ULONG UsageLength; // [rsp+80h] [rbp+8h] BYREF

  v7 = 0;
  v8 = **((_BYTE **)a2 + 1);
  v9 = (__int64 *)*((_QWORD *)this + 36);
  v10 = v9;
  v11 = (__int64 *)v9[1];
  while ( !*((_BYTE *)v11 + 25) )
  {
    if ( *((_BYTE *)v11 + 32) >= v8 )
    {
      v10 = v11;
      v11 = (__int64 *)*v11;
    }
    else
    {
      v11 = (__int64 *)v11[2];
    }
  }
  if ( v10 == v9 || v8 < *((_BYTE *)v10 + 32) )
    v10 = v9;
  if ( v10 != v9 && *(_BYTE *)(v10[5] + 143) )
  {
    SpatialInteractionDevices::ReadPosePosition(this, a2, (__int64)a3);
    SpatialInteractionDevices::ReadPoseOrientation(this, a2, (__int64)a3);
    if ( *((_BYTE *)a3 + 29) )
    {
      if ( *((_BYTE *)a3 + 28) )
      {
        v12 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)a3 + 3)) & _xmm);
        if ( v12 <= 0.001 )
        {
          v13 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)a3 + 4)) & _xmm);
          if ( v13 <= 0.001 )
          {
            v14 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)a3 + 5)) & _xmm);
            if ( v14 <= 0.001 )
            {
              v15 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)a3 + 6)) & _xmm);
              if ( v15 <= 0.001 )
                *((_WORD *)a3 + 14) = 0;
            }
          }
        }
      }
    }
    SpatialInteractionDevices::ReadLocalOrientation((__int64)this, v10[5], (int)a2, (__int64)a3);
    v17 = v10[5];
    if ( *(_BYTE *)(v17 + 138) )
    {
      if ( (int)SpatialInteractionDevices::ReadKnownFloats_DirectX::XMFLOAT2_2_(
                  (_DWORD)this,
                  (_DWORD)a2,
                  v16,
                  (int)v17 + 8,
                  (__int64)a3 + 44) >= 0 )
      {
        *((_BYTE *)a3 + 52) = 1;
        if ( !*((_BYTE *)this + 272) )
        {
          if ( *((_BYTE *)this + 273) )
            *((float *)a3 + 11) = 1.0 - *((float *)a3 + 11);
          if ( *((_BYTE *)this + 274) )
            *((float *)a3 + 12) = 1.0 - *((float *)a3 + 12);
        }
      }
    }
    v18 = v10[5];
    if ( *(_BYTE *)(v18 + 139) )
    {
      if ( (int)SpatialInteractionDevices::ReadKnownFloats_DirectX::XMFLOAT2_2_(
                  (_DWORD)this,
                  (_DWORD)a2,
                  v16,
                  (int)v18 + 24,
                  (__int64)a3 + 56) >= 0 )
      {
        *((_BYTE *)a3 + 64) = 1;
        if ( !*((_BYTE *)this + 272) )
        {
          if ( *((_BYTE *)this + 275) )
            *((float *)a3 + 14) = 1.0 - *((float *)a3 + 14);
          if ( *((_BYTE *)this + 276) )
            *((float *)a3 + 15) = 1.0 - *((float *)a3 + 15);
        }
      }
    }
    v19 = v10[5];
    if ( *(_BYTE *)(v19 + 136)
      && (int)SpatialInteractionDevices::ReadKnownFloats_float_1_((_DWORD)this, (_DWORD)a2, v16, v19, (__int64)a3 + 68) >= 0 )
    {
      *((_BYTE *)a3 + 72) = 1;
    }
    v20 = v10[5];
    if ( *(_BYTE *)(v20 + 137)
      && (int)SpatialInteractionDevices::ReadKnownFloats_float_1_(
                (_DWORD)this,
                (_DWORD)a2,
                v16,
                (int)v20 + 40,
                (__int64)a3 + 96) >= 0 )
    {
      *((_BYTE *)a3 + 100) = 1;
    }
    v21 = 0;
    *((_DWORD *)a3 + 8) = *((_DWORD *)this + 70);
    *((_DWORD *)a3 + 9) = *(_DWORD *)(v10[5] + 144);
    v22 = v10[5];
    v23 = *(_QWORD *)(v22 + 160);
    v24 = *(_QWORD *)(v22 + 152);
    if ( (v23 - v24) / 12 )
    {
      v25 = 0;
      v26 = 1;
      UsageLength = 0;
      while ( v24 != v23 )
      {
        if ( v26 || v7 != *(_WORD *)v24 )
        {
          v7 = *(_WORD *)v24;
          v27 = (struct _USAGE_AND_PAGE *)*((_QWORD *)this + 39);
          v28 = *(_WORD *)v24;
          UsageLength = *((_DWORD *)this + 76);
          v26 = 0;
          Usages = HidP_GetUsagesEx(
                     HidP_Input,
                     v28,
                     v27,
                     &UsageLength,
                     *((PHIDP_PREPARSED_DATA *)this + 12),
                     *((PCHAR *)a2 + 1),
                     *(_DWORD *)a2);
          if ( Usages < 0 )
            return wil::details::in1diag3::Return_NtStatus(
                     retaddr,
                     (void *)0x292,
                     (unsigned int)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\lib\\spatialinteractionhidparser.cpp",
                     (const char *)(unsigned int)Usages,
                     PreparsedData);
          v25 = UsageLength;
        }
        v30 = 0LL;
        if ( v25 )
        {
          v31 = *((_QWORD *)this + 39);
          while ( *(_WORD *)(v31 + 4 * v30) != *(_WORD *)(v24 + 4)
               || *(_WORD *)(v31 + 4 * v30 + 2) != *(_WORD *)(v24 + 2) )
          {
            v30 = (unsigned int)(v30 + 1);
            if ( (unsigned int)v30 >= v25 )
              goto LABEL_51;
          }
          v21 |= *(_DWORD *)(v24 + 8);
        }
LABEL_51:
        v24 += 12LL;
      }
    }
    *((_DWORD *)a3 + 10) = v21;
  }
  return 0LL;
}
