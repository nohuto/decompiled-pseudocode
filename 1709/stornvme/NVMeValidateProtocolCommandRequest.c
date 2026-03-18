/*
 * XREFs of NVMeValidateProtocolCommandRequest @ 0x1C000CE28
 * Callers:
 *     ProtocolCommandToNVMe @ 0x1C000D250 (ProtocolCommandToNVMe.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NVMeValidateProtocolCommandRequest(__int64 a1, __int64 a2)
{
  unsigned int v2; // r8d
  _DWORD *v4; // r9
  unsigned int *v5; // rax
  unsigned __int64 v6; // rdi
  __int64 v7; // rbx
  unsigned __int64 v8; // rax
  __int64 v9; // r10
  unsigned __int64 v10; // rax
  __int64 v11; // r11
  unsigned __int64 v12; // rax
  int v13; // ecx
  int v14; // eax

  v2 = 0;
  if ( *(_BYTE *)(a2 + 2) == 40 )
  {
    v4 = *(_DWORD **)(a2 + 64);
    v5 = (unsigned int *)(a2 + 60);
  }
  else
  {
    v4 = *(_DWORD **)(a2 + 24);
    v5 = (unsigned int *)(a2 + 16);
  }
  if ( v4[2] != 3 )
    goto LABEL_45;
  v6 = *v5;
  if ( (unsigned int)v6 < 0x54 )
  {
    if ( (unsigned int)v6 < 0x14 )
    {
LABEL_45:
      v2 = -1056964602;
      *(_BYTE *)(a2 + 3) = 6;
      return v2;
    }
LABEL_44:
    v4[4] = 3;
    goto LABEL_45;
  }
  if ( *v4 != 1 )
    goto LABEL_44;
  if ( v4[1] != 84 )
    goto LABEL_44;
  if ( v4[6] != 64 )
    goto LABEL_44;
  v7 = (unsigned int)v4[7];
  if ( (_DWORD)v7 )
  {
    v8 = (unsigned int)v4[11];
    if ( v8 < 0x90 || (v8 & 7) != 0 || v6 < v8 + v7 )
      goto LABEL_44;
  }
  v9 = (unsigned int)v4[8];
  if ( (_DWORD)v9 )
  {
    v10 = (unsigned int)v4[12];
    if ( v10 < 0x90 || (v10 & 7) != 0 || v6 < v10 + v9 )
      goto LABEL_44;
  }
  v11 = (unsigned int)v4[9];
  if ( (_DWORD)v11 )
  {
    v12 = (unsigned int)v4[13];
    if ( v12 < 0x90 || (v12 & 7) != 0 || v6 < v12 + v11 )
      goto LABEL_44;
  }
  if ( (_DWORD)v9 && (_DWORD)v7 && (unsigned int)v4[12] < v7 + (unsigned __int64)(unsigned int)v4[11]
    || (_DWORD)v11
    && ((_DWORD)v7 && (unsigned int)v4[13] < v7 + (unsigned __int64)(unsigned int)v4[11]
     || (_DWORD)v9 && (unsigned int)v4[13] < v9 + (unsigned __int64)(unsigned int)v4[12]) )
  {
    goto LABEL_44;
  }
  v13 = v4[14];
  if ( (unsigned int)(v13 - 1) > 1 )
    goto LABEL_44;
  v14 = v4[20] & 3;
  if ( v14 )
  {
    if ( v14 != 1 )
    {
      if ( v14 == 2 && ((_DWORD)v9 || !(_DWORD)v11) )
        goto LABEL_44;
      goto LABEL_42;
    }
    if ( !(_DWORD)v9 )
      goto LABEL_44;
  }
  else if ( (_DWORD)v9 )
  {
    goto LABEL_44;
  }
  if ( (_DWORD)v11 )
    goto LABEL_44;
LABEL_42:
  if ( v13 == 2 && (*(_QWORD *)(a1 + 128) & 0x2000000000LL) == 0 )
    goto LABEL_44;
  return v2;
}
