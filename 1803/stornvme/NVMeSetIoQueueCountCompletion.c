/*
 * XREFs of NVMeSetIoQueueCountCompletion @ 0x1C000E9F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall NVMeSetIoQueueCountCompletion(__int64 a1, __int64 a2, __int16 *a3)
{
  __int64 v4; // r9
  char v5; // cl
  __int64 v6; // rax
  __int16 v7; // r10
  __int16 v8; // r8
  unsigned __int16 v9; // dx
  bool v10; // cc
  unsigned __int16 v11; // r10
  unsigned __int16 v12; // r8
  unsigned __int16 v13; // ax

  if ( *(_BYTE *)(a2 + 2) == 40 )
    v4 = *(_QWORD *)(a2 + 104);
  else
    v4 = *(_QWORD *)(a2 + 56);
  if ( (v4 & 0xFFF) != 0 )
    v4 = v4 - (v4 & 0xFFF) + 4096;
  if ( !a3 || (v5 = *(_BYTE *)(a2 + 3), v5 == 14) )
  {
    v6 = *(_QWORD *)(a1 + 688);
    *(_QWORD *)(v6 + 4232) = 0LL;
  }
  else
  {
    LOBYTE(v6) = *(_BYTE *)(a1 + 16);
    if ( v5 != 1 || (_BYTE)v6 )
    {
      v11 = 1;
      v12 = 1;
    }
    else
    {
      v7 = *a3;
      LOWORD(v6) = *(_WORD *)(a1 + 208);
      v8 = a3[1];
      v9 = v6 - 1;
      v10 = (unsigned __int16)v6 <= 1u;
      LOBYTE(v6) = 0;
      if ( v10 )
        v9 = 1;
      v11 = v7 + 1;
      v12 = v8 + 1;
      if ( v11 >= *(_WORD *)(a1 + 170) )
        v11 = *(_WORD *)(a1 + 170);
      if ( v12 >= v9 )
        v12 = v9;
    }
    if ( !(_BYTE)v6 )
    {
      v13 = *(_WORD *)(a1 + 36);
      if ( v13 && v11 >= v13 )
        v11 = *(_WORD *)(a1 + 36);
      LOWORD(v6) = *(_WORD *)(a1 + 38);
      if ( (_WORD)v6 && v12 >= (unsigned __int16)v6 )
        v12 = *(_WORD *)(a1 + 38);
      if ( v12 > v11 )
        v12 = v11;
    }
    if ( *(_QWORD *)(v4 + 4232) )
    {
      if ( v11 >= *(_WORD *)(a1 + 240) )
        v11 = *(_WORD *)(a1 + 240);
      LOWORD(v6) = *(_WORD *)(a1 + 242);
      if ( v12 >= (unsigned __int16)v6 )
        v12 = *(_WORD *)(a1 + 242);
    }
    *(_WORD *)(a1 + 240) = v11;
    *(_WORD *)(a1 + 242) = v12;
    *(_QWORD *)(v4 + 4232) = 0LL;
  }
  *(_BYTE *)(v4 + 4253) |= 8u;
  return v6;
}
