/*
 * XREFs of NtQuerySystemInformationEx @ 0x140567DC0
 * Callers:
 *     <none>
 * Callees:
 *     ExpQuerySystemInformation @ 0x1405AE850 (ExpQuerySystemInformation.c)
 *     ExRaiseDatatypeMisalignment @ 0x1407C5940 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall NtQuerySystemInformationEx(int a1, unsigned __int64 a2, unsigned int a3)
{
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  __int64 v10; // rdx
  int v11; // ecx
  int v12; // ecx
  unsigned __int64 v13; // rcx
  int v15; // ecx
  int v16; // ecx
  int v17; // ecx
  int v18; // ecx
  int v19; // ecx
  int v20; // ecx
  int v21; // ecx
  int v22; // ecx

  if ( !a2 || !a3 )
    return 3221225485LL;
  if ( a1 <= 108 )
  {
    if ( a1 == 108 )
      goto LABEL_31;
    v15 = a1 - 8;
    if ( !v15 )
      goto LABEL_31;
    v16 = v15 - 15;
    if ( !v16 )
      goto LABEL_31;
    v17 = v16 - 19;
    if ( !v17 )
      goto LABEL_31;
    v18 = v17 - 19;
    if ( !v18 )
      goto LABEL_31;
    v19 = v18 - 11;
    if ( v19 )
    {
      v20 = v19 - 1;
      if ( !v20 )
        goto LABEL_31;
      v21 = v20 - 10;
      if ( !v21 )
        goto LABEL_31;
      v22 = v21 - 17;
      if ( !v22 )
        goto LABEL_31;
      if ( v22 != 7 )
        return 3221225475LL;
    }
    v10 = 3LL;
    goto LABEL_13;
  }
  v5 = a1 - 121;
  if ( !v5 || (v6 = v5 - 20) == 0 || (v7 = v6 - 19) == 0 )
  {
LABEL_31:
    v10 = 1LL;
    goto LABEL_13;
  }
  v8 = v7 - 5;
  if ( !v8 )
    goto LABEL_12;
  v9 = v8 - 10;
  if ( !v9 )
    goto LABEL_12;
  v10 = 3LL;
  v11 = v9 - 3;
  if ( !v11 )
    goto LABEL_12;
  v12 = v11 - 2;
  if ( v12 )
  {
    if ( v12 == 1 )
    {
LABEL_12:
      v10 = 7LL;
      goto LABEL_13;
    }
    return 3221225475LL;
  }
LABEL_13:
  if ( KeGetCurrentThread()->PreviousMode )
  {
    if ( (v10 & a2) != 0 )
      ExRaiseDatatypeMisalignment();
    v13 = a2 + a3;
    if ( v13 > 0x7FFFFFFF0000LL || v13 < a2 )
      MEMORY[0x7FFFFFFF0000] = 0;
  }
  return ExpQuerySystemInformation((unsigned int)a1, a2);
}
