/*
 * XREFs of sub_1800D3DA8 @ 0x1800D3DA8
 * Callers:
 *     sub_1800CCC9C @ 0x1800CCC9C (sub_1800CCC9C.c)
 *     sub_1800CDEF0 @ 0x1800CDEF0 (sub_1800CDEF0.c)
 * Callees:
 *     DbgPrintEx @ 0x180006B80 (DbgPrintEx.c)
 *     DbgPrint @ 0x180008590 (DbgPrint.c)
 *     RtlImageNtHeaderEx @ 0x180010300 (RtlImageNtHeaderEx.c)
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x1800190C0 (RtlAllocateHeap.c)
 *     LdrGetProcedureAddressForCaller @ 0x18001F0D0 (LdrGetProcedureAddressForCaller.c)
 *     sub_18001F5FC @ 0x18001F5FC (sub_18001F5FC.c)
 *     sub_1800259B4 @ 0x1800259B4 (sub_1800259B4.c)
 *     sub_1800385D0 @ 0x1800385D0 (sub_1800385D0.c)
 *     RtlInitUnicodeStringEx @ 0x18003F6D0 (RtlInitUnicodeStringEx.c)
 *     sub_180054D18 @ 0x180054D18 (sub_180054D18.c)
 *     RtlInitializeCriticalSectionEx @ 0x18005C890 (RtlInitializeCriticalSectionEx.c)
 *     RtlUnicodeStringToInteger @ 0x180074BF0 (RtlUnicodeStringToInteger.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     ZwQueryValueKey @ 0x18009ADA0 (ZwQueryValueKey.c)
 *     __chkstk @ 0x18009F810 (__chkstk.c)
 *     memmove @ 0x1800A1380 (memmove.c)
 *     sub_1800D0288 @ 0x1800D0288 (sub_1800D0288.c)
 *     sub_1800D4AE8 @ 0x1800D4AE8 (sub_1800D4AE8.c)
 *     sub_1800D4FBC @ 0x1800D4FBC (sub_1800D4FBC.c)
 *     sub_1800D51FC @ 0x1800D51FC (sub_1800D51FC.c)
 *     sub_1800D5528 @ 0x1800D5528 (sub_1800D5528.c)
 *     sub_1800D57D0 @ 0x1800D57D0 (sub_1800D57D0.c)
 *     sub_1800D5A4C @ 0x1800D5A4C (sub_1800D5A4C.c)
 *     sub_1800D5B04 @ 0x1800D5B04 (sub_1800D5B04.c)
 */

__int64 __fastcall sub_1800D3DA8(PVOID ProcessHeap, __int64 a2, void *a3, int a4, __int64 a5, _QWORD *a6)
{
  void *v6; // rsi
  _QWORD *v7; // rdi
  struct _PEB *v9; // r14
  char v10; // r15
  int v11; // ebx
  __int64 *v12; // rbx
  int v13; // eax
  void *v14; // rbx
  NTSTATUS ProcedureAddressForCaller; // ebx
  __int64 *i; // rdi
  __int64 v17; // rax
  __int64 *v18; // rbx
  __int64 v19; // rdx
  ULONG NtGlobalFlag; // r11d
  int v21; // r13d
  int v22; // ebx
  USHORT *v23; // rbx
  NTSTATUS v24; // eax
  void *v25; // r14
  ULONG v26; // edi
  PVOID Heap; // rax
  NTSTATUS v28; // eax
  unsigned int v29; // eax
  USHORT *v30; // rbx
  NTSTATUS v31; // eax
  void *v32; // r14
  ULONG v33; // edi
  PVOID v34; // rcx
  PVOID v35; // rax
  NTSTATUS v36; // eax
  int v37; // ecx
  unsigned int v38; // eax
  USHORT *v39; // rbx
  NTSTATUS v40; // eax
  void *v41; // rdi
  int v42; // ecx
  ULONG v43; // r14d
  PVOID v44; // rcx
  PVOID v45; // rax
  NTSTATUS v46; // eax
  unsigned int v47; // eax
  _DWORD *v48; // rbx
  NTSTATUS v49; // eax
  ULONG v50; // edi
  PVOID v51; // rax
  NTSTATUS v52; // eax
  size_t v53; // rax
  ULONG Flags[2]; // [rsp+20h] [rbp-E0h]
  char v56; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE v57[3]; // [rsp+39h] [rbp-C7h] BYREF
  ULONG ResultLength; // [rsp+3Ch] [rbp-C4h] BYREF
  ULONG Length; // [rsp+40h] [rbp-C0h] BYREF
  ULONG v60; // [rsp+44h] [rbp-BCh] BYREF
  ULONG v61; // [rsp+48h] [rbp-B8h] BYREF
  ULONG Value[3]; // [rsp+4Ch] [rbp-B4h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+58h] [rbp-A8h] BYREF
  _UNICODE_STRING ValueName; // [rsp+68h] [rbp-98h] BYREF
  _UNICODE_STRING String; // [rsp+78h] [rbp-88h] BYREF
  PVOID BaseAddress; // [rsp+88h] [rbp-78h] BYREF
  PVOID ProcedureAddress; // [rsp+90h] [rbp-70h] BYREF
  __int64 v68; // [rsp+98h] [rbp-68h]
  __int64 v69; // [rsp+A0h] [rbp-60h]
  _UNICODE_STRING v70; // [rsp+A8h] [rbp-58h] BYREF
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+B8h] [rbp-48h] BYREF
  _BYTE KeyValueInformation[1024]; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE v73[1024]; // [rsp+4C0h] [rbp+3C0h] BYREF
  _BYTE v74[1024]; // [rsp+8C0h] [rbp+7C0h] BYREF
  _BYTE v75[1024]; // [rsp+CC0h] [rbp+BC0h] BYREF
  PVOID *Callback; // [rsp+1108h] [rbp+1008h]

  v6 = 0LL;
  v7 = a6;
  v9 = NtCurrentPeb();
  v10 = (char)ProcessHeap;
  v69 = a2;
  v68 = a5;
  Value[0] = 0;
  if ( !a4 )
  {
    if ( !a6 )
      return (unsigned int)-1073741811;
    *a6 = 0LL;
    NtGlobalFlag = v9->NtGlobalFlag;
    if ( (NtGlobalFlag & 0x2000100) != 0 )
    {
      v21 = 1;
    }
    else
    {
      v21 = 0;
      if ( sub_1800D0288() )
        v21 = 2;
    }
    if ( (NtGlobalFlag & 0x100) != 0 || (v22 = 0, v10) )
      v22 = 294916;
    dword_18015B300 = v22;
    word_18015B320 = 0;
    if ( a3 && RtlInitUnicodeStringEx(&DestinationString, L"VerifierFlags") >= 0 )
    {
      v23 = (USHORT *)KeyValueInformation;
      v24 = ZwQueryValueKey(
              a3,
              &DestinationString,
              KeyValuePartialInformation,
              KeyValueInformation,
              0x400u,
              &ResultLength);
      if ( v24 < 0 )
      {
        if ( v24 == -2147483643 )
        {
          while ( 1 )
          {
            v26 = ResultLength;
            ProcessHeap = NtCurrentPeb()->ProcessHeap;
            if ( !ProcessHeap )
              break;
            Heap = RtlAllocateHeap(ProcessHeap, ::Flags + 1572864, ResultLength);
            v25 = Heap;
            if ( !Heap )
              break;
            v23 = (USHORT *)Heap;
            v28 = ZwQueryValueKey(a3, &DestinationString, KeyValuePartialInformation, Heap, v26, &ResultLength);
            if ( v28 >= 0 )
            {
              v7 = a6;
              goto LABEL_47;
            }
            if ( v28 != -2147483643 )
            {
              v7 = a6;
              goto LABEL_57;
            }
            RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v23);
          }
          v7 = a6;
        }
      }
      else
      {
        v25 = 0LL;
LABEL_47:
        LODWORD(ProcessHeap) = *((_DWORD *)v23 + 1);
        if ( (((_DWORD)ProcessHeap - 3) & 0xFFFFFFFB) != 0 )
        {
          if ( (_DWORD)ProcessHeap == 4 )
          {
            if ( *((_DWORD *)v23 + 2) == 4 )
            {
              ResultLength = 4;
              Value[0] = *((_DWORD *)v23 + 3);
            }
          }
          else if ( (_DWORD)ProcessHeap == 1 && ((unsigned __int8)Value & 3) == 0 )
          {
            ResultLength = 4;
            DestinationString.Buffer = v23 + 6;
            DestinationString.Length = v23[4];
            DestinationString.MaximumLength = v23[4];
            RtlUnicodeStringToInteger(&DestinationString, 0, Value);
          }
        }
        else if ( (_DWORD)ProcessHeap == 4 )
        {
          ResultLength = *((_DWORD *)v23 + 2);
          v29 = *((_DWORD *)v23 + 2);
          if ( v29 <= 4 )
            memmove(Value, v23 + 6, v29);
        }
LABEL_57:
        if ( v25 )
          RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v25);
        LOBYTE(v22) = Value[0];
        if ( Value[0] )
        {
          dword_18015B300 = Value[0];
          goto LABEL_65;
        }
      }
      LOBYTE(v22) = dword_18015B300;
    }
    if ( v10 )
      dword_18015B588 = 1;
LABEL_65:
    if ( !a3 )
      goto LABEL_133;
    if ( (v22 & 4) != 0 && RtlInitUnicodeStringEx(&ValueName, L"HandleTraces") >= 0 )
    {
      v30 = (USHORT *)v73;
      v31 = ZwQueryValueKey(a3, &ValueName, KeyValuePartialInformation, v73, 0x400u, &Length);
      if ( v31 < 0 )
      {
        if ( v31 == -2147483643 )
        {
          while ( 1 )
          {
            v33 = Length;
            v34 = NtCurrentPeb()->ProcessHeap;
            if ( !v34 )
              break;
            v35 = RtlAllocateHeap(v34, ::Flags + 1572864, Length);
            v32 = v35;
            if ( !v35 )
              break;
            v30 = (USHORT *)v35;
            v36 = ZwQueryValueKey(a3, &ValueName, KeyValuePartialInformation, v35, v33, &Length);
            if ( v36 >= 0 )
            {
              v7 = a6;
              goto LABEL_77;
            }
            if ( v36 != -2147483643 )
            {
              v7 = a6;
              goto LABEL_88;
            }
            RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v30);
          }
          v7 = a6;
        }
      }
      else
      {
        v32 = 0LL;
LABEL_77:
        v37 = *((_DWORD *)v30 + 1);
        if ( ((v37 - 3) & 0xFFFFFFFB) != 0 )
        {
          if ( v37 == 4 )
          {
            if ( *((_DWORD *)v30 + 2) == 4 )
            {
              Length = 4;
              dword_18015D494 = *((_DWORD *)v30 + 3);
            }
          }
          else if ( v37 == 1 && ((unsigned __int8)&dword_18015D494 & 3) == 0 )
          {
            Length = 4;
            ValueName.Buffer = v30 + 6;
            ValueName.Length = v30[4];
            ValueName.MaximumLength = v30[4];
            RtlUnicodeStringToInteger(&ValueName, 0, &dword_18015D494);
          }
        }
        else if ( v37 == 4 )
        {
          Length = *((_DWORD *)v30 + 2);
          v38 = *((_DWORD *)v30 + 2);
          if ( v38 <= 4 )
            memmove(&dword_18015D494, v30 + 6, v38);
        }
LABEL_88:
        if ( v32 )
          RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v32);
      }
    }
    if ( RtlInitUnicodeStringEx(&String, L"VerifierDebug") >= 0 )
    {
      v39 = (USHORT *)v74;
      v40 = ZwQueryValueKey(a3, &String, KeyValuePartialInformation, v74, 0x400u, &v60);
      if ( v40 < 0 )
      {
        if ( v40 != -2147483643 )
          goto LABEL_113;
        while ( 1 )
        {
          v43 = v60;
          v44 = NtCurrentPeb()->ProcessHeap;
          if ( !v44 )
            break;
          v45 = RtlAllocateHeap(v44, ::Flags + 1572864, v60);
          v41 = v45;
          if ( !v45 )
            break;
          v39 = (USHORT *)v45;
          v46 = ZwQueryValueKey(a3, &String, KeyValuePartialInformation, v45, v43, &v60);
          if ( v46 >= 0 )
            goto LABEL_94;
          if ( v46 != -2147483643 )
            goto LABEL_110;
          RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v39);
        }
      }
      else
      {
        v41 = 0LL;
LABEL_94:
        v42 = *((_DWORD *)v39 + 1);
        if ( ((v42 - 3) & 0xFFFFFFFB) != 0 )
        {
          if ( v42 == 4 )
          {
            if ( *((_DWORD *)v39 + 2) == 4 )
            {
              v60 = 4;
              dword_18015D498 = *((_DWORD *)v39 + 3);
            }
          }
          else if ( v42 == 1 && ((unsigned __int8)&dword_18015D498 & 3) == 0 )
          {
            v60 = 4;
            String.Buffer = v39 + 6;
            String.Length = v39[4];
            String.MaximumLength = v39[4];
            RtlUnicodeStringToInteger(&String, 0, &dword_18015D498);
          }
        }
        else if ( v42 == 4 )
        {
          v60 = *((_DWORD *)v39 + 2);
          v47 = *((_DWORD *)v39 + 2);
          if ( v47 <= 4 )
            memmove(&dword_18015D498, v39 + 6, v47);
        }
LABEL_110:
        if ( v41 )
          RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v41);
      }
      v7 = a6;
    }
LABEL_113:
    if ( RtlInitUnicodeStringEx(&v70, L"VerifierDlls") >= 0 )
    {
      v48 = v75;
      v49 = ZwQueryValueKey(a3, &v70, KeyValuePartialInformation, v75, 0x400u, &v61);
      if ( v49 < 0 )
      {
        if ( v49 == -2147483643 )
        {
          while ( 1 )
          {
            v50 = v61;
            ProcessHeap = NtCurrentPeb()->ProcessHeap;
            if ( !ProcessHeap )
              break;
            v51 = RtlAllocateHeap(ProcessHeap, ::Flags + 1572864, v61);
            v6 = v51;
            if ( !v51 )
              break;
            v48 = v51;
            v52 = ZwQueryValueKey(a3, &v70, KeyValuePartialInformation, v51, v50, &v61);
            if ( v52 >= 0 )
            {
              v7 = a6;
              goto LABEL_122;
            }
            if ( v52 != -2147483643 )
            {
              v7 = a6;
              goto LABEL_130;
            }
            RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v48);
          }
          v7 = a6;
        }
        goto LABEL_133;
      }
LABEL_122:
      LODWORD(ProcessHeap) = v48[1];
      if ( (((_DWORD)ProcessHeap - 3) & 0xFFFFFFFB) != 0 )
      {
        if ( (_DWORD)ProcessHeap == 1 )
        {
          v53 = (unsigned int)v48[2];
          v61 = v48[2];
          goto LABEL_127;
        }
      }
      else if ( (_DWORD)ProcessHeap == 1 )
      {
        v61 = v48[2];
        v53 = (unsigned int)v48[2];
LABEL_127:
        if ( (unsigned int)v53 <= 0x200 )
          memmove(&word_18015B320, v48 + 3, v53);
      }
LABEL_130:
      if ( v6 )
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v6);
    }
LABEL_133:
    v11 = sub_1800D5B04((_BYTE)ProcessHeap, v69, (_DWORD)a3, v68, (__int64)&unk_18015B5A0);
    if ( v11 >= 0 )
    {
      *v7 = &unk_18015B5A0;
      v11 = sub_1800D4FBC();
      if ( v11 >= 0 )
      {
        sub_1800259B4(0);
        dword_18016F29C = v21;
        sub_1800259B4(1);
      }
    }
    return (unsigned int)v11;
  }
  if ( a4 != 1 )
    return 0;
  qword_18015B598 = (__int64)&qword_18015B590;
  qword_18015B590 = (__int64)&qword_18015B590;
  v11 = RtlInitializeCriticalSectionEx(&stru_18015B560, 0, 0);
  if ( v11 < 0 )
    return (unsigned int)v11;
  if ( dword_18016F29C == 2 )
  {
    v57[0] = 0;
    v11 = sub_180054D18((__int64)&unk_18015B6C0, 0LL, v57);
    if ( v11 < 0 )
      return (unsigned int)v11;
    return 0;
  }
  DbgPrintEx(
    0x5Du,
    0,
    "AVRF: %ws: pid 0x%X: flags 0x%X: application verifier enabled\n",
    *(_QWORD *)(qword_18015C370 + 96),
    LODWORD(NtCurrentTeb()->ClientId.UniqueProcess),
    dword_18015B300);
  if ( (int)sub_1800D5528() < 0 )
  {
    Flags[0] = (ULONG)NtCurrentTeb()->ClientId.UniqueProcess;
    DbgPrintEx(
      0x5Du,
      0,
      "AVRF: %ws: pid 0x%X: application verifier will be disabled due to an initialization error.\n",
      *(_QWORD *)(qword_18015C370 + 96),
      *(_QWORD *)Flags);
    v11 = -1073741823;
    NtCurrentPeb()->NtGlobalFlag = NtCurrentPeb()->NtGlobalFlag & 0xFFFFFEFF;
    return (unsigned int)v11;
  }
  v12 = (__int64 *)qword_18015B590;
  if ( (__int64 *)qword_18015B590 == &qword_18015B590 )
  {
LABEL_10:
    sub_1800D4AE8();
    v13 = sub_1800385D0((PUNICODE_STRING)&stru_1801112F8, 0LL, 0, (__int64)&BaseAddress, 0LL);
    v11 = v13;
    if ( v13 < 0 )
    {
      if ( v13 != -1073741515 )
        return (unsigned int)v11;
      v14 = (void *)qword_18015B5D0;
    }
    else
    {
      v14 = (void *)*((_QWORD *)BaseAddress + 6);
      sub_18001F5FC((char *)BaseAddress);
    }
    ProcedureAddressForCaller = LdrGetProcedureAddressForCaller(
                                  v14,
                                  (PANSI_STRING)&stru_180111308,
                                  0,
                                  &ProcedureAddress,
                                  1u,
                                  Callback);
    sub_1800259B4(0);
    if ( ProcedureAddressForCaller >= 0 )
    {
      qword_18016F290 = __ROR8__((unsigned __int64)ProcedureAddress ^ MEMORY[0x7FFE0330], MEMORY[0x7FFE0330] & 0x3F);
      byte_18016F299 = 1;
    }
    byte_18016F298 = 1;
    byte_18016F29A = 1;
    sub_1800259B4(1);
    sub_1800D57D0();
    for ( i = (__int64 *)qword_18015B590; i != &qword_18015B590; i = (__int64 *)*i )
    {
      v17 = i[4];
      v56 = 0;
      v11 = sub_180054D18(*(_QWORD *)(v17 + 152), 0LL, &v56);
      if ( v11 < 0 )
        return (unsigned int)v11;
    }
    if ( (dword_18015D498 & 8) != 0 )
    {
      DbgPrint("AVRF: -*- final list of providers -*- \n");
      v18 = (__int64 *)qword_18015B590;
      while ( v18 != &qword_18015B590 )
      {
        v19 = v18[3];
        v18 = (__int64 *)*v18;
        DbgPrint("AVRF: provider %ws \n", v19);
      }
    }
    sub_1800D5A4C();
    RtlImageNtHeaderEx(3u, v9->ImageBaseAddress, 0LL, &OutHeaders);
    return 0;
  }
  while ( (unsigned __int8)sub_1800D51FC(v12) )
  {
    v12 = (__int64 *)*v12;
    if ( v12 == &qword_18015B590 )
      goto LABEL_10;
  }
  return (unsigned int)-1073741502;
}
