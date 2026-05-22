/*
 * XREFs of ?DetachDevice@RIMDeviceCollection@@AEAAJPEAVRIMDevice@@@Z @ 0x18008A2E8
 * Callers:
 *     ?Close@RIMDeviceCollection@@IEAAXXZ @ 0x180089098 (-Close@RIMDeviceCollection@@IEAAXXZ.c)
 *     ?OnDeviceChangeCallbackStatic@RIMDeviceCollection@@SAXPEAX0KKKGG0@Z @ 0x1800893A0 (-OnDeviceChangeCallbackStatic@RIMDeviceCollection@@SAXPEAX0KKKGG0@Z.c)
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RIMDeviceCollection::DetachDevice(RIMDeviceCollection *this, struct RIMDevice *a2)
{
  unsigned int *v2; // rsi
  int v5; // eax
  __int64 v6; // rcx
  unsigned int v7; // edi
  int v8; // eax
  __int64 v9; // rcx
  __int64 *v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rcx
  void (__fastcall ***v15)(_QWORD, __int64); // rcx
  __int64 v16; // rdi

  v2 = (unsigned int *)*((_QWORD *)a2 + 4);
  v5 = (*(__int64 (__fastcall **)(RIMDeviceCollection *, _QWORD))(*(_QWORD *)this + 64LL))(this, *v2);
  v7 = v5;
  if ( v5 >= 0 )
  {
    if ( (v2[1] & 0xFFFFFEFF) != 0
      && (v8 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(**((_QWORD **)this + 2) + 56LL))(
                 *((_QWORD *)this + 2),
                 v2),
          v7 = v8,
          v8 < 0) )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
        McTemplateU0qqq(v9, &MinInput_Warning_CheckResult, 2, 1196, v8);
    }
    else
    {
      v10 = (__int64 *)((char *)this + 624);
      v11 = 0LL;
      while ( 1 )
      {
        v12 = *v10;
        if ( *v10 )
        {
          if ( *(_QWORD *)(v12 + 16) == *((_QWORD *)a2 + 2) || !*(_DWORD *)(v12 + 40) )
            break;
        }
        v11 = (unsigned int)(v11 + 1);
        ++v10;
        if ( (unsigned int)v11 >= 0x100 )
        {
          v7 = -2147023728;
          if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
          {
            McTemplateU0qqq(v12, &MinInput_Warning_CheckResult, 2, 1078, 144);
            if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
              McTemplateU0qqq(v13, &MinInput_Warning_CheckResult, 2, 1199, 144);
          }
          return v7;
        }
      }
      v15 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + v11 + 78);
      v16 = (unsigned int)v11;
      if ( v15 )
        (**v15)(v15, 1LL);
      *((_QWORD *)this + v16 + 78) = 0LL;
      --*((_DWORD *)this + 668);
      return 0;
    }
  }
  else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
  {
    McTemplateU0qqq(v6, &MinInput_Warning_CheckResult, 2, 1181, v5);
  }
  return v7;
}
