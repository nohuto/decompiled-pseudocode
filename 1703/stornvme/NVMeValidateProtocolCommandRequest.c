/*
 * XREFs of NVMeValidateProtocolCommandRequest @ 0x1C000C688
 * Callers:
 *     ProtocolCommandToNVMe @ 0x1C000CAE0 (ProtocolCommandToNVMe.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NVMeValidateProtocolCommandRequest(__int64 a1, __int64 a2)
{
  unsigned int v2; // r8d
  _DWORD *v3; // r9
  unsigned int *v4; // rax
  unsigned __int64 v5; // rbx
  __int64 v6; // r11
  unsigned __int64 v7; // rax
  __int64 v8; // r10
  unsigned __int64 v9; // rax
  __int64 v10; // rdi
  unsigned __int64 v11; // rax
  int v12; // r11d
  unsigned int v13; // eax
  int v14; // eax

  v2 = 0;
  if ( *(_BYTE *)(a2 + 2) == 40 )
  {
    v3 = *(_DWORD **)(a2 + 64);
    v4 = (unsigned int *)(a2 + 60);
  }
  else
  {
    v3 = *(_DWORD **)(a2 + 24);
    v4 = (unsigned int *)(a2 + 16);
  }
  if ( v3[2] != 3 )
    goto LABEL_47;
  v5 = *v4;
  if ( (unsigned int)v5 < 0x54 )
  {
    if ( (unsigned int)v5 < 0x14 )
    {
LABEL_47:
      v2 = -1056964602;
      *(_BYTE *)(a2 + 3) = 6;
      return v2;
    }
LABEL_46:
    v3[4] = 3;
    goto LABEL_47;
  }
  if ( *v3 != 1 )
    goto LABEL_46;
  if ( v3[1] != 84 )
    goto LABEL_46;
  if ( v3[6] != 64 )
    goto LABEL_46;
  v6 = (unsigned int)v3[7];
  if ( (_DWORD)v6 )
  {
    v7 = (unsigned int)v3[11];
    if ( v7 < 0x90 || (v7 & 7) != 0 || v5 < v7 + v6 )
      goto LABEL_46;
  }
  v8 = (unsigned int)v3[8];
  if ( (_DWORD)v8 )
  {
    v9 = (unsigned int)v3[12];
    if ( v9 < 0x90 || (v9 & 7) != 0 || v5 < v9 + v8 )
      goto LABEL_46;
  }
  v10 = (unsigned int)v3[9];
  if ( (_DWORD)v10 )
  {
    v11 = (unsigned int)v3[13];
    if ( v11 < 0x90 || (v11 & 7) != 0 || v5 < v11 + v10 )
      goto LABEL_46;
  }
  if ( (_DWORD)v8 && (_DWORD)v6 && (unsigned int)v3[12] < v6 + (unsigned __int64)(unsigned int)v3[11]
    || (_DWORD)v10
    && ((_DWORD)v6 && (unsigned int)v3[13] < v6 + (unsigned __int64)(unsigned int)v3[11]
     || (_DWORD)v8 && (unsigned int)v3[13] < v8 + (unsigned __int64)(unsigned int)v3[12]) )
  {
    goto LABEL_46;
  }
  v12 = v3[14];
  if ( (unsigned int)(v12 - 1) > 1 )
    goto LABEL_46;
  if ( v12 == 1 )
  {
    v13 = (unsigned __int8)v3[20];
    if ( v13 < 0xC0 && (v13 != 128 || (*(_DWORD *)(a1 + 20) & 0x80) == 0) )
      goto LABEL_46;
  }
  if ( v12 == 2 && (unsigned __int8)v3[20] < 0x80u )
    goto LABEL_46;
  v14 = v3[20] & 3;
  if ( v14 )
  {
    if ( v14 != 1 )
      goto LABEL_41;
    if ( !(_DWORD)v8 )
      goto LABEL_46;
  }
  else if ( (_DWORD)v8 )
  {
    goto LABEL_46;
  }
  if ( (_DWORD)v10 )
    goto LABEL_46;
LABEL_41:
  if ( v14 == 2 && ((_DWORD)v8 || !(_DWORD)v10) || v12 == 2 && (*(_QWORD *)(a1 + 128) & 0x2000000000LL) == 0 )
    goto LABEL_46;
  return v2;
}
