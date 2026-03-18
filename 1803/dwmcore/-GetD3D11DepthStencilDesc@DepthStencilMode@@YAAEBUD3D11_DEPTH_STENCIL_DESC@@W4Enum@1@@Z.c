/*
 * XREFs of ?GetD3D11DepthStencilDesc@DepthStencilMode@@YAAEBUD3D11_DEPTH_STENCIL_DESC@@W4Enum@1@@Z @ 0x1800C8BA0
 * Callers:
 *     ?GenerateShaders@CD3DDeviceLevel1@@AEAAJXZ @ 0x180075ADC (-GenerateShaders@CD3DDeviceLevel1@@AEAAJXZ.c)
 * Callees:
 *     _Init_thread_footer @ 0x1800DB248 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x1800DB2A8 (_Init_thread_header.c)
 */

char *__fastcall DepthStencilMode::GetD3D11DepthStencilDesc(int a1)
{
  __int64 v1; // rbx

  v1 = a1;
  if ( dword_1802D6BDC > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                   + 4LL) )
  {
    Init_thread_header(&dword_1802D6BDC);
    if ( dword_1802D6BDC == -1 )
    {
      qword_1802D48CC = 8LL;
      dword_1802D48C4 = 1;
      dword_1802D48C8 = 1;
      xmmword_1802D48A4 = xmmword_1802A3890;
      word_1802D48D4 = 0;
      xmmword_1802D48B4 = xmmword_1802A3890;
      qword_1802D48F8 = 1LL;
      xmmword_1802D48D8 = xmmword_1802A3890;
      qword_1802D4900 = 7LL;
      xmmword_1802D48E8 = xmmword_1802A3890;
      word_1802D4908 = 0;
      xmmword_1802D490C = xmmword_1802A3890;
      dword_1802D492C = 1;
      xmmword_1802D491C = xmmword_1802A3890;
      dword_1802D4930 = 1;
      xmmword_1802D4940 = xmmword_1802A3890;
      qword_1802D4934 = 7LL;
      xmmword_1802D4950 = xmmword_1802A3890;
      word_1802D493C = 0;
      Init_thread_footer(&dword_1802D6BDC);
    }
  }
  return (char *)&unk_1802D4890 + 52 * v1;
}
