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

int __fastcall sub_1800DA690(PVOID ProcessHeap, __int64 a2, void *a3, int a4, __int64 a5, _QWORD *a6)
{
  void *v6; // rdi
  struct _PEB *v7; // rsi
  int v9; // r14d
  char v10; // r15
  int result; // eax
  __int64 *v12; // rbx
  void *v13; // rbx
  NTSTATUS ProcedureAddressForCaller; // ebx
  __int64 *i; // rbx
  __int64 v16; // rax
  __int64 *v17; // rbx
  __int64 v18; // rdx
  int v19; // ebx
  _BYTE *v20; // rbx
  NTSTATUS v21; // eax
  void *v22; // rsi
  ULONG v23; // r14d
  PVOID Heap; // rax
  NTSTATUS v25; // eax
  unsigned int v26; // eax
  USHORT *v27; // rbx
  NTSTATUS v28; // eax
  void *v29; // rsi
  ULONG v30; // r14d
  PVOID v31; // rcx
  PVOID v32; // rax
  NTSTATUS v33; // eax
  int v34; // ecx
  unsigned int v35; // eax
  USHORT *v36; // rbx
  NTSTATUS v37; // eax
  void *v38; // rsi
  ULONG v39; // r14d
  PVOID v40; // rcx
  PVOID v41; // rax
  NTSTATUS v42; // eax
  int v43; // ecx
  unsigned int v44; // eax
  _DWORD *v45; // rbx
  NTSTATUS v46; // eax
  ULONG v47; // esi
  PVOID v48; // rax
  NTSTATUS v49; // eax
  size_t v50; // rax
  ULONG Flags[2]; // [rsp+20h] [rbp-E0h]
  _BYTE v52[4]; // [rsp+30h] [rbp-D0h] BYREF
  ULONG ResultLength; // [rsp+34h] [rbp-CCh] BYREF
  ULONG Length; // [rsp+38h] [rbp-C8h] BYREF
  ULONG v55; // [rsp+3Ch] [rbp-C4h] BYREF
  ULONG v56; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v57; // [rsp+48h] [rbp-B8h]
  ULONG Value; // [rsp+50h] [rbp-B0h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+58h] [rbp-A8h] BYREF
  _UNICODE_STRING ValueName; // [rsp+68h] [rbp-98h] BYREF
  _UNICODE_STRING String; // [rsp+78h] [rbp-88h] BYREF
  PVOID BaseAddress; // [rsp+88h] [rbp-78h] BYREF
  PVOID ProcedureAddress; // [rsp+90h] [rbp-70h] BYREF
  __int64 v64; // [rsp+98h] [rbp-68h]
  _UNICODE_STRING v65; // [rsp+A0h] [rbp-60h] BYREF
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE KeyValueInformation[1024]; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE v68[1024]; // [rsp+4C0h] [rbp+3C0h] BYREF
  _BYTE v69[1024]; // [rsp+8C0h] [rbp+7C0h] BYREF
  _BYTE v70[1024]; // [rsp+CC0h] [rbp+BC0h] BYREF
  PVOID *Callback; // [rsp+1108h] [rbp+1008h]

  v6 = 0LL;
  v7 = NtCurrentPeb();
  v9 = a2;
  v57 = a2;
  v10 = (char)ProcessHeap;
  v64 = a5;
  Value = 0;
  if ( !a4 )
  {
    if ( !a6 )
      return -1073741811;
    *a6 = 0LL;
    if ( (v7->NtGlobalFlag & 0x100) != 0 || (v19 = 0, (_BYTE)ProcessHeap) )
      v19 = 294916;
    dword_18015AE48 = v19;
    word_18015A300 = 0;
    if ( a3 && RtlInitUnicodeStringEx(&DestinationString, L"VerifierFlags") >= 0 )
    {
      v20 = KeyValueInformation;
      v21 = ZwQueryValueKey(
              a3,
              &DestinationString,
              KeyValuePartialInformation,
              KeyValueInformation,
              0x400u,
              &ResultLength);
      if ( v21 < 0 )
      {
        if ( v21 == -2147483643 )
        {
          while ( 1 )
          {
            v23 = ResultLength;
            ProcessHeap = NtCurrentPeb()->ProcessHeap;
            if ( !ProcessHeap )
              break;
            Heap = RtlAllocateHeap(ProcessHeap, dword_18015B268 + 1572864, ResultLength);
            v22 = Heap;
            if ( !Heap )
              break;
            v20 = Heap;
            v25 = ZwQueryValueKey(a3, &DestinationString, KeyValuePartialInformation, Heap, v23, &ResultLength);
            if ( v25 >= 0 )
            {
              v9 = v57;
              goto LABEL_41;
            }
            if ( v25 != -2147483643 )
            {
              v9 = v57;
              goto LABEL_51;
            }
            RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v20);
          }
          v9 = v57;
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
              ResultLength = 4;
              Value = *((_DWORD *)v20 + 3);
            }
          }
          else if ( (_DWORD)ProcessHeap == 1 && ((unsigned __int8)&Value & 3) == 0 )
          {
            ResultLength = 4;
            DestinationString.Buffer = (PWCH)(v20 + 12);
            DestinationString.Length = *((_WORD *)v20 + 4);
            DestinationString.MaximumLength = *((_WORD *)v20 + 4);
            RtlUnicodeStringToInteger(&DestinationString, 0, &Value);
          }
        }
        else if ( (_DWORD)ProcessHeap == 4 )
        {
          ResultLength = *((_DWORD *)v20 + 2);
          v26 = *((_DWORD *)v20 + 2);
          if ( v26 <= 4 )
            memmove(&Value, v20 + 12, v26);
        }
LABEL_51:
        if ( v22 )
          RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v22);
        LOBYTE(v19) = Value;
        if ( Value )
        {
          dword_18015AE48 = Value;
LABEL_59:
          if ( !a3 )
            goto LABEL_126;
          if ( (v19 & 4) != 0 && RtlInitUnicodeStringEx(&ValueName, L"HandleTraces") >= 0 )
          {
            v27 = (USHORT *)v68;
            v28 = ZwQueryValueKey(a3, &ValueName, KeyValuePartialInformation, v68, 0x400u, &Length);
            if ( v28 < 0 )
            {
              if ( v28 == -2147483643 )
              {
                while ( 1 )
                {
                  v30 = Length;
                  v31 = NtCurrentPeb()->ProcessHeap;
                  if ( !v31 )
                    break;
                  v32 = RtlAllocateHeap(v31, dword_18015B268 + 1572864, Length);
                  v29 = v32;
                  if ( !v32 )
                    break;
                  v27 = (USHORT *)v32;
                  v33 = ZwQueryValueKey(a3, &ValueName, KeyValuePartialInformation, v32, v30, &Length);
                  if ( v33 >= 0 )
                  {
                    v9 = v57;
                    goto LABEL_71;
                  }
                  if ( v33 != -2147483643 )
                  {
                    v9 = v57;
                    goto LABEL_82;
                  }
                  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v27);
                }
                v9 = v57;
              }
            }
            else
            {
              v29 = 0LL;
LABEL_71:
              v34 = *((_DWORD *)v27 + 1);
              if ( ((v34 - 3) & 0xFFFFFFFB) != 0 )
              {
                if ( v34 == 4 )
                {
                  if ( *((_DWORD *)v27 + 2) == 4 )
                  {
                    Length = 4;
                    dword_18015C490 = *((_DWORD *)v27 + 3);
                  }
                }
                else if ( v34 == 1 && ((unsigned __int8)&dword_18015C490 & 3) == 0 )
                {
                  Length = 4;
                  ValueName.Buffer = v27 + 6;
                  ValueName.Length = v27[4];
                  ValueName.MaximumLength = v27[4];
                  RtlUnicodeStringToInteger(&ValueName, 0, &dword_18015C490);
                }
              }
              else if ( v34 == 4 )
              {
                Length = *((_DWORD *)v27 + 2);
                v35 = *((_DWORD *)v27 + 2);
                if ( v35 <= 4 )
                  memmove(&dword_18015C490, v27 + 6, v35);
              }
LABEL_82:
              if ( v29 )
                RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v29);
            }
          }
          if ( RtlInitUnicodeStringEx(&String, L"VerifierDebug") >= 0 )
          {
            v36 = (USHORT *)v69;
            v37 = ZwQueryValueKey(a3, &String, KeyValuePartialInformation, v69, 0x400u, &v55);
            if ( v37 < 0 )
            {
              if ( v37 == -2147483643 )
              {
                while ( 1 )
                {
                  v39 = v55;
                  v40 = NtCurrentPeb()->ProcessHeap;
                  if ( !v40 )
                    break;
                  v41 = RtlAllocateHeap(v40, dword_18015B268 + 1572864, v55);
                  v38 = v41;
                  if ( !v41 )
                    break;
                  v36 = (USHORT *)v41;
                  v42 = ZwQueryValueKey(a3, &String, KeyValuePartialInformation, v41, v39, &v55);
                  if ( v42 >= 0 )
                  {
                    v9 = v57;
                    goto LABEL_95;
                  }
                  if ( v42 != -2147483643 )
                  {
                    v9 = v57;
                    goto LABEL_106;
                  }
                  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v36);
                }
                v9 = v57;
              }
            }
            else
            {
              v38 = 0LL;
LABEL_95:
              v43 = *((_DWORD *)v36 + 1);
              if ( ((v43 - 3) & 0xFFFFFFFB) != 0 )
              {
                if ( v43 == 4 )
                {
                  if ( *((_DWORD *)v36 + 2) == 4 )
                  {
                    v55 = 4;
                    dword_18015C494 = *((_DWORD *)v36 + 3);
                  }
                }
                else if ( v43 == 1 && ((unsigned __int8)&dword_18015C494 & 3) == 0 )
                {
                  v55 = 4;
                  String.Buffer = v36 + 6;
                  String.Length = v36[4];
                  String.MaximumLength = v36[4];
                  RtlUnicodeStringToInteger(&String, 0, &dword_18015C494);
                }
              }
              else if ( v43 == 4 )
              {
                v55 = *((_DWORD *)v36 + 2);
                v44 = *((_DWORD *)v36 + 2);
                if ( v44 <= 4 )
                  memmove(&dword_18015C494, v36 + 6, v44);
              }
LABEL_106:
              if ( v38 )
                RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v38);
            }
          }
          if ( RtlInitUnicodeStringEx(&v65, L"VerifierDlls") < 0 )
            goto LABEL_126;
          v45 = v70;
          v46 = ZwQueryValueKey(a3, &v65, KeyValuePartialInformation, v70, 0x400u, &v56);
          if ( v46 < 0 )
          {
            if ( v46 == -2147483643 )
            {
              while ( 1 )
              {
                v47 = v56;
                ProcessHeap = NtCurrentPeb()->ProcessHeap;
                if ( !ProcessHeap )
                  break;
                v48 = RtlAllocateHeap(ProcessHeap, dword_18015B268 + 1572864, v56);
                v6 = v48;
                if ( !v48 )
                  break;
                v45 = v48;
                v49 = ZwQueryValueKey(a3, &v65, KeyValuePartialInformation, v48, v47, &v56);
                if ( v49 >= 0 )
                  goto LABEL_117;
                if ( v49 != -2147483643 )
                  goto LABEL_124;
                RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v45);
              }
            }
            goto LABEL_126;
          }
LABEL_117:
          LODWORD(ProcessHeap) = v45[1];
          if ( (((_DWORD)ProcessHeap - 3) & 0xFFFFFFFB) != 0 )
          {
            if ( (_DWORD)ProcessHeap == 1 )
            {
              v50 = (unsigned int)v45[2];
              v56 = v50;
              if ( (unsigned int)v50 <= 0x200 )
LABEL_123:
                memmove(&word_18015A300, v45 + 3, v50);
            }
          }
          else if ( (_DWORD)ProcessHeap == 1 )
          {
            v56 = v45[2];
            v50 = (unsigned int)v45[2];
            if ( (unsigned int)v50 <= 0x200 )
              goto LABEL_123;
          }
LABEL_124:
          if ( v6 )
            RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v6);
LABEL_126:
          result = sub_1800DC344((_BYTE)ProcessHeap, v9, (_DWORD)a3, v64, (__int64)&unk_18015A580);
          if ( result >= 0 )
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
  if ( a4 != 1 )
    return 0;
  qword_18015A578 = (__int64)&qword_18015A570;
  qword_18015A570 = (__int64)&qword_18015A570;
  result = RtlInitializeCriticalSectionEx(&stru_18015A540, 0, 0);
  if ( result < 0 )
    return result;
  DbgPrintEx(
    0x5Du,
    0,
    "AVRF: %ws: pid 0x%X: flags 0x%X: application verifier enabled\n",
    *(_QWORD *)(qword_18015B350 + 96),
    LODWORD(NtCurrentTeb()->ClientId.UniqueProcess),
    dword_18015AE48);
  if ( (int)sub_1800DBD68() < 0 )
  {
    Flags[0] = (ULONG)NtCurrentTeb()->ClientId.UniqueProcess;
    DbgPrintEx(
      0x5Du,
      0,
      "AVRF: %ws: pid 0x%X: application verifier will be disabled due to an initialization error.\n",
      *(_QWORD *)(qword_18015B350 + 96),
      *(_QWORD *)Flags);
    NtCurrentPeb()->NtGlobalFlag = NtCurrentPeb()->NtGlobalFlag & 0xFFFFFEFF;
    return -1073741823;
  }
  v12 = (__int64 *)qword_18015A570;
  if ( (__int64 *)qword_18015A570 == &qword_18015A570 )
  {
LABEL_9:
    sub_1800DB33C();
    result = sub_180021AE0((PUNICODE_STRING)&stru_1801113E8, 0LL, 0, (__int64)&BaseAddress, 0LL);
    if ( result < 0 )
    {
      if ( result != -1073741515 )
        return result;
      v13 = (void *)qword_18015A5B0;
    }
    else
    {
      v13 = (void *)*((_QWORD *)BaseAddress + 6);
      sub_18003015C((char *)BaseAddress);
    }
    ProcedureAddressForCaller = LdrGetProcedureAddressForCaller(
                                  v13,
                                  (PANSI_STRING)&stru_1801113F8,
                                  0,
                                  &ProcedureAddress,
                                  1u,
                                  Callback);
    sub_18001DEA8(0);
    if ( ProcedureAddressForCaller >= 0 )
    {
      qword_18016B288 = __ROR8__((unsigned __int64)ProcedureAddress ^ MEMORY[0x7FFE0330], MEMORY[0x7FFE0330] & 0x3F);
      byte_18016B280 = 1;
    }
    byte_18016B281 = 1;
    byte_18016B282 = 1;
    sub_18001DEA8(1);
    sub_1800DC010();
    for ( i = (__int64 *)qword_18015A570; i != &qword_18015A570; i = (__int64 *)*i )
    {
      v16 = i[4];
      v52[0] = 0;
      result = sub_18006FC38(*(_QWORD *)(v16 + 152), 0LL, v52);
      if ( result < 0 )
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
    RtlImageNtHeaderEx(3u, v7->ImageBaseAddress, 0LL, &OutHeaders);
    return 0;
  }
  while ( (unsigned __int8)sub_1800DBA3C(v12) )
  {
    v12 = (__int64 *)*v12;
    if ( v12 == &qword_18015A570 )
      goto LABEL_9;
  }
  return -1073741502;
}
