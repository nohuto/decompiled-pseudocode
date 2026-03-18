/*
 * XREFs of ?IsOpaque@CHwLinearGradientColorSource@@UEBA_NXZ @ 0x1801F7440
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall CHwLinearGradientColorSource::IsOpaque(CHwLinearGradientColorSource *this)
{
  __int64 v1; // rax
  char v2; // cl
  int v3; // edx
  float *i; // rax

  v1 = *((_QWORD *)this + 28);
  v2 = 1;
  v3 = *(_DWORD *)(v1 + 176);
  if ( v3 )
  {
    for ( i = (float *)(*(_QWORD *)(v1 + 152) + 12LL); *i >= 1.0; i += 4 )
    {
      if ( !--v3 )
        return v2;
    }
    return 0;
  }
  return v2;
}
