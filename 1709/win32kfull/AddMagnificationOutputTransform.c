/*
 * XREFs of AddMagnificationOutputTransform @ 0x1C00FD3A0
 * Callers:
 *     <none>
 * Callees:
 *     PtInRect @ 0x1C005E678 (PtInRect.c)
 *     MagInputTransform @ 0x1C00FD404 (MagInputTransform.c)
 *     AcquireMagInputLock @ 0x1C00FD424 (AcquireMagInputLock.c)
 *     memcmp @ 0x1C0143590 (memcmp.c)
 *     MagnificationInverseTransformPoint @ 0x1C01DFD28 (MagnificationInverseTransformPoint.c)
 */

int __fastcall AddMagnificationOutputTransform(unsigned __int64 *a1, __int64 a2)
{
  _DWORD *v4; // rcx
  int result; // eax
  __int64 v6; // rbx
  __int64 v7; // rcx
  float v8; // xmm2_4
  float v9; // xmm0_4
  float v10; // xmm1_4
  float v11; // xmm0_4
  float v12; // xmm1_4

  AcquireMagInputLock();
  v4 = (_DWORD *)MagInputTransform();
  if ( v4 && PtInRect(v4, *a1) )
    MagnificationInverseTransformPoint(v7, a1);
  _InterlockedExchange64(&gpMagInputLock, 0LL);
  result = grpdeskRitInput;
  v6 = *(_QWORD *)(grpdeskRitInput + 224LL);
  if ( v6 )
  {
    result = *(_DWORD *)(v6 + 16);
    if ( (result & 2) != 0 )
    {
      result = memcmp((const void *)(v6 + 88), &gMagOutTransformIdentity, 0x20uLL);
      if ( result )
      {
        v8 = *(double *)(v6 + 88);
        v9 = *(double *)(v6 + 104);
        v10 = *(double *)(v6 + 112);
        if ( v8 != 1.0 || v9 != 0.0 || v10 != 0.0 )
        {
          v11 = v9 + *(float *)(a2 + 48);
          v12 = v10 + *(float *)(a2 + 52);
          *(float *)(a2 + 48) = v11;
          *(float *)(a2 + 52) = v12;
          if ( v8 != 1.0 )
          {
            result = 1065353216;
            *(_DWORD *)(a2 + 40) = 1065353216;
            *(_DWORD *)(a2 + 60) = 1065353216;
            *(float *)(a2 + 48) = v11 * v8;
            *(float *)a2 = v8;
            *(float *)(a2 + 52) = v12 * v8;
            *(float *)(a2 + 20) = v8;
          }
        }
      }
    }
  }
  return result;
}
