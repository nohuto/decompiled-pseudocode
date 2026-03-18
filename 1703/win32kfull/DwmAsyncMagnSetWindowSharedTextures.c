/*
 * XREFs of DwmAsyncMagnSetWindowSharedTextures @ 0x1C024B758
 * Callers:
 *     zzzComposeDesktop @ 0x1C0016E24 (zzzComposeDesktop.c)
 *     MagSetLensContextInformation @ 0x1C01EC5F4 (MagSetLensContextInformation.c)
 * Callees:
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     memset @ 0x1C0140500 (memset.c)
 */

__int64 __fastcall DwmAsyncMagnSetWindowSharedTextures(PVOID Object, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v8; // ebx
  unsigned int v9; // ecx
  unsigned int v10; // edx
  _QWORD *v11; // r8
  __int64 *v12; // r9
  __int64 v13; // r10
  __int64 v14; // rax
  _BYTE v16[272]; // [rsp+20h] [rbp-E0h] BYREF

  v8 = -1073741823;
  if ( Object )
  {
    memset(&v16[2], 0, 0x10EuLL);
    v9 = *(_DWORD *)a4;
    *(_WORD *)&v16[4] = 0x8000;
    v10 = 6;
    *(_DWORD *)&v16[60] = *(_DWORD *)(a4 + 4);
    if ( v9 < 6 )
      v10 = v9;
    *(_DWORD *)&v16[64] = *(_DWORD *)(a4 + 8);
    *(_DWORD *)&v16[68] = *(_DWORD *)(a4 + 12);
    *(_DWORD *)v16 = 17826024;
    *(_DWORD *)&v16[40] = 1073741923;
    *(_QWORD *)&v16[48] = a2;
    *(_QWORD *)&v16[264] = a3;
    *(_DWORD *)&v16[56] = v9;
    if ( v10 )
    {
      v11 = &v16[80];
      v12 = (__int64 *)(*(_QWORD *)(a4 + 16) + 8LL);
      v13 = v10;
      do
      {
        *(v11 - 1) = v12[1];
        *v11 = *(v12 - 1);
        v11 += 4;
        v14 = *v12;
        v12 += 3;
        *(v11 - 3) = v14;
        --v13;
      }
      while ( v13 );
    }
    EtwUpdateEvent(0LL, 1073741923LL);
    v8 = LpcRequestPort(Object, v16);
    ObfDereferenceObject(Object);
  }
  return v8;
}
