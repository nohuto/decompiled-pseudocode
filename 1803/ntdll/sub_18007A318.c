/*
 * XREFs of sub_18007A318 @ 0x18007A318
 * Callers:
 *     sub_180023700 @ 0x180023700 (sub_180023700.c)
 * Callees:
 *     RtlRunOnceExecuteOnce @ 0x1800297E0 (RtlRunOnceExecuteOnce.c)
 *     sub_18007A45C @ 0x18007A45C (sub_18007A45C.c)
 *     sub_1800886A4 @ 0x1800886A4 (sub_1800886A4.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 */

struct _PEB *__fastcall sub_18007A318(__int64 a1, __int64 a2)
{
  struct _PEB *result; // rax
  int v5; // ecx
  int v6; // r9d
  __int64 v7; // rax
  int v8; // [rsp+30h] [rbp-59h] BYREF
  int v9; // [rsp+34h] [rbp-55h] BYREF
  __int64 v10; // [rsp+38h] [rbp-51h] BYREF
  __int64 v11; // [rsp+40h] [rbp-49h] BYREF
  _BYTE v12[32]; // [rsp+50h] [rbp-39h] BYREF
  _DWORD *v13; // [rsp+70h] [rbp-19h]
  int v14; // [rsp+78h] [rbp-11h]
  int v15; // [rsp+7Ch] [rbp-Dh]
  __int64 v16; // [rsp+80h] [rbp-9h]
  _DWORD v17[2]; // [rsp+88h] [rbp-1h] BYREF
  __int64 *v18; // [rsp+90h] [rbp+7h]
  int v19; // [rsp+98h] [rbp+Fh]
  int v20; // [rsp+9Ch] [rbp+13h]
  int *v21; // [rsp+A0h] [rbp+17h]
  int v22; // [rsp+A8h] [rbp+1Fh]
  int v23; // [rsp+ACh] [rbp+23h]
  int *v24; // [rsp+B0h] [rbp+27h]
  int v25; // [rsp+B8h] [rbp+2Fh]
  int v26; // [rsp+BCh] [rbp+33h]
  __int64 *v27; // [rsp+C0h] [rbp+37h]
  int v28; // [rsp+C8h] [rbp+3Fh]
  int v29; // [rsp+CCh] [rbp+43h]

  result = NtCurrentPeb();
  if ( result->ProcessHeap )
  {
    result = (struct _PEB *)RtlRunOnceExecuteOnce(
                              &qword_18015D078,
                              (unsigned int (__fastcall *)(volatile signed __int64 *, __int64, unsigned __int64 *))sub_180083830,
                              0LL,
                              0LL);
    if ( (unsigned int)dword_1801564F0 > 5 )
    {
      result = (struct _PEB *)sub_18007A45C(&dword_1801564F0, 0x200000000000LL);
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
        return (struct _PEB *)sub_1800886A4(v5, (unsigned int)&unk_180123826, 8, v6, 8, (__int64)v12);
      }
    }
  }
  return result;
}
