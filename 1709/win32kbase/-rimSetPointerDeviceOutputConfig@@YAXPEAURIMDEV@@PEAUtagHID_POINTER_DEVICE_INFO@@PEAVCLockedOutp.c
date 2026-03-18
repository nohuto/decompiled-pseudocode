/*
 * XREFs of ?rimSetPointerDeviceOutputConfig@@YAXPEAURIMDEV@@PEAUtagHID_POINTER_DEVICE_INFO@@PEAVCLockedOutputConfig@@PEAUCRegionConfig@@@Z @ 0x1C0090768
 * Callers:
 *     RIMSetDeviceOutputConfig @ 0x1C000CB48 (RIMSetDeviceOutputConfig.c)
 * Callees:
 *     RIMGetVirtualDesktopPhysicalSize @ 0x1C0004C20 (RIMGetVirtualDesktopPhysicalSize.c)
 *     __security_check_cookie @ 0x1C00A7160 (__security_check_cookie.c)
 *     RIMGetMonitorPhysicalSize @ 0x1C01060B0 (RIMGetMonitorPhysicalSize.c)
 *     RIMQuirkSetPointerDeviceOutputConfig @ 0x1C0115BF4 (RIMQuirkSetPointerDeviceOutputConfig.c)
 */

void __fastcall rimSetPointerDeviceOutputConfig(
        struct RIMDEV *a1,
        struct tagHID_POINTER_DEVICE_INFO *a2,
        struct CLockedOutputConfig *a3,
        __m128i *a4)
{
  __int128 v4; // xmm0
  __int128 v7; // xmm0
  __m128i v8; // xmm1
  int v9; // eax
  int v10; // ecx
  __int32 v11; // r9d
  __int32 v12; // r8d
  int v13; // eax
  int v14; // ecx
  int v15; // eax
  __int32 v16; // r8d
  _QWORD *v17; // rdx
  unsigned __int64 v18; // xmm0_8
  __int128 *v19; // rax
  __int128 v20; // xmm0
  int v21; // eax
  int v22; // ecx
  int v23; // eax
  int v24; // ecx
  int v25; // eax
  int v26; // ecx
  int v27; // eax
  int v28; // ecx
  __int32 v29; // r9d
  int v30; // r9d
  int v31; // r9d
  __int64 v32; // rax
  __int128 *v33; // rax
  _BYTE v34[16]; // [rsp+20h] [rbp-30h] BYREF
  __int128 v35; // [rsp+30h] [rbp-20h] BYREF

  v4 = *(_OWORD *)((char *)a2 + 124);
  *((_DWORD *)a2 + 56) = 1;
  *((_OWORD *)a2 + 12) = v4;
  v7 = *(_OWORD *)((char *)a2 + 140);
  *((_OWORD *)a2 + 13) = v7;
  *((_OWORD *)a2 + 11) = v7;
  v8 = *a4;
  *((__m128i *)a2 + 10) = *a4;
  *(_QWORD *)((char *)a2 + 228) = **(_QWORD **)a3;
  if ( (*((_DWORD *)a1 + 46) & 0x1000000) != 0 )
  {
    RIMQuirkSetPointerDeviceOutputConfig(a1);
    return;
  }
  v9 = *((_DWORD *)a2 + 69);
  if ( (v9 & 0x20) != 0 && (v9 & 0x8000) == 0 )
  {
    v18 = _mm_srli_si128(v8, 8).m128i_u64[0];
    *((_DWORD *)a2 + 50) = v18 - v8.m128i_i32[0];
    *((_DWORD *)a2 + 51) = HIDWORD(v18) - v8.m128i_i32[1];
    if ( *((_DWORD *)a1 + 194) )
      v19 = (__int128 *)RIMGetMonitorPhysicalSize(&v35, *((_QWORD *)a1 + 98));
    else
      v19 = (__int128 *)RIMGetVirtualDesktopPhysicalSize((__int64)v34);
    v20 = *v19;
    v33 = &v35;
    v35 = v20;
    goto LABEL_25;
  }
  if ( *((_DWORD *)a1 + 194) )
  {
    v10 = *((_DWORD *)a2 + 37);
    v11 = a4[2].m128i_i32[1];
    *((_DWORD *)a2 + 56) = v11;
    v12 = a4[3].m128i_i32[0];
    LODWORD(v35) = v10 * a4[3].m128i_i32[2] / v12;
    v13 = v10 * a4[4].m128i_i32[0];
    v14 = *((_DWORD *)a2 + 38);
    v15 = v13 / v12;
    v16 = a4[3].m128i_i32[1];
    DWORD2(v35) = v15;
    DWORD1(v35) = v14 * a4[3].m128i_i32[3] / v16;
    v17 = (_QWORD *)*((_QWORD *)a2 + 38);
    HIDWORD(v35) = v14 * a4[4].m128i_i32[1] / v16;
    *((_OWORD *)a2 + 13) = v35;
    *((_DWORD *)a2 + 46) = *((_DWORD *)a2 + 54) - *((_DWORD *)a2 + 52);
    *((_DWORD *)a2 + 47) = *((_DWORD *)a2 + 55) - *((_DWORD *)a2 + 53);
    if ( ((v11 - 2) & 0xFFFFFFFD) == 0 )
    {
      v21 = *((_DWORD *)a2 + 45) ^ *((_DWORD *)a2 + 44);
      v22 = *((_DWORD *)a2 + 45);
      *((_DWORD *)a2 + 44) = v22;
      *((_DWORD *)a2 + 45) = v21 ^ v22;
      v23 = *((_DWORD *)a2 + 47) ^ *((_DWORD *)a2 + 46);
      v24 = *((_DWORD *)a2 + 47);
      *((_DWORD *)a2 + 46) = v24;
      *((_DWORD *)a2 + 47) = v23 ^ v24;
      v25 = *((_DWORD *)a2 + 49) ^ *((_DWORD *)a2 + 48);
      v26 = *((_DWORD *)a2 + 49);
      *((_DWORD *)a2 + 48) = v26;
      *((_DWORD *)a2 + 49) = v25 ^ v26;
      v27 = *((_DWORD *)a2 + 51) ^ *((_DWORD *)a2 + 50);
      v28 = *((_DWORD *)a2 + 51);
      *((_DWORD *)a2 + 50) = v28;
      *((_DWORD *)a2 + 51) = v27 ^ v28;
    }
    if ( v17 )
    {
      v29 = v11 - 1;
      if ( v29 )
      {
        v30 = v29 - 1;
        if ( v30 )
        {
          v31 = v30 - 1;
          if ( v31 )
          {
            if ( v31 != 1 )
              return;
            v32 = v17[8];
          }
          else
          {
            v32 = v17[6];
          }
        }
        else
        {
          v32 = v17[4];
        }
      }
      else
      {
        v32 = v17[2];
      }
      v17[10] = v32;
    }
  }
  else if ( *((_DWORD *)a2 + 6) != 6 )
  {
    v33 = (__int128 *)RIMGetVirtualDesktopPhysicalSize((__int64)v34);
LABEL_25:
    *((_OWORD *)a2 + 11) = *v33;
  }
}
