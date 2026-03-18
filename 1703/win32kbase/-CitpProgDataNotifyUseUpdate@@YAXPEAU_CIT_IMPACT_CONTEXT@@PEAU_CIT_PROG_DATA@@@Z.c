/*
 * XREFs of ?CitpProgDataNotifyUseUpdate@@YAXPEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT_PROG_DATA@@@Z @ 0x1C0154BCC
 * Callers:
 *     ?CitpSetForegroundProcess@@YAHPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@PEAUtagMONITOR@@PEAUtagSHELL_INPUT_USAGE_DATA_INFO@@@Z @ 0x1C0052944 (-CitpSetForegroundProcess@@YAHPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@PEAUtagM.c)
 *     ?CitpSavedDataLoad@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEAXPEBU_CIT_SAVE_KEY@@@Z @ 0x1C01554E4 (-CitpSavedDataLoad@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEAXPEBU_CIT_SAVE_KEY@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CitpProgDataNotifyUseUpdate(struct _CIT_IMPACT_CONTEXT *a1, struct _CIT_PROG_DATA *a2)
{
  struct _CIT_IMPACT_CONTEXT *v4; // r8
  __int64 v5; // rdx
  struct _CIT_IMPACT_CONTEXT **v6; // rax
  char *v7; // r10
  __int64 v8; // rax
  __int64 *v9; // rbx
  __int64 *v10; // rdx
  __int64 **v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx
  struct _CIT_IMPACT_CONTEXT **v14; // rax
  struct _CIT_IMPACT_CONTEXT **v15; // rcx
  char *v16; // r11
  _QWORD *v17; // rax
  __int64 v18; // rdx
  _QWORD *v19; // rcx
  _QWORD *v20; // rcx
  __int64 v21; // r8

  if ( *((_BYTE *)a2 + 34) )
  {
    v4 = (struct _CIT_PROG_DATA *)((char *)a2 + 16);
    v5 = *((_QWORD *)a2 + 2);
    v6 = (struct _CIT_IMPACT_CONTEXT **)*((_QWORD *)v4 + 1);
    if ( *(struct _CIT_IMPACT_CONTEXT **)(v5 + 8) != v4 || *v6 != v4 )
      __fastfail(3u);
    *v6 = (struct _CIT_IMPACT_CONTEXT *)v5;
    v7 = (char *)a1 + 328;
    *(_QWORD *)(v5 + 8) = v6;
    v8 = *((_QWORD *)a1 + 41);
    if ( *(struct _CIT_IMPACT_CONTEXT **)(v8 + 8) != (struct _CIT_IMPACT_CONTEXT *)((char *)a1 + 328) )
      __fastfail(3u);
    *(_QWORD *)v4 = v8;
    *((_QWORD *)v4 + 1) = v7;
    *(_QWORD *)(v8 + 8) = v4;
    *(_QWORD *)v7 = v4;
    v9 = (__int64 *)*((_QWORD *)a1 + 44);
    if ( (__int64)(*((unsigned int *)a2 + 33)
                 + 30000 * (*((unsigned int *)a2 + 28) - (unsigned __int64)*((unsigned int *)v9 + 24))
                 - *((unsigned int *)v9 + 29)) >= 0 )
    {
      v10 = (__int64 *)*v9;
      v11 = (__int64 **)v9[1];
      if ( *(__int64 **)(*v9 + 8) != v9 || *v11 != v9 )
        __fastfail(3u);
      *v11 = v10;
      v10[1] = (__int64)v11;
      v12 = *(_QWORD *)v7;
      if ( *(char **)(*(_QWORD *)v7 + 8LL) != v7 )
        __fastfail(3u);
      *v9 = v12;
      v9[1] = (__int64)v7;
      *(_QWORD *)(v12 + 8) = v9;
      *(_QWORD *)v7 = v9;
      *((_WORD *)v9 + 9) = 1;
      v13 = *(_QWORD *)v4;
      v14 = (struct _CIT_IMPACT_CONTEXT **)*((_QWORD *)v4 + 1);
      if ( *(struct _CIT_IMPACT_CONTEXT **)(*(_QWORD *)v4 + 8LL) != v4 || *v14 != v4 )
        __fastfail(3u);
      *v14 = (struct _CIT_IMPACT_CONTEXT *)v13;
      *(_QWORD *)(v13 + 8) = v14;
      v15 = (struct _CIT_IMPACT_CONTEXT **)*((_QWORD *)a1 + 44);
      if ( *v15 != (struct _CIT_IMPACT_CONTEXT *)((char *)a1 + 344) )
        __fastfail(3u);
      *(_QWORD *)v4 = (char *)a1 + 344;
      *((_QWORD *)v4 + 1) = v15;
      *v15 = v4;
      *((_QWORD *)a1 + 44) = v4;
      *((_WORD *)a2 + 17) = 256;
    }
  }
  if ( *((_BYTE *)a2 + 35) )
  {
    v16 = (char *)a1 + 344;
    while ( 1 )
    {
      v21 = *((_QWORD *)a2 + 3);
      if ( (char *)v21 == v16
        || (__int64)(*((unsigned int *)a2 + 33)
                   + 30000 * (*((unsigned int *)a2 + 28) - (unsigned __int64)*(unsigned int *)(v21 + 96))
                   - *(unsigned int *)(v21 + 116)) < 0 )
      {
        break;
      }
      v17 = (_QWORD *)((char *)a2 + 16);
      v18 = *((_QWORD *)a2 + 2);
      v19 = (_QWORD *)*((_QWORD *)a2 + 3);
      if ( *(struct _CIT_PROG_DATA **)(v18 + 8) != (struct _CIT_PROG_DATA *)((char *)a2 + 16) || (_QWORD *)*v19 != v17 )
        __fastfail(3u);
      *v19 = v18;
      *(_QWORD *)(v18 + 8) = v19;
      v20 = *(_QWORD **)(v21 + 8);
      if ( *v20 != v21 )
        __fastfail(3u);
      *v17 = v21;
      *((_QWORD *)a2 + 3) = v20;
      *v20 = v17;
      *(_QWORD *)(v21 + 8) = v17;
    }
  }
}
