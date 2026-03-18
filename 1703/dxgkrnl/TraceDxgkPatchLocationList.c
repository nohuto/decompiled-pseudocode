/*
 * XREFs of TraceDxgkPatchLocationList @ 0x1C0035F1C
 * Callers:
 *     ?SubmitPresentWithDmaBuffer@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAVDXGALLOCATION@@1PEAU_DXGKARG_PRESENT@@PEAU_VIDMM_DMA_BUFFER@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00B24D0 (-SubmitPresentWithDmaBuffer@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAVDXGALLOCATION@@1PEAU_DXGKA.c)
 *     ?Render@DXGCONTEXT@@QEAAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@PEAPEAVDXGALLOCATION@@@Z @ 0x1C00BCAF0 (-Render@DXGCONTEXT@@QEAAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSH.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     Template_ppqQR2QR2QR2QR2QR2QR2QR2 @ 0x1C0035D80 (Template_ppqQR2QR2QR2QR2QR2QR2QR2.c)
 */

unsigned int __fastcall TraceDxgkPatchLocationList(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  unsigned int v10; // ebx
  __int64 v11; // r8
  unsigned int result; // eax
  unsigned int v13; // r10d
  unsigned __int64 v14; // r9
  __int64 v15; // rax
  __int64 v16; // [rsp+28h] [rbp-D8h]
  _BYTE v18[256]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v19[256]; // [rsp+170h] [rbp+70h] BYREF
  _BYTE v20[256]; // [rsp+270h] [rbp+170h] BYREF
  _BYTE v21[256]; // [rsp+370h] [rbp+270h] BYREF
  _DWORD v22[64]; // [rsp+470h] [rbp+370h] BYREF
  _BYTE v23[256]; // [rsp+570h] [rbp+470h] BYREF
  _DWORD v24[64]; // [rsp+670h] [rbp+570h] BYREF

  memset(v22, 0, sizeof(v22));
  v10 = 0;
  do
  {
    v11 = 64LL;
    result = a3 - v10;
    if ( a3 - v10 < 0x40 )
      v11 = result;
    v13 = 0;
    if ( (_DWORD)v11 )
    {
      v14 = 0LL;
      do
      {
        v15 = v13 + v10;
        ++v13;
        v8 = 3 * v15;
        v24[v14 / 4] = *(_DWORD *)(a4 + 24 * v15);
        v14 += 4LL;
        v22[v14 / 4 + 63] = *(_DWORD *)(a4 + 24 * v15 + 4) & 0xFFFFFF;
        *(_DWORD *)&v20[v14 + 252] = *(_DWORD *)(a4 + 24 * v15 + 8);
        *(_DWORD *)&v19[v14 + 252] = *(_DWORD *)(a4 + 24 * v15 + 12);
        *(_DWORD *)&v18[v14 + 252] = *(_DWORD *)(a4 + 24 * v15 + 16);
        result = *(_DWORD *)(a4 + 24 * v15 + 20);
        *(_DWORD *)&v18[v14 - 4] = result;
      }
      while ( v13 < (unsigned int)v11 );
    }
    v10 += v11;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x800) != 0 )
    {
      LODWORD(v16) = v11;
      result = Template_ppqQR2QR2QR2QR2QR2QR2QR2(v9, v8, v11, a1, a2, v16, v24, v23, v22, v21, v20, v19, v18);
    }
  }
  while ( v10 < a3 );
  return result;
}
