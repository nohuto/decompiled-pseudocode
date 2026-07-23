/*
 * XREFs of sub_18000184C @ 0x18000184C
 * Callers:
 *     sub_1800017D8 @ 0x1800017D8 (sub_1800017D8.c)
 * Callees:
 *     sub_1800018C4 @ 0x1800018C4 (sub_1800018C4.c)
 *     RtlSetLastWin32Error @ 0x18005D580 (RtlSetLastWin32Error.c)
 */

__int64 __fastcall sub_18000184C(__int64 a1, __int128 *a2, int a3)
{
  int v5; // edx
  int i; // r8d
  __int64 v8; // rax
  __int128 v9; // [rsp+20h] [rbp-18h] BYREF

  if ( (a3 & 0xFFFF0000) == 0x100000 )
  {
    RtlSetLastWin32Error(87);
    return 0xFFFFFFFFLL;
  }
  else
  {
    v9 = *a2;
    v5 = sub_1800018C4(a1, &v9);
    for ( i = *(_DWORD *)(*(_QWORD *)(a1 + 24) + 72LL); v5 >= 0; --i )
    {
      if ( v5 >= *(_DWORD *)(*(_QWORD *)(a1 + 24) + 72LL) )
        break;
      if ( !i )
        break;
      v8 = *(_QWORD *)(a1 + 48);
      if ( *(_DWORD *)(v8 + 48LL * v5 + 16) == a3 )
        break;
      v5 = *(_DWORD *)(v8 + 48LL * v5 + 36);
    }
    return (unsigned int)v5;
  }
}
