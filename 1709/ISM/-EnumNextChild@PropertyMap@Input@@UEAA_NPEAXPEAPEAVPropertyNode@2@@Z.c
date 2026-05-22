/*
 * XREFs of ?EnumNextChild@PropertyMap@Input@@UEAA_NPEAXPEAPEAVPropertyNode@2@@Z @ 0x180031F40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall Input::PropertyMap::EnumNextChild(
        Input::PropertyMap *this,
        __int64 *a2,
        struct Input::PropertyNode **a3)
{
  __int64 v3; // rcx
  __int64 **v4; // rax
  __int64 *i; // rcx

  if ( *a2 == *((_QWORD *)this + 4) )
    return 0;
  *a3 = *(struct Input::PropertyNode **)(*a2 + 48);
  v3 = *a2;
  if ( !*(_BYTE *)(*a2 + 25) )
  {
    v4 = *(__int64 ***)(v3 + 16);
    if ( *((_BYTE *)v4 + 25) )
    {
      while ( 1 )
      {
        v3 = *(_QWORD *)(v3 + 8);
        if ( *(_BYTE *)(v3 + 25) || *a2 != *(_QWORD *)(v3 + 16) )
          break;
        *a2 = v3;
      }
      *a2 = v3;
    }
    else
    {
      for ( i = *v4; !*((_BYTE *)i + 25); i = (__int64 *)*i )
        v4 = (__int64 **)i;
      *a2 = (__int64)v4;
    }
  }
  return 1;
}
