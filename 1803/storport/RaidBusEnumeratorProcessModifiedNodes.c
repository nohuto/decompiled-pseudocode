/*
 * XREFs of RaidBusEnumeratorProcessModifiedNodes @ 0x1C0012F38
 * Callers:
 *     RaidAdapterRescanBus @ 0x1C0012B98 (RaidAdapterRescanBus.c)
 * Callees:
 *     RaidBusEnumeratorProcessNewUnit @ 0x1C0017620 (RaidBusEnumeratorProcessNewUnit.c)
 *     WPP_SF_qqddds @ 0x1C002C794 (WPP_SF_qqddds.c)
 */

__int64 __fastcall RaidBusEnumeratorProcessModifiedNodes(__int64 *a1)
{
  __int64 v1; // rbp
  __int64 *v2; // r14
  __int64 *v3; // rsi
  unsigned int v5; // ebx
  int v7; // ecx
  __int64 v8; // rcx
  unsigned __int8 v9; // al
  int v10; // eax
  const char *v11; // rcx

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
      v10 = *((_DWORD *)v3 + 18);
      if ( v10 )
      {
        if ( v10 == 1 )
        {
          v11 = "new";
        }
        else
        {
          v11 = "matched";
          if ( v10 != 2 )
            v11 = "invalid";
        }
      }
      else
      {
        v11 = "unmatched";
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
        (__int64)v11);
    }
    v7 = *((_DWORD *)v3 + 18);
    if ( v7 )
    {
      if ( v7 == 1 )
      {
        RaidBusEnumeratorProcessNewUnit(a1, v3 - 2);
        v5 = 1;
      }
    }
    else
    {
      v8 = *(v3 - 1);
      v9 = *(_BYTE *)(v8 + 152);
      if ( (v9 & 4) != 0 )
      {
        v9 &= ~4u;
        *(_BYTE *)(v8 + 152) = v9;
      }
      v5 = (v9 >> 1) & 1;
    }
    v3 = (__int64 *)*v3;
  }
  return v5;
}
