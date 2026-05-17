/*
 * XREFs of sub_180089798 @ 0x180089798
 * Callers:
 *     sub_180039F38 @ 0x180039F38 (sub_180039F38.c)
 * Callees:
 *     RtlRunOnceExecuteOnce @ 0x18001B510 (RtlRunOnceExecuteOnce.c)
 *     sub_1800898DC @ 0x1800898DC (sub_1800898DC.c)
 *     sub_1800905E4 @ 0x1800905E4 (sub_1800905E4.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 */

struct _PEB *__fastcall sub_180089798(__int64 a1, __int64 a2)
{
  struct _PEB *result; // rax
  int v5; // ecx
  int v6; // r9d
  __int64 v7; // rax
  int v8; // [rsp+30h] [rbp-69h] BYREF
  int v9; // [rsp+34h] [rbp-65h] BYREF
  __int64 v10; // [rsp+38h] [rbp-61h] BYREF
  __int64 v11; // [rsp+40h] [rbp-59h] BYREF
  _BYTE v12[32]; // [rsp+50h] [rbp-49h] BYREF
  _DWORD *v13; // [rsp+70h] [rbp-29h]
  int v14; // [rsp+78h] [rbp-21h]
  int v15; // [rsp+7Ch] [rbp-1Dh]
  __int64 v16; // [rsp+80h] [rbp-19h]
  _DWORD v17[2]; // [rsp+88h] [rbp-11h] BYREF
  __int64 *v18; // [rsp+90h] [rbp-9h]
  int v19; // [rsp+98h] [rbp-1h]
  int v20; // [rsp+9Ch] [rbp+3h]
  int *v21; // [rsp+A0h] [rbp+7h]
  int v22; // [rsp+A8h] [rbp+Fh]
  int v23; // [rsp+ACh] [rbp+13h]
  int *v24; // [rsp+B0h] [rbp+17h]
  int v25; // [rsp+B8h] [rbp+1Fh]
  int v26; // [rsp+BCh] [rbp+23h]
  __int64 *v27; // [rsp+C0h] [rbp+27h]
  int v28; // [rsp+C8h] [rbp+2Fh]
  int v29; // [rsp+CCh] [rbp+33h]

  result = NtCurrentPeb();
  if ( result->ProcessHeap )
  {
    result = (struct _PEB *)RtlRunOnceExecuteOnce(
                              &qword_18015C048,
                              (unsigned int (__fastcall *)(volatile signed __int64 *, __int64, __int64 *))sub_18008AB00,
                              0LL,
                              0LL);
    if ( (unsigned int)dword_1801554C0 > 5 )
    {
      result = (struct _PEB *)sub_1800898DC(&dword_1801554C0, 0x200000000000LL);
      if ( (_BYTE)result )
      {
        v7 = *(unsigned int *)(a1 + 128);
        v15 = 0;
        v17[1] = 0;
        v20 = 0;
        v23 = 0;
        v26 = 0;
        v29 = 0;
        v10 = v7;
        v8 = *(unsigned __int16 *)(a2 + 68);
        v9 = *(unsigned __int16 *)(a2 + 70);
        v11 = *(unsigned int *)(a2 + 88);
        v13 = v17;
        v16 = *(_QWORD *)(a1 + 80);
        v17[0] = *(unsigned __int16 *)(a1 + 72);
        v18 = &v10;
        v21 = &v8;
        v24 = &v9;
        v27 = &v11;
        v14 = 2;
        v19 = 8;
        v22 = 4;
        v25 = 4;
        v28 = 8;
        return (struct _PEB *)sub_1800905E4(v5, (unsigned int)&unk_18012417C, 8, v6, 8, (__int64)v12);
      }
    }
  }
  return result;
}
