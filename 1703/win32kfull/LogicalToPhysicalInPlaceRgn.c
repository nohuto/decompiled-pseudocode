/*
 * XREFs of LogicalToPhysicalInPlaceRgn @ 0x1C00FF554
 * Callers:
 *     ?ValidateParents@@YAHPEAUtagWND@@H@Z @ 0x1C0048C6C (-ValidateParents@@YAHPEAUtagWND@@H@Z.c)
 *     ?zzzBltValidBits@@YAHPEAUtagSMWP@@@Z @ 0x1C00636D0 (-zzzBltValidBits@@YAHPEAUtagSMWP@@@Z.c)
 *     ?InternalInvalidate2@@YAHPEAUtagWND@@PEAUHRGN__@@1PEAUtagRECT@@K@Z @ 0x1C0065A64 (-InternalInvalidate2@@YAHPEAUtagWND@@PEAUHRGN__@@1PEAUtagRECT@@K@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     ?TransformRgn@@YAPEAUHRGN__@@PEAU1@PEAUtagXFORM@@@Z @ 0x1C01BF244 (-TransformRgn@@YAPEAUHRGN__@@PEAU1@PEAUtagXFORM@@@Z.c)
 */

__int64 __fastcall LogicalToPhysicalInPlaceRgn(__int64 a1, HRGN *a2)
{
  unsigned int v2; // ebx
  float *v6; // rax
  float v7; // xmm2_4
  float v8; // xmm5_4
  float v9; // xmm4_4
  HRGN v10; // rax
  float v11[6]; // [rsp+20h] [rbp-28h] BYREF

  v2 = 0;
  if ( (unsigned __int64)*a2 > 2 )
  {
    if ( *(_QWORD *)(a1 + 288) )
    {
      if ( (unsigned int)IsWindowDesktopComposed(a1) )
      {
        v11[1] = 0.0;
        v11[2] = 0.0;
        v6 = *(float **)(a1 + 288);
        v11[0] = *v6;
        v7 = v6[5];
        v11[3] = v7;
        v8 = v6[12];
        v11[4] = v8;
        v9 = v6[13];
        v11[5] = v9;
        if ( v11[0] != 1.0 || v7 != 1.0 || v9 != 0.0 || v8 != 0.0 )
        {
          v10 = TransformRgn(*a2, (struct tagXFORM *)v11);
          if ( v10 )
          {
            v2 = 1;
            *a2 = v10;
          }
        }
      }
    }
  }
  return v2;
}
