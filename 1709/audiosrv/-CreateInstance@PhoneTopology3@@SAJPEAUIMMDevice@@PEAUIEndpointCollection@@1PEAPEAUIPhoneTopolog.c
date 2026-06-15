/*
 * XREFs of ?CreateInstance@PhoneTopology3@@SAJPEAUIMMDevice@@PEAUIEndpointCollection@@1PEAPEAUIPhoneTopology@@@Z @ 0x1800EADA4
 * Callers:
 *     ?CreatePhoneTopology@AudioDeviceMgr@@AEAAJPEAUIMMDevice@@PEAH@Z @ 0x1800E6D14 (-CreatePhoneTopology@AudioDeviceMgr@@AEAAJPEAUIMMDevice@@PEAH@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18002B220 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ??0PhoneTopology3@@IEAA@XZ @ 0x1800EA5AC (--0PhoneTopology3@@IEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall PhoneTopology3::CreateInstance(
        struct IMMDevice *a1,
        struct IEndpointCollection *a2,
        struct IEndpointCollection *a3,
        struct IPhoneTopology **a4)
{
  unsigned int v6; // esi
  struct IPhoneTopology *v7; // rbx
  PhoneTopology3 *v8; // rax
  struct IPhoneTopology *v9; // rdi
  int v10; // eax

  v6 = 0;
  v7 = 0LL;
  if ( a4 )
  {
    *a4 = 0LL;
    v8 = (PhoneTopology3 *)operator new(0x528uLL);
    if ( v8 )
      v9 = PhoneTopology3::PhoneTopology3(v8);
    else
      v9 = 0LL;
    v7 = v9;
    if ( v9 )
    {
      v10 = (*(__int64 (__fastcall **)(struct IPhoneTopology *, struct IMMDevice *))(*(_QWORD *)v9 + 200LL))(v9, a1);
      if ( v10 >= 0 )
      {
        v7 = 0LL;
        *a4 = v9;
      }
      else
      {
        v6 = v10;
      }
    }
    else
    {
      v6 = -2147024882;
    }
  }
  else
  {
    v6 = -2147467261;
  }
  if ( v7 )
    (*(void (__fastcall **)(struct IPhoneTopology *, struct IEndpointCollection *, struct IEndpointCollection *))(*(_QWORD *)v7 + 16LL))(
      v7,
      a2,
      a3);
  return v6;
}
