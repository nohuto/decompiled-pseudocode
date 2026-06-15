/*
 * XREFs of ?AeServerApiCreateDynamicPortName@HandleSendReceiveServer@@AEAAJPEAGKHPEAK@Z @ 0x140030574
 * Callers:
 *     ?AeServerApiCreatePort@HandleSendReceiveServer@@AEAAJPEAPEAG@Z @ 0x140018160 (-AeServerApiCreatePort@HandleSendReceiveServer@@AEAAJPEAPEAG@Z.c)
 * Callees:
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x140018BF0 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 */

__int64 __fastcall HandleSendReceiveServer::AeServerApiCreateDynamicPortName(
        HandleSendReceiveServer *this,
        unsigned __int16 *a2,
        ULONG a3,
        int a4,
        unsigned int *a5)
{
  unsigned int *v5; // rbx
  ULONG v7; // eax
  ULONG Seed; // [rsp+50h] [rbp+18h] BYREF

  Seed = a3;
  v5 = a5;
  if ( a5 )
  {
    if ( !a4 )
    {
      Seed = MEMORY[0x7FFE0320];
      do
        v7 = RtlRandomEx(&Seed);
      while ( !v7 );
      *v5 = v7;
      return StringCchPrintfW(a2, 64LL, L"%ws%ws%ld", L"\\BaseNamedObjects\\", L"AudioEngineDuplicateHandleApiPort", v7);
    }
    if ( *a5 )
    {
      v7 = a4 + *a5;
      return StringCchPrintfW(a2, 64LL, L"%ws%ws%ld", L"\\BaseNamedObjects\\", L"AudioEngineDuplicateHandleApiPort", v7);
    }
  }
  return 2147942487LL;
}
