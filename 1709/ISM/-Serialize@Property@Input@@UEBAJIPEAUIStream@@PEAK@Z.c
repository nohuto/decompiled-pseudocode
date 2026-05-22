/*
 * XREFs of ?Serialize@Property@Input@@UEBAJIPEAUIStream@@PEAK@Z @ 0x180031580
 * Callers:
 *     <none>
 * Callees:
 *     ?Serialize@PropertyNode@Input@@UEBAJIPEAUIStream@@PEAK@Z @ 0x1800311A0 (-Serialize@PropertyNode@Input@@UEBAJIPEAUIStream@@PEAK@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Input::Property::Serialize(Input::Property *this, __int64 a2, struct IStream *a3, unsigned int *a4)
{
  int v7; // edx
  __int64 v8; // rax
  __int64 v9; // r8
  __int64 v10; // rdx
  __int64 (__fastcall *v11)(struct IStream *, __int64, __int64, _DWORD *); // rax
  _DWORD v13[4]; // [rsp+30h] [rbp-10h] BYREF
  unsigned int v14; // [rsp+68h] [rbp+28h] BYREF

  *a4 = 0;
  v14 = 0;
  v7 = Input::PropertyNode::Serialize(this, a2, a3, &v14);
  if ( v7 >= 0 )
  {
    *a4 += v14;
    v13[0] = *((_DWORD *)this + 10);
    v7 = (*(__int64 (__fastcall **)(struct IStream *, _DWORD *, __int64, unsigned int *))(*(_QWORD *)a3 + 32LL))(
           a3,
           v13,
           4LL,
           &v14);
    if ( v7 >= 0 )
    {
      *a4 += v14;
      if ( *((_QWORD *)this + 4) )
      {
        v8 = *(_QWORD *)a3;
        v9 = *((unsigned int *)this + 10);
        v10 = *((_QWORD *)this + 4);
        v14 = 0;
        v11 = *(__int64 (__fastcall **)(struct IStream *, __int64, __int64, _DWORD *))(v8 + 32);
        v13[0] = 0;
        v7 = v11(a3, v10, v9, v13);
        if ( v7 >= 0 )
          *a4 += v13[0] + v14;
      }
    }
  }
  return (unsigned int)v7;
}
