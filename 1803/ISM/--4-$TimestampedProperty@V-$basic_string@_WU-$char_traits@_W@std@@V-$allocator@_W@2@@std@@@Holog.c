/*
 * XREFs of ??4?$TimestampedProperty@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Holographic@Internal@Windows@@QEAAAEAU0123@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Z @ 0x18009BCC4
 * Callers:
 *     _lambda_ee46ae3407b0869cacd23b14ef71fd42_::operator() @ 0x1800CC96C (_lambda_ee46ae3407b0869cacd23b14ef71fd42_--operator().c)
 *     Windows::Internal::Holographic::HolographicDeviceSnapshot::Write_Windows::Internal::Holographic::SpatialGraphSnapshot__lambda_2be7d4712709608587fff75dfc19c285___ @ 0x1800CD01C (Windows--Internal--Holographic--HolographicDeviceSnapshot--Write_Windows--Internal-_ea_1800CD01C.c)
 * Callees:
 *     std::basic_string_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t___::_Reallocate_for__lambda_3fa8b2c8193a0f3144fc4b1b8f243931__wchar_t_const_____ptr64_ @ 0x18006695C (std--basic_string_wchar_t_std--char_traits_wchar_t__std--allocator_wchar_t___--_Reallocate_for__.c)
 */

LARGE_INTEGER *__fastcall Windows::Internal::Holographic::TimestampedProperty<std::wstring>::operator=(
        LARGE_INTEGER *a1,
        LARGE_INTEGER *Src,
        __int64 a3)
{
  _QWORD *p_QuadPart; // r9
  unsigned __int64 QuadPart; // rdx
  char *v6; // rsi
  __int64 v7; // rbx
  LARGE_INTEGER PerformanceCount; // [rsp+30h] [rbp+8h] BYREF

  if ( a1 != Src )
  {
    p_QuadPart = &Src->QuadPart;
    if ( Src[3].QuadPart >= 8uLL )
      p_QuadPart = (_QWORD *)Src->QuadPart;
    QuadPart = Src[2].QuadPart;
    if ( QuadPart > a1[3].QuadPart )
    {
      std::basic_string_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t___::_Reallocate_for__lambda_3fa8b2c8193a0f3144fc4b1b8f243931__wchar_t_const_____ptr64_(
        (unsigned __int64 *)&a1->QuadPart,
        QuadPart,
        a3,
        p_QuadPart);
    }
    else
    {
      v6 = (char *)a1;
      if ( a1[3].QuadPart >= 8uLL )
        v6 = (char *)a1->QuadPart;
      v7 = 2 * QuadPart;
      a1[2].QuadPart = QuadPart;
      memmove(v6, p_QuadPart, 2 * QuadPart);
      *(_WORD *)&v6[v7] = 0;
    }
  }
  QueryPerformanceCounter(&PerformanceCount);
  a1[4] = PerformanceCount;
  return a1;
}
