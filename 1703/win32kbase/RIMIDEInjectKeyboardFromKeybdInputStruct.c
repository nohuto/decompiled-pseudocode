/*
 * XREFs of RIMIDEInjectKeyboardFromKeybdInputStruct @ 0x1C010ABE8
 * Callers:
 *     NtUserInjectKeyboardInput @ 0x1C00E2680 (NtUserInjectKeyboardInput.c)
 * Callees:
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C0054210 (RawInputManagerDeviceObjectResolveHandle.c)
 *     __security_check_cookie @ 0x1C009D0D0 (__security_check_cookie.c)
 *     memset @ 0x1C00A2500 (memset.c)
 *     RIMIDEInjectKeyboardInput @ 0x1C010ADCC (RIMIDEInjectKeyboardInput.c)
 */

_BOOL8 __fastcall RIMIDEInjectKeyboardFromKeybdInputStruct(char *a1, __int64 a2, unsigned int a3)
{
  int v6; // ebx
  unsigned int v7; // r11d
  int *v8; // rdx
  _BYTE *v9; // r9
  int v10; // eax
  unsigned __int64 v11; // r8
  int v12; // r10d
  __int16 v13; // cx
  __int16 v14; // cx
  __int16 v15; // ax
  PVOID Object; // [rsp+20h] [rbp-C8h] BYREF
  _BYTE v18[128]; // [rsp+30h] [rbp-B8h] BYREF

  memset(v18, 0, 0x78uLL);
  Object = 0LL;
  v6 = RawInputManagerDeviceObjectResolveHandle(a1, 3u, 1, &Object);
  if ( v6 >= 0 )
  {
    v7 = 0;
    if ( a3 )
    {
      v8 = (int *)(a2 + 4);
      v9 = &v18[4];
      while ( 1 )
      {
        v10 = *v8;
        if ( (*v8 & 4) != 0 && (*((_WORD *)v8 - 2) || (v10 & 0xFFFFFFF9) != 0) )
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
        *((_WORD *)v9 - 2) = -2;
        v13 = 0;
        if ( (v12 & 4) != 0 )
        {
          v13 = 32;
        }
        else if ( *((_WORD *)v8 - 2) && (v12 & 8) == 0 )
        {
          v13 = 64;
        }
        v14 = (2 * (v12 & 1)) | v13;
        *(_WORD *)v9 = v14 | ((v12 & 2) != 0);
        if ( (((unsigned __int8)v14 | ((v12 & 2) != 0)) & 0x40) != 0 )
          v15 = *((_WORD *)v8 - 2);
        else
          v15 = *((_WORD *)v8 - 1);
        *((_WORD *)v9 - 1) = v15;
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
      v6 = RIMIDEInjectKeyboardInput(a1, v18, a3);
    ObfDereferenceObject(Object);
  }
  return v6 >= 0;
}
