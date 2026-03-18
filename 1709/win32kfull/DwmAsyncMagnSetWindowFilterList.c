/*
 * XREFs of DwmAsyncMagnSetWindowFilterList @ 0x1C024D01C
 * Callers:
 *     zzzComposeDesktop @ 0x1C0044710 (zzzComposeDesktop.c)
 *     MagSetLensContextInformation @ 0x1C01A89BC (MagSetLensContextInformation.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     memset @ 0x1C0145A00 (memset.c)
 */

__int64 __fastcall DwmAsyncMagnSetWindowFilterList(PVOID Object, __int64 a2, __int64 a3, int *a4)
{
  unsigned int v8; // ebx
  int v9; // ecx
  __int64 v10; // r10
  __int64 v11; // r9
  _QWORD *v12; // r8
  _QWORD v14[34]; // [rsp+20h] [rbp-E0h] BYREF

  v8 = -1073741823;
  if ( Object )
  {
    memset(v14, 0, sizeof(v14));
    v9 = *a4;
    WORD2(v14[0]) = 0x8000;
    HIDWORD(v14[7]) = a4[1];
    LODWORD(v14[0]) = 17826024;
    LODWORD(v14[5]) = 1073741923;
    v10 = (unsigned int)(HIDWORD(v14[7]) + v9);
    v14[6] = a2;
    v14[33] = a3;
    LODWORD(v14[7]) = v9;
    if ( (unsigned int)v10 >= 0x19 )
      v10 = 25LL;
    if ( (_DWORD)v10 )
    {
      v11 = *((_QWORD *)a4 + 1) - (_QWORD)&v14[8];
      v12 = &v14[8];
      do
      {
        *v12 = *(_QWORD *)((char *)v12 + v11);
        ++v12;
        --v10;
      }
      while ( v10 );
    }
    EtwUpdateEvent(0LL, 1073741923LL);
    v8 = LpcRequestPort(Object, v14);
    ObfDereferenceObject(Object);
  }
  return v8;
}
