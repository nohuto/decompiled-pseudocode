/*
 * XREFs of ?UpdateMagnifier@MagnifierComponent@@AEAAJXZ @ 0x1800A5E64
 * Callers:
 *     ?OnMagnifierRegistryKeyChange@MagnifierComponent@@AEAAXPEAUHKEY__@@@Z @ 0x1800A5C34 (-OnMagnifierRegistryKeyChange@MagnifierComponent@@AEAAXPEAUHKEY__@@@Z.c)
 *     ?UpdatePosition@MagnifierComponent@@QEAAJUtagPOINT@@@Z @ 0x1800A5CEC (-UpdatePosition@MagnifierComponent@@QEAAJUtagPOINT@@@Z.c)
 *     ?UpdateScale@MagnifierComponent@@QEAAJM@Z @ 0x1800A5D68 (-UpdateScale@MagnifierComponent@@QEAAJM@Z.c)
 *     ?ToggleMagnifier@MagnifierComponent@@QEAAJUtagPOINT@@@Z @ 0x1800A5F38 (-ToggleMagnifier@MagnifierComponent@@QEAAJUtagPOINT@@@Z.c)
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall MagnifierComponent::UpdateMagnifier(MagnifierComponent *this)
{
  unsigned int v2; // ebx
  __m128i v3; // xmm0
  __m128i v4; // xmm1
  float v5; // xmm2_4
  int v6; // ecx
  int v7; // edx
  int v8; // r8d
  int v9; // eax
  int v10; // ecx
  int v11; // eax
  __int64 v12; // rcx
  int v13; // eax
  __int64 v14; // rcx
  _DWORD v16[6]; // [rsp+30h] [rbp-18h] BYREF

  if ( *((_QWORD *)this + 9) )
  {
    v3 = _mm_cvtsi32_si128(*((_DWORD *)this + 6));
    v4 = _mm_cvtsi32_si128(*((_DWORD *)this + 7));
    v5 = *((float *)this + 10) + *((float *)this + 10);
    v6 = *((_DWORD *)this + 8);
    v7 = (int)(float)(_mm_cvtepi32_ps(v3).m128_f32[0] / v5);
    v8 = (int)(float)(_mm_cvtepi32_ps(v4).m128_f32[0] / v5);
    v16[0] = v6 - v7;
    v9 = v6 + v7;
    v10 = *((_DWORD *)this + 9);
    v16[2] = v9;
    v16[1] = v10 - v8;
    v11 = v10 + v8;
    v12 = *((unsigned __int8 *)this + 88);
    v16[3] = v11;
    v13 = (*((__int64 (__fastcall **)(__int64, _DWORD *))this + 9))(v12, v16);
    v2 = v13;
    if ( v13 < 0 && (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      McTemplateU0qqq(v14, &MinInput_Warning_CheckResult, 0, 463, v13);
  }
  else
  {
    v2 = -2147418113;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      McTemplateU0qqq((__int64)this, &MinInput_Warning_CheckResult, 0, 458, 255);
  }
  return v2;
}
