/*
 * XREFs of ?Deserialize@PropertyVector@Input@@UEAAJIPEAUIStream@@PEAK@Z @ 0x180032360
 * Callers:
 *     <none>
 * Callees:
 *     ?CreateFromStream@PropertyNode@Input@@KAJIPEAUIStream@@PEAKPEAPEAV12@@Z @ 0x180030F88 (-CreateFromStream@PropertyNode@Input@@KAJIPEAUIStream@@PEAKPEAPEAV12@@Z.c)
 *     ?Deserialize@PropertyNode@Input@@UEAAJIPEAUIStream@@PEAK@Z @ 0x180031200 (-Deserialize@PropertyNode@Input@@UEAAJIPEAUIStream@@PEAK@Z.c)
 *     ?Insert@PropertyVector@Input@@IEAAJKPEAVPropertyNode@2@@Z @ 0x180032114 (-Insert@PropertyVector@Input@@IEAAJKPEAVPropertyNode@2@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Input::PropertyVector::Deserialize(
        Input::PropertyVector *this,
        unsigned int a2,
        struct IStream *a3,
        unsigned int *a4)
{
  __int64 v6; // rax
  int v9; // eax
  __int64 v10; // rcx
  int v11; // edx
  unsigned int i; // edi
  struct Input::PropertyNode *v13; // r14
  int v14; // eax
  struct Input::PropertyNode *v16; // [rsp+30h] [rbp-10h] BYREF
  unsigned __int16 v17; // [rsp+80h] [rbp+40h] BYREF
  unsigned int v18; // [rsp+98h] [rbp+58h] BYREF

  *a4 = 0;
  v6 = *(_QWORD *)this;
  v18 = 0;
  (*(void (__fastcall **)(Input::PropertyVector *))(v6 + 64))(this);
  v9 = Input::PropertyNode::Deserialize(this, a2, a3, &v18);
  v11 = v9;
  if ( v9 >= 0 )
  {
    v10 = v18;
    *a4 += v18;
  }
  v17 = 0;
  if ( v9 >= 0 )
  {
    v11 = (*(__int64 (__fastcall **)(struct IStream *, unsigned __int16 *, __int64, unsigned int *))(*(_QWORD *)a3 + 24LL))(
            a3,
            &v17,
            2LL,
            &v18);
    if ( v11 >= 0 )
      *a4 += v18;
  }
  for ( i = 0; v11 >= 0 && i < v17; ++i )
  {
    v11 = Input::PropertyNode::CreateFromStream(v10, a3, &v18, &v16);
    if ( v11 >= 0 )
    {
      v13 = v16;
      v14 = (*(__int64 (__fastcall **)(struct Input::PropertyNode *, _QWORD, struct IStream *, unsigned int *))(*(_QWORD *)v16 + 112LL))(
              v16,
              a2,
              a3,
              &v18);
      v11 = v14;
      if ( v14 >= 0 )
      {
        *a4 += v18;
        v11 = Input::PropertyVector::Insert(this, (unsigned int)v14, v13);
      }
    }
  }
  return (unsigned int)v11;
}
