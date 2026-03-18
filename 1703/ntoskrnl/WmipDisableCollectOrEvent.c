/*
 * XREFs of WmipDisableCollectOrEvent @ 0x140433618
 * Callers:
 *     WmipDeleteMethod @ 0x140433520 (WmipDeleteMethod.c)
 * Callees:
 *     KeReleaseMutex @ 0x1400DDCF0 (KeReleaseMutex.c)
 *     KeWaitForSingleObject @ 0x1400EA280 (KeWaitForSingleObject.c)
 *     WmipDoDisableRequest @ 0x140581C00 (WmipDoDisableRequest.c)
 */

__int64 __fastcall WmipDisableCollectOrEvent(_DWORD *a1, int a2)
{
  unsigned int v2; // ebx
  unsigned int v4; // esi
  int v5; // edx
  char v6; // bp
  __int64 v7; // rdx
  int v8; // eax
  int v9; // eax
  int v11; // eax

  v2 = 0;
  v4 = 4;
  v5 = a2 - 2244924;
  if ( !v5 )
  {
    v6 = 0;
LABEL_4:
    KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
    if ( v6 )
    {
      v8 = a1[22];
      v4 = 2;
      if ( !v8 )
      {
LABEL_8:
        KeReleaseMutex(&WmipSMMutex, 0);
        return v2;
      }
      v9 = v8 - 1;
      a1[22] = v9;
    }
    else
    {
      v9 = --a1[23];
    }
    if ( !v9 )
    {
      v11 = a1[4];
      if ( (v11 & v4) == 0 )
      {
        LOBYTE(v7) = v6;
        a1[4] = v4 | v11;
        v2 = WmipDoDisableRequest(a1, v7, v4);
      }
    }
    goto LABEL_8;
  }
  if ( v5 == 4 )
  {
    v6 = 1;
    goto LABEL_4;
  }
  return 3221225647LL;
}
