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

int __fastcall sub_180089798(__int64 a1, __int64 a2)
{
  struct _PEB *v2; // rax
  int v5; // ecx
  int v6; // r9d
  __int64 v7; // rax
  int v9; // [rsp+30h] [rbp-69h] BYREF
  int v10; // [rsp+34h] [rbp-65h] BYREF
  __int64 v11; // [rsp+38h] [rbp-61h] BYREF
  __int64 v12; // [rsp+40h] [rbp-59h] BYREF
  _BYTE v13[32]; // [rsp+50h] [rbp-49h] BYREF
  _DWORD *v14; // [rsp+70h] [rbp-29h]
  int v15; // [rsp+78h] [rbp-21h]
  int v16; // [rsp+7Ch] [rbp-1Dh]
  __int64 v17; // [rsp+80h] [rbp-19h]
  _DWORD v18[2]; // [rsp+88h] [rbp-11h] BYREF
  __int64 *v19; // [rsp+90h] [rbp-9h]
  int v20; // [rsp+98h] [rbp-1h]
  int v21; // [rsp+9Ch] [rbp+3h]
  int *v22; // [rsp+A0h] [rbp+7h]
  int v23; // [rsp+A8h] [rbp+Fh]
  int v24; // [rsp+ACh] [rbp+13h]
  int *v25; // [rsp+B0h] [rbp+17h]
  int v26; // [rsp+B8h] [rbp+1Fh]
  int v27; // [rsp+BCh] [rbp+23h]
  __int64 *v28; // [rsp+C0h] [rbp+27h]
  int v29; // [rsp+C8h] [rbp+2Fh]
  int v30; // [rsp+CCh] [rbp+33h]

  v2 = NtCurrentPeb();
  if ( v2->ProcessHeap )
  {
    LODWORD(v2) = RtlRunOnceExecuteOnce(&stru_18015C048, sub_18008AB00, 0LL, 0LL);
    if ( (unsigned int)dword_1801554C0 > 5 )
    {
      LODWORD(v2) = sub_1800898DC(&dword_1801554C0, 0x200000000000LL);
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
        LODWORD(v2) = sub_1800905E4(v5, (int)&dword_18012417C, 8, v6, 8u, (PEVENT_DATA_DESCRIPTOR)v13);
      }
    }
  }
  return (int)v2;
}
