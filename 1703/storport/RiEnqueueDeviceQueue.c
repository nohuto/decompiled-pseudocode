/*
 * XREFs of RiEnqueueDeviceQueue @ 0x1C000A058
 * Callers:
 *     RaidInsertDeviceQueue @ 0x1C0007A90 (RaidInsertDeviceQueue.c)
 * Callees:
 *     RaidGetQosEntryForDeviceEntry @ 0x1C00312D8 (RaidGetQosEntryForDeviceEntry.c)
 */

__int64 __fastcall RiEnqueueDeviceQueue(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  _QWORD *v4; // rcx
  __int64 result; // rax
  _QWORD *v6; // rcx
  __int64 v7; // r8
  __int64 *v8; // rcx
  __int64 v9; // r8

  if ( (*(_BYTE *)(a2 + 22) & 6) != 0 )
  {
    result = a1 + 96;
    v6 = *(_QWORD **)(a1 + 104);
    if ( *v6 != result )
      __fastfail(3u);
    *(_QWORD *)a2 = result;
    *(_QWORD *)(a2 + 8) = v6;
    *v6 = a2;
    *(_QWORD *)(result + 8) = a2;
    ++*(_DWORD *)(a1 + 20);
  }
  else
  {
    v3 = a1 + 80;
    v4 = *(_QWORD **)(a1 + 88);
    if ( *v4 != v3 )
      __fastfail(3u);
    *(_QWORD *)a2 = v3;
    *(_QWORD *)(a2 + 8) = v4;
    *v4 = a2;
    *(_QWORD *)(v3 + 8) = a2;
    result = (unsigned int)++*(_DWORD *)(a1 + 16);
    if ( (int)result > *(_DWORD *)(a1 + 128) )
      *(_DWORD *)(a1 + 128) = result;
  }
  if ( (*(_BYTE *)(a2 + 22) & 8) != 0 )
    ++*(_DWORD *)(a1 + 24);
  if ( (*(_BYTE *)(a2 + 22) & 0x20) != 0 )
  {
    result = RaidGetQosEntryForDeviceEntry(a2);
    v8 = *(__int64 **)(v7 + 120);
    v9 = v7 + 112;
    if ( *v8 != v9 )
      __fastfail(3u);
    *(_QWORD *)result = v9;
    *(_QWORD *)(result + 8) = v8;
    *v8 = result;
    *(_QWORD *)(v9 + 8) = result;
  }
  return result;
}
