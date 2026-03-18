/*
 * XREFs of NVMeSetIoQueueCountCompletion @ 0x1C000E510
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall NVMeSetIoQueueCountCompletion(__int64 a1, __int64 a2, _WORD *a3)
{
  __int64 v5; // r9
  __int64 v6; // rax
  unsigned __int16 v7; // ax
  unsigned __int16 v8; // r8
  unsigned __int16 v9; // cx
  unsigned __int16 v10; // dx
  unsigned __int16 v11; // ax
  unsigned __int16 v12; // ax

  if ( *(_BYTE *)(a2 + 2) == 40 )
    v5 = *(_QWORD *)(a2 + 104);
  else
    v5 = *(_QWORD *)(a2 + 56);
  if ( (v5 & 0xFFF) != 0 )
    v5 = v5 - (v5 & 0xFFF) + 4096;
  if ( !a3 || (LOBYTE(v6) = *(_BYTE *)(a2 + 3), (_BYTE)v6 == 14) )
  {
    v6 = *(_QWORD *)(a1 + 656);
    *(_QWORD *)(v6 + 4224) = 0LL;
  }
  else
  {
    if ( (_BYTE)v6 != 1 || *(_BYTE *)(a1 + 16) )
    {
      v8 = 1;
      v10 = 1;
    }
    else
    {
      v7 = *(_WORD *)(a1 + 200);
      v8 = *(_WORD *)(a1 + 162);
      v9 = v7 - 1;
      if ( v7 <= 1u )
        v9 = 1;
      LOWORD(v6) = *a3 + 1;
      if ( (unsigned __int16)v6 < v8 )
        v8 = *a3 + 1;
      v10 = a3[1] + 1;
      if ( v10 >= v9 )
        v10 = v9;
    }
    if ( !*(_BYTE *)(a1 + 16) )
    {
      v11 = *(_WORD *)(a1 + 36);
      if ( v11 && v8 >= v11 )
        v8 = *(_WORD *)(a1 + 36);
      LOWORD(v6) = *(_WORD *)(a1 + 38);
      if ( (_WORD)v6 && v10 >= (unsigned __int16)v6 )
        v10 = *(_WORD *)(a1 + 38);
      if ( v10 > v8 )
        v10 = v8;
    }
    if ( *(_QWORD *)(v5 + 4224) )
    {
      v12 = *(_WORD *)(a1 + 232);
      if ( v8 < v12 )
        v12 = v8;
      *(_WORD *)(a1 + 232) = v12;
      LOWORD(v6) = *(_WORD *)(a1 + 234);
      if ( v10 < (unsigned __int16)v6 )
        LOWORD(v6) = v10;
      *(_WORD *)(a1 + 234) = v6;
    }
    else
    {
      *(_WORD *)(a1 + 232) = v8;
      *(_WORD *)(a1 + 234) = v10;
    }
    *(_QWORD *)(v5 + 4224) = 0LL;
  }
  *(_BYTE *)(v5 + 4245) |= 8u;
  return v6;
}
