/*
 * XREFs of DwmAsyncMagnSetSlicerDestinationTextures @ 0x1C024CDF8
 * Callers:
 *     MagSlicerControl @ 0x1C01A96C8 (MagSlicerControl.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     memset @ 0x1C0145A00 (memset.c)
 */

__int64 __fastcall DwmAsyncMagnSetSlicerDestinationTextures(PVOID Object, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v8; // edi
  unsigned int v9; // ecx
  unsigned int v10; // eax
  char *v11; // rcx
  char *v12; // r9
  char *v13; // r10
  char *v14; // r11
  __int64 v15; // r8
  __int64 v16; // rbx
  _QWORD v18[34]; // [rsp+20h] [rbp-E0h] BYREF

  v8 = -1073741823;
  if ( Object )
  {
    memset(v18, 0, sizeof(v18));
    v9 = *(_DWORD *)a4;
    WORD2(v18[0]) = 0x8000;
    HIDWORD(v18[7]) = *(_DWORD *)(a4 + 4);
    v18[8] = *(_QWORD *)(a4 + 8);
    v10 = 6;
    LODWORD(v18[0]) = 17826024;
    LODWORD(v18[5]) = 1073741924;
    if ( v9 < 6 )
      v10 = v9;
    v18[6] = a2;
    v18[33] = a3;
    LODWORD(v18[7]) = v9;
    if ( v10 )
    {
      v11 = (char *)&v18[7] - a4;
      v12 = (char *)&v18[8] - a4;
      v13 = (char *)&v18[9] - a4;
      v14 = (char *)&v18[10] - a4;
      v15 = a4 + 16;
      v16 = v10;
      do
      {
        *(_QWORD *)&v11[v15] = *(_QWORD *)(v15 + 16);
        *(_QWORD *)&v12[v15] = *(_QWORD *)v15;
        *(_QWORD *)&v13[v15] = *(_QWORD *)(v15 + 8);
        *(_DWORD *)&v14[v15] = 2 * (*(_DWORD *)(v15 + 24) & 1);
        v15 += 32LL;
        --v16;
      }
      while ( v16 );
    }
    EtwUpdateEvent(0LL, 1073741924LL);
    v8 = LpcRequestPort(Object, v18);
    ObfDereferenceObject(Object);
  }
  return v8;
}
