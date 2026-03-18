/*
 * XREFs of sub_1402AFE60 @ 0x1402AFE60
 * Callers:
 *     sub_1402AC5F8 @ 0x1402AC5F8 (sub_1402AC5F8.c)
 *     KiVerifyXcpt15 @ 0x14080C330 (KiVerifyXcpt15.c)
 *     sub_14080DE60 @ 0x14080DE60 (sub_14080DE60.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1402AFE60(__int64 a1, unsigned __int64 a2)
{
  unsigned int v2; // r8d
  __int64 v3; // rax
  __int64 v4; // r11
  unsigned __int64 *v5; // r10
  int v6; // r9d
  unsigned __int64 v7; // rdx
  __int64 v8; // rax
  BOOL v9; // r10d
  _QWORD v11[5]; // [rsp+0h] [rbp-28h] BYREF

  v2 = 0;
  if ( a1 )
    v3 = *(_QWORD *)(a1 + 1432);
  else
    v3 = MmPteBase;
  v4 = 4LL;
  v5 = v11;
  v6 = 4;
  v7 = v3 + ((a2 >> 9) & 0x7FFFFFFFF8LL);
  do
  {
    *v5 = v7;
    if ( a1 )
      v8 = *(_QWORD *)(a1 + 1432);
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
    if ( v9 )
    {
      v11[--v6] = 0LL;
    }
    else
    {
      if ( !--v6 )
        break;
      v9 = *(char *)v11[v6] < 0;
    }
  }
  while ( v6 );
  LOBYTE(v2) = v11[0] == 0LL;
  return v2;
}
