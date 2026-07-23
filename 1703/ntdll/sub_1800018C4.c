/*
 * XREFs of sub_1800018C4 @ 0x1800018C4
 * Callers:
 *     sub_18000184C @ 0x18000184C (sub_18000184C.c)
 * Callees:
 *     sub_18000199C @ 0x18000199C (sub_18000199C.c)
 *     RtlSetLastWin32Error @ 0x18005D580 (RtlSetLastWin32Error.c)
 */

__int64 __fastcall sub_1800018C4(__int64 a1, _QWORD *a2)
{
  unsigned int v2; // ebx
  __int64 v4; // rax
  __int64 v5; // r14
  __int64 v6; // r11
  int v7; // ebp
  int v8; // edi
  __int64 v9; // r10
  int v10; // eax
  __int64 v11; // r10
  unsigned int v12; // r11d
  int v13; // r11d

  v2 = -1;
  if ( a1
    && (v4 = *(_QWORD *)(a1 + 24)) != 0
    && (v5 = *(_QWORD *)(a1 + 48)) != 0
    && (v6 = *(int *)(v4 + 88), v7 = *(_DWORD *)(v4 + 72), (int)v6 < v7)
    && (*a2 || a2[1]) )
  {
    if ( (int)v6 >= 0 )
    {
      v8 = *(_DWORD *)(v4 + 72);
      v9 = v5 + 48 * v6;
      if ( v9 )
      {
        while ( v8 )
        {
          v10 = sub_18000199C(a2, v9);
          if ( v10 < 0 )
          {
            v13 = *(_DWORD *)(v11 + 32);
          }
          else
          {
            if ( v10 <= 0 )
              return v12;
            v13 = *(_DWORD *)(v11 + 40);
          }
          if ( v13 < 0 || v13 >= v7 )
            v9 = 0LL;
          else
            v9 = v5 + 48LL * v13;
          --v8;
          if ( !v9 )
            return v2;
        }
      }
    }
  }
  else
  {
    RtlSetLastWin32Error(87);
  }
  return v2;
}
