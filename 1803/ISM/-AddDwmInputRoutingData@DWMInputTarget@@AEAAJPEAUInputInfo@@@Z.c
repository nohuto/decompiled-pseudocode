/*
 * XREFs of ?AddDwmInputRoutingData@DWMInputTarget@@AEAAJPEAUInputInfo@@@Z @ 0x180018BC8
 * Callers:
 *     ?DeliverInput@DWMInputTarget@@UEAAJPEAUInputInfo@@@Z @ 0x1800187C0 (-DeliverInput@DWMInputTarget@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003148 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$GetAttachedObject@VLegacyInputSinkData@@@InputSite@@QEAAPEAVLegacyInputSinkData@@XZ @ 0x18000C810 (--$GetAttachedObject@VLegacyInputSinkData@@@InputSite@@QEAAPEAVLegacyInputSinkData@@XZ.c)
 *     ?GetCompositionInputQueue@LegacyInputSinkData@@QEBAAEBUCOMPOSITION_INPUT_QUEUE@@W4CompositionInputType@@@Z @ 0x18000D388 (-GetCompositionInputQueue@LegacyInputSinkData@@QEBAAEBUCOMPOSITION_INPUT_QUEUE@@W4CompositionInp.c)
 *     ??0bad_optional_access@std@@QEAA@XZ @ 0x18000D4C4 (--0bad_optional_access@std@@QEAA@XZ.c)
 *     ?IsIdentityTransform@@YA_NUtagINPUT_TRANSFORM@@@Z @ 0x180017C04 (-IsIdentityTransform@@YA_NUtagINPUT_TRANSFORM@@@Z.c)
 *     __security_check_cookie @ 0x1800E1B10 (__security_check_cookie.c)
 *     _CxxThrowException_0 @ 0x1800E22F0 (_CxxThrowException_0.c)
 */

__int64 __fastcall DWMInputTarget::AddDwmInputRoutingData(
        DWMInputTarget *this,
        struct InputInfo *a2,
        __int64 a3,
        const char *a4)
{
  __int64 v4; // rcx
  unsigned int v5; // edi
  _QWORD *Attached; // rsi
  const char *v8; // r9
  __int64 v9; // rdx
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  bool v13; // zf
  __int128 v14; // xmm2
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  bool v17; // al
  float v18; // xmm6_4
  float v19; // xmm5_4
  __int64 v20; // rcx
  float v21; // xmm1_4
  float v22; // xmm9_4
  float v23; // xmm4_4
  float v24; // xmm6_4
  float v25; // xmm7_4
  float v26; // xmm5_4
  float v27; // xmm8_4
  float v28; // xmm3_4
  float v29; // xmm2_4
  float v30; // xmm3_4
  __int16 v32; // [rsp+28h] [rbp-99h]
  int v33; // [rsp+2Ch] [rbp-95h] BYREF
  _QWORD pExceptionObject[3]; // [rsp+30h] [rbp-91h] BYREF
  __int128 v35; // [rsp+48h] [rbp-79h] BYREF
  __int128 v36; // [rsp+58h] [rbp-69h]
  __int128 v37; // [rsp+68h] [rbp-59h]
  __int128 v38; // [rsp+78h] [rbp-49h]
  _BYTE v39[56]; // [rsp+88h] [rbp-39h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+120h] [rbp+5Fh]

  v4 = *((_QWORD *)this + 15);
  v5 = 0;
  if ( !v4 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x223,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputtarget.cpp",
      a4);
    __debugbreak();
  }
  Attached = (_QWORD *)InputSite::GetAttachedObject<LegacyInputSinkData>(v4);
  if ( !Attached )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x226,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputtarget.cpp",
      v8);
    __debugbreak();
  }
  if ( (*(_BYTE *)a2 & 0x28) != 0 )
  {
    v9 = 3LL;
  }
  else if ( (*(_BYTE *)a2 & 0x10) != 0 )
  {
    v9 = 4LL;
  }
  else if ( (*(_BYTE *)a2 & 2) != 0 )
  {
    v9 = 1LL;
  }
  else
  {
    v9 = 0LL;
    if ( (*(_BYTE *)a2 & 4) != 0 )
      v9 = 2LL;
  }
  *((_QWORD *)a2 + 48) = LegacyInputSinkData::GetCompositionInputQueue(Attached, v9)[1];
  NtQueryCompositionInputQueueAndTransform(*Attached, 1LL, v39, &v35);
  v10 = v36;
  *(_OWORD *)((char *)a2 + 392) = v35;
  v11 = v37;
  *(_OWORD *)((char *)a2 + 408) = v10;
  v12 = v38;
  *(_OWORD *)((char *)a2 + 424) = v11;
  *(_OWORD *)((char *)a2 + 440) = v12;
  if ( !*((_BYTE *)Attached + 17) )
  {
    NtQueryCompositionInputIsImplicit(*Attached, &v33);
    HIBYTE(v32) = 1;
    LOBYTE(v32) = v33 != 0;
    *((_WORD *)Attached + 8) = v32;
    if ( !*((_BYTE *)Attached + 17) )
    {
      memset(pExceptionObject, 0, sizeof(pExceptionObject));
      std::bad_optional_access::bad_optional_access((std::bad_optional_access *)pExceptionObject);
      throw (std::bad_optional_access *)pExceptionObject;
    }
  }
  v13 = (*(_BYTE *)a2 & 0x3B) == 0;
  *((_DWORD *)a2 + 114) = *((unsigned __int8 *)Attached + 16);
  if ( v13 )
    return 0LL;
  v14 = *(_OWORD *)((char *)a2 + 392);
  v15 = *(_OWORD *)((char *)a2 + 424);
  v36 = *(_OWORD *)((char *)a2 + 408);
  v16 = *(_OWORD *)((char *)a2 + 440);
  v35 = v14;
  v38 = v16;
  v37 = v15;
  v17 = *(float *)&v14 == 1.0 && IsIdentityTransform((float *)&v35);
  if ( v17 || !*((_DWORD *)a2 + 12) )
    return 0LL;
  while ( 1 )
  {
    v18 = *((float *)a2 + 101);
    v19 = *((float *)a2 + 105);
    v20 = 32LL * v5;
    v21 = (float)*(int *)((char *)a2 + v20 + 68);
    v22 = (float)*(int *)((char *)a2 + v20 + 64);
    v23 = (float)(v18 * v21) - *((float *)a2 + 99);
    v24 = (float)(v18 * v22) - *((float *)a2 + 98);
    v25 = (float)(v22 * v19) - *((float *)a2 + 102);
    v26 = (float)(v19 * v21) - *((float *)a2 + 103);
    if ( (float)(v24 * v26) == (float)(v23 * v25) )
      break;
    v27 = (float)(v24 * v26) - (float)(v23 * v25);
    v28 = *((float *)a2 + 113);
    v29 = (float)(v28 * v21) - *((float *)a2 + 111);
    v30 = (float)(v28 * v22) - *((float *)a2 + 110);
    *(_DWORD *)((char *)a2 + v20 + 72) = (int)(float)((float)((float)(v29 * v25) - (float)(v30 * v26)) / v27);
    *(_DWORD *)((char *)a2 + v20 + 76) = (int)(float)((float)((float)(v30 * v23) - (float)(v29 * v24)) / v27);
    if ( ++v5 >= *((_DWORD *)a2 + 12) )
      return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x22D,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputtarget.cpp",
    (const char *)0x8000FFFFLL);
  return 2147549183LL;
}
