/*
 * XREFs of ?CitpProgDataEnsure@@YAPEAU_CIT_PROG_DATA@@PEAU_CIT_IMPACT_CONTEXT@@PEBU_CIT_PROGRAM_ID@@@Z @ 0x1C015521C
 * Callers:
 *     ?CitpProcessEnsureProgData@@YAPEAU_CIT_PROG_DATA@@PEAUtagPROCESSINFO@@@Z @ 0x1C015510C (-CitpProcessEnsureProgData@@YAPEAU_CIT_PROG_DATA@@PEAUtagPROCESSINFO@@@Z.c)
 * Callees:
 *     ?CitpProgramIdCleanup@@YAXPEAU_CIT_PROGRAM_ID@@@Z @ 0x1C001C8C0 (-CitpProgramIdCleanup@@YAXPEAU_CIT_PROGRAM_ID@@@Z.c)
 *     memset @ 0x1C00ABB80 (memset.c)
 *     ?CitpProgDataFind@@YAPEAU_CIT_PROG_DATA@@PEBU_CIT_IMPACT_CONTEXT@@PEBU_CIT_PROGRAM_ID@@@Z @ 0x1C0155508 (-CitpProgDataFind@@YAPEAU_CIT_PROG_DATA@@PEBU_CIT_IMPACT_CONTEXT@@PEBU_CIT_PROGRAM_ID@@@Z.c)
 *     ?CitpProgDataReinitialize@@YAXPEAU_CIT_PROG_DATA@@@Z @ 0x1C01557CC (-CitpProgDataReinitialize@@YAXPEAU_CIT_PROG_DATA@@@Z.c)
 *     ?CitpProgramIdCopy@@YAJPEAU_CIT_PROGRAM_ID@@PEBU1@@Z @ 0x1C0155838 (-CitpProgramIdCopy@@YAJPEAU_CIT_PROGRAM_ID@@PEBU1@@Z.c)
 */

struct _CIT_PROG_DATA *__fastcall CitpProgDataEnsure(struct _CIT_IMPACT_CONTEXT *a1, const struct _CIT_PROGRAM_ID *a2)
{
  __int64 v4; // rdx
  struct _CIT_PROG_DATA *v5; // rbx
  __int64 v6; // r8
  char *v8; // rax
  __int64 *v9; // rbx
  __int64 v10; // rcx
  _QWORD *v11; // rax
  _QWORD *v12; // rbx
  _QWORD *v13; // rcx
  struct _CIT_PROG_DATA *i; // rdx
  unsigned int v15; // eax
  struct _CIT_IMPACT_CONTEXT *v16; // rax
  struct _CIT_IMPACT_CONTEXT **v17; // rdx
  _QWORD *v18; // rcx
  __int64 v19; // rdx
  _QWORD *v20; // rax
  __int128 v21; // xmm1
  __int64 v22; // xmm0_8
  __int64 v23; // rdx
  unsigned int v24; // r8d
  char v25; // al
  __int64 v26; // rcx
  _OWORD v27[3]; // [rsp+20h] [rbp-30h] BYREF
  __int64 v28; // [rsp+80h] [rbp+30h]
  __int64 v29; // [rsp+80h] [rbp+30h]

  memset(v27, 0, 0x28uLL);
  v5 = CitpProgDataFind(a1, a2);
  if ( !v5 )
  {
    if ( (int)CitpProgramIdCopy((struct _CIT_PROGRAM_ID *)v27, a2) < 0 )
    {
LABEL_3:
      v5 = 0LL;
      goto LABEL_4;
    }
    v8 = (char *)a1 + 8;
    if ( *(char **)v8 == v8 )
    {
      v11 = (_QWORD *)((char *)a1 + 24);
      if ( (_QWORD *)*v11 == v11 )
        goto LABEL_3;
      v12 = (_QWORD *)*((_QWORD *)a1 + 4);
      if ( (_QWORD *)*v12 != v11 || (v13 = (_QWORD *)v12[1], (_QWORD *)*v13 != v12) )
        __fastfail(3u);
      *((_QWORD *)a1 + 4) = v13;
      v5 = (struct _CIT_PROG_DATA *)(v12 - 2);
      *v13 = v11;
      --*((_DWORD *)a1 + 15);
      *((_QWORD *)v5 + 3) = (char *)v5 + 16;
      *((_QWORD *)v5 + 2) = (char *)v5 + 16;
      *((_BYTE *)v5 + 34) = 0;
      v28 = *((_QWORD *)v5 + 1) & (-1LL << (*((_DWORD *)a1 + 19) & 0x1F));
      for ( i = (struct _CIT_PROG_DATA *)(*((_QWORD *)a1 + 10)
                                        + 8LL
                                        * ((37
                                          * (BYTE6(v28)
                                           + 37
                                           * (BYTE5(v28)
                                            + 37
                                            * (BYTE4(v28)
                                             + 37
                                             * (BYTE3(v28)
                                              + 37
                                              * (BYTE2(v28) + 37 * (BYTE1(v28) + 37 * ((unsigned __int8)v28 + 11623883)))))))
                                          + HIBYTE(v28)) & (unsigned int)((*((_DWORD *)a1 + 19) >> 5) - 1)));
            (*(_QWORD *)i & 1) == 0;
            i = *(struct _CIT_PROG_DATA **)i )
      {
        if ( *(struct _CIT_PROG_DATA **)i == v5 )
        {
          *(_QWORD *)i = *(_QWORD *)v5;
          --*((_DWORD *)a1 + 18);
          *(_QWORD *)v5 |= 0x8000000000000002uLL;
          break;
        }
      }
      *(_QWORD *)v5 = 0LL;
      CitpProgDataReinitialize(v5);
    }
    else
    {
      v9 = *(__int64 **)v8;
      if ( *(char **)(*(_QWORD *)v8 + 8LL) != v8 || (v10 = *v9, *(__int64 **)(*v9 + 8) != v9) )
        __fastfail(3u);
      *(_QWORD *)v8 = v10;
      v5 = (struct _CIT_PROG_DATA *)(v9 - 2);
      *(_QWORD *)(v10 + 8) = v8;
    }
    v15 = *((_DWORD *)a1 + 16);
    if ( v15 >= *((_DWORD *)a1 + 17) )
    {
      ++*((_DWORD *)a1 + 15);
      v18 = (_QWORD *)((char *)a1 + 24);
      v19 = *((_QWORD *)a1 + 3);
      v20 = (_QWORD *)((char *)v5 + 16);
      if ( *(struct _CIT_IMPACT_CONTEXT **)(v19 + 8) != (struct _CIT_IMPACT_CONTEXT *)((char *)a1 + 24) )
        __fastfail(3u);
      *v20 = v19;
      *((_QWORD *)v5 + 3) = v18;
      *(_QWORD *)(v19 + 8) = v20;
      *v18 = v20;
      *((_BYTE *)v5 + 34) = 1;
    }
    else
    {
      *((_DWORD *)a1 + 16) = v15 + 1;
      v16 = (struct _CIT_PROG_DATA *)((char *)v5 + 16);
      v17 = (struct _CIT_IMPACT_CONTEXT **)*((_QWORD *)a1 + 6);
      if ( *v17 != (struct _CIT_IMPACT_CONTEXT *)((char *)a1 + 40) )
        __fastfail(3u);
      *(_QWORD *)v16 = (char *)a1 + 40;
      *((_QWORD *)v5 + 3) = v17;
      *v17 = v16;
      *((_QWORD *)a1 + 6) = v16;
      *((_BYTE *)v5 + 35) = 1;
    }
    v21 = v27[1];
    *(_OWORD *)((char *)v5 + 40) = v27[0];
    v22 = *(_QWORD *)&v27[2];
    *(_OWORD *)((char *)v5 + 56) = v21;
    *((_QWORD *)v5 + 9) = v22;
    memset(v27, 0, 0x28uLL);
    v23 = *((_QWORD *)v5 + 7);
    *((_QWORD *)v5 + 1) = v23;
    v24 = *((_DWORD *)a1 + 19);
    v25 = v24 & 0x1F;
    v6 = v24 >> 5;
    v29 = v23 & (-1LL << v25);
    v26 = *((_QWORD *)a1 + 10);
    v4 = (37
        * (BYTE6(v29)
         + 37
         * (BYTE5(v29)
          + 37
          * (BYTE4(v29)
           + 37 * (BYTE3(v29) + 37 * (BYTE2(v29) + 37 * (BYTE1(v29) + 37 * ((unsigned __int8)v29 + 11623883)))))))
        + HIBYTE(v29)) & (unsigned int)(v6 - 1);
    *(_QWORD *)v5 = *(_QWORD *)(v26 + 8 * v4);
    *(_QWORD *)(v26 + 8 * v4) = v5;
    ++*((_DWORD *)a1 + 18);
  }
LABEL_4:
  CitpProgramIdCleanup((struct _CIT_PROGRAM_ID *)v27, v4, v6);
  return v5;
}
