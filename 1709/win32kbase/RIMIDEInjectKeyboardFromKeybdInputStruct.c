/*
 * XREFs of RIMIDEInjectKeyboardFromKeybdInputStruct @ 0x1C0109C70
 * Callers:
 *     NtUserInjectKeyboardInput @ 0x1C00E9120 (NtUserInjectKeyboardInput.c)
 * Callees:
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C000D6B0 (RawInputManagerDeviceObjectResolveHandle.c)
 *     __security_check_cookie @ 0x1C00A7160 (__security_check_cookie.c)
 *     memset @ 0x1C00ABB80 (memset.c)
 *     RIMIDEInjectKeyboardInput @ 0x1C0109E60 (RIMIDEInjectKeyboardInput.c)
 */

_BOOL8 __fastcall RIMIDEInjectKeyboardFromKeybdInputStruct(char *a1, __int64 a2, unsigned int a3)
{
  int v6; // ebx
  unsigned int v7; // r11d
  int *v8; // rdx
  _BYTE *v9; // r9
  int v10; // eax
  unsigned __int64 v11; // r8
  unsigned int v12; // ecx
  __int16 v13; // r10
  __int16 v14; // ax
  PVOID Object; // [rsp+20h] [rbp-D8h] BYREF
  _BYTE v17[128]; // [rsp+30h] [rbp-C8h] BYREF

  memset(v17, 0, 0x78uLL);
  Object = 0LL;
  v6 = RawInputManagerDeviceObjectResolveHandle(a1, 3u, 1, &Object);
  if ( v6 >= 0 )
  {
    v7 = 0;
    if ( a3 )
    {
      v8 = (int *)(a2 + 4);
      v9 = &v17[4];
      while ( 1 )
      {
        v10 = *v8;
        if ( (*v8 & 4) != 0 && (*((_WORD *)v8 - 2) || (v10 & 0xFFFF7FF9) != 0) )
          break;
        if ( (v10 & 8) == 0 && *((_WORD *)v8 - 2) > 0xFEu )
          break;
        LODWORD(v11) = v8[1];
        if ( (_DWORD)v11 )
        {
          LODWORD(v11) = v8[1];
          if ( (unsigned int)v11 > (unsigned int)((MEMORY[0xFFFFF78000000320]
                                                 * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24) )
            break;
        }
        if ( *(_QWORD *)(v8 + 3) )
          break;
        v12 = *v8;
        v13 = 0;
        *((_WORD *)v9 - 2) = -((*v8 & 0x8000) != 0) - 2;
        if ( (v12 & 4) != 0 )
        {
          v13 = 32;
        }
        else if ( *((_WORD *)v8 - 2) && (v12 & 8) == 0 )
        {
          v13 = 64;
        }
        *(_WORD *)v9 = v13 | (2 * (v12 & 1)) | (v12 >> 1) & 1;
        if ( (((unsigned __int8)v13 | (unsigned __int8)((2 * (v12 & 1)) | ((v12 & 2) != 0))) & 0x40) != 0 )
          v14 = *((_WORD *)v8 - 2);
        else
          v14 = *((_WORD *)v8 - 1);
        *((_WORD *)v9 - 1) = v14;
        *((_WORD *)v9 + 1) = 0;
        if ( !(_DWORD)v11 )
          v11 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
        *((_DWORD *)v9 + 1) = v11;
        ++v7;
        v9 += 12;
        v8 += 6;
        if ( v7 >= a3 )
          goto LABEL_25;
      }
      v6 = -1073741811;
    }
LABEL_25:
    if ( v6 >= 0 )
      v6 = RIMIDEInjectKeyboardInput(a1, v17, a3);
    ObfDereferenceObject(Object);
  }
  return v6 >= 0;
}
