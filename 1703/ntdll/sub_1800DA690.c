/*
 * XREFs of sub_1800DA690 @ 0x1800DA690
 * Callers:
 *     sub_180091AB4 @ 0x180091AB4 (sub_180091AB4.c)
 *     sub_1800D7198 @ 0x1800D7198 (sub_1800D7198.c)
 * Callees:
 *     RtlInitializeCriticalSectionEx @ 0x18000F440 (RtlInitializeCriticalSectionEx.c)
 *     sub_18001DEA8 @ 0x18001DEA8 (sub_18001DEA8.c)
 *     sub_180021AE0 @ 0x180021AE0 (sub_180021AE0.c)
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180029F40 (RtlAllocateHeap.c)
 *     sub_18003015C @ 0x18003015C (sub_18003015C.c)
 *     LdrGetProcedureAddressForCaller @ 0x1800303B0 (LdrGetProcedureAddressForCaller.c)
 *     RtlImageNtHeaderEx @ 0x180033760 (RtlImageNtHeaderEx.c)
 *     RtlInitUnicodeStringEx @ 0x180040170 (RtlInitUnicodeStringEx.c)
 *     DbgPrintEx @ 0x18005FEB0 (DbgPrintEx.c)
 *     DbgPrint @ 0x18005FEF0 (DbgPrint.c)
 *     sub_18006FC38 @ 0x18006FC38 (sub_18006FC38.c)
 *     RtlUnicodeStringToInteger @ 0x180072D30 (RtlUnicodeStringToInteger.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     ZwQueryValueKey @ 0x1800A55E0 (ZwQueryValueKey.c)
 *     __chkstk @ 0x1800A9EF0 (__chkstk.c)
 *     memmove @ 0x1800ABA80 (memmove.c)
 *     sub_1800DB33C @ 0x1800DB33C (sub_1800DB33C.c)
 *     sub_1800DB7F0 @ 0x1800DB7F0 (sub_1800DB7F0.c)
 *     sub_1800DBA3C @ 0x1800DBA3C (sub_1800DBA3C.c)
 *     sub_1800DBD68 @ 0x1800DBD68 (sub_1800DBD68.c)
 *     sub_1800DC010 @ 0x1800DC010 (sub_1800DC010.c)
 *     sub_1800DC28C @ 0x1800DC28C (sub_1800DC28C.c)
 *     sub_1800DC344 @ 0x1800DC344 (sub_1800DC344.c)
 */

__int64 __fastcall sub_1800DA690(void *ProcessHeap, __int64 a2, __int64 a3, __int64 a4, __int64 a5, _QWORD *a6)
{
  unsigned __int64 v6; // rdi
  struct _PEB *v7; // rsi
  int v9; // r14d
  char v10; // r15
  __int64 result; // rax
  __int64 *v12; // rbx
  unsigned __int64 v13; // rbx
  int ProcedureAddressForCaller; // ebx
  __int64 *i; // rbx
  __int64 v16; // rax
  __int64 *v17; // rbx
  __int64 v18; // rdx
  int v19; // ebx
  char *v20; // rbx
  int ValueKey; // eax
  unsigned __int64 v22; // rsi
  __int64 Heap; // rax
  int v24; // eax
  unsigned int v25; // eax
  char *v26; // rbx
  int v27; // eax
  unsigned __int64 v28; // rsi
  void *v29; // rcx
  __int64 v30; // rax
  int v31; // eax
  int v32; // ecx
  unsigned int v33; // eax
  char *v34; // rbx
  int v35; // eax
  unsigned __int64 v36; // rsi
  void *v37; // rcx
  __int64 v38; // rax
  int v39; // eax
  int v40; // ecx
  unsigned int v41; // eax
  char *v42; // rbx
  int v43; // eax
  __int64 v44; // rax
  int v45; // eax
  size_t v46; // rax
  __int64 v47; // [rsp+20h] [rbp-E0h]
  _BYTE v48[4]; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v49; // [rsp+34h] [rbp-CCh]
  unsigned int v50; // [rsp+38h] [rbp-C8h]
  unsigned int v51; // [rsp+3Ch] [rbp-C4h]
  unsigned int v52; // [rsp+40h] [rbp-C0h]
  __int64 v53; // [rsp+48h] [rbp-B8h]
  int v54; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int16 v55[4]; // [rsp+58h] [rbp-A8h] BYREF
  _DWORD *v56; // [rsp+60h] [rbp-A0h]
  unsigned __int16 v57[4]; // [rsp+68h] [rbp-98h] BYREF
  _DWORD *v58; // [rsp+70h] [rbp-90h]
  unsigned __int16 v59[4]; // [rsp+78h] [rbp-88h] BYREF
  _DWORD *v60; // [rsp+80h] [rbp-80h]
  unsigned __int64 v61; // [rsp+88h] [rbp-78h] BYREF
  __int64 v62; // [rsp+90h] [rbp-70h] BYREF
  __int64 v63; // [rsp+98h] [rbp-68h]
  _BYTE v64[16]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v65; // [rsp+B0h] [rbp-50h] BYREF
  char v66; // [rsp+C0h] [rbp-40h] BYREF
  char v67; // [rsp+4C0h] [rbp+3C0h] BYREF
  char v68; // [rsp+8C0h] [rbp+7C0h] BYREF
  char v69; // [rsp+CC0h] [rbp+BC0h] BYREF
  __int64 retaddr; // [rsp+1108h] [rbp+1008h]

  v6 = 0LL;
  v7 = NtCurrentPeb();
  v9 = a2;
  v53 = a2;
  v10 = (char)ProcessHeap;
  v63 = a5;
  v54 = 0;
  if ( !(_DWORD)a4 )
  {
    if ( !a6 )
      return 3221225485LL;
    *a6 = 0LL;
    if ( (v7->NtGlobalFlag & 0x100) != 0 || (v19 = 0, (_BYTE)ProcessHeap) )
      v19 = 294916;
    dword_18015AE48 = v19;
    String1 = 0;
    if ( a3 && (int)RtlInitUnicodeStringEx((__int64)v55, (__int64)L"VerifierFlags") >= 0 )
    {
      v20 = &v66;
      ValueKey = ZwQueryValueKey();
      if ( ValueKey < 0 )
      {
        if ( ValueKey == -2147483643 )
        {
          while ( 1 )
          {
            ProcessHeap = NtCurrentPeb()->ProcessHeap;
            if ( !ProcessHeap )
              break;
            Heap = RtlAllocateHeap((__int64)ProcessHeap, dword_18015B268 + 1572864, v49);
            v22 = Heap;
            if ( !Heap )
              break;
            v20 = (char *)Heap;
            v24 = ZwQueryValueKey();
            if ( v24 >= 0 )
            {
              v9 = v53;
              goto LABEL_41;
            }
            if ( v24 != -2147483643 )
            {
              v9 = v53;
              goto LABEL_51;
            }
            RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)v20);
          }
          v9 = v53;
        }
      }
      else
      {
        v22 = 0LL;
LABEL_41:
        LODWORD(ProcessHeap) = *((_DWORD *)v20 + 1);
        if ( (((_DWORD)ProcessHeap - 3) & 0xFFFFFFFB) != 0 )
        {
          if ( (_DWORD)ProcessHeap == 4 )
          {
            if ( *((_DWORD *)v20 + 2) == 4 )
            {
              v49 = 4;
              v54 = *((_DWORD *)v20 + 3);
            }
          }
          else if ( (_DWORD)ProcessHeap == 1 && ((unsigned __int8)&v54 & 3) == 0 )
          {
            v49 = 4;
            v56 = v20 + 12;
            v55[0] = *((_WORD *)v20 + 4);
            v55[1] = *((_WORD *)v20 + 4);
            RtlUnicodeStringToInteger(v55, 0, &v54);
          }
        }
        else if ( (_DWORD)ProcessHeap == 4 )
        {
          v49 = *((_DWORD *)v20 + 2);
          v25 = *((_DWORD *)v20 + 2);
          if ( v25 <= 4 )
            memmove(&v54, v20 + 12, v25);
        }
LABEL_51:
        if ( v22 )
          RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v22);
        LOBYTE(v19) = v54;
        if ( v54 )
        {
          dword_18015AE48 = v54;
LABEL_59:
          if ( !a3 )
            goto LABEL_126;
          if ( (v19 & 4) != 0 && (int)RtlInitUnicodeStringEx((__int64)v57, (__int64)L"HandleTraces") >= 0 )
          {
            v26 = &v67;
            v27 = ZwQueryValueKey();
            if ( v27 < 0 )
            {
              if ( v27 == -2147483643 )
              {
                while ( 1 )
                {
                  v29 = NtCurrentPeb()->ProcessHeap;
                  if ( !v29 )
                    break;
                  v30 = RtlAllocateHeap((__int64)v29, dword_18015B268 + 1572864, v50);
                  v28 = v30;
                  if ( !v30 )
                    break;
                  v26 = (char *)v30;
                  v31 = ZwQueryValueKey();
                  if ( v31 >= 0 )
                  {
                    v9 = v53;
                    goto LABEL_71;
                  }
                  if ( v31 != -2147483643 )
                  {
                    v9 = v53;
                    goto LABEL_82;
                  }
                  RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)v26);
                }
                v9 = v53;
              }
            }
            else
            {
              v28 = 0LL;
LABEL_71:
              v32 = *((_DWORD *)v26 + 1);
              if ( ((v32 - 3) & 0xFFFFFFFB) != 0 )
              {
                if ( v32 == 4 )
                {
                  if ( *((_DWORD *)v26 + 2) == 4 )
                  {
                    v50 = 4;
                    dword_18015C490 = *((_DWORD *)v26 + 3);
                  }
                }
                else if ( v32 == 1 && ((unsigned __int8)&dword_18015C490 & 3) == 0 )
                {
                  v50 = 4;
                  v58 = v26 + 12;
                  v57[0] = *((_WORD *)v26 + 4);
                  v57[1] = *((_WORD *)v26 + 4);
                  RtlUnicodeStringToInteger(v57, 0, &dword_18015C490);
                }
              }
              else if ( v32 == 4 )
              {
                v50 = *((_DWORD *)v26 + 2);
                v33 = *((_DWORD *)v26 + 2);
                if ( v33 <= 4 )
                  memmove(&dword_18015C490, v26 + 12, v33);
              }
LABEL_82:
              if ( v28 )
                RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v28);
            }
          }
          if ( (int)RtlInitUnicodeStringEx((__int64)v59, (__int64)L"VerifierDebug") >= 0 )
          {
            v34 = &v68;
            v35 = ZwQueryValueKey();
            if ( v35 < 0 )
            {
              if ( v35 == -2147483643 )
              {
                while ( 1 )
                {
                  v37 = NtCurrentPeb()->ProcessHeap;
                  if ( !v37 )
                    break;
                  v38 = RtlAllocateHeap((__int64)v37, dword_18015B268 + 1572864, v51);
                  v36 = v38;
                  if ( !v38 )
                    break;
                  v34 = (char *)v38;
                  v39 = ZwQueryValueKey();
                  if ( v39 >= 0 )
                  {
                    v9 = v53;
                    goto LABEL_95;
                  }
                  if ( v39 != -2147483643 )
                  {
                    v9 = v53;
                    goto LABEL_106;
                  }
                  RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)v34);
                }
                v9 = v53;
              }
            }
            else
            {
              v36 = 0LL;
LABEL_95:
              v40 = *((_DWORD *)v34 + 1);
              if ( ((v40 - 3) & 0xFFFFFFFB) != 0 )
              {
                if ( v40 == 4 )
                {
                  if ( *((_DWORD *)v34 + 2) == 4 )
                  {
                    v51 = 4;
                    dword_18015C494 = *((_DWORD *)v34 + 3);
                  }
                }
                else if ( v40 == 1 && ((unsigned __int8)&dword_18015C494 & 3) == 0 )
                {
                  v51 = 4;
                  v60 = v34 + 12;
                  v59[0] = *((_WORD *)v34 + 4);
                  v59[1] = *((_WORD *)v34 + 4);
                  RtlUnicodeStringToInteger(v59, 0, &dword_18015C494);
                }
              }
              else if ( v40 == 4 )
              {
                v51 = *((_DWORD *)v34 + 2);
                v41 = *((_DWORD *)v34 + 2);
                if ( v41 <= 4 )
                  memmove(&dword_18015C494, v34 + 12, v41);
              }
LABEL_106:
              if ( v36 )
                RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v36);
            }
          }
          if ( (int)RtlInitUnicodeStringEx((__int64)v64, (__int64)L"VerifierDlls") < 0 )
            goto LABEL_126;
          v42 = &v69;
          v43 = ZwQueryValueKey();
          if ( v43 < 0 )
          {
            if ( v43 == -2147483643 )
            {
              while ( 1 )
              {
                ProcessHeap = NtCurrentPeb()->ProcessHeap;
                if ( !ProcessHeap )
                  break;
                v44 = RtlAllocateHeap((__int64)ProcessHeap, dword_18015B268 + 1572864, v52);
                v6 = v44;
                if ( !v44 )
                  break;
                v42 = (char *)v44;
                v45 = ZwQueryValueKey();
                if ( v45 >= 0 )
                  goto LABEL_117;
                if ( v45 != -2147483643 )
                  goto LABEL_124;
                RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)v42);
              }
            }
            goto LABEL_126;
          }
LABEL_117:
          LODWORD(ProcessHeap) = *((_DWORD *)v42 + 1);
          if ( (((_DWORD)ProcessHeap - 3) & 0xFFFFFFFB) != 0 )
          {
            if ( (_DWORD)ProcessHeap == 1 )
            {
              v46 = *((unsigned int *)v42 + 2);
              v52 = v46;
              if ( (unsigned int)v46 <= 0x200 )
LABEL_123:
                memmove(&String1, v42 + 12, v46);
            }
          }
          else if ( (_DWORD)ProcessHeap == 1 )
          {
            v52 = *((_DWORD *)v42 + 2);
            v46 = *((unsigned int *)v42 + 2);
            if ( (unsigned int)v46 <= 0x200 )
              goto LABEL_123;
          }
LABEL_124:
          if ( v6 )
            RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v6);
LABEL_126:
          result = sub_1800DC344((_BYTE)ProcessHeap, v9, a3, v63, (__int64)&unk_18015A580);
          if ( (int)result >= 0 )
          {
            *a6 = &unk_18015A580;
            return sub_1800DB7F0();
          }
          return result;
        }
      }
      LOBYTE(v19) = dword_18015AE48;
    }
    if ( v10 )
      dword_18015A568 = 1;
    goto LABEL_59;
  }
  if ( (_DWORD)a4 != 1 )
    return 0LL;
  qword_18015A578 = (__int64)&qword_18015A570;
  qword_18015A570 = (__int64)&qword_18015A570;
  result = RtlInitializeCriticalSectionEx((__int64)&unk_18015A540, 0LL, 0LL, a4);
  if ( (int)result < 0 )
    return result;
  DbgPrintEx(
    93,
    0,
    "AVRF: %ws: pid 0x%X: flags 0x%X: application verifier enabled\n",
    *(_QWORD *)(qword_18015B350 + 96),
    LODWORD(NtCurrentTeb()->ClientId.UniqueProcess),
    dword_18015AE48);
  if ( (int)sub_1800DBD68() < 0 )
  {
    LODWORD(v47) = NtCurrentTeb()->ClientId.UniqueProcess;
    DbgPrintEx(
      93,
      0,
      "AVRF: %ws: pid 0x%X: application verifier will be disabled due to an initialization error.\n",
      *(_QWORD *)(qword_18015B350 + 96),
      v47);
    NtCurrentPeb()->NtGlobalFlag = NtCurrentPeb()->NtGlobalFlag & 0xFFFFFEFF;
    return 3221225473LL;
  }
  v12 = (__int64 *)qword_18015A570;
  if ( (__int64 *)qword_18015A570 == &qword_18015A570 )
  {
LABEL_9:
    sub_1800DB33C();
    result = sub_180021AE0(word_1801113E8, 0LL, 0, (__int64)&v61, 0LL);
    if ( (int)result < 0 )
    {
      if ( (_DWORD)result != -1073741515 )
        return result;
      v13 = qword_18015A5B0;
    }
    else
    {
      v13 = *(_QWORD *)(v61 + 48);
      sub_18003015C(v61);
    }
    ProcedureAddressForCaller = LdrGetProcedureAddressForCaller(v13, &qword_1801113F8, 0, &v62, 1, retaddr);
    sub_18001DEA8(0);
    if ( ProcedureAddressForCaller >= 0 )
    {
      qword_18016B288 = __ROR8__(v62 ^ MEMORY[0x7FFE0330], MEMORY[0x7FFE0330] & 0x3F);
      byte_18016B280 = 1;
    }
    byte_18016B281 = 1;
    byte_18016B282 = 1;
    sub_18001DEA8(1);
    sub_1800DC010();
    for ( i = (__int64 *)qword_18015A570; i != &qword_18015A570; i = (__int64 *)*i )
    {
      v16 = i[4];
      v48[0] = 0;
      result = sub_18006FC38(*(_QWORD *)(v16 + 152), 0LL, v48);
      if ( (int)result < 0 )
        return result;
    }
    if ( (dword_18015C494 & 8) != 0 )
    {
      DbgPrint("AVRF: -*- final list of providers -*- \n");
      v17 = (__int64 *)qword_18015A570;
      while ( v17 != &qword_18015A570 )
      {
        v18 = v17[3];
        v17 = (__int64 *)*v17;
        DbgPrint("AVRF: provider %ws \n", v18);
      }
    }
    sub_1800DC28C();
    RtlImageNtHeaderEx(3, (unsigned __int64)v7->ImageBaseAddress, 0LL, &v65);
    return 0LL;
  }
  while ( (unsigned __int8)sub_1800DBA3C(v12) )
  {
    v12 = (__int64 *)*v12;
    if ( v12 == &qword_18015A570 )
      goto LABEL_9;
  }
  return 3221225794LL;
}
