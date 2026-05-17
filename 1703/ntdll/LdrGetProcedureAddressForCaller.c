/*
 * XREFs of LdrGetProcedureAddressForCaller @ 0x1800303B0
 * Callers:
 *     CsrClientConnectToServer @ 0x18000B620 (CsrClientConnectToServer.c)
 *     LdrGetProcedureAddressEx @ 0x18006F800 (LdrGetProcedureAddressEx.c)
 *     sub_18007FE68 @ 0x18007FE68 (sub_18007FE68.c)
 *     LdrGetProcedureAddress @ 0x1800855F0 (LdrGetProcedureAddress.c)
 *     sub_180085C94 @ 0x180085C94 (sub_180085C94.c)
 *     sub_180091AB4 @ 0x180091AB4 (sub_180091AB4.c)
 *     RtlWow64LogMessageInEventLogger @ 0x1800D8D70 (RtlWow64LogMessageInEventLogger.c)
 *     sub_1800DA690 @ 0x1800DA690 (sub_1800DA690.c)
 *     sub_1800DB44C @ 0x1800DB44C (sub_1800DB44C.c)
 *     sub_1800DC28C @ 0x1800DC28C (sub_1800DC28C.c)
 * Callees:
 *     sub_1800014DC @ 0x1800014DC (sub_1800014DC.c)
 *     sub_18000159C @ 0x18000159C (sub_18000159C.c)
 *     sub_18001A338 @ 0x18001A338 (sub_18001A338.c)
 *     sub_18001AE14 @ 0x18001AE14 (sub_18001AE14.c)
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180029F40 (RtlAllocateHeap.c)
 *     sub_180030138 @ 0x180030138 (sub_180030138.c)
 *     sub_18003015C @ 0x18003015C (sub_18003015C.c)
 *     sub_180030264 @ 0x180030264 (sub_180030264.c)
 *     sub_18003076C @ 0x18003076C (sub_18003076C.c)
 *     sub_18006FC38 @ 0x18006FC38 (sub_18006FC38.c)
 *     sub_18007D2A4 @ 0x18007D2A4 (sub_18007D2A4.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     _guard_dispatch_icall_nop @ 0x1800A8C20 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1800ABA80 (memmove.c)
 *     sub_1800DA4EC @ 0x1800DA4EC (sub_1800DA4EC.c)
 */

__int64 __fastcall LdrGetProcedureAddressForCaller(
        unsigned __int64 a1,
        const void **a2,
        unsigned int a3,
        __int64 *a4,
        char a5,
        __int64 a6)
{
  int v8; // r15d
  size_t v9; // r14
  unsigned int v10; // edi
  unsigned __int64 Heap; // rsi
  int v12; // ebx
  int v13; // edi
  unsigned __int64 v14; // r14
  unsigned int v15; // r15d
  __int64 v16; // rdi
  __int64 v17; // rdi
  __int64 v19; // [rsp+20h] [rbp-E0h]
  char v20; // [rsp+30h] [rbp-D0h]
  char v21[7]; // [rsp+31h] [rbp-CFh] BYREF
  __int64 v22; // [rsp+38h] [rbp-C8h] BYREF
  int v23; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v24; // [rsp+44h] [rbp-BCh]
  unsigned __int64 v25; // [rsp+48h] [rbp-B8h] BYREF
  int v26; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v27; // [rsp+58h] [rbp-A8h]
  __int64 v28; // [rsp+60h] [rbp-A0h] BYREF
  int v29; // [rsp+68h] [rbp-98h] BYREF
  __int64 *v30; // [rsp+70h] [rbp-90h]
  char v31; // [rsp+80h] [rbp-80h] BYREF

  v30 = a4;
  v24 = a3;
  v27 = a6;
  v22 = 0LL;
  v20 = 0;
  if ( (a5 & 1) == 0 || (v8 = 6, (HANDLE)qword_180155590 != NtCurrentTeb()->ClientId.UniqueThread) )
    v8 = 9;
  if ( !a2 )
  {
    Heap = 0LL;
    goto LABEL_6;
  }
  v9 = *(unsigned __int16 *)a2;
  v10 = v9 + 1;
  if ( *((unsigned __int16 *)a2 + 1) < (unsigned int)(v9 + 1) || (Heap = (unsigned __int64)a2[1], *(_BYTE *)(v9 + Heap)) )
  {
    if ( v10 <= 0x80 )
    {
      Heap = (unsigned __int64)&v31;
    }
    else
    {
      Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, dword_18015B268 + 1572864, v10);
      if ( !Heap )
        return 3221225626LL;
      v20 = 1;
    }
    memmove((void *)Heap, a2[1], v9);
    *(_BYTE *)((unsigned int)v9 + Heap) = 0;
  }
LABEL_6:
  while ( 1 )
  {
    v12 = sub_180030264(a1, (__int64 *)&v25, &v23);
    if ( v12 < 0 || (NtCurrentTeb()->SameTebFlags & 0x1000) != 0 )
      break;
    v13 = v23;
    if ( v23 >= v8 )
      goto LABEL_9;
    sub_18003015C(v25);
    sub_18001AE14(0);
    sub_18001A338();
  }
  v13 = v23;
LABEL_9:
  v14 = v25;
  v15 = v24;
  if ( v25 )
  {
    v12 = sub_18003076C(v25, Heap, v24, 1, (__int64)&v22);
    if ( v12 >= 0 )
    {
      if ( v13 == 7 && (a5 & 1) == 0 )
      {
        if ( (NtCurrentTeb()->SameTebFlags & 0x1000) == 0
          || (HANDLE)qword_180155590 == NtCurrentTeb()->ClientId.UniqueThread )
        {
          v14 = v25;
        }
        else
        {
          v14 = v25;
          v21[0] = 0;
          v12 = sub_18006FC38(*(_QWORD *)(v25 + 152), 0LL, v21);
        }
      }
      if ( v12 < 0 )
      {
        v17 = 0LL;
        v22 = 0LL;
LABEL_17:
        if ( v12 == -1073741515 || v12 == -1073741502 )
          v12 = -1073741702;
        sub_18003015C(v14);
        goto LABEL_20;
      }
      v16 = v27;
      if ( byte_18016B280 )
        sub_1800DA4EC(v27, *(_QWORD *)(v14 + 48), v22, 0, (__int64)&v22);
      if ( byte_18015BF54 )
      {
        v28 = 0LL;
        v19 = v16;
        v17 = v22;
        ((void (__fastcall *)(__int64 *, unsigned __int64, __int64, _QWORD, __int64))(MEMORY[0x7FFE0330] ^ __ROR8__(qword_18016B1E0, 64 - (MEMORY[0x7FFE0330] & 0x3Fu))))(
          &v28,
          v14,
          v22,
          0LL,
          v19);
        if ( v28 )
          v17 = v28;
        v22 = v17;
        goto LABEL_17;
      }
    }
    v17 = v22;
    goto LABEL_17;
  }
  v17 = v22;
LABEL_20:
  if ( v12 == -1073741702 )
  {
    if ( Heap )
    {
      v12 = -1073741511;
    }
    else
    {
      v12 = -1073741512;
      Heap = v15;
    }
    sub_18007D2A4(0LL, Heap, (unsigned int)v12);
  }
  if ( v20 )
  {
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, Heap);
    v17 = v22;
  }
  if ( !dword_18015B264
    && v12 >= 0
    && sub_180030138()
    && (unsigned int)sub_1800014DC(v17, &v26) != 1
    && (v26 & 0x10) != 0 )
  {
    v12 = sub_18000159C(v17, 4u, &v29);
    if ( v12 < 0 )
      __fastfail(0x2Eu);
  }
  *v30 = v17;
  return (unsigned int)v12;
}
