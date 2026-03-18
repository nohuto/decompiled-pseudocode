/*
 * XREFs of sub_1402E81AC @ 0x1402E81AC
 * Callers:
 *     sub_1402E495C @ 0x1402E495C (sub_1402E495C.c)
 *     KiVerifyXcpt15 @ 0x14087C330 (KiVerifyXcpt15.c)
 *     sub_14087DE84 @ 0x14087DE84 (sub_14087DE84.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1402E81AC(__int64 a1, unsigned __int64 a2)
{
  unsigned int v2; // r8d
  __int64 v3; // rax
  __int64 v4; // r11
  unsigned __int64 *v5; // r10
  __int64 v6; // r9
  unsigned __int64 v7; // rdx
  __int64 v8; // rax
  BOOL v9; // r10d
  _QWORD v11[5]; // [rsp+0h] [rbp-28h] BYREF

  v2 = 0;
  if ( a1 )
    v3 = *(_QWORD *)(a1 + 1496);
  else
    v3 = MmPteBase;
  v4 = 4LL;
  v5 = v11;
  LODWORD(v6) = 4;
  v7 = v3 + ((a2 >> 9) & 0x7FFFFFFFF8LL);
  do
  {
    *v5 = v7;
    if ( a1 )
      v8 = *(_QWORD *)(a1 + 1496);
    else
      v8 = MmPteBase;
    ++v5;
    v7 = v8 + ((v7 >> 9) & 0x7FFFFFFFF8LL);
    --v4;
  }
  while ( v4 );
  v9 = 0;
  do
  {
    v6 = (unsigned int)(v6 - 1);
    if ( v9 )
    {
      v11[v6] = 0LL;
    }
    else
    {
      if ( !(_DWORD)v6 )
        break;
      v9 = *(char *)v11[v6] < 0;
    }
  }
  while ( (_DWORD)v6 );
  LOBYTE(v2) = v11[0] == 0LL;
  return v2;
}
