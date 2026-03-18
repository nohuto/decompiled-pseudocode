/*
 * XREFs of ?GetCurrentRealization@CFlipExBuffer@@UEBAJPEAPEAVCBufferRealization@@@Z @ 0x1C00396C0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetRealizationAt@CCompositionBuffer@@IEBAPEAVCBufferRealization@@I@Z @ 0x1C003A320 (-GetRealizationAt@CCompositionBuffer@@IEBAPEAVCBufferRealization@@I@Z.c)
 */

__int64 __fastcall CFlipExBuffer::GetCurrentRealization(CFlipExBuffer *this, struct CBufferRealization **a2)
{
  unsigned int v3; // edx
  struct CBufferRealization *RealizationAt; // rax
  unsigned int v5; // r10d
  struct CBufferRealization **v6; // r11

  v3 = *((_DWORD *)this + 86);
  if ( v3 >= *((_DWORD *)this + 60) )
  {
    *a2 = 0LL;
    return (unsigned int)-1073741275;
  }
  else
  {
    RealizationAt = CCompositionBuffer::GetRealizationAt(this, v3);
    *v6 = RealizationAt;
  }
  return v5;
}
