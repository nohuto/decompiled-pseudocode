/*
 * XREFs of RaidBusEnumeratorProcessModifiedNodes @ 0x1C00138E4
 * Callers:
 *     RaidAdapterRescanBus @ 0x1C0012EF4 (RaidAdapterRescanBus.c)
 * Callees:
 *     RaidBusEnumeratorProcessNewUnit @ 0x1C0013A10 (RaidBusEnumeratorProcessNewUnit.c)
 *     WPP_SF_qqddds @ 0x1C00309D0 (WPP_SF_qqddds.c)
 */

__int64 __fastcall RaidBusEnumeratorProcessModifiedNodes(__int64 *a1)
{
  __int64 v1; // rbp
  __int64 *v2; // r14
  __int64 *v3; // rsi
  unsigned int v4; // ebx
  PDEVICE_OBJECT v7; // r10
  int v8; // ecx
  int v9; // eax
  const char *v10; // rcx
  __int64 v11; // rcx
  char v12; // al

  v1 = *a1;
  v2 = a1 + 15;
  v3 = (__int64 *)a1[15];
  v4 = 0;
  if ( v3 != a1 + 15 )
  {
    v7 = WPP_GLOBAL_Control;
    do
    {
      if ( v7 != (PDEVICE_OBJECT)&WPP_GLOBAL_Control && (HIDWORD(v7->Timer) & 0x4000) != 0 && BYTE1(v7->Timer) >= 4u )
      {
        v9 = *((_DWORD *)v3 + 18);
        if ( v9 )
        {
          if ( v9 == 1 )
          {
            v10 = "new";
          }
          else
          {
            v10 = "matched";
            if ( v9 != 2 )
              v10 = "invalid";
          }
        }
        else
        {
          v10 = "unmatched";
        }
        WPP_SF_qqddds(
          v7->AttachedDevice,
          *((unsigned __int8 *)v3 - 14),
          *((unsigned __int8 *)v3 - 15),
          v1,
          *(v3 - 1),
          *((_BYTE *)v3 - 15),
          *((_BYTE *)v3 - 14),
          *((_BYTE *)v3 - 13),
          (__int64)v10);
        v7 = WPP_GLOBAL_Control;
      }
      v8 = *((_DWORD *)v3 + 18);
      if ( v8 )
      {
        if ( v8 == 1 )
        {
          RaidBusEnumeratorProcessNewUnit(a1, v3 - 2);
          v7 = WPP_GLOBAL_Control;
          v4 = 1;
        }
      }
      else
      {
        v11 = *(v3 - 1);
        v12 = *(_BYTE *)(v11 + 152);
        if ( (v12 & 4) != 0 )
        {
          *(_BYTE *)(v11 + 152) = v12 & 0xFB;
          v7 = WPP_GLOBAL_Control;
        }
        v4 = (*(unsigned __int8 *)(v11 + 152) >> 1) & 1;
      }
      v3 = (__int64 *)*v3;
    }
    while ( v3 != v2 );
  }
  return v4;
}
