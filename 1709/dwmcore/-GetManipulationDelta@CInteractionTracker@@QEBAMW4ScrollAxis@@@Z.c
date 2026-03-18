/*
 * XREFs of ?GetManipulationDelta@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z @ 0x18016BA7C
 * Callers:
 *     ?CalculateInContactDelta@CScrollAnimation@@AEAAJPEAVCExpressionValueStack@@_KPEAM@Z @ 0x180188770 (-CalculateInContactDelta@CScrollAnimation@@AEAAJPEAVCExpressionValueStack@@_KPEAM@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     memset_0 @ 0x1800C3238 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__m128 __fastcall CInteractionTracker::GetManipulationDelta(__int64 a1, int a2)
{
  __int64 v2; // rbx
  __m128 result; // xmm0
  int v4; // edx
  __m128 v5; // xmm0
  _DWORD v6[16]; // [rsp+20h] [rbp-60h] BYREF
  int v7; // [rsp+60h] [rbp-20h]
  char v8; // [rsp+64h] [rbp-1Ch]

  v2 = *(_QWORD *)(a1 + 544);
  result = 0LL;
  if ( v2 )
  {
    if ( a2 )
    {
      v4 = a2 - 1;
      if ( v4 )
      {
        if ( v4 == 1 )
        {
          memset_0(v6, 0, sizeof(v6));
          v7 = 18;
          v8 = 0;
          (*(void (__fastcall **)(__int64, __int64, _DWORD *))(*(_QWORD *)v2 + 96LL))(v2, 3LL, v6);
          return (__m128)v6[0];
        }
        return result;
      }
      memset_0(v6, 0, sizeof(v6));
      v7 = 18;
      v8 = 0;
      (*(void (__fastcall **)(__int64, __int64, _DWORD *))(*(_QWORD *)v2 + 96LL))(v2, 1LL, v6);
      v5 = (__m128)v6[1];
    }
    else
    {
      memset_0(v6, 0, sizeof(v6));
      v7 = 18;
      v8 = 0;
      (*(void (__fastcall **)(__int64, __int64, _DWORD *))(*(_QWORD *)v2 + 96LL))(v2, 1LL, v6);
      v5 = (__m128)v6[0];
    }
    return _mm_xor_ps(v5, (__m128)_xmm);
  }
  return result;
}
