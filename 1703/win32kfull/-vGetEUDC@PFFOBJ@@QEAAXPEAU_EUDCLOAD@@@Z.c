/*
 * XREFs of ?vGetEUDC@PFFOBJ@@QEAAXPEAU_EUDCLOAD@@@Z @ 0x1C002C3C0
 * Callers:
 *     ?chpfeIncrPFF@PFTOBJ@@QEAAKPEAVPFF@@PEAHKPEAU_EUDCLOAD@@@Z @ 0x1C002A30C (-chpfeIncrPFF@PFTOBJ@@QEAAKPEAVPFF@@PEAHKPEAU_EUDCLOAD@@@Z.c)
 * Callees:
 *     ?bCheckFamilyName@PFEOBJ@@QEAAHPEBGHPEAH@Z @ 0x1C00301F0 (-bCheckFamilyName@PFEOBJ@@QEAAHPEBGHPEAH@Z.c)
 */

void __fastcall PFFOBJ::vGetEUDC(PFFOBJ *this, struct _EUDCLOAD *a2)
{
  __int64 i; // rdx
  __int64 v5; // rax
  __int64 v6; // rbp
  __int64 v7; // rbx
  _WORD *v8; // rdx
  bool v9; // r15
  __int64 *v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // [rsp+58h] [rbp+10h] BYREF

  for ( i = 0LL; i < 16; i += 8LL )
    *(_QWORD *)(i + *(_QWORD *)a2) = 0LL;
  v5 = *(_QWORD *)this;
  if ( !*((_QWORD *)a2 + 1) )
  {
    **(_QWORD **)a2 = *(_QWORD *)(v5 + 224);
    v12 = *(_QWORD *)this;
    v10 = *(__int64 **)a2;
    if ( *(_DWORD *)(*(_QWORD *)this + 144LL) == 2 )
      v11 = *(_QWORD *)(v12 + 232);
    else
      v11 = *(_QWORD *)(v12 + 224);
    goto LABEL_14;
  }
  v6 = 0LL;
  if ( *(_DWORD *)(v5 + 144) )
  {
    do
    {
      v7 = *(_QWORD *)(v5 + 8 * v6 + 224);
      v13 = v7;
      v8 = (_WORD *)(*(_QWORD *)(v7 + 32) + *(int *)(*(_QWORD *)(v7 + 32) + 16LL));
      v9 = *v8 == 64;
      if ( !_wcsicmp(*((const wchar_t **)a2 + 1), &v8[v9]) )
        *(_QWORD *)(*(_QWORD *)a2 + 8LL * v9) = v7;
      if ( !*(_QWORD *)(*(_QWORD *)a2 + 8LL * v9) )
      {
        if ( PFEOBJ::bCheckFamilyName((PFEOBJ *)&v13, *((const unsigned __int16 **)a2 + 1), v9, 0LL) )
          *(_QWORD *)(*(_QWORD *)a2 + 8LL * v9) = v7;
      }
      v5 = *(_QWORD *)this;
      v6 = (unsigned int)(v6 + 1);
    }
    while ( (unsigned int)v6 < *(_DWORD *)(*(_QWORD *)this + 144LL) );
  }
  v10 = *(__int64 **)a2;
  if ( !*(_QWORD *)(*(_QWORD *)a2 + 8LL) )
  {
    v11 = *v10;
LABEL_14:
    v10[1] = v11;
  }
}
