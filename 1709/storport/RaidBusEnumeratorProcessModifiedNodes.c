/*
 * XREFs of RaidBusEnumeratorProcessModifiedNodes @ 0x1C00175D0
 * Callers:
 *     RaidAdapterRescanBus @ 0x1C0012868 (RaidAdapterRescanBus.c)
 * Callees:
 *     RaidBusEnumeratorProcessNewUnit @ 0x1C0017438 (RaidBusEnumeratorProcessNewUnit.c)
 *     WPP_SF_qqddds @ 0x1C00310C4 (WPP_SF_qqddds.c)
 */

__int64 __fastcall RaidBusEnumeratorProcessModifiedNodes(__int64 *a1)
{
  __int64 v1; // rbp
  __int64 *v2; // r14
  __int64 *v3; // rsi
  unsigned int v5; // ebx
  int v6; // ecx
  int v8; // eax
  const char *v9; // rcx
  __int64 v10; // rcx
  char v11; // al

  v1 = *a1;
  v2 = a1 + 15;
  v3 = (__int64 *)a1[15];
  v5 = 0;
  while ( v3 != v2 )
  {
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x4000) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
    {
      v8 = *((_DWORD *)v3 + 18);
      if ( v8 )
      {
        if ( v8 == 1 )
        {
          v9 = "new";
        }
        else
        {
          v9 = "matched";
          if ( v8 != 2 )
            v9 = "invalid";
        }
      }
      else
      {
        v9 = "unmatched";
      }
      WPP_SF_qqddds(
        WPP_GLOBAL_Control->AttachedDevice,
        *((unsigned __int8 *)v3 - 14),
        *((unsigned __int8 *)v3 - 15),
        v1,
        *(v3 - 1),
        *((_BYTE *)v3 - 15),
        *((_BYTE *)v3 - 14),
        *((_BYTE *)v3 - 13),
        (__int64)v9);
    }
    v6 = *((_DWORD *)v3 + 18);
    if ( v6 )
    {
      if ( v6 == 1 )
      {
        RaidBusEnumeratorProcessNewUnit((__int64)a1, (__int64)(v3 - 2));
        v5 = 1;
      }
    }
    else
    {
      v10 = *(v3 - 1);
      v11 = *(_BYTE *)(v10 + 152);
      if ( (v11 & 4) != 0 )
        *(_BYTE *)(v10 + 152) = v11 & 0xFB;
      v5 = (*(unsigned __int8 *)(v10 + 152) >> 1) & 1;
    }
    v3 = (__int64 *)*v3;
  }
  return v5;
}
