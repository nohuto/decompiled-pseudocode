/*
 * XREFs of ?OnDeviceRemoval@ConsumerControlDeviceCollection@@MEAAJK@Z @ 0x18009A770
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     ?GetValueForKey@?$FixedSizeMap@KUUsageList@MobileButtonDeviceCollection@@$0BAA@@@QEAAJAEBKPEAUUsageList@MobileButtonDeviceCollection@@@Z @ 0x18009A34C (-GetValueForKey@-$FixedSizeMap@KUUsageList@MobileButtonDeviceCollection@@$0BAA@@@QEAAJAEBKPEAUUs.c)
 *     ?CreateButtonInfo@ConsumerControlDeviceCollection@@AEAAJKKT_LARGE_INTEGER@@G_NPEAUInputInfo@@@Z @ 0x18009AD38 (-CreateButtonInfo@ConsumerControlDeviceCollection@@AEAAJKKT_LARGE_INTEGER@@G_NPEAUInputInfo@@@Z.c)
 *     ?OnDeviceRemoval@HIDDeviceCollection@@MEAAJK@Z @ 0x18009CE20 (-OnDeviceRemoval@HIDDeviceCollection@@MEAAJK@Z.c)
 *     __security_check_cookie @ 0x1800CAB30 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800CBCC8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ConsumerControlDeviceCollection::OnDeviceRemoval(
        ConsumerControlDeviceCollection *this,
        unsigned int a2)
{
  char *v2; // rsi
  int ValueForKey; // eax
  __int64 v6; // rcx
  unsigned int v7; // ebx
  int v8; // r9d
  _WORD *v9; // r12
  __int64 v10; // rdi
  DWORD TickCount; // ebx
  __int64 v12; // rax
  _DWORD *v13; // rcx
  __int64 v14; // rcx
  LARGE_INTEGER PerformanceCount; // [rsp+40h] [rbp-B68h] BYREF
  __int128 Block; // [rsp+48h] [rbp-B60h] BYREF
  _BYTE v18[2848]; // [rsp+58h] [rbp-B50h] BYREF
  unsigned int v19; // [rsp+BB8h] [rbp+10h] BYREF

  v19 = a2;
  v2 = (char *)this + 2760;
  ValueForKey = FixedSizeMap<unsigned long,MobileButtonDeviceCollection::UsageList,256>::GetValueForKey(
                  (_DWORD *)this + 690,
                  &v19,
                  &Block);
  v7 = ValueForKey;
  if ( ValueForKey >= 0 )
  {
    v9 = (_WORD *)Block;
    v10 = 0LL;
    if ( DWORD2(Block) )
    {
      while ( 1 )
      {
        TickCount = GetTickCount();
        QueryPerformanceCounter(&PerformanceCount);
        ValueForKey = ConsumerControlDeviceCollection::CreateButtonInfo(
                        (ConsumerControlDeviceCollection *)(unsigned __int16)v9[v10],
                        a2,
                        TickCount,
                        PerformanceCount,
                        v9[v10],
                        0,
                        (struct InputInfo *)v18);
        v7 = ValueForKey;
        if ( ValueForKey < 0 )
          break;
        ValueForKey = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 2) + 24LL))(
                        *((_QWORD *)this + 2),
                        v18);
        v7 = ValueForKey;
        if ( ValueForKey < 0 )
        {
          if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
            return v7;
          v8 = 173;
          goto LABEL_4;
        }
        v10 = (unsigned int)(v10 + 1);
        if ( (unsigned int)v10 >= DWORD2(Block) )
          goto LABEL_10;
      }
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
        return v7;
      v8 = 167;
      goto LABEL_4;
    }
LABEL_10:
    ValueForKey = HIDDeviceCollection::OnDeviceRemoval(this, a2);
    v7 = ValueForKey;
    if ( ValueForKey >= 0 )
    {
      v12 = 0LL;
      v13 = v2;
      do
      {
        if ( *v13 == a2 )
        {
          v7 = 0;
          *(_DWORD *)&v2[24 * v12] = *((_DWORD *)v2 + 1536);
          operator delete(v9);
          return v7;
        }
        v12 = (unsigned int)(v12 + 1);
        v13 += 6;
      }
      while ( (unsigned int)v12 < 0x100 );
      v7 = -2147467259;
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      {
        McTemplateU0qqq((__int64)v13, &MinInput_Warning_CheckResult, 0, 212, 5);
        if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
          McTemplateU0qqq(v14, &MinInput_Warning_CheckResult, 0, 180, 5);
      }
    }
    else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v8 = 177;
      goto LABEL_4;
    }
  }
  else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
  {
    v8 = 140;
LABEL_4:
    McTemplateU0qqq(v6, &MinInput_Warning_CheckResult, 0, v8, ValueForKey);
  }
  return v7;
}
