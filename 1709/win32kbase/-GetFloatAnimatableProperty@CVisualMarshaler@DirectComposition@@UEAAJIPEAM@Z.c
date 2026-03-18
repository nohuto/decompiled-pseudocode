/*
 * XREFs of ?GetFloatAnimatableProperty@CVisualMarshaler@DirectComposition@@UEAAJIPEAM@Z @ 0x1C0142740
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CVisualMarshaler::GetFloatAnimatableProperty(
        DirectComposition::CVisualMarshaler *this,
        int a2,
        float *a3)
{
  unsigned int v3; // r9d
  int v4; // edx
  int v5; // edx
  int v6; // eax

  v3 = 0;
  if ( !a2 )
  {
    *a3 = *((float *)this + 14);
    return v3;
  }
  v4 = a2 - 1;
  if ( !v4 )
  {
    v6 = *((_DWORD *)this + 15);
    goto LABEL_9;
  }
  v5 = v4 - 1;
  if ( !v5 )
  {
    v6 = *((_DWORD *)this + 16);
    goto LABEL_9;
  }
  if ( v5 == 21 )
  {
    v6 = *((_DWORD *)this + 24);
LABEL_9:
    *(_DWORD *)a3 = v6;
    return v3;
  }
  return (unsigned int)-1073741811;
}
