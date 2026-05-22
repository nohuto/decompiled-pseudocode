/*
 * XREFs of ?Deserialize@Property@Input@@UEAAJIPEAUIStream@@PEAK@Z @ 0x180031640
 * Callers:
 *     <none>
 * Callees:
 *     ?Deserialize@Value@Input@@QEAAJIPEAUIStream@@PEAK@Z @ 0x180030DC8 (-Deserialize@Value@Input@@QEAAJIPEAUIStream@@PEAK@Z.c)
 *     ?Deserialize@PropertyNode@Input@@UEAAJIPEAUIStream@@PEAK@Z @ 0x180031200 (-Deserialize@PropertyNode@Input@@UEAAJIPEAUIStream@@PEAK@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Input::Property::Deserialize(void **this, __int64 a2, struct IStream *a3, unsigned int *a4)
{
  int v7; // eax
  int v8; // r10d
  unsigned int *v10; // [rsp+30h] [rbp-18h] BYREF
  unsigned int v11; // [rsp+68h] [rbp+20h] BYREF

  *a4 = 0;
  v11 = 0;
  v7 = Input::PropertyNode::Deserialize((Input::PropertyNode *)this, a2, a3, &v11);
  v8 = v7;
  if ( v7 >= 0 )
    *a4 += v11;
  LODWORD(v10) = 0;
  if ( v7 >= 0 )
  {
    v8 = (*(__int64 (__fastcall **)(struct IStream *, unsigned int **, __int64, unsigned int *))(*(_QWORD *)a3 + 24LL))(
           a3,
           &v10,
           4LL,
           &v11);
    if ( v8 >= 0 )
    {
      *a4 += v11;
      if ( (_DWORD)v10 )
      {
        v11 = 0;
        v8 = Input::Value::Deserialize(this + 4, (__int64)a3, (struct IStream *)&v11, (unsigned int *)(unsigned int)v10);
        if ( v8 >= 0 )
          *a4 += v11;
      }
    }
  }
  return (unsigned int)v8;
}
