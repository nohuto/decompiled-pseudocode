/*
 * XREFs of ?Serialize@PropertyNode@Input@@UEBAJIPEAUIStream@@PEAK@Z @ 0x1800311A0
 * Callers:
 *     ?Serialize@Property@Input@@UEBAJIPEAUIStream@@PEAK@Z @ 0x180031580 (-Serialize@Property@Input@@UEBAJIPEAUIStream@@PEAK@Z.c)
 *     ?Serialize@PropertyMap@Input@@UEBAJIPEAUIStream@@PEAK@Z @ 0x180031CA0 (-Serialize@PropertyMap@Input@@UEBAJIPEAUIStream@@PEAK@Z.c)
 *     ?Serialize@PropertyVector@Input@@UEBAJIPEAUIStream@@PEAK@Z @ 0x180032290 (-Serialize@PropertyVector@Input@@UEBAJIPEAUIStream@@PEAK@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1800CAB30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Input::PropertyNode::Serialize(
        Input::PropertyNode *this,
        __int64 a2,
        struct IStream *a3,
        unsigned int *a4)
{
  __int64 (__fastcall *v4)(struct IStream *, __int128 *, __int64); // rax
  __int128 v6; // [rsp+30h] [rbp-28h] BYREF

  *a4 = 0;
  v4 = *(__int64 (__fastcall **)(struct IStream *, __int128 *, __int64))(*(_QWORD *)a3 + 32LL);
  v6 = *(_OWORD *)((char *)this + 8);
  return v4(a3, &v6, 16LL);
}
