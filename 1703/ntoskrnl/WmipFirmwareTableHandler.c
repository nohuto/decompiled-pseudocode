/*
 * XREFs of WmipFirmwareTableHandler @ 0x140165E80
 * Callers:
 *     <none>
 * Callees:
 *     MmUnmapIoSpace @ 0x1401238F0 (MmUnmapIoSpace.c)
 *     MmMapIoSpaceEx @ 0x1401243A0 (MmMapIoSpaceEx.c)
 *     memmove @ 0x140192A40 (memmove.c)
 */

__int64 __fastcall WmipFirmwareTableHandler(_DWORD *a1)
{
  unsigned int v1; // edi
  __int64 v3; // rdx
  int v4; // eax
  int v5; // r11d
  unsigned int v6; // ecx
  unsigned int v7; // r8d
  unsigned int v8; // r9d
  bool v9; // cf
  unsigned int v11; // esi
  void *v12; // rax
  void *v13; // rbp
  _DWORD *v14; // rbx
  __int64 v15; // rcx
  __int64 v16; // rax

  v1 = 0;
  v3 = 0LL;
  if ( !a1 )
    return 3221225711LL;
  v4 = a1[1];
  if ( !v4 )
  {
    v9 = a1[3] < 8u;
    a1[3] = 8;
    if ( v9 )
      return 3221225507LL;
    v14 = a1 + 4;
    v15 = 2LL;
    do
    {
      v16 = v1;
      v1 += 2;
      *v14++ = WmipFirmwareTableArray[v16];
      --v15;
    }
    while ( v15 );
    return 0LL;
  }
  if ( v4 != 1 )
    return 3221225711LL;
  v5 = a1[2];
  v6 = 2;
  v7 = 0;
  v8 = 0;
  while ( WmipFirmwareTableArray[v7] != v5 )
  {
    ++v8;
    v7 += 2;
    if ( v8 >= 2 )
      goto LABEL_9;
  }
  v3 = WmipFirmwareTableArray[v7 + 1];
  v9 = a1[3] < (unsigned int)v3;
  a1[3] = v3;
  if ( v9 )
    return 3221225507LL;
  v6 = v7;
LABEL_9:
  if ( v8 == 2 )
    return 3221225711LL;
  v11 = v3;
  v12 = (void *)MmMapIoSpaceEx(WmipFirmwareTableArray[v6], v3, 0x204u);
  v13 = v12;
  if ( v12 )
  {
    memmove(a1 + 4, v12, v11);
    MmUnmapIoSpace(v13, v11);
    return 0LL;
  }
  return 3221226021LL;
}
