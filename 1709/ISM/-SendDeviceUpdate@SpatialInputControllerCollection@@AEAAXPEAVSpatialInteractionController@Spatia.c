/*
 * XREFs of ?SendDeviceUpdate@SpatialInputControllerCollection@@AEAAXPEAVSpatialInteractionController@SpatialInteractionDevices@@@Z @ 0x180093E7C
 * Callers:
 *     ?PrepareAndSendInputInfo@SpatialInputControllerCollection@@AEAAXPEAVSpatialInteractionController@SpatialInteractionDevices@@PEADKK_JPEAUISpatialGraphNodeReference@Holographic@Internal@Windows@@@Z @ 0x180091680 (-PrepareAndSendInputInfo@SpatialInputControllerCollection@@AEAAXPEAVSpatialInteractionController.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800367C4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetDeviceInfo@RIMDeviceCollection@@QEAAJKPEAPEAUDeviceInfo@@@Z @ 0x18008A448 (-GetDeviceInfo@RIMDeviceCollection@@QEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     ?Instance@RawInputProvidersTracing@@KAPEAV1@XZ @ 0x18008CCC0 (-Instance@RawInputProvidersTracing@@KAPEAV1@XZ.c)
 *     ?ControllerDeviceUpdate_@RawInputProvidersTracing@@QEAAXJKPEAUDeviceInfo@@@Z @ 0x18008E4DC (-ControllerDeviceUpdate_@RawInputProvidersTracing@@QEAAXJKPEAUDeviceInfo@@@Z.c)
 *     __security_check_cookie @ 0x1800CAB30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

void __fastcall SpatialInputControllerCollection::SendDeviceUpdate(
        HSTRING *this,
        struct SpatialInteractionDevices::SpatialInteractionController *a2,
        __int64 a3,
        unsigned int *a4)
{
  int v5; // edx
  int DeviceInfo; // eax
  struct DeviceInfo *v8; // rbx
  int v9; // esi
  int v10; // eax
  __m128 v11; // xmm3
  __m128 v12; // xmm2
  __m128 v13; // xmm3
  __m128 v14; // xmm2
  __int128 v15; // xmm0
  bool v16; // r15
  PCWSTR StringRawBuffer; // rax
  char *v18; // rcx
  __int64 v19; // r11
  __int64 v20; // r9
  __int64 v21; // r8
  signed __int64 v22; // r10
  __int16 v23; // ax
  int v24; // edi
  _DWORD *v25; // rcx
  RawInputProvidersTracing *v26; // rcx
  struct DeviceInfo *v27; // [rsp+20h] [rbp-30h] BYREF
  UINT32 length; // [rsp+28h] [rbp-28h] BYREF
  __int128 Source1; // [rsp+30h] [rbp-20h] BYREF
  int v30; // [rsp+40h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]

  v5 = *((_DWORD *)a2 + 86);
  v27 = 0LL;
  DeviceInfo = RIMDeviceCollection::GetDeviceInfo((RIMDeviceCollection *)this, v5, &v27, a4);
  v8 = v27;
  v9 = DeviceInfo;
  if ( DeviceInfo >= 0 )
  {
    if ( !v27 )
    {
      *((_BYTE *)a2 + 1081) = 1;
      v8 = v27;
      goto LABEL_21;
    }
    *((_BYTE *)v27 + 896) = *((_BYTE *)a2 + 504) != 0;
    if ( *((_BYTE *)a2 + 408) )
      v10 = (int)(float)(*((float *)a2 + 101) * 100.0);
    else
      LOBYTE(v10) = -1;
    *((_BYTE *)v8 + 897) = v10;
    *((_BYTE *)v8 + 898) = *((_BYTE *)a2 + 410);
    v11 = *(__m128 *)((char *)a2 + 460);
    v12 = *(__m128 *)((char *)a2 + 444);
    *((_DWORD *)v8 + 233) = _mm_shuffle_ps(v12, v12, 85).m128_u32[0];
    *((_DWORD *)v8 + 232) = v12.m128_i32[0];
    *((_DWORD *)v8 + 234) = _mm_shuffle_ps(v12, v12, 170).m128_u32[0];
    *((_DWORD *)v8 + 237) = _mm_shuffle_ps(v11, v11, 85).m128_u32[0];
    *((_DWORD *)v8 + 236) = v11.m128_i32[0];
    *((_DWORD *)v8 + 238) = _mm_shuffle_ps(v11, v11, 170).m128_u32[0];
    *((_DWORD *)v8 + 235) = _mm_shuffle_ps(v12, v12, 255).m128_u32[0];
    v13 = *(__m128 *)((char *)a2 + 428);
    v14 = *(__m128 *)((char *)a2 + 412);
    *((_DWORD *)v8 + 226) = _mm_shuffle_ps(v14, v14, 85).m128_u32[0];
    *((_DWORD *)v8 + 225) = v14.m128_i32[0];
    *((_DWORD *)v8 + 227) = _mm_shuffle_ps(v14, v14, 170).m128_u32[0];
    *((_DWORD *)v8 + 229) = v13.m128_i32[0];
    *((_DWORD *)v8 + 231) = _mm_shuffle_ps(v13, v13, 170).m128_u32[0];
    *((_DWORD *)v8 + 228) = _mm_shuffle_ps(v14, v14, 255).m128_u32[0];
    *((_DWORD *)v8 + 230) = _mm_shuffle_ps(v13, v13, 85).m128_u32[0];
    AcquireSRWLockShared((PSRWLOCK)a2 + 107);
    v15 = *((_OWORD *)a2 + 54);
    v30 = *((_DWORD *)a2 + 220);
    Source1 = v15;
    v16 = RtlCompareMemory(
            &Source1,
            &`SpatialInteractionDevices::SpatialInteractionController::GetDynamicNodeInfo'::`2'::noNodeId,
            0x10uLL) != 16;
    if ( a2 != (struct SpatialInteractionDevices::SpatialInteractionController *)-856LL )
      ReleaseSRWLockShared((PSRWLOCK)a2 + 107);
    if ( !v16 )
      goto LABEL_20;
    StringRawBuffer = WindowsGetStringRawBuffer(this[366], &length);
    *((_BYTE *)v8 + 472) = 1;
    *(_OWORD *)((char *)v8 + 876) = Source1;
    *((_DWORD *)v8 + 223) = v30;
    v18 = (char *)v8 + 474;
    v19 = length;
    if ( length <= 0x7FFFFFFEuLL )
    {
      v21 = 200LL;
      v20 = 0LL;
      v22 = (char *)StringRawBuffer - v18;
      do
      {
        if ( !(v21 + v19 - 200) )
          break;
        v23 = *(_WORD *)&v18[v22];
        if ( !v23 )
          break;
        *(_WORD *)v18 = v23;
        v18 += 2;
        --v21;
      }
      while ( v21 );
      if ( !v21 )
      {
        v18 -= 2;
        v20 = 2147942522LL;
      }
      *(_WORD *)v18 = 0;
      if ( (int)v20 >= 0 )
        goto LABEL_20;
    }
    else
    {
      v20 = 2147942487LL;
      *(_WORD *)v18 = 0;
    }
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x4DC,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialinputcontrollercollection.cpp",
      (const char *)v20);
LABEL_20:
    v9 = (*(__int64 (__fastcall **)(HSTRING, struct DeviceInfo *))(*(_QWORD *)this[2] + 48LL))(this[2], v8);
  }
LABEL_21:
  v24 = *((_DWORD *)a2 + 86);
  v25 = (_DWORD *)*((_QWORD *)RawInputProvidersTracing::Instance() + 1);
  if ( v25 )
  {
    if ( *v25 )
    {
      RawInputProvidersTracing::Instance();
      RawInputProvidersTracing::ControllerDeviceUpdate_(v26, v9, v24, v8);
    }
  }
}
