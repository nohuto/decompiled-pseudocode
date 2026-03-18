/*
 * XREFs of CitProcessCallout @ 0x1C0024344
 * Callers:
 *     xxxInitProcessInfo @ 0x1C0024008 (xxxInitProcessInfo.c)
 *     DestroyProcessInfo @ 0x1C009CD88 (DestroyProcessInfo.c)
 * Callees:
 *     ?CitpSetForegroundProcess@@YAHPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@PEAUtagMONITOR@@PEAUtagSHELL_INPUT_USAGE_DATA_INFO@@@Z @ 0x1C001BC74 (-CitpSetForegroundProcess@@YAHPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@PEAUtagM.c)
 *     ?CitpProcessInfoCleanup@@YAXPEAU_CIT_PROCESS@@@Z @ 0x1C001C878 (-CitpProcessInfoCleanup@@YAXPEAU_CIT_PROCESS@@@Z.c)
 *     ?CitpProcessInfoIsValid@@YA_NPEAU_CIT_PROCESS@@@Z @ 0x1C00247F8 (-CitpProcessInfoIsValid@@YA_NPEAU_CIT_PROCESS@@@Z.c)
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 *     ?CitpCleanup@@YAXXZ @ 0x1C0081E88 (-CitpCleanup@@YAXXZ.c)
 *     ?CitpContextUserLogon@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEBU_LUID@@@Z @ 0x1C00820D4 (-CitpContextUserLogon@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEBU_LUID@@@Z.c)
 *     ?CitpInitialize@@YAJPEBG@Z @ 0x1C0082410 (-CitpInitialize@@YAJPEBG@Z.c)
 *     ?CitpContextFlush@@YAJPEAU_CIT_IMPACT_CONTEXT@@I@Z @ 0x1C0084ACC (-CitpContextFlush@@YAJPEAU_CIT_IMPACT_CONTEXT@@I@Z.c)
 */

void __fastcall CitProcessCallout(__int64 a1, char a2)
{
  struct _CIT_PROCESS *v3; // rdi
  __int64 i; // rax
  struct _LUID v5; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  struct _CIT_IMPACT_CONTEXT *v8; // rsi
  struct _LUID v9; // [rsp+60h] [rbp+18h] BYREF

  if ( a2 )
  {
    *(_QWORD *)(a1 + 880) = 52976LL;
    if ( gppiList && !*(_QWORD *)(gppiList + 352) && !(_BYTE)g_CompatImpact )
      CitpInitialize((const unsigned __int16 *)a1);
    if ( qword_1C0193750 && !*((_QWORD *)qword_1C0193750 + 12) )
    {
      for ( i = grpWinStaList; i; i = *(_QWORD *)(i + 8) )
      {
        if ( *(_UNKNOWN **)(i + 24) == &gTermIO )
        {
          v5 = *(struct _LUID *)(i + 152);
          goto LABEL_14;
        }
      }
      v5 = (struct _LUID)`CCompositionBuffer::GetAdapterLuid'::`2'::sc_luidZero;
LABEL_14:
      v9 = v5;
      if ( v5 != `CCompositionBuffer::GetAdapterLuid'::`2'::sc_luidZero )
        CitpContextUserLogon(qword_1C0193750, &v9);
    }
  }
  else
  {
    v3 = *(struct _CIT_PROCESS **)(a1 + 880);
    if ( CitpProcessInfoIsValid(v3) )
    {
      v8 = qword_1C0193750;
      if ( qword_1C0193750 )
      {
        if ( a1 == *((_QWORD *)qword_1C0193750 + 15) )
          CitpSetForegroundProcess(
            qword_1C0193750,
            (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24,
            0LL,
            0LL,
            0LL,
            0LL);
        if ( a1 == *((_QWORD *)v8 + 16) )
          *((_QWORD *)v8 + 16) = 0LL;
      }
      CitpProcessInfoCleanup(v3);
      if ( v3 )
        Win32FreePool(v3, v6, v7);
    }
    *(_QWORD *)(a1 + 880) = 52977LL;
    if ( gppiList && !*(_QWORD *)(gppiList + 352) )
    {
      if ( qword_1C0193750 )
        CitpContextFlush(
          qword_1C0193750,
          (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
      CitpCleanup();
    }
  }
}
