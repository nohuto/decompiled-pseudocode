/*
 * XREFs of ?GetFloatAnimatableProperty@CShadowEffectMarshaler@DirectComposition@@UEAAJIPEAM@Z @ 0x1C015BE00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CShadowEffectMarshaler::GetFloatAnimatableProperty(
        DirectComposition::CShadowEffectMarshaler *this,
        int a2,
        float *a3)
{
  unsigned int v3; // r9d
  int v4; // edx
  int v5; // edx
  int v6; // edx
  int v7; // eax

  v3 = 0;
  if ( !a2 )
  {
    *a3 = *((float *)this + 22);
    return v3;
  }
  v4 = a2 - 2;
  if ( !v4 )
  {
    v7 = *((_DWORD *)this + 23);
    goto LABEL_11;
  }
  v5 = v4 - 1;
  if ( !v5 )
  {
    v7 = *((_DWORD *)this + 24);
    goto LABEL_11;
  }
  v6 = v5 - 1;
  if ( !v6 )
  {
    v7 = *((_DWORD *)this + 25);
    goto LABEL_11;
  }
  if ( v6 == 1 )
  {
    v7 = *((_DWORD *)this + 26);
LABEL_11:
    *(_DWORD *)a3 = v7;
    return v3;
  }
  return (unsigned int)-1073741811;
}
