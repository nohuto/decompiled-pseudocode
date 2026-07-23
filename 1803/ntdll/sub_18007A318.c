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

int __fastcall sub_18007A318(__int64 a1, __int64 a2)
{
  struct _PEB *v2; // rax
  int v5; // ecx
  int v6; // r9d
  __int64 v7; // rax
  int v9; // [rsp+30h] [rbp-59h] BYREF
  int v10; // [rsp+34h] [rbp-55h] BYREF
  __int64 v11; // [rsp+38h] [rbp-51h] BYREF
  __int64 v12; // [rsp+40h] [rbp-49h] BYREF
  _BYTE v13[32]; // [rsp+50h] [rbp-39h] BYREF
  _DWORD *v14; // [rsp+70h] [rbp-19h]
  int v15; // [rsp+78h] [rbp-11h]
  int v16; // [rsp+7Ch] [rbp-Dh]
  __int64 v17; // [rsp+80h] [rbp-9h]
  _DWORD v18[2]; // [rsp+88h] [rbp-1h] BYREF
  __int64 *v19; // [rsp+90h] [rbp+7h]
  int v20; // [rsp+98h] [rbp+Fh]
  int v21; // [rsp+9Ch] [rbp+13h]
  int *v22; // [rsp+A0h] [rbp+17h]
  int v23; // [rsp+A8h] [rbp+1Fh]
  int v24; // [rsp+ACh] [rbp+23h]
  int *v25; // [rsp+B0h] [rbp+27h]
  int v26; // [rsp+B8h] [rbp+2Fh]
  int v27; // [rsp+BCh] [rbp+33h]
  __int64 *v28; // [rsp+C0h] [rbp+37h]
  int v29; // [rsp+C8h] [rbp+3Fh]
  int v30; // [rsp+CCh] [rbp+43h]

  v2 = NtCurrentPeb();
  if ( v2->ProcessHeap )
  {
    LODWORD(v2) = RtlRunOnceExecuteOnce(&stru_18015D078, sub_180083830, 0LL, 0LL);
    if ( (unsigned int)dword_1801564F0 > 5 )
    {
      LODWORD(v2) = sub_18007A45C(&dword_1801564F0, 0x200000000000LL);
      if ( (_BYTE)v2 )
      {
        v7 = *(unsigned int *)(a1 + 128);
        v16 = 0;
        v18[1] = 0;
        v21 = 0;
        v24 = 0;
        v27 = 0;
        v30 = 0;
        v11 = v7;
        v9 = *(unsigned __int16 *)(a2 + 68);
        v10 = *(unsigned __int16 *)(a2 + 70);
        v12 = *(unsigned int *)(a2 + 88);
        v14 = v18;
        v17 = *(_QWORD *)(a1 + 80);
        v18[0] = *(unsigned __int16 *)(a1 + 72);
        v19 = &v11;
        v22 = &v9;
        v25 = &v10;
        v28 = &v12;
        v15 = 2;
        v20 = 8;
        v23 = 4;
        v26 = 4;
        v29 = 8;
        LODWORD(v2) = sub_1800886A4(v5, (int)&dword_180123826, 8, v6, 8u, (PEVENT_DATA_DESCRIPTOR)v13);
      }
    }
  }
  return (int)v2;
}
