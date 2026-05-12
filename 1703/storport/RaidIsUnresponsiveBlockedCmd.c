/*
 * XREFs of RaidIsUnresponsiveBlockedCmd @ 0x1C0031924
 * Callers:
 *     RaidStartIoPacket @ 0x1C00073D0 (RaidStartIoPacket.c)
 *     RaUnitStartIo @ 0x1C0007D00 (RaUnitStartIo.c)
 *     RaidUnitCompleteRequest @ 0x1C0008A50 (RaidUnitCompleteRequest.c)
 * Callees:
 *     <none>
 */

char __fastcall RaidIsUnresponsiveBlockedCmd(__int64 a1)
{
  unsigned __int8 v2; // cl
  int v3; // eax
  _BYTE *v4; // r9
  char v5; // bl
  unsigned int v6; // edi
  __int64 v7; // r10
  __int64 v8; // rcx
  unsigned __int64 v9; // r11
  __int64 v10; // r8
  int v11; // ecx
  int v12; // ecx
  _BYTE *v13; // rcx
  unsigned __int64 v14; // rcx

  v2 = *(_BYTE *)(a1 + 2);
  if ( v2 == 40 )
    v3 = *(_DWORD *)(a1 + 20);
  else
    v3 = v2;
  if ( v3 == 19 || v3 == 32 )
    return 0;
  if ( v3 )
    return 1;
  if ( v2 != 40 )
  {
    v4 = (_BYTE *)(a1 + 72);
    return !v4 || *v4 != 18 && *v4 != 0xA0;
  }
  v4 = 0LL;
  v5 = 0;
  if ( !*(_DWORD *)(a1 + 20) )
  {
    v6 = *(_DWORD *)(a1 + 56);
    v7 = 0LL;
    if ( v6 )
    {
      while ( 1 )
      {
        v8 = *(unsigned int *)(a1 + 4 * v7 + 120);
        if ( (unsigned int)v8 >= 0x80 )
        {
          v9 = *(unsigned int *)(a1 + 16);
          if ( (unsigned int)v8 < (unsigned int)v9 )
            break;
        }
LABEL_25:
        v7 = (unsigned int)(v7 + 1);
        if ( (unsigned int)v7 >= v6 )
          return !v4 || *v4 != 18 && *v4 != 0xA0;
      }
      v10 = (unsigned int)v8;
      v11 = *(_DWORD *)(v8 + a1) - 64;
      if ( v11 )
      {
        v12 = v11 - 1;
        if ( v12 )
        {
          if ( v12 == 1 && v10 + 40 <= v9 )
          {
            v13 = (_BYTE *)(v10 + a1 + 32);
            if ( !*(_DWORD *)(v10 + a1 + 12) )
              v13 = v4;
            v4 = v13;
            return !v4 || *v4 != 18 && *v4 != 0xA0;
          }
          goto LABEL_24;
        }
        v14 = v10 + 56;
      }
      else
      {
        v14 = v10 + 40;
      }
      if ( v14 <= v9 )
      {
        v5 = 1;
        if ( !*(_BYTE *)(v10 + a1 + 10) )
          return !v4 || *v4 != 18 && *v4 != 0xA0;
        v4 = (_BYTE *)(v10 + a1 + 24);
      }
LABEL_24:
      if ( v5 )
        return !v4 || *v4 != 18 && *v4 != 0xA0;
      goto LABEL_25;
    }
  }
  return !v4 || *v4 != 18 && *v4 != 0xA0;
}
