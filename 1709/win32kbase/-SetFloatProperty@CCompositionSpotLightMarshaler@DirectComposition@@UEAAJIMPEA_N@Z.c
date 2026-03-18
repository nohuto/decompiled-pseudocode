/*
 * XREFs of ?SetFloatProperty@CCompositionSpotLightMarshaler@DirectComposition@@UEAAJIMPEA_N@Z @ 0x1C0001760
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CCompositionSpotLightMarshaler::SetFloatProperty(
        DirectComposition::CCompositionSpotLightMarshaler *this,
        int a2,
        float a3,
        bool *a4)
{
  __int64 result; // rax
  int v5; // edx
  int v6; // edx
  int v7; // edx
  int v8; // edx
  int v9; // edx
  int v10; // edx
  int v11; // edx
  int v12; // edx

  result = 0LL;
  *a4 = 0;
  v5 = a2 - 2;
  if ( !v5 )
  {
    if ( *((float *)this + 18) != a3 )
    {
      *((_DWORD *)this + 4) |= 0x80u;
      *((float *)this + 18) = a3;
      goto LABEL_10;
    }
    return result;
  }
  v6 = v5 - 1;
  if ( !v6 )
  {
    if ( *((float *)this + 19) != a3 )
    {
      *((_DWORD *)this + 4) |= 0x100u;
      *((float *)this + 19) = a3;
      goto LABEL_10;
    }
    return result;
  }
  v7 = v6 - 1;
  if ( !v7 )
  {
    if ( *((float *)this + 20) != a3 )
    {
      *((_DWORD *)this + 4) |= 0x200u;
      *((float *)this + 20) = a3;
      goto LABEL_10;
    }
    return result;
  }
  v8 = v7 - 3;
  if ( !v8 )
  {
    if ( *((float *)this + 30) == a3 )
      return result;
    goto LABEL_13;
  }
  v9 = v8 - 1;
  if ( !v9 )
  {
    if ( *((float *)this + 30) == a3 )
      return result;
    a3 = a3 * 0.017453292;
LABEL_13:
    *((_DWORD *)this + 4) |= 0x1000u;
    *((float *)this + 30) = a3;
    goto LABEL_10;
  }
  v10 = v9 - 2;
  if ( v10 )
  {
    v11 = v10 - 2;
    if ( !v11 )
    {
      if ( *((float *)this + 31) == a3 )
        return result;
      goto LABEL_9;
    }
    v12 = v11 - 1;
    if ( v12 )
    {
      if ( v12 != 2 )
        return 3221225485LL;
      if ( *((float *)this + 41) != a3 )
      {
        *((_DWORD *)this + 4) |= 0x40000u;
        *((float *)this + 41) = a3;
        goto LABEL_10;
      }
    }
    else if ( *((float *)this + 31) != a3 )
    {
      a3 = a3 * 0.017453292;
LABEL_9:
      *((_DWORD *)this + 4) |= 0x10000u;
      *((float *)this + 31) = a3;
LABEL_10:
      *a4 = 1;
    }
  }
  else if ( *((float *)this + 40) != a3 )
  {
    *((_DWORD *)this + 4) |= 0x4000u;
    *((float *)this + 40) = a3;
    goto LABEL_10;
  }
  return result;
}
