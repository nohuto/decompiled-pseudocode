/*
 * XREFs of ?OnDeviceRemoval@MobileButtonDeviceCollection@@MEAAJK@Z @ 0x180072C00
 * Callers:
 *     <none>
 * Callees:
 *     ?CreateButtonInfo@MobileButtonDeviceCollection@@AEAAJKKT_LARGE_INTEGER@@G_NPEAUInputInfo@@@Z @ 0x1800730DC (-CreateButtonInfo@MobileButtonDeviceCollection@@AEAAJKKT_LARGE_INTEGER@@G_NPEAUInputInfo@@@Z.c)
 *     ?OnDeviceRemoval@HIDDeviceCollection@@MEAAJK@Z @ 0x1800752C0 (-OnDeviceRemoval@HIDDeviceCollection@@MEAAJK@Z.c)
 *     memset_0 @ 0x1800E1A3C (memset_0.c)
 *     __security_check_cookie @ 0x1800E1B10 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800E1CF0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall MobileButtonDeviceCollection::OnDeviceRemoval(MobileButtonDeviceCollection *this, unsigned int a2)
{
  char *v4; // rdi
  signed int ButtonInfo; // ebx
  __int64 v6; // rax
  _DWORD *i; // rcx
  __int64 v8; // rbp
  _WORD *QuadPart; // r12
  unsigned int v10; // r15d
  DWORD TickCount; // ebx
  char v12; // cl
  _DWORD *v13; // rdx
  __int64 v14; // rax
  LARGE_INTEGER PerformanceCount[2]; // [rsp+40h] [rbp-718h] BYREF
  _BYTE v17[24]; // [rsp+50h] [rbp-708h] BYREF
  int v18; // [rsp+68h] [rbp-6F0h]

  memset_0(v17, 0, 0x6C8uLL);
  v4 = (char *)this + 2760;
  v18 = 1736;
  if ( a2 == *((_DWORD *)this + 2226) )
  {
    return (unsigned int)-2147024809;
  }
  else
  {
    v6 = 0LL;
    for ( i = (_DWORD *)((char *)this + 2760); *i != a2; i += 6 )
    {
      v6 = (unsigned int)(v6 + 1);
      if ( (unsigned int)v6 >= 0x100 )
        return (unsigned int)-2147467259;
    }
    v8 = 0LL;
    *(_OWORD *)&PerformanceCount[0].LowPart = *(_OWORD *)&v4[24 * v6 + 8];
    QuadPart = (_WORD *)PerformanceCount[0].QuadPart;
    v10 = _mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)&PerformanceCount[0].LowPart, 8));
    if ( v10 )
    {
      while ( 1 )
      {
        TickCount = GetTickCount();
        QueryPerformanceCounter(PerformanceCount);
        ButtonInfo = MobileButtonDeviceCollection::CreateButtonInfo(
                       (MobileButtonDeviceCollection *)v17,
                       a2,
                       TickCount,
                       PerformanceCount[0],
                       QuadPart[v8],
                       0,
                       (struct InputInfo *)v17);
        if ( ButtonInfo < 0 )
          break;
        ButtonInfo = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 2) + 24LL))(
                       *((_QWORD *)this + 2),
                       v17);
        if ( ButtonInfo < 0 )
          break;
        v8 = (unsigned int)(v8 + 1);
        if ( (unsigned int)v8 >= v10 )
          goto LABEL_11;
      }
    }
    else
    {
LABEL_11:
      ButtonInfo = HIDDeviceCollection::OnDeviceRemoval(this, a2);
      if ( ButtonInfo >= 0 )
      {
        v12 = 0;
        v13 = (_DWORD *)((char *)this + 2760);
        v14 = 0LL;
        while ( *v13 != a2 )
        {
          v14 = (unsigned int)(v14 + 1);
          v13 += 6;
          if ( (unsigned int)v14 >= 0x100 )
            goto LABEL_17;
        }
        *(_DWORD *)&v4[24 * v14] = *((_DWORD *)this + 2226);
        v12 = 1;
LABEL_17:
        ButtonInfo = v12 == 0 ? 0x80004005 : 0;
        if ( v12 )
          operator delete(QuadPart);
      }
    }
  }
  return (unsigned int)ButtonInfo;
}
