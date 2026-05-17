/*
 * XREFs of sub_180009BB4 @ 0x180009BB4
 * Callers:
 *     sub_180009558 @ 0x180009558 (sub_180009558.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180009BB4(_WORD *a1)
{
  _WORD *v1; // rdx
  __int64 v2; // r8
  char *v3; // rcx
  __int16 v4; // ax
  _WORD *v5; // rcx
  __int64 result; // rax

  v1 = a1;
  v2 = 2048LL;
  v3 = (char *)((char *)L"ContainerType" - (char *)a1);
  do
  {
    if ( v2 == -2147481598 )
      break;
    v4 = *(_WORD *)((char *)v1 + (_QWORD)v3);
    if ( !v4 )
      break;
    *v1++ = v4;
    --v2;
  }
  while ( v2 );
  v5 = v1 - 1;
  result = v2 == 0 ? 0x8007007A : 0;
  if ( v2 )
    v5 = v1;
  *v5 = 0;
  return result;
}
