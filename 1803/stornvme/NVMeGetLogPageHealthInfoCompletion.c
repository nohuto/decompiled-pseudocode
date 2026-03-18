/*
 * XREFs of NVMeGetLogPageHealthInfoCompletion @ 0x1C00090A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall NVMeGetLogPageHealthInfoCompletion(__int64 a1, __int64 a2)
{
  char v2; // r8
  __int64 v4; // rbx
  __int64 v5; // r8
  unsigned __int16 v6; // cx
  __int64 v7; // rax
  char v8; // al
  char v9; // al
  __int64 v10; // r8
  __int64 result; // rax

  v2 = *(_BYTE *)(a2 + 2);
  if ( v2 == 40 )
    v4 = *(_QWORD *)(a2 + 104);
  else
    v4 = *(_QWORD *)(a2 + 56);
  if ( (v4 & 0xFFF) != 0 )
    v4 = v4 - (v4 & 0xFFF) + 4096;
  if ( *(_BYTE *)(a2 + 3) == 1 )
  {
    if ( v2 == 40 )
      v5 = *(_QWORD *)(a2 + 64);
    else
      v5 = *(_QWORD *)(a2 + 24);
    v6 = *(_WORD *)(*(_QWORD *)(v4 + 4200) + 1LL);
    v7 = *(_QWORD *)(v4 + 4232);
    if ( v7 == 13 )
    {
      if ( v6 == 0xFFFF )
      {
        v8 = -1;
      }
      else if ( v6 <= 0x20Fu )
      {
        if ( v6 <= 0x111u )
          v8 = 0;
        else
          v8 = v6 - 17;
      }
      else
      {
        v8 = -2;
      }
      *(_BYTE *)(v5 + 9) = v8;
    }
    else if ( v7 == 47 )
    {
      if ( v6 == 0xFFFF )
      {
        v9 = -1;
      }
      else if ( v6 <= 0x20Fu )
      {
        if ( v6 <= 0x111u )
          v9 = 0;
        else
          v9 = v6 - 17;
      }
      else
      {
        v9 = -2;
      }
      *(_BYTE *)(v5 + 10) = v9;
    }
  }
  v10 = *(_QWORD *)(v4 + 4200);
  result = *(_QWORD *)(v4 + 4208);
  if ( v10 )
    result = StorPortExtendedFunction(83LL, a1, v10, *(unsigned int *)(v4 + 4240));
  *(_BYTE *)(v4 + 4253) |= 8u;
  *(_QWORD *)(v4 + 4200) = 0LL;
  *(_DWORD *)(v4 + 4240) = 0;
  *(_QWORD *)(v4 + 4232) = 0LL;
  return result;
}
