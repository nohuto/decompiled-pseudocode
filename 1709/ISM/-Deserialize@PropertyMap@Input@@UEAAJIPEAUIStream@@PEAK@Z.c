/*
 * XREFs of ?Deserialize@PropertyMap@Input@@UEAAJIPEAUIStream@@PEAK@Z @ 0x180031DA0
 * Callers:
 *     <none>
 * Callees:
 *     ?CreateFromStream@PropertyNode@Input@@KAJIPEAUIStream@@PEAKPEAPEAV12@@Z @ 0x180030F88 (-CreateFromStream@PropertyNode@Input@@KAJIPEAUIStream@@PEAKPEAPEAV12@@Z.c)
 *     ?Deserialize@PropertyNode@Input@@UEAAJIPEAUIStream@@PEAK@Z @ 0x180031200 (-Deserialize@PropertyNode@Input@@UEAAJIPEAUIStream@@PEAK@Z.c)
 *     ?Insert@PropertyMap@Input@@IEAAJPEAVPropertyNode@2@@Z @ 0x180031A54 (-Insert@PropertyMap@Input@@IEAAJPEAVPropertyNode@2@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Input::PropertyMap::Deserialize(
        Input::PropertyMap *this,
        unsigned int a2,
        struct IStream *a3,
        unsigned int *a4)
{
  __int64 v6; // rax
  int v9; // eax
  __int64 v10; // rcx
  signed int v11; // edx
  unsigned int i; // edi
  struct Input::PropertyNode *v13; // r14
  struct Input::PropertyNode *v15; // [rsp+30h] [rbp-10h] BYREF
  unsigned __int16 v16; // [rsp+80h] [rbp+40h] BYREF
  unsigned int v17; // [rsp+98h] [rbp+58h] BYREF

  *a4 = 0;
  v6 = *(_QWORD *)this;
  v17 = 0;
  (*(void (__fastcall **)(Input::PropertyMap *))(v6 + 64))(this);
  v9 = Input::PropertyNode::Deserialize(this, a2, a3, &v17);
  v11 = v9;
  if ( v9 >= 0 )
  {
    v10 = v17;
    *a4 += v17;
  }
  v16 = 0;
  if ( v9 >= 0 )
  {
    v11 = (*(__int64 (__fastcall **)(struct IStream *, unsigned __int16 *, __int64, unsigned int *))(*(_QWORD *)a3 + 24LL))(
            a3,
            &v16,
            2LL,
            &v17);
    if ( v11 >= 0 )
      *a4 += v17;
  }
  for ( i = 0; v11 >= 0 && i < v16; ++i )
  {
    v11 = Input::PropertyNode::CreateFromStream(v10, a3, &v17, &v15);
    if ( v11 >= 0 )
    {
      v13 = v15;
      v11 = (*(__int64 (__fastcall **)(struct Input::PropertyNode *, _QWORD, struct IStream *, unsigned int *))(*(_QWORD *)v15 + 112LL))(
              v15,
              a2,
              a3,
              &v17);
      if ( v11 >= 0 )
      {
        *a4 += v17;
        v11 = Input::PropertyMap::Insert(this, v13);
      }
    }
  }
  return (unsigned int)v11;
}
