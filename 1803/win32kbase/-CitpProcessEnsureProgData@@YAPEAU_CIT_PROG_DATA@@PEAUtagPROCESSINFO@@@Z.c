/*
 * XREFs of ?CitpProcessEnsureProgData@@YAPEAU_CIT_PROG_DATA@@PEAUtagPROCESSINFO@@@Z @ 0x1C016387C
 * Callers:
 *     ?CitpInteractionSummaryEnsure@@YAPEAU_CIT_INTERACTION_SUMMARY@@PEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT_PROCESS@@G@Z @ 0x1C003BEF8 (-CitpInteractionSummaryEnsure@@YAPEAU_CIT_INTERACTION_SUMMARY@@PEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT.c)
 *     ?CitpSetForegroundProcess@@YAHPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@PEAUtagMONITOR@@PEAUtagSHELL_INPUT_USAGE_DATA_INFO@@@Z @ 0x1C003FDE0 (-CitpSetForegroundProcess@@YAHPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@PEAUtagM.c)
 * Callees:
 *     ?CitpProcessEnsureContext@@YAPEAU_CIT_PROCESS@@PEAUtagPROCESSINFO@@@Z @ 0x1C003BDDC (-CitpProcessEnsureContext@@YAPEAU_CIT_PROCESS@@PEAUtagPROCESSINFO@@@Z.c)
 *     ?CitpProcessGetProgData@@YAPEAU_CIT_PROG_DATA@@PEAUtagPROCESSINFO@@@Z @ 0x1C0163924 (-CitpProcessGetProgData@@YAPEAU_CIT_PROG_DATA@@PEAUtagPROCESSINFO@@@Z.c)
 *     ?CitpProgDataEnsure@@YAPEAU_CIT_PROG_DATA@@PEAU_CIT_IMPACT_CONTEXT@@PEBU_CIT_PROGRAM_ID@@@Z @ 0x1C016398C (-CitpProgDataEnsure@@YAPEAU_CIT_PROG_DATA@@PEAU_CIT_IMPACT_CONTEXT@@PEBU_CIT_PROGRAM_ID@@@Z.c)
 */

struct _CIT_PROG_DATA *__fastcall CitpProcessEnsureProgData(struct tagPROCESSINFO *a1)
{
  struct _CIT_IMPACT_CONTEXT *v1; // rsi
  struct _CIT_PROG_DATA *ProgData; // rbx
  struct _CIT_PROCESS **v3; // r11
  struct _CIT_PROCESS *v4; // rax
  struct _CIT_PROCESS *v5; // rdi
  struct _CIT_PROG_DATA *v6; // rax
  int v8; // [rsp+38h] [rbp+10h]

  v1 = qword_1C01A16B0;
  ProgData = 0LL;
  if ( HIBYTE(word_1C01A16A8) )
  {
    ProgData = CitpProcessGetProgData(a1);
    if ( !ProgData )
    {
      v4 = CitpProcessEnsureContext(v3);
      v5 = v4;
      if ( v4 )
      {
        if ( *((_QWORD *)v4 + 4) )
        {
          v6 = CitpProgDataEnsure(v1, (struct _CIT_PROCESS *)((char *)v4 + 32));
          ProgData = v6;
          if ( v6 )
          {
            HIWORD(v8) = *((_WORD *)v6 + 16);
            LOWORD(v8) = ((__int64)v6 - *(_QWORD *)v1) / 96;
            *((_DWORD *)v5 + 6) = v8;
          }
        }
      }
    }
  }
  return ProgData;
}
