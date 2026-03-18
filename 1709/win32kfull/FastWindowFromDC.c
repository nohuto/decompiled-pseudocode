/*
 * XREFs of FastWindowFromDC @ 0x1C006C460
 * Callers:
 *     _ScrollDC @ 0x1C006B7C0 (_ScrollDC.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FastWindowFromDC(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rax
  __int64 v6; // r8
  int v8; // edx

  v2 = 0LL;
  GreLockVisRgn(*(_QWORD *)(gpDispInfo + 32LL));
  v3 = gpDispInfo;
  v4 = gpDispInfo + 16LL;
  v5 = *(_QWORD *)(gpDispInfo + 16LL);
  if ( !v5 )
  {
LABEL_5:
    v3 = gpDispInfo;
    goto LABEL_6;
  }
  if ( *(_QWORD *)(v5 + 8) != a1 )
  {
    while ( 1 )
    {
      v6 = *(_QWORD *)v4;
      if ( *(_QWORD *)(*(_QWORD *)v4 + 8LL) == a1 )
        break;
      v4 = *(_QWORD *)v4;
      if ( !*(_QWORD *)v6 )
        goto LABEL_5;
    }
    if ( (*(_DWORD *)(v6 + 64) & 0x401000) == 0x1000 )
    {
      *(_QWORD *)v4 = *(_QWORD *)v6;
      *(_QWORD *)v6 = *(_QWORD *)(gpDispInfo + 16LL);
      *(_QWORD *)(gpDispInfo + 16LL) = v6;
      v2 = *(_QWORD *)(v6 + 16);
    }
    goto LABEL_5;
  }
  v8 = *(_DWORD *)(v5 + 64);
  if ( (v8 & 0x1000) != 0 && (v8 & 0x400000) == 0 )
    v2 = *(_QWORD *)(v5 + 16);
LABEL_6:
  GreUnlockVisRgn(*(_QWORD *)(v3 + 32));
  return v2;
}
