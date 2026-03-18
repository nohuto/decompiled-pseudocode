/*
 * XREFs of RIMIDEInjectMouseFromMouseInputStruct @ 0x1C0109FB4
 * Callers:
 *     NtUserInjectMouseInput @ 0x1C00E92C0 (NtUserInjectMouseInput.c)
 * Callees:
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C000D6B0 (RawInputManagerDeviceObjectResolveHandle.c)
 *     UserSetLastError @ 0x1C005D6F8 (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C00A7160 (__security_check_cookie.c)
 *     memset @ 0x1C00ABB80 (memset.c)
 *     RIMIDEBuildButtonFlagsFromRawButtonsAndMouseInputStruct @ 0x1C0108114 (RIMIDEBuildButtonFlagsFromRawButtonsAndMouseInputStruct.c)
 *     RIMIDEBuildRawButtonsFromMouseInputStruct @ 0x1C01081D0 (RIMIDEBuildRawButtonsFromMouseInputStruct.c)
 *     RIMIDEInjectMouseInput @ 0x1C010A1F8 (RIMIDEInjectMouseInput.c)
 *     RIMIDEValidateMouseInputStruct @ 0x1C010A788 (RIMIDEValidateMouseInputStruct.c)
 */

_BOOL8 __fastcall RIMIDEInjectMouseFromMouseInputStruct(char *a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // rdi
  char *v5; // r14
  __int64 v6; // rdx
  int v7; // esi
  PVOID v8; // rbx
  char *v9; // r13
  unsigned int v10; // ebp
  char *v11; // r14
  _DWORD *v12; // r15
  __int64 v13; // xmm1_8
  int v14; // edi
  int v15; // ebx
  __int16 v16; // cx
  __int16 v17; // dx
  __int16 v18; // cx
  __int64 v19; // rdx
  int v20; // eax
  __int64 v21; // r8
  __int16 v22; // ax
  unsigned __int64 v23; // rcx
  PVOID Object; // [rsp+20h] [rbp-158h] BYREF
  __int64 v26; // [rsp+28h] [rbp-150h]
  char *v27; // [rsp+30h] [rbp-148h]
  __int64 v28; // [rsp+38h] [rbp-140h]
  _OWORD v29[15]; // [rsp+40h] [rbp-138h] BYREF

  v28 = a2;
  v4 = a2;
  v27 = a1;
  v5 = a1;
  memset(v29, 0, sizeof(v29));
  Object = 0LL;
  v7 = RawInputManagerDeviceObjectResolveHandle(v5, 3u, 1, &Object);
  if ( v7 >= 0 )
  {
    v8 = Object;
    v9 = (char *)Object + 64;
    if ( !Object )
      v9 = 0LL;
    if ( (*((_DWORD *)v9 + 46) & 0x100) != 0 )
    {
      UserSetLastError(21);
      v7 = -2147483631;
    }
    else
    {
      v10 = 0;
      if ( a3 )
      {
        v11 = (char *)v29 + 2;
        v12 = (_DWORD *)(v4 + 12);
        while ( 1 )
        {
          if ( v10 )
          {
            v13 = *((_QWORD *)v29 + 3 * v10 - 1);
            *(_OWORD *)(v9 + 708) = *(_OWORD *)((char *)&v29[-1] + 24 * v10 - 8);
            *(_QWORD *)(v9 + 724) = v13;
          }
          v26 = v4 + 32LL * v10;
          if ( !(unsigned int)RIMIDEValidateMouseInputStruct(v26, v6, 0LL) )
            break;
          v14 = *v12;
          v15 = *((_DWORD *)v9 + 179);
          v16 = (*v12 >> 15) & 1;
          *((_WORD *)v11 - 1) = -2;
          v17 = v16 | 8;
          if ( (v14 & 0x2000) == 0 )
            v17 = v16;
          v18 = v17 | 2;
          if ( (v14 & 0x4000) == 0 )
            v18 = v17;
          v19 = v26;
          *(_WORD *)v11 = v18;
          v20 = RIMIDEBuildRawButtonsFromMouseInputStruct(v15, v19);
          v21 = v26;
          *(_DWORD *)(v11 + 6) = v20;
          *((_WORD *)v11 + 1) = RIMIDEBuildButtonFlagsFromRawButtonsAndMouseInputStruct(v15, v20, v21);
          v22 = 0;
          if ( (v14 & 0x1800) != 0 )
            v22 = *((_WORD *)v12 - 2);
          LODWORD(v23) = v12[1];
          *((_WORD *)v11 + 2) = v22;
          *(_DWORD *)(v11 + 10) = *(v12 - 3);
          *(_DWORD *)(v11 + 14) = *(v12 - 2);
          if ( !(_DWORD)v23 )
            v23 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
          v4 = v28;
          ++v10;
          *(_DWORD *)(v11 + 18) = v23;
          v12 += 8;
          v11 += 24;
          if ( v10 >= a3 )
            goto LABEL_22;
        }
        v7 = -1073741811;
LABEL_22:
        v5 = v27;
        v8 = Object;
      }
      if ( v7 >= 0 )
        v7 = RIMIDEInjectMouseInput(v5, v29, a3);
    }
    ObfDereferenceObject(v8);
  }
  return v7 >= 0;
}
