/*
 * XREFs of ?DetachDevice@RIMDeviceCollection@@AEAAJPEAVRIMDevice@@@Z @ 0x18006E474
 * Callers:
 *     ?Close@RIMDeviceCollection@@IEAAXXZ @ 0x18006D864 (-Close@RIMDeviceCollection@@IEAAXXZ.c)
 *     ?OnDeviceChangeCallbackStatic@RIMDeviceCollection@@SAXPEAX0KKKKGG0@Z @ 0x18006DAB0 (-OnDeviceChangeCallbackStatic@RIMDeviceCollection@@SAXPEAX0KKKKGG0@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RIMDeviceCollection::DetachDevice(RIMDeviceCollection *this, struct RIMDevice *a2)
{
  unsigned int *v2; // rsi
  int v5; // edi
  __int64 *v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rcx
  void (__fastcall ***v10)(_QWORD, __int64); // rcx
  __int64 v11; // rsi

  v2 = (unsigned int *)*((_QWORD *)a2 + 4);
  v5 = (*(__int64 (__fastcall **)(RIMDeviceCollection *, _QWORD))(*(_QWORD *)this + 64LL))(this, *v2);
  if ( v5 >= 0 )
  {
    if ( (v2[1] & 0xFFFFFEFF) == 0
      || (v5 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(**((_QWORD **)this + 2) + 56LL))(
                 *((_QWORD *)this + 2),
                 v2),
          v5 >= 0) )
    {
      v6 = (__int64 *)((char *)this + 624);
      v7 = 0LL;
      while ( 1 )
      {
        v8 = *v6;
        if ( *v6 )
        {
          if ( *(_QWORD *)(v8 + 16) == *((_QWORD *)a2 + 2) || !*(_DWORD *)(v8 + 40) )
            break;
        }
        v7 = (unsigned int)(v7 + 1);
        ++v6;
        if ( (unsigned int)v7 >= 0x100 )
          return (unsigned int)-2147023728;
      }
      v10 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + v7 + 78);
      v5 = 0;
      v11 = (unsigned int)v7;
      if ( v10 )
        (**v10)(v10, 1LL);
      *((_QWORD *)this + v11 + 78) = 0LL;
      --*((_DWORD *)this + 668);
    }
  }
  return (unsigned int)v5;
}
