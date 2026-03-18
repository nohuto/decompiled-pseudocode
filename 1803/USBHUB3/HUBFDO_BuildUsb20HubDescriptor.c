/*
 * XREFs of HUBFDO_BuildUsb20HubDescriptor @ 0x1C000B824
 * Callers:
 *     HUBFDO_IoctlGetNodeInformation @ 0x1C0067770 (HUBFDO_IoctlGetNodeInformation.c)
 *     WMI_QueryInstanceHubNodeInfo @ 0x1C0074580 (WMI_QueryInstanceHubNodeInfo.c)
 * Callees:
 *     memset @ 0x1C0039F00 (memset.c)
 */

char __fastcall HUBFDO_BuildUsb20HubDescriptor(__int64 a1, _OWORD *a2)
{
  unsigned int v4; // ecx
  __int64 v5; // rax
  unsigned __int64 v6; // rdx
  unsigned int v7; // ecx
  unsigned int v8; // edx
  unsigned int v9; // ecx
  unsigned __int64 v10; // rdx

  memset(a2, 0, 0x47uLL);
  if ( *(_BYTE *)(a1 + 232) )
  {
    LODWORD(v5) = *(_DWORD *)(a1 + 248);
    if ( (int)v5 > 0 )
    {
      if ( (int)v5 <= 2 )
      {
        *a2 = *(_OWORD *)(a1 + 1172);
        a2[1] = *(_OWORD *)(a1 + 1188);
        a2[2] = *(_OWORD *)(a1 + 1204);
        a2[3] = *(_OWORD *)(a1 + 1220);
        *((_DWORD *)a2 + 16) = *(_DWORD *)(a1 + 1236);
        *((_WORD *)a2 + 34) = *(_WORD *)(a1 + 1240);
        LOBYTE(v5) = *(_BYTE *)(a1 + 1242);
        *((_BYTE *)a2 + 70) = v5;
      }
      else if ( (_DWORD)v5 == 3 )
      {
        *(_WORD *)a2 = 10505;
        v7 = *(unsigned __int8 *)(a1 + 48);
        *((_BYTE *)a2 + 2) = v7;
        v8 = v7;
        v9 = 0;
        *(_WORD *)((char *)a2 + 3) = *(_WORD *)(a1 + 1175) & 0x1F;
        *((_BYTE *)a2 + 5) = *(_BYTE *)(a1 + 1177);
        LOBYTE(v5) = *(_BYTE *)(a1 + 1178);
        *((_BYTE *)a2 + 6) = v5;
        v10 = (v8 >> 3) + 1;
        if ( (_DWORD)v10 )
        {
          v5 = 0LL;
          do
          {
            *((_BYTE *)a2 + v5 + 7) = 0;
            ++v9;
            *((_BYTE *)a2 + v10 + v5 + 7) = -1;
            v5 = v9;
          }
          while ( v9 < v10 );
        }
      }
    }
  }
  else
  {
    *(_WORD *)a2 = 10505;
    v4 = 0;
    LODWORD(v5) = *(unsigned __int8 *)(a1 + 48);
    *((_BYTE *)a2 + 2) = v5;
    *(_DWORD *)((char *)a2 + 3) = 0x20000;
    v6 = ((unsigned int)v5 >> 3) + 1;
    if ( (unsigned int)v5 >> 3 != -1 )
    {
      v5 = 0LL;
      do
      {
        *((_BYTE *)a2 + v5 + 7) = 0;
        ++v4;
        *((_BYTE *)a2 + v6 + v5 + 7) = -1;
        v5 = v4;
      }
      while ( v4 < v6 );
    }
  }
  return v5;
}
