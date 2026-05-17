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

__int64 __fastcall sub_1800D3DA8(void *ProcessHeap, __int64 a2, __int64 a3, int a4, __int64 a5, _QWORD *a6)
{
  unsigned __int64 v6; // rsi
  _QWORD *v7; // rdi
  struct _PEB *v9; // r14
  char v10; // r15
  int v11; // ebx
  __int64 *v12; // rbx
  int v13; // eax
  unsigned __int64 v14; // rbx
  int ProcedureAddressForCaller; // ebx
  __int64 *i; // rdi
  __int64 v17; // rax
  __int64 *v18; // rbx
  __int64 v19; // rdx
  unsigned int NtGlobalFlag; // r11d
  int v21; // r13d
  int v22; // ebx
  char *v23; // rbx
  int ValueKey; // eax
  unsigned __int64 v25; // r14
  __int64 Heap; // rax
  int v27; // eax
  unsigned int v28; // eax
  char *v29; // rbx
  int v30; // eax
  unsigned __int64 v31; // r14
  void *v32; // rcx
  __int64 v33; // rax
  int v34; // eax
  int v35; // ecx
  unsigned int v36; // eax
  char *v37; // rbx
  int v38; // eax
  unsigned __int64 v39; // rdi
  int v40; // ecx
  void *v41; // rcx
  __int64 v42; // rax
  int v43; // eax
  unsigned int v44; // eax
  char *v45; // rbx
  int v46; // eax
  __int64 v47; // rax
  int v48; // eax
  size_t v49; // rax
  __int64 v51; // [rsp+20h] [rbp-E0h]
  char v52; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE v53[3]; // [rsp+39h] [rbp-C7h] BYREF
  unsigned int v54; // [rsp+3Ch] [rbp-C4h]
  unsigned int v55; // [rsp+40h] [rbp-C0h]
  unsigned int v56; // [rsp+44h] [rbp-BCh]
  unsigned int v57; // [rsp+48h] [rbp-B8h]
  int v58[3]; // [rsp+4Ch] [rbp-B4h] BYREF
  unsigned __int16 v59[4]; // [rsp+58h] [rbp-A8h] BYREF
  _DWORD *v60; // [rsp+60h] [rbp-A0h]
  unsigned __int16 v61[4]; // [rsp+68h] [rbp-98h] BYREF
  _DWORD *v62; // [rsp+70h] [rbp-90h]
  unsigned __int16 v63[4]; // [rsp+78h] [rbp-88h] BYREF
  _DWORD *v64; // [rsp+80h] [rbp-80h]
  unsigned __int64 v65; // [rsp+88h] [rbp-78h] BYREF
  __int64 v66; // [rsp+90h] [rbp-70h] BYREF
  __int64 v67; // [rsp+98h] [rbp-68h]
  __int64 v68; // [rsp+A0h] [rbp-60h]
  _BYTE v69[16]; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v70; // [rsp+B8h] [rbp-48h] BYREF
  char v71; // [rsp+C0h] [rbp-40h] BYREF
  char v72; // [rsp+4C0h] [rbp+3C0h] BYREF
  char v73; // [rsp+8C0h] [rbp+7C0h] BYREF
  char v74; // [rsp+CC0h] [rbp+BC0h] BYREF
  __int64 retaddr; // [rsp+1108h] [rbp+1008h]

  v6 = 0LL;
  v7 = a6;
  v9 = NtCurrentPeb();
  v10 = (char)ProcessHeap;
  v68 = a2;
  v67 = a5;
  v58[0] = 0;
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
    if ( a3 && (int)RtlInitUnicodeStringEx((__int64)v59, (__int64)L"VerifierFlags") >= 0 )
    {
      v23 = &v71;
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
            Heap = RtlAllocateHeap((__int64)ProcessHeap, dword_18015C294 + 1572864, v54);
            v25 = Heap;
            if ( !Heap )
              break;
            v23 = (char *)Heap;
            v27 = ZwQueryValueKey();
            if ( v27 >= 0 )
            {
              v7 = a6;
              goto LABEL_47;
            }
            if ( v27 != -2147483643 )
            {
              v7 = a6;
              goto LABEL_57;
            }
            RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)v23);
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
              v54 = 4;
              v58[0] = *((_DWORD *)v23 + 3);
            }
          }
          else if ( (_DWORD)ProcessHeap == 1 && ((unsigned __int8)v58 & 3) == 0 )
          {
            v54 = 4;
            v60 = v23 + 12;
            v59[0] = *((_WORD *)v23 + 4);
            v59[1] = *((_WORD *)v23 + 4);
            RtlUnicodeStringToInteger(v59, 0, v58);
          }
        }
        else if ( (_DWORD)ProcessHeap == 4 )
        {
          v54 = *((_DWORD *)v23 + 2);
          v28 = *((_DWORD *)v23 + 2);
          if ( v28 <= 4 )
            memmove(v58, v23 + 12, v28);
        }
LABEL_57:
        if ( v25 )
          RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v25);
        LOBYTE(v22) = v58[0];
        if ( v58[0] )
        {
          dword_18015B300 = v58[0];
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
    if ( (v22 & 4) != 0 && (int)RtlInitUnicodeStringEx((__int64)v61, (__int64)L"HandleTraces") >= 0 )
    {
      v29 = &v72;
      v30 = ZwQueryValueKey();
      if ( v30 < 0 )
      {
        if ( v30 == -2147483643 )
        {
          while ( 1 )
          {
            v32 = NtCurrentPeb()->ProcessHeap;
            if ( !v32 )
              break;
            v33 = RtlAllocateHeap((__int64)v32, dword_18015C294 + 1572864, v55);
            v31 = v33;
            if ( !v33 )
              break;
            v29 = (char *)v33;
            v34 = ZwQueryValueKey();
            if ( v34 >= 0 )
            {
              v7 = a6;
              goto LABEL_77;
            }
            if ( v34 != -2147483643 )
            {
              v7 = a6;
              goto LABEL_88;
            }
            RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)v29);
          }
          v7 = a6;
        }
      }
      else
      {
        v31 = 0LL;
LABEL_77:
        v35 = *((_DWORD *)v29 + 1);
        if ( ((v35 - 3) & 0xFFFFFFFB) != 0 )
        {
          if ( v35 == 4 )
          {
            if ( *((_DWORD *)v29 + 2) == 4 )
            {
              v55 = 4;
              dword_18015D494 = *((_DWORD *)v29 + 3);
            }
          }
          else if ( v35 == 1 && ((unsigned __int8)&dword_18015D494 & 3) == 0 )
          {
            v55 = 4;
            v62 = v29 + 12;
            v61[0] = *((_WORD *)v29 + 4);
            v61[1] = *((_WORD *)v29 + 4);
            RtlUnicodeStringToInteger(v61, 0, &dword_18015D494);
          }
        }
        else if ( v35 == 4 )
        {
          v55 = *((_DWORD *)v29 + 2);
          v36 = *((_DWORD *)v29 + 2);
          if ( v36 <= 4 )
            memmove(&dword_18015D494, v29 + 12, v36);
        }
LABEL_88:
        if ( v31 )
          RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v31);
      }
    }
    if ( (int)RtlInitUnicodeStringEx((__int64)v63, (__int64)L"VerifierDebug") >= 0 )
    {
      v37 = &v73;
      v38 = ZwQueryValueKey();
      if ( v38 < 0 )
      {
        if ( v38 != -2147483643 )
          goto LABEL_113;
        while ( 1 )
        {
          v41 = NtCurrentPeb()->ProcessHeap;
          if ( !v41 )
            break;
          v42 = RtlAllocateHeap((__int64)v41, dword_18015C294 + 1572864, v56);
          v39 = v42;
          if ( !v42 )
            break;
          v37 = (char *)v42;
          v43 = ZwQueryValueKey();
          if ( v43 >= 0 )
            goto LABEL_94;
          if ( v43 != -2147483643 )
            goto LABEL_110;
          RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)v37);
        }
      }
      else
      {
        v39 = 0LL;
LABEL_94:
        v40 = *((_DWORD *)v37 + 1);
        if ( ((v40 - 3) & 0xFFFFFFFB) != 0 )
        {
          if ( v40 == 4 )
          {
            if ( *((_DWORD *)v37 + 2) == 4 )
            {
              v56 = 4;
              dword_18015D498 = *((_DWORD *)v37 + 3);
            }
          }
          else if ( v40 == 1 && ((unsigned __int8)&dword_18015D498 & 3) == 0 )
          {
            v56 = 4;
            v64 = v37 + 12;
            v63[0] = *((_WORD *)v37 + 4);
            v63[1] = *((_WORD *)v37 + 4);
            RtlUnicodeStringToInteger(v63, 0, &dword_18015D498);
          }
        }
        else if ( v40 == 4 )
        {
          v56 = *((_DWORD *)v37 + 2);
          v44 = *((_DWORD *)v37 + 2);
          if ( v44 <= 4 )
            memmove(&dword_18015D498, v37 + 12, v44);
        }
LABEL_110:
        if ( v39 )
          RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v39);
      }
      v7 = a6;
    }
LABEL_113:
    if ( (int)RtlInitUnicodeStringEx((__int64)v69, (__int64)L"VerifierDlls") >= 0 )
    {
      v45 = &v74;
      v46 = ZwQueryValueKey();
      if ( v46 < 0 )
      {
        if ( v46 == -2147483643 )
        {
          while ( 1 )
          {
            ProcessHeap = NtCurrentPeb()->ProcessHeap;
            if ( !ProcessHeap )
              break;
            v47 = RtlAllocateHeap((__int64)ProcessHeap, dword_18015C294 + 1572864, v57);
            v6 = v47;
            if ( !v47 )
              break;
            v45 = (char *)v47;
            v48 = ZwQueryValueKey();
            if ( v48 >= 0 )
            {
              v7 = a6;
              goto LABEL_122;
            }
            if ( v48 != -2147483643 )
            {
              v7 = a6;
              goto LABEL_130;
            }
            RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)v45);
          }
          v7 = a6;
        }
        goto LABEL_133;
      }
LABEL_122:
      LODWORD(ProcessHeap) = *((_DWORD *)v45 + 1);
      if ( (((_DWORD)ProcessHeap - 3) & 0xFFFFFFFB) != 0 )
      {
        if ( (_DWORD)ProcessHeap == 1 )
        {
          v49 = *((unsigned int *)v45 + 2);
          v57 = *((_DWORD *)v45 + 2);
          goto LABEL_127;
        }
      }
      else if ( (_DWORD)ProcessHeap == 1 )
      {
        v57 = *((_DWORD *)v45 + 2);
        v49 = *((unsigned int *)v45 + 2);
LABEL_127:
        if ( (unsigned int)v49 <= 0x200 )
          memmove(&word_18015B320, v45 + 12, v49);
      }
LABEL_130:
      if ( v6 )
        RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v6);
    }
LABEL_133:
    v11 = sub_1800D5B04((_BYTE)ProcessHeap, v68, a3, v67, (__int64)&unk_18015B5A0);
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
  v11 = RtlInitializeCriticalSectionEx((__int64)&unk_18015B560, 0, 0);
  if ( v11 < 0 )
    return (unsigned int)v11;
  if ( dword_18016F29C == 2 )
  {
    v53[0] = 0;
    v11 = sub_180054D18((__int64)&unk_18015B6C0, 0LL, v53);
    if ( v11 < 0 )
      return (unsigned int)v11;
    return 0;
  }
  DbgPrintEx(
    93,
    0,
    (int)"AVRF: %ws: pid 0x%X: flags 0x%X: application verifier enabled\n",
    *(_QWORD *)(qword_18015C370 + 96),
    LODWORD(NtCurrentTeb()->ClientId.UniqueProcess),
    dword_18015B300);
  if ( (int)sub_1800D5528() < 0 )
  {
    LODWORD(v51) = NtCurrentTeb()->ClientId.UniqueProcess;
    DbgPrintEx(
      93,
      0,
      (int)"AVRF: %ws: pid 0x%X: application verifier will be disabled due to an initialization error.\n",
      *(_QWORD *)(qword_18015C370 + 96),
      v51);
    v11 = -1073741823;
    NtCurrentPeb()->NtGlobalFlag = NtCurrentPeb()->NtGlobalFlag & 0xFFFFFEFF;
    return (unsigned int)v11;
  }
  v12 = (__int64 *)qword_18015B590;
  if ( (__int64 *)qword_18015B590 == &qword_18015B590 )
  {
LABEL_10:
    sub_1800D4AE8();
    v13 = sub_1800385D0(word_1801112F8, 0LL, 0LL, (unsigned __int16 *)&v65, 0LL);
    v11 = v13;
    if ( v13 < 0 )
    {
      if ( v13 != -1073741515 )
        return (unsigned int)v11;
      v14 = qword_18015B5D0;
    }
    else
    {
      v14 = *(_QWORD *)(v65 + 48);
      sub_18001F5FC(v65);
    }
    ProcedureAddressForCaller = LdrGetProcedureAddressForCaller(v14, &qword_180111308, 0, &v66, 1, retaddr);
    sub_1800259B4(0);
    if ( ProcedureAddressForCaller >= 0 )
    {
      qword_18016F290 = __ROR8__(v66 ^ MEMORY[0x7FFE0330], MEMORY[0x7FFE0330] & 0x3F);
      byte_18016F299 = 1;
    }
    byte_18016F298 = 1;
    byte_18016F29A = 1;
    sub_1800259B4(1);
    sub_1800D57D0();
    for ( i = (__int64 *)qword_18015B590; i != &qword_18015B590; i = (__int64 *)*i )
    {
      v17 = i[4];
      v52 = 0;
      v11 = sub_180054D18(*(_QWORD *)(v17 + 152), 0LL, &v52);
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
    RtlImageNtHeaderEx(3, (unsigned __int64)v9->ImageBaseAddress, 0LL, &v70);
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
