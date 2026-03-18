/*
 * XREFs of HUBDESC_ValidateMsOs20FunctionSubset @ 0x1C0034760
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00019D4 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001DC8 (WPP_RECORDER_SF_.c)
 *     HUBDESC_GetNextMsOs20Descriptor @ 0x1C0034370 (HUBDESC_GetNextMsOs20Descriptor.c)
 *     __security_check_cookie @ 0x1C00396C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0039BA0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0039F00 (memset.c)
 */

char __fastcall HUBDESC_ValidateMsOs20FunctionSubset(__int64 a1, __int64 a2, unsigned __int16 *a3, unsigned __int64 a4)
{
  char v8; // r14
  __int64 v9; // rdx
  unsigned __int16 v11; // cx
  unsigned __int64 v12; // r12
  unsigned __int16 *v13; // r15
  unsigned __int8 (__fastcall *v14)(__int64, _BYTE *, unsigned __int16 *, unsigned __int64); // r13
  __int64 v15; // [rsp+28h] [rbp-D0h]
  unsigned __int16 *v16; // [rsp+30h] [rbp-C8h] BYREF
  _BYTE v17[112]; // [rsp+40h] [rbp-B8h] BYREF

  v8 = 0;
  memset(v17, 0, 0x68uLL);
  if ( *a3 != 8 )
  {
    WPP_RECORDER_SF_d(
      *(_QWORD *)(a2 + 96),
      2u,
      5u,
      0x136u,
      (__int64)&WPP_6a2c9542c6d8380783208b53af0e836a_Traceguids,
      *a3);
    v9 = 161LL;
LABEL_3:
    (*(void (__fastcall **)(_QWORD, __int64))(a1 + 24))(*(_QWORD *)(a1 + 40), v9);
    goto LABEL_4;
  }
  v11 = a3[3];
  if ( v11 < 0xCu )
  {
    WPP_RECORDER_SF_d(
      *(_QWORD *)(a2 + 96),
      2u,
      5u,
      0x137u,
      (__int64)&WPP_6a2c9542c6d8380783208b53af0e836a_Traceguids,
      v11);
    v9 = 162LL;
    goto LABEL_3;
  }
  v12 = (unsigned __int64)a3 + v11;
  if ( v12 > a4 )
  {
    WPP_RECORDER_SF_d(
      *(_QWORD *)(a2 + 96),
      2u,
      5u,
      0x138u,
      (__int64)&WPP_6a2c9542c6d8380783208b53af0e836a_Traceguids,
      v11);
    v9 = 163LL;
    goto LABEL_3;
  }
  v13 = a3 + 4;
  v16 = v13;
  v8 = 1;
  while ( 1 )
  {
    if ( v13[1] >= 9u )
    {
      LODWORD(v15) = v13[1];
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a2 + 96),
        2u,
        5u,
        0x13Au,
        (__int64)&WPP_6a2c9542c6d8380783208b53af0e836a_Traceguids,
        v15);
    }
    else
    {
      v14 = (unsigned __int8 (__fastcall *)(__int64, _BYTE *, unsigned __int16 *, unsigned __int64))*(&MsOs20DispatchTable + 2 * v13[1]);
      if ( !*((_BYTE *)&MsOs20DispatchTable + 16 * v13[1] + 9) )
      {
        LODWORD(v15) = v13[1];
        WPP_RECORDER_SF_d(
          *(_QWORD *)(a2 + 96),
          2u,
          5u,
          0x139u,
          (__int64)&WPP_6a2c9542c6d8380783208b53af0e836a_Traceguids,
          v15);
        (*(void (__fastcall **)(_QWORD, __int64))(a1 + 24))(*(_QWORD *)(a1 + 40), 164LL);
        v8 = 0;
      }
      if ( !v14(a1, v17, v13, v12) )
        v8 = 0;
    }
    if ( !HUBDESC_GetNextMsOs20Descriptor(v12, &v16) )
      break;
    v13 = v16;
    if ( !v16 )
      goto LABEL_21;
  }
  WPP_RECORDER_SF_(*(_QWORD *)(a2 + 96), 2u, 5u, 0x13Bu, (__int64)&WPP_6a2c9542c6d8380783208b53af0e836a_Traceguids);
  (*(void (__fastcall **)(_QWORD, __int64))(a1 + 24))(*(_QWORD *)(a1 + 40), 165LL);
  v8 = 0;
LABEL_21:
  if ( v8 == 1 )
  {
    *(_DWORD *)a2 |= 0x10u;
    return v8;
  }
LABEL_4:
  WPP_RECORDER_SF_(*(_QWORD *)(a2 + 96), 2u, 5u, 0x13Cu, (__int64)&WPP_6a2c9542c6d8380783208b53af0e836a_Traceguids);
  return v8;
}
