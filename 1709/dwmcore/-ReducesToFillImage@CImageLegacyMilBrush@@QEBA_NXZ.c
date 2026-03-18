/*
 * XREFs of ?ReducesToFillImage@CImageLegacyMilBrush@@QEBA_NXZ @ 0x18007C22C
 * Callers:
 *     ?TryDrawCommandAsDrawList@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@PEAVCDrawListEntryBuilder@@_NIV?$span@$$CBE@gsl@@PEA_N@Z @ 0x18001E008 (-TryDrawCommandAsDrawList@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@PEAVCDrawLi.c)
 * Callees:
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall CImageLegacyMilBrush::ReducesToFillImage(CImageLegacyMilBrush *this)
{
  __int64 v2; // rcx
  bool result; // al
  float v4; // [rsp+30h] [rbp-28h] BYREF
  float v5; // [rsp+34h] [rbp-24h]
  float v6; // [rsp+38h] [rbp-20h]
  float v7; // [rsp+3Ch] [rbp-1Ch]

  v2 = *((_QWORD *)this + 66);
  if ( !v2 )
    return 0;
  if ( (*(int (__fastcall **)(__int64, _QWORD, _QWORD, float *))(*(_QWORD *)(v2 + 8) + 120LL))(v2 + 8, 0LL, 0LL, &v4) < 0 )
    return 0;
  if ( v4 != 0.0 )
    return 0;
  if ( v5 != 0.0 )
    return 0;
  if ( *((double *)this + 50) != 1.0 )
    return 0;
  if ( *((_DWORD *)this + 109) )
    return 0;
  if ( *((float *)this + 116) != v4 )
    return 0;
  if ( *((float *)this + 117) != v5 )
    return 0;
  if ( *((float *)this + 118) != v6 )
    return 0;
  if ( *((float *)this + 119) != v7 )
    return 0;
  result = 1;
  if ( *((_DWORD *)this + 108) != 1
    || *((float *)this + 110) != 0.0
    || *((float *)this + 111) != 0.0
    || *((float *)this + 112) != 1.0
    || *((float *)this + 113) != 1.0
    || *((_DWORD *)this + 122) != 1
    || *((_QWORD *)this + 51)
    || *((_QWORD *)this + 53)
    || *((_QWORD *)this + 52)
    || *((_QWORD *)this + 60)
    || *((_QWORD *)this + 57) )
  {
    return 0;
  }
  return result;
}
