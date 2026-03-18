/*
 * XREFs of RIMIDEInjectMouseFromMouseInputStruct @ 0x1C010AEE4
 * Callers:
 *     NtUserInjectMouseInput @ 0x1C00E2940 (NtUserInjectMouseInput.c)
 * Callees:
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C0054210 (RawInputManagerDeviceObjectResolveHandle.c)
 *     UserSetLastError @ 0x1C0071864 (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C009D0D0 (__security_check_cookie.c)
 *     memset @ 0x1C00A2500 (memset.c)
 *     RIMIDEBuildButtonFlagsFromRawButtonsAndMouseInputStruct @ 0x1C01090EC (RIMIDEBuildButtonFlagsFromRawButtonsAndMouseInputStruct.c)
 *     RIMIDEBuildRawButtonsFromMouseInputStruct @ 0x1C01091A8 (RIMIDEBuildRawButtonsFromMouseInputStruct.c)
 *     RIMIDEInjectMouseInput @ 0x1C010B128 (RIMIDEInjectMouseInput.c)
 *     RIMIDEValidateMouseInputStruct @ 0x1C010B850 (RIMIDEValidateMouseInputStruct.c)
 */

_BOOL8 __fastcall RIMIDEInjectMouseFromMouseInputStruct(char *a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // rdi
  char *v5; // r14
  __int64 v6; // rdx
  int v7; // esi
  __int64 v8; // r9
  PVOID v9; // rbx
  char *v10; // r13
  unsigned int v11; // ebp
  char *v12; // r14
  _DWORD *v13; // r15
  __int64 v14; // xmm1_8
  int v15; // edi
  int v16; // ebx
  __int16 v17; // cx
  __int16 v18; // dx
  __int16 v19; // cx
  __int64 v20; // rdx
  int v21; // eax
  __int64 v22; // r8
  __int16 v23; // ax
  unsigned __int64 v24; // rcx
  PVOID Object; // [rsp+20h] [rbp-158h] BYREF
  __int64 v27; // [rsp+28h] [rbp-150h]
  char *v28; // [rsp+30h] [rbp-148h]
  __int64 v29; // [rsp+38h] [rbp-140h]
  _OWORD v30[15]; // [rsp+40h] [rbp-138h] BYREF

  v29 = a2;
  v4 = a2;
  v28 = a1;
  v5 = a1;
  memset(v30, 0, sizeof(v30));
  Object = 0LL;
  v7 = RawInputManagerDeviceObjectResolveHandle(v5, 3u, 1, &Object);
  if ( v7 >= 0 )
  {
    v9 = Object;
    v10 = (char *)Object + 64;
    if ( !Object )
      v10 = 0LL;
    if ( (*((_DWORD *)v10 + 46) & 0x100) != 0 )
    {
      UserSetLastError(21LL, v6, 0LL, v8);
      v7 = -2147483631;
    }
    else
    {
      v11 = 0;
      if ( a3 )
      {
        v12 = (char *)v30 + 2;
        v13 = (_DWORD *)(v4 + 12);
        while ( 1 )
        {
          if ( v11 )
          {
            v14 = *((_QWORD *)v30 + 3 * v11 - 1);
            *(_OWORD *)(v10 + 708) = *(_OWORD *)((char *)&v30[-1] + 24 * v11 - 8);
            *(_QWORD *)(v10 + 724) = v14;
          }
          v27 = v4 + 32LL * v11;
          if ( !(unsigned int)RIMIDEValidateMouseInputStruct(v27, v6, 0LL) )
            break;
          v15 = *v13;
          v16 = *((_DWORD *)v10 + 179);
          v17 = (*v13 >> 15) & 1;
          *((_WORD *)v12 - 1) = -2;
          v18 = v17 | 8;
          if ( (v15 & 0x2000) == 0 )
            v18 = v17;
          v19 = v18 | 2;
          if ( (v15 & 0x4000) == 0 )
            v19 = v18;
          v20 = v27;
          *(_WORD *)v12 = v19;
          v21 = RIMIDEBuildRawButtonsFromMouseInputStruct(v16, v20);
          v22 = v27;
          *(_DWORD *)(v12 + 6) = v21;
          *((_WORD *)v12 + 1) = RIMIDEBuildButtonFlagsFromRawButtonsAndMouseInputStruct(v16, v21, v22);
          v23 = 0;
          if ( (v15 & 0x1800) != 0 )
            v23 = *((_WORD *)v13 - 2);
          LODWORD(v24) = v13[1];
          *((_WORD *)v12 + 2) = v23;
          *(_DWORD *)(v12 + 10) = *(v13 - 3);
          *(_DWORD *)(v12 + 14) = *(v13 - 2);
          if ( !(_DWORD)v24 )
            v24 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
          v4 = v29;
          ++v11;
          *(_DWORD *)(v12 + 18) = v24;
          v13 += 8;
          v12 += 24;
          if ( v11 >= a3 )
            goto LABEL_22;
        }
        v7 = -1073741811;
LABEL_22:
        v5 = v28;
        v9 = Object;
      }
      if ( v7 >= 0 )
        v7 = RIMIDEInjectMouseInput(v5, v30, a3);
    }
    ObfDereferenceObject(v9);
  }
  return v7 >= 0;
}
