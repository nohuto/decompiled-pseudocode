/*
 * XREFs of NVMeSetIoQueueCountCompletion @ 0x1C000DD90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall NVMeSetIoQueueCountCompletion(__int64 a1, __int64 a2, _WORD *a3)
{
  __int64 v4; // r9
  __int64 v5; // rax
  unsigned __int16 v6; // ax
  unsigned __int16 v7; // dx
  unsigned __int16 v8; // cx
  unsigned __int16 v9; // ax
  unsigned __int16 v10; // ax

  if ( *(_BYTE *)(a2 + 2) == 40 )
    v4 = *(_QWORD *)(a2 + 104);
  else
    v4 = *(_QWORD *)(a2 + 56);
  if ( (v4 & 0xFFF) != 0 )
    v4 = v4 - (v4 & 0xFFF) + 4096;
  if ( !a3 || (LOBYTE(v5) = *(_BYTE *)(a2 + 3), (_BYTE)v5 == 14) )
  {
    v5 = *(_QWORD *)(a1 + 656);
    *(_QWORD *)(v5 + 4224) = 0LL;
  }
  else
  {
    if ( (_BYTE)v5 != 1 || *(_BYTE *)(a1 + 16) )
    {
      v7 = 1;
      v8 = 1;
    }
    else
    {
      v6 = *(_WORD *)(a1 + 200);
      v7 = *(_WORD *)(a1 + 162);
      v8 = 1;
      if ( v6 > 1u )
        v8 = v6 - 1;
      if ( (unsigned __int16)(*a3 + 1) < v7 )
        v7 = *a3 + 1;
      LOWORD(v5) = a3[1] + 1;
      if ( (unsigned __int16)v5 < v8 )
        v8 = a3[1] + 1;
    }
    if ( !*(_BYTE *)(a1 + 16) )
    {
      v9 = *(_WORD *)(a1 + 36);
      if ( v9 && v7 >= v9 )
        v7 = *(_WORD *)(a1 + 36);
      LOWORD(v5) = *(_WORD *)(a1 + 38);
      if ( (_WORD)v5 && v8 >= (unsigned __int16)v5 )
        v8 = *(_WORD *)(a1 + 38);
      if ( v8 > v7 )
        v8 = v7;
    }
    if ( *(_QWORD *)(v4 + 4224) )
    {
      v10 = *(_WORD *)(a1 + 232);
      if ( v7 < v10 )
        v10 = v7;
      *(_WORD *)(a1 + 232) = v10;
      LOWORD(v5) = *(_WORD *)(a1 + 234);
      if ( v8 < (unsigned __int16)v5 )
        LOWORD(v5) = v8;
      *(_WORD *)(a1 + 234) = v5;
    }
    else
    {
      *(_WORD *)(a1 + 232) = v7;
      *(_WORD *)(a1 + 234) = v8;
    }
    *(_QWORD *)(v4 + 4224) = 0LL;
  }
  *(_BYTE *)(v4 + 4245) |= 8u;
  return v5;
}
