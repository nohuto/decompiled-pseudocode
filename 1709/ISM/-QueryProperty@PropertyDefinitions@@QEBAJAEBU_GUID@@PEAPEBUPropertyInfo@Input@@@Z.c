/*
 * XREFs of ?QueryProperty@PropertyDefinitions@@QEBAJAEBU_GUID@@PEAPEBUPropertyInfo@Input@@@Z @ 0x180033A38
 * Callers:
 *     ?GetDefinition@PropertyNode@Input@@AEAAJXZ @ 0x180030F18 (-GetDefinition@PropertyNode@Input@@AEAAJXZ.c)
 *     ?CreateFromStream@PropertyNode@Input@@KAJIPEAUIStream@@PEAKPEAPEAV12@@Z @ 0x180030F88 (-CreateFromStream@PropertyNode@Input@@KAJIPEAUIStream@@PEAKPEAPEAV12@@Z.c)
 *     ?Deserialize@PropertyNode@Input@@UEAAJIPEAUIStream@@PEAK@Z @ 0x180031200 (-Deserialize@PropertyNode@Input@@UEAAJIPEAUIStream@@PEAK@Z.c)
 *     ?DefineProperty@PropertyDefinitions@@QEAAJAEBU_GUID@@PEBG0K@Z @ 0x180033864 (-DefineProperty@PropertyDefinitions@@QEAAJAEBU_GUID@@PEBG0K@Z.c)
 * Callees:
 *     memcmp_0 @ 0x1800CC371 (memcmp_0.c)
 */

__int64 __fastcall PropertyDefinitions::QueryProperty(
        PropertyDefinitions *this,
        const struct _GUID *a2,
        const struct Input::PropertyInfo **a3)
{
  __int64 *v5; // rdi
  unsigned int v6; // ebp
  __int64 *v7; // rbx
  __int64 *v8; // rsi

  if ( a3 )
    *a3 = 0LL;
  v5 = (__int64 *)*((_QWORD *)this + 2);
  v6 = -2089336823;
  v7 = v5;
  v8 = (__int64 *)v5[1];
  while ( !*((_BYTE *)v8 + 25) )
  {
    if ( memcmp_0(v8 + 4, a2, 0x10uLL) >= 0 )
    {
      v7 = v8;
      v8 = (__int64 *)*v8;
    }
    else
    {
      v8 = (__int64 *)v8[2];
    }
  }
  if ( v7 == v5 || memcmp_0(a2, v7 + 4, 0x10uLL) < 0 )
    v7 = v5;
  if ( v7 != v5 )
  {
    if ( a3 )
      *a3 = (const struct Input::PropertyInfo *)(v7 + 6);
    return 0;
  }
  return v6;
}
