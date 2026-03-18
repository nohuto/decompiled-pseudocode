/*
 * XREFs of WmipFirmwareTableHandler @ 0x1401842C0
 * Callers:
 *     <none>
 * Callees:
 *     MmMapIoSpaceEx @ 0x14013A010 (MmMapIoSpaceEx.c)
 *     MmUnmapIoSpace @ 0x14013D150 (MmUnmapIoSpace.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 */

__int64 __fastcall WmipFirmwareTableHandler(_DWORD *a1)
{
  unsigned int v1; // edi
  unsigned int v3; // r10d
  int v4; // eax
  int v5; // r11d
  unsigned int v6; // ecx
  unsigned int v7; // edx
  unsigned int v8; // r8d
  unsigned int v9; // eax
  unsigned int v11; // esi
  void *v12; // rax
  void *v13; // rbp
  unsigned int v14; // eax
  _DWORD *v15; // rbx
  __int64 v16; // rcx
  __int64 v17; // rax

  v1 = 0;
  v3 = 0;
  if ( !a1 )
    return 3221225711LL;
  v4 = a1[1];
  if ( !v4 )
  {
    v14 = a1[3];
    a1[3] = 8;
    if ( v14 < 8 )
      return 3221225507LL;
    v15 = a1 + 4;
    v16 = 2LL;
    do
    {
      v17 = v1;
      v1 += 2;
      *v15++ = WmipFirmwareTableArray[v17];
      --v16;
    }
    while ( v16 );
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
  v9 = a1[3];
  a1[3] = v3;
  if ( v9 < v3 )
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
