/*
 * XREFs of CitSessionConnectChange @ 0x1C0084720
 * Callers:
 *     <none>
 * Callees:
 *     ?CitpSetForegroundProcess@@YAHPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@PEAUtagMONITOR@@PEAUtagSHELL_INPUT_USAGE_DATA_INFO@@@Z @ 0x1C0052944 (-CitpSetForegroundProcess@@YAHPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@PEAUtagM.c)
 *     ?CitpStatIncrement@@YAXPEAGG@Z @ 0x1C00533D8 (-CitpStatIncrement@@YAXPEAGG@Z.c)
 *     ?CitpAllowForegroundProcess@@YAHPEBU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C00534A4 (-CitpAllowForegroundProcess@@YAHPEBU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     ?UpdateActive@CIT_DESKTOP_ACTIVE_TRACKER@@QEAAXEI@Z @ 0x1C0087210 (-UpdateActive@CIT_DESKTOP_ACTIVE_TRACKER@@QEAAXEI@Z.c)
 *     ?CitpIsUserDesktopActive@@YAEPEBU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C0087240 (-CitpIsUserDesktopActive@@YAEPEBU_CIT_IMPACT_CONTEXT@@@Z.c)
 */

void __fastcall CitSessionConnectChange(char a1, char a2)
{
  struct _CIT_IMPACT_CONTEXT *v2; // rbx
  unsigned __int64 v5; // rdi
  __int16 v6; // dx
  unsigned __int8 IsUserDesktopActive; // al
  struct _CIT_IMPACT_CONTEXT *v8; // rcx
  struct tagPROCESSINFO *v9; // r8

  v2 = qword_1C018E8C8;
  if ( qword_1C018E8C8 && ((*((_BYTE *)qword_1C018E8C8 + 432) & 8) != 0) != a1 )
  {
    v5 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    if ( a1 )
    {
      ++*((_WORD *)qword_1C018E8C8 + 217);
      CitpStatIncrement((unsigned __int16 *)v2 + 97, 1);
      if ( !a2 )
        CitpStatIncrement((unsigned __int16 *)v2 + 98, v6);
    }
    else
    {
      CitpStatIncrement((unsigned __int16 *)qword_1C018E8C8 + 105, 1);
      CitpSetForegroundProcess(v2, v5, 0LL, 0LL, 0LL, 0LL);
    }
    *((_BYTE *)v2 + 432) = (*((_BYTE *)v2 + 432) & 0xDF | (a2 == 0 ? 0x20 : 0)) ^ ((8 * a1) ^ (*((_BYTE *)v2 + 432) | (a2 == 0 ? 0x20 : 0))) & 8;
    IsUserDesktopActive = CitpIsUserDesktopActive(v2);
    CIT_DESKTOP_ACTIVE_TRACKER::UpdateActive((struct _CIT_IMPACT_CONTEXT *)((char *)v2 + 592), IsUserDesktopActive, v5);
    if ( a1 && CitpAllowForegroundProcess(v2) )
    {
      v9 = (struct tagPROCESSINFO *)*((_QWORD *)v2 + 56);
      if ( v9 )
        CitpSetForegroundProcess(v8, v5, v9, 0LL, 0LL, 0LL);
    }
  }
}
