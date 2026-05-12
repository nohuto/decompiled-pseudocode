/*
 * XREFs of RaValidateProtocolCommandIoctl @ 0x1C003924C
 * Callers:
 *     RaAdapterProtocolCommandIoctl @ 0x1C002B3AC (RaAdapterProtocolCommandIoctl.c)
 *     RaUnitProtocolCommandIoctl @ 0x1C003A714 (RaUnitProtocolCommandIoctl.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RaValidateProtocolCommandIoctl(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  unsigned int v3; // r8d
  _DWORD *v4; // r9
  unsigned __int64 v5; // rbx
  __int64 v6; // r10
  unsigned __int64 v7; // rax
  __int64 v8; // r11
  unsigned __int64 v9; // rax
  __int64 v10; // rbx
  unsigned __int64 v11; // rax
  int v12; // ecx
  unsigned int v13; // eax

  v2 = *(_QWORD *)(a2 + 184);
  v3 = 0;
  v4 = *(_DWORD **)(a2 + 24);
  v5 = *(unsigned int *)(v2 + 16);
  if ( (unsigned int)v5 >= 0x54 )
  {
    if ( *v4 != 1 )
      goto LABEL_36;
    if ( v4[1] != 84 )
      goto LABEL_36;
    if ( v4[2] != 3 )
      goto LABEL_36;
    if ( v4[6] != 64 )
      goto LABEL_36;
    v6 = (unsigned int)v4[7];
    if ( (_DWORD)v6 )
    {
      v7 = (unsigned int)v4[11];
      if ( v7 < 0x90 || (v7 & 7) != 0 || *(unsigned int *)(v2 + 8) < v7 + v6 )
        goto LABEL_36;
    }
    v8 = (unsigned int)v4[8];
    if ( (_DWORD)v8 )
    {
      v9 = (unsigned int)v4[12];
      if ( v9 < 0x90 || (v9 & 7) != 0 || v5 < v9 + v8 )
        goto LABEL_36;
    }
    v10 = (unsigned int)v4[9];
    if ( (_DWORD)v10 )
    {
      v11 = (unsigned int)v4[13];
      if ( v11 < 0x90 || (v11 & 7) != 0 || *(unsigned int *)(v2 + 8) < v11 + v10 )
        goto LABEL_36;
    }
    if ( (_DWORD)v8 && (_DWORD)v6 && (unsigned int)v4[12] < v6 + (unsigned __int64)(unsigned int)v4[11]
      || (_DWORD)v10
      && ((_DWORD)v6 && (unsigned int)v4[13] < v6 + (unsigned __int64)(unsigned int)v4[11]
       || (_DWORD)v8 && (unsigned int)v4[13] < v8 + (unsigned __int64)(unsigned int)v4[12]) )
    {
      goto LABEL_36;
    }
    if ( (v12 = v4[14], (unsigned int)(v12 - 1) > 1)
      || v12 == 1 && (v13 = (unsigned __int8)v4[20], v13 < 0xC0) && (g_InWinPE != 1 || v13 != 128)
      || v12 == 2 && (unsigned __int8)v4[20] < 0x80u )
    {
LABEL_36:
      v3 = -1073741811;
      v4[4] = 3;
    }
  }
  else
  {
    if ( (unsigned int)v5 >= 0x14 )
      v4[4] = 3;
    return (unsigned int)-1073741820;
  }
  return v3;
}
