/*
 * XREFs of rimAbIsPointerSuppressedByPointer @ 0x1C0103F50
 * Callers:
 *     rimAbIsPointerSuppressedByOtherDeviceContacts @ 0x1C0103D78 (rimAbIsPointerSuppressedByOtherDeviceContacts.c)
 * Callees:
 *     rimAbIsPointInPenDeadzone @ 0x1C0103C28 (rimAbIsPointInPenDeadzone.c)
 */

__int64 __fastcall rimAbIsPointerSuppressedByPointer(__int128 *a1, int *a2, __int64 a3, int a4)
{
  unsigned int v4; // ebx
  int v8; // ecx
  bool v9; // zf
  __int128 v10; // xmm0
  __int64 v11; // r8
  __int64 v12; // rdx
  __int128 v13; // xmm0
  __int64 v14; // r8
  __int64 v15; // rdx
  __int128 v16; // [rsp+20h] [rbp-18h] BYREF

  v4 = 0;
  if ( !gDeviceArbitrationType )
    return 0LL;
  v8 = *a2;
  if ( *a2 == *(_DWORD *)a3 )
    return 0LL;
  if ( v8 != 5 )
  {
    if ( *(_DWORD *)a3 != 5 )
    {
      if ( gDeviceArbitrationType == 1 )
      {
        v9 = v8 == 2;
        goto LABEL_18;
      }
      if ( gDeviceArbitrationType == 2 )
      {
        if ( v8 == 2 )
        {
          if ( (*(_DWORD *)(a3 + 12) & 4) != 0 )
            return 1LL;
LABEL_11:
          v10 = *a1;
          v11 = *(_QWORD *)(a3 + 40);
          v12 = *((_QWORD *)a2 + 5);
          v16 = v10;
          return rimAbIsPointInPenDeadzone(&v16, v12, v11);
        }
        if ( (a2[3] & 4) == 0 )
        {
          v13 = *a1;
          v14 = *((_QWORD *)a2 + 5);
          v15 = *(_QWORD *)(a3 + 40);
          v16 = v13;
          v9 = (unsigned int)rimAbIsPointInPenDeadzone(&v16, v15, v14) == 0;
          goto LABEL_18;
        }
      }
      else if ( gDeviceArbitrationType == 3 && v8 == 2 )
      {
        goto LABEL_11;
      }
    }
    return 0LL;
  }
  v9 = a4 == 0;
LABEL_18:
  LOBYTE(v4) = v9;
  return v4;
}
