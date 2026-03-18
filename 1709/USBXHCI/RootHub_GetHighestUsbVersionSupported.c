/*
 * XREFs of RootHub_GetHighestUsbVersionSupported @ 0x1C00200C0
 * Callers:
 *     Controller_SetDeviceDescription @ 0x1C0058B30 (Controller_SetDeviceDescription.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RootHub_GetHighestUsbVersionSupported(__int64 a1)
{
  unsigned __int8 v1; // r8
  unsigned int v2; // r10d
  unsigned int v3; // edx
  unsigned __int8 v4; // r9
  __int64 v5; // r11
  unsigned __int64 v6; // rcx
  unsigned __int8 v7; // al
  unsigned __int8 v8; // cl
  unsigned __int8 v9; // al
  unsigned __int16 v11; // [rsp+8h] [rbp+8h]

  v11 = 0;
  v1 = 0;
  v2 = *(_DWORD *)(a1 + 16);
  v3 = 1;
  v4 = 0;
  if ( v2 )
  {
    v5 = *(_QWORD *)(a1 + 48);
    do
    {
      v6 = (unsigned __int64)(v3 - 1) << 6;
      v7 = *(_BYTE *)(v6 + v5 + 1);
      if ( v7 > v1 )
      {
        v8 = *(_BYTE *)(v6 + v5);
        v1 = v7;
        v9 = v4;
        if ( v8 > v4 )
          v9 = v8;
        v4 = v9;
      }
      ++v3;
    }
    while ( v3 <= v2 );
    LOBYTE(v11) = v1;
    HIBYTE(v11) = v4;
  }
  return v11;
}
