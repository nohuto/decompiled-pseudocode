/*
 * XREFs of ?SetIndependentFlip@CFlipExBuffer@@UEAAJ_N0IIIPEAH@Z @ 0x1C0151CB0
 * Callers:
 *     <none>
 * Callees:
 *     ?DisableDxgkrnlIndependentFlipMode@CFlipExBuffer@@IEAAJPEAH@Z @ 0x1C01519D4 (-DisableDxgkrnlIndependentFlipMode@CFlipExBuffer@@IEAAJPEAH@Z.c)
 *     ?EnableDxgkrnlIndependentFlipMode@CFlipExBuffer@@IEAAJIIIPEAH@Z @ 0x1C0151A8C (-EnableDxgkrnlIndependentFlipMode@CFlipExBuffer@@IEAAJIIIPEAH@Z.c)
 *     ?UpdateDxgkrnlIndependentFlipDuration@CFlipExBuffer@@IEAAJIIIPEAH@Z @ 0x1C0151E68 (-UpdateDxgkrnlIndependentFlipDuration@CFlipExBuffer@@IEAAJIIIPEAH@Z.c)
 */

__int64 __fastcall CFlipExBuffer::SetIndependentFlip(
        CFlipExBuffer *this,
        char a2,
        char a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6,
        int *a7)
{
  __int64 result; // rax
  int v10; // ecx

  result = 0LL;
  *a7 = 0;
  if ( a2 )
  {
    v10 = *((_DWORD *)this + 87);
    if ( v10 )
    {
      if ( *((_DWORD *)this + 124) == a5 )
        goto LABEL_12;
      if ( v10 >= 1 && *((_BYTE *)this + 40) )
      {
        result = CFlipExBuffer::UpdateDxgkrnlIndependentFlipDuration(this, a4, a5, a6, a7);
        goto LABEL_12;
      }
    }
    else if ( *((_BYTE *)this + 40) )
    {
      result = CFlipExBuffer::EnableDxgkrnlIndependentFlipMode(this, a4, a5, a6, a7);
LABEL_12:
      *((_BYTE *)this + 501) = a3;
      return result;
    }
    result = 3221225473LL;
    goto LABEL_12;
  }
  if ( *((_DWORD *)this + 87) )
    return CFlipExBuffer::DisableDxgkrnlIndependentFlipMode(this, a7);
  return result;
}
