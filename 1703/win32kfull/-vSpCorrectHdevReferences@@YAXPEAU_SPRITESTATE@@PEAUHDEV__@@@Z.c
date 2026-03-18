/*
 * XREFs of ?vSpCorrectHdevReferences@@YAXPEAU_SPRITESTATE@@PEAUHDEV__@@@Z @ 0x1C00A7D20
 * Callers:
 *     vSpDynamicModeChange @ 0x1C00A78A0 (vSpDynamicModeChange.c)
 * Callees:
 *     <none>
 */

void __fastcall vSpCorrectHdevReferences(struct _SPRITESTATE *a1, HDEV a2)
{
  char *v3; // rax
  __int64 v4; // r9
  __int64 v5; // rax
  __int64 i; // rcx
  __int64 v7; // r9
  __int64 v8; // rax

  *(_QWORD *)a1 = a2;
  v3 = (char *)a1 + 160;
  v4 = 64LL;
  do
  {
    if ( *(_QWORD *)v3 )
      *(_QWORD *)(*(_QWORD *)v3 + 24LL) = a2;
    v3 += 8;
    --v4;
  }
  while ( v4 );
  v5 = *((_QWORD *)a1 + 129);
  if ( v5 )
    *(_QWORD *)(v5 + 24) = a2;
  for ( i = *((_QWORD *)a1 + 2); i; i = *(_QWORD *)(i + 24) )
  {
    v7 = *(_QWORD *)(i + 128);
    *(_QWORD *)(i + 16) = a1;
    if ( v7 && (*(_DWORD *)i & 0x40) == 0 )
      *(_QWORD *)(v7 + 24) = a2;
    v8 = *(_QWORD *)(i + 160);
    if ( v8 )
      *(_QWORD *)(v8 + 24) = a2;
  }
}
