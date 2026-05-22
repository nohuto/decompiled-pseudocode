/*
 * XREFs of ?FillDeviceInfo@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@UEAAJPEAUMPCControllerDeviceInfo@@@Z @ 0x1800D8DF0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180017A2C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1800E1B10 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionSourceController::FillDeviceInfo(
        Windows::Internal::SpatialInteractions::SpatialInteractionSourceController *this,
        struct MPCControllerDeviceInfo *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rbx
  int v7; // eax
  unsigned __int64 v8; // r9
  __int64 v9; // rdx
  PCWSTR StringRawBuffer; // rax
  PCWSTR v11; // r8
  __int64 v12; // r9
  char *v13; // rcx
  __int64 v14; // r14
  __int64 v15; // r9
  __int64 v16; // rdx
  __int16 v17; // ax
  char *v18; // rax
  int v19; // eax
  __m128 v20; // xmm2
  __m128 v21; // xmm3
  __m128 v22; // xmm2
  __m128 v23; // xmm3
  PCWSTR v24; // rax
  __int64 v25; // rcx
  char *v26; // rdi
  signed __int64 v27; // rdx
  __int16 v28; // ax
  char *v29; // rax
  UINT32 length; // [rsp+20h] [rbp-50h] BYREF
  _WORD v32[6]; // [rsp+24h] [rbp-4Ch] BYREF
  HSTRING string; // [rsp+30h] [rbp-40h] BYREF
  UINT32 v34; // [rsp+38h] [rbp-38h] BYREF
  __int64 v35; // [rsp+40h] [rbp-30h]
  __int128 v36; // [rsp+48h] [rbp-28h] BYREF
  int v37; // [rsp+58h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]

  v35 = -2LL;
  v4 = (*(__int64 (__fastcall **)(_QWORD, _WORD *))(**((_QWORD **)this + 2) + 32LL))(*((_QWORD *)this + 2), v32);
  v5 = v4;
  if ( v4 >= 0 )
  {
    *(_OWORD *)((char *)a2 + 904) = *(_OWORD *)((char *)this + 1112);
    *((_QWORD *)a2 + 115) = *((_QWORD *)this + 141);
    *(_DWORD *)a2 = *((_DWORD *)this + 3);
    *((_WORD *)a2 + 3) = v32[1];
    *((_WORD *)a2 + 4) = v32[2];
    *((_WORD *)a2 + 2) = v32[0];
    *((_BYTE *)a2 + 896) = *((_BYTE *)this + 784);
    string = 0LL;
    v6 = *((_QWORD *)this + 2);
    WindowsDeleteString(0LL);
    string = 0LL;
    v7 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v6 + 24LL))(v6, &string);
    v5 = v7;
    if ( v7 < 0 )
    {
      v8 = (unsigned int)v7;
      v9 = 1464LL;
LABEL_30:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v9,
        (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\ctrllib\\spatialinteractionsourcecontroller.cpp",
        (const char *)v8);
LABEL_32:
      WindowsDeleteString(string);
      return v5;
    }
    length = 0;
    StringRawBuffer = WindowsGetStringRawBuffer(string, &length);
    v11 = StringRawBuffer;
    v12 = length;
    v13 = (char *)a2 + 10;
    v5 = -2147024809;
    v14 = 200LL;
    if ( length <= 0x7FFFFFFEuLL )
    {
      v16 = 200LL;
      v11 = (PCWSTR)((char *)StringRawBuffer - v13);
      do
      {
        if ( !(v16 + v12 - 200) )
          break;
        v17 = *(_WORD *)&v13[(_QWORD)v11];
        if ( !v17 )
          break;
        *(_WORD *)v13 = v17;
        v13 += 2;
        --v16;
      }
      while ( v16 );
      v18 = v13 - 2;
      if ( v16 )
        v18 = v13;
      *(_WORD *)v18 = 0;
      v15 = v16 == 0 ? 0x8007007A : 0;
    }
    else
    {
      v15 = 2147942487LL;
      *(_WORD *)v13 = 0;
    }
    if ( (int)v15 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x5BB,
        (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\ctrllib\\spatialinteractionsourcecontroller.cpp",
        (const char *)v15);
    *((_BYTE *)a2 + 836) = *((_BYTE *)this + 316) != 0;
    *((_BYTE *)a2 + 837) = *((_BYTE *)this + 686);
    if ( *((_BYTE *)this + 284) )
      v19 = (int)(float)(*((float *)this + 70) * 100.0);
    else
      LOBYTE(v19) = -1;
    *((_BYTE *)a2 + 838) = v19;
    *((_BYTE *)a2 + 839) = *((_BYTE *)this + 286);
    v20 = *(__m128 *)((char *)this + 68);
    v21 = *(__m128 *)((char *)this + 84);
    *((_DWORD *)a2 + 217) = v20.m128_i32[0];
    *((_DWORD *)a2 + 218) = _mm_shuffle_ps(v20, v20, 85).m128_u32[0];
    *((_DWORD *)a2 + 219) = _mm_shuffle_ps(v20, v20, 170).m128_u32[0];
    *((_DWORD *)a2 + 220) = _mm_shuffle_ps(v20, v20, 255).m128_u32[0];
    *((_DWORD *)a2 + 221) = v21.m128_i32[0];
    *((_DWORD *)a2 + 222) = _mm_shuffle_ps(v21, v21, 85).m128_u32[0];
    *((_DWORD *)a2 + 223) = _mm_shuffle_ps(v21, v21, 170).m128_u32[0];
    v22 = *(__m128 *)((char *)this + 36);
    v23 = *(__m128 *)((char *)this + 52);
    *((_DWORD *)a2 + 210) = v22.m128_i32[0];
    *((_DWORD *)a2 + 211) = _mm_shuffle_ps(v22, v22, 85).m128_u32[0];
    *((_DWORD *)a2 + 212) = _mm_shuffle_ps(v22, v22, 170).m128_u32[0];
    *((_DWORD *)a2 + 213) = _mm_shuffle_ps(v22, v22, 255).m128_u32[0];
    *((_DWORD *)a2 + 214) = v23.m128_i32[0];
    *((_DWORD *)a2 + 215) = _mm_shuffle_ps(v23, v23, 85).m128_u32[0];
    *((_DWORD *)a2 + 216) = _mm_shuffle_ps(v23, v23, 170).m128_u32[0];
    if ( (*(unsigned __int8 (__fastcall **)(Windows::Internal::SpatialInteractions::SpatialInteractionSourceController *, __int128 *, PCWSTR))(*(_QWORD *)this + 64LL))(
           this,
           &v36,
           v11) )
    {
      v24 = WindowsGetStringRawBuffer(*((HSTRING *)this + 109), &v34);
      *((_BYTE *)a2 + 412) = 1;
      *((_OWORD *)a2 + 51) = v36;
      *((_DWORD *)a2 + 208) = v37;
      v25 = v34;
      v26 = (char *)a2 + 414;
      if ( v34 > 0x7FFFFFFEuLL )
      {
        *(_WORD *)v26 = 0;
LABEL_29:
        v8 = v5;
        v9 = 1498LL;
        goto LABEL_30;
      }
      v27 = (char *)v24 - v26;
      do
      {
        if ( !(v14 + v25 - 200) )
          break;
        v28 = *(_WORD *)&v26[v27];
        if ( !v28 )
          break;
        *(_WORD *)v26 = v28;
        v26 += 2;
        --v14;
      }
      while ( v14 );
      v29 = v26 - 2;
      if ( v14 )
        v29 = v26;
      *(_WORD *)v29 = 0;
      v5 = v14 == 0 ? 0x8007007A : 0;
      if ( !v14 )
        goto LABEL_29;
    }
    v5 = 0;
    goto LABEL_32;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x5AF,
    (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\ctrllib\\spatialinteractionsourcecontroller.cpp",
    (const char *)(unsigned int)v4);
  return v5;
}
