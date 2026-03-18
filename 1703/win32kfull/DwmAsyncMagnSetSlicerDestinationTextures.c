/*
 * XREFs of DwmAsyncMagnSetSlicerDestinationTextures @ 0x1C024B438
 * Callers:
 *     MagSlicerControl @ 0x1C01ED248 (MagSlicerControl.c)
 * Callees:
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     memset @ 0x1C0140500 (memset.c)
 */

__int64 __fastcall DwmAsyncMagnSetSlicerDestinationTextures(PVOID Object, __int64 a2, __int64 a3, unsigned int *a4)
{
  unsigned int v8; // edi
  unsigned int v9; // ecx
  unsigned int v10; // eax
  _BYTE *v11; // rcx
  _BYTE *v12; // r9
  _BYTE *v13; // r10
  _BYTE *v14; // r11
  _DWORD *v15; // r8
  __int64 v16; // rbx
  _BYTE v18[272]; // [rsp+20h] [rbp-E0h] BYREF

  v8 = -1073741823;
  if ( Object )
  {
    memset(&v18[2], 0, 0x10EuLL);
    v9 = *a4;
    *(_WORD *)&v18[4] = 0x8000;
    *(_DWORD *)&v18[60] = a4[1];
    *(_DWORD *)&v18[64] = a4[2];
    *(_DWORD *)&v18[68] = a4[3];
    v10 = 6;
    *(_DWORD *)v18 = 17826024;
    *(_DWORD *)&v18[40] = 1073741923;
    if ( v9 < 6 )
      v10 = v9;
    *(_QWORD *)&v18[48] = a2;
    *(_QWORD *)&v18[264] = a3;
    *(_DWORD *)&v18[56] = v9;
    if ( v10 )
    {
      v11 = (_BYTE *)(&v18[56] - (_BYTE *)a4);
      v12 = (_BYTE *)(&v18[64] - (_BYTE *)a4);
      v13 = (_BYTE *)(&v18[72] - (_BYTE *)a4);
      v14 = (_BYTE *)(&v18[80] - (_BYTE *)a4);
      v15 = a4 + 4;
      v16 = v10;
      do
      {
        *(_QWORD *)((char *)v15 + (_QWORD)v11) = *((_QWORD *)v15 + 2);
        *(_QWORD *)((char *)v15 + (_QWORD)v12) = *(_QWORD *)v15;
        *(_QWORD *)((char *)v15 + (_QWORD)v13) = *((_QWORD *)v15 + 1);
        *(_DWORD *)((char *)v15 + (_QWORD)v14) = 2 * (v15[6] & 1);
        v15 += 8;
        --v16;
      }
      while ( v16 );
    }
    EtwUpdateEvent(0LL, 1073741923LL);
    v8 = LpcRequestPort(Object, v18);
    ObfDereferenceObject(Object);
  }
  return v8;
}
