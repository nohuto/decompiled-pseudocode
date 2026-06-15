/*
 * XREFs of ?IsOnPhoneTopologyMultiplexer@AudioDeviceMgr@@UEAAJPEBGPEAH@Z @ 0x1800E75F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall AudioDeviceMgr::IsOnPhoneTopologyMultiplexer(
        AudioDeviceMgr *this,
        const unsigned __int16 *a2,
        int *a3)
{
  __int64 v5; // rcx
  int v6; // ebx
  int v7; // eax
  __int64 v9; // [rsp+58h] [rbp+10h] BYREF

  v5 = 0LL;
  v9 = 0LL;
  if ( a2 )
  {
    if ( a3 )
    {
      v6 = (*(__int64 (__fastcall **)(AudioDeviceMgr *, const unsigned __int16 *, __int64 *, _QWORD))(*(_QWORD *)this + 80LL))(
             this,
             a2,
             &v9,
             0LL);
      v5 = v9;
      if ( v6 >= 0 )
      {
        v7 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v9 + 48LL))(v9, a3);
        v6 = 0;
        if ( v7 < 0 )
          v6 = v7;
        v5 = v9;
      }
    }
    else
    {
      v6 = -2147467261;
    }
  }
  else
  {
    v6 = -2147024809;
  }
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  return (unsigned int)v6;
}
