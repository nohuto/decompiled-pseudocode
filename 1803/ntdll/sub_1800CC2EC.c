/*
 * XREFs of sub_1800CC2EC @ 0x1800CC2EC
 * Callers:
 *     sub_180030F54 @ 0x180030F54 (sub_180030F54.c)
 * Callees:
 *     RtlRunOnceExecuteOnce @ 0x1800297E0 (RtlRunOnceExecuteOnce.c)
 *     sub_18007A45C @ 0x18007A45C (sub_18007A45C.c)
 *     sub_1800886A4 @ 0x1800886A4 (sub_1800886A4.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 */

char __fastcall sub_1800CC2EC(unsigned __int16 *a1, __int64 a2, __int64 a3)
{
  NTSTATUS v6; // eax
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int16 v11; // [rsp+38h] [rbp-49h] BYREF
  __int16 v12; // [rsp+3Ch] [rbp-45h] BYREF
  _BYTE v13[32]; // [rsp+48h] [rbp-39h] BYREF
  _DWORD *v14; // [rsp+68h] [rbp-19h]
  __int64 v15; // [rsp+70h] [rbp-11h]
  __int64 v16; // [rsp+78h] [rbp-9h]
  _DWORD v17[2]; // [rsp+80h] [rbp-1h] BYREF
  __int16 *v18; // [rsp+88h] [rbp+7h]
  __int64 v19; // [rsp+90h] [rbp+Fh]
  __int64 v20; // [rsp+98h] [rbp+17h]
  __int64 v21; // [rsp+A0h] [rbp+1Fh]
  __int16 *v22; // [rsp+A8h] [rbp+27h]
  __int64 v23; // [rsp+B0h] [rbp+2Fh]
  __int64 v24; // [rsp+B8h] [rbp+37h]
  __int64 v25; // [rsp+C0h] [rbp+3Fh]

  v6 = RtlRunOnceExecuteOnce(&stru_18015D080, (PRTL_RUN_ONCE_INIT_FN)sub_180082590, 0LL, 0LL);
  if ( v6 >= 0 && (unsigned int)dword_180156530 > 5 )
  {
    LOBYTE(v6) = sub_18007A45C((__int64)&dword_180156530, 0x200000000000LL);
    if ( (_BYTE)v6 )
    {
      v15 = 2LL;
      v11 = v9 + 4;
      v12 = v9 + 4;
      v14 = v17;
      v16 = *((_QWORD *)a1 + 1);
      v17[0] = *a1;
      v18 = &v11;
      v22 = &v12;
      v17[1] = v9;
      v19 = 2LL;
      v20 = a2;
      v21 = 16LL;
      v23 = 2LL;
      v24 = a3;
      v25 = 16LL;
      LOBYTE(v6) = sub_1800886A4(v7, (unsigned __int8 *)dword_18012371D, v8, v9, 8u, (PEVENT_DATA_DESCRIPTOR)v13);
    }
  }
  return v6;
}
