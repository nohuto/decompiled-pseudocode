/*
 * XREFs of ?Serialize@PropertyMap@Input@@UEBAJIPEAUIStream@@PEAK@Z @ 0x180031CA0
 * Callers:
 *     <none>
 * Callees:
 *     ?Serialize@PropertyNode@Input@@UEBAJIPEAUIStream@@PEAK@Z @ 0x1800311A0 (-Serialize@PropertyNode@Input@@UEBAJIPEAUIStream@@PEAK@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Input::PropertyMap::Serialize(__int64 ***this, __int64 a2, struct IStream *a3, unsigned int *a4)
{
  unsigned int v6; // ebp
  int v8; // r10d
  __int64 *v9; // rbx
  __int64 *v10; // rax
  __int64 *i; // rax
  __int16 v13; // [rsp+50h] [rbp+8h] BYREF
  unsigned int v14; // [rsp+68h] [rbp+20h] BYREF

  *a4 = 0;
  v14 = 0;
  v6 = a2;
  v8 = Input::PropertyNode::Serialize((Input::PropertyNode *)this, a2, a3, &v14);
  if ( v8 >= 0 )
  {
    *a4 += v14;
    v13 = *((_WORD *)this + 20);
    v8 = (*(__int64 (__fastcall **)(struct IStream *, __int16 *, __int64, unsigned int *))(*(_QWORD *)a3 + 32LL))(
           a3,
           &v13,
           2LL,
           &v14);
    if ( v8 >= 0 )
      *a4 += v14;
  }
  v9 = *this[4];
  while ( v8 >= 0 && v9 != (__int64 *)this[4] )
  {
    v8 = (*(__int64 (__fastcall **)(__int64, _QWORD, struct IStream *, unsigned int *))(*(_QWORD *)v9[6] + 104LL))(
           v9[6],
           v6,
           a3,
           &v14);
    if ( v8 >= 0 )
      *a4 += v14;
    if ( !*((_BYTE *)v9 + 25) )
    {
      v10 = (__int64 *)v9[2];
      if ( *((_BYTE *)v10 + 25) )
      {
        for ( i = (__int64 *)v9[1]; !*((_BYTE *)i + 25) && v9 == (__int64 *)i[2]; i = (__int64 *)i[1] )
          v9 = i;
        v9 = i;
      }
      else
      {
        do
        {
          v9 = v10;
          v10 = (__int64 *)*v10;
        }
        while ( !*((_BYTE *)v10 + 25) );
      }
    }
  }
  return (unsigned int)v8;
}
