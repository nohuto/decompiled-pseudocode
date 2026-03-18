/*
 * XREFs of HUBHTX_GetPortLostChangeEvent @ 0x1C000486C
 * Callers:
 *     HUBPSM20_GettingPortLostChangesOnStart @ 0x1C000F470 (HUBPSM20_GettingPortLostChangesOnStart.c)
 * Callees:
 *     McTemplateK0qhhhqhhh @ 0x1C0001C70 (McTemplateK0qhhhqhhh.c)
 *     WPP_RECORDER_SF_dDDD @ 0x1C00027D0 (WPP_RECORDER_SF_dDDD.c)
 *     HUBMISC_VerifierDbgBreak @ 0x1C002A814 (HUBMISC_VerifierDbgBreak.c)
 *     HUBREG_UpdateSqmHubOvercurrentDetected @ 0x1C002BCB0 (HUBREG_UpdateSqmHubOvercurrentDetected.c)
 *     _guard_dispatch_icall_nop @ 0x1C0038E70 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBHTX_GetPortLostChangeEvent(_QWORD *a1, __int64 a2)
{
  _WORD *v2; // rax
  unsigned __int16 v3; // bx
  unsigned __int16 v5; // di
  unsigned __int16 v6; // si
  __int16 v7; // r13
  __int16 v8; // r12
  __int16 v9; // r15
  __int16 v10; // cx
  unsigned int v11; // ebp
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v18; // [rsp+28h] [rbp-60h]
  __int64 v19; // [rsp+30h] [rbp-58h]
  __int64 v20; // [rsp+38h] [rbp-50h]
  __int64 v21; // [rsp+40h] [rbp-48h]

  v2 = (_WORD *)a1[166];
  v3 = *((_WORD *)a1 + 92);
  v5 = *((_WORD *)a1 + 96);
  v6 = *((_WORD *)a1 + 93);
  *((_WORD *)a1 + 96) = v3;
  if ( v2 )
    v7 = v2[998];
  else
    LOBYTE(v7) = 0;
  if ( v2 )
    v8 = v2[999];
  else
    LOBYTE(v8) = 0;
  if ( v2 )
    v9 = v2[1000];
  else
    LOBYTE(v9) = 0;
  v10 = v3 & 1;
  v11 = 3013;
  if ( v10 != (v5 & 1) )
  {
    if ( (v6 & 1) != 0 )
    {
      if ( !*((_BYTE *)a1 + 1457) )
      {
        v12 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD, _QWORD, int, const char *))(WdfFunctions_01015 + 3504))(
                WdfDriverGlobals,
                *(_QWORD *)(*a1 + 16LL),
                0LL,
                0LL,
                3718,
                "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\hubxfer.c");
        v10 = v3 & 1;
        if ( v12 >= 0 )
          *((_BYTE *)a1 + 1457) = 1;
      }
    }
    else
    {
      v11 = 3017;
    }
    goto LABEL_27;
  }
  if ( (v3 & 8) != 0 )
  {
    if ( ((v6 | v5) & 8) == 0 )
    {
      HUBREG_UpdateSqmHubOvercurrentDetected(*a1, 3LL);
      *((_DWORD *)a1 + 356) = 4;
      v11 = 3065;
LABEL_22:
      v14 = *(unsigned int *)(*a1 + 2584LL);
      if ( (v14 & 0x200) != 0 )
        HUBMISC_VerifierDbgBreak("HubHwVerifierPortOverCurrent", a1 + 34);
      if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 0x10000) != 0 )
        McTemplateK0qhhhqhhh(
          v14,
          v13,
          (const GUID *)(*a1 + 2404LL),
          *((unsigned __int16 *)a1 + 100),
          v5,
          v3,
          v6,
          v11,
          v7,
          v8,
          v9);
      v10 = v3 & 1;
      goto LABEL_27;
    }
  }
  else if ( (v5 & 8) != 0 && (v6 & 8) == 0 )
  {
    HUBREG_UpdateSqmHubOvercurrentDetected(*a1, a2);
    v11 = 3069;
    *((_DWORD *)a1 + 356) = 0;
    goto LABEL_22;
  }
  if ( (v3 & 2) != 0 || (v5 & 2) == 0 || (v6 & 2) != 0 )
  {
    if ( (v3 & 4) == 0 && (v5 & 4) != 0 && (v6 & 4) == 0 )
      v11 = 3085;
  }
  else
  {
    v11 = 3029;
  }
LABEL_27:
  *((_DWORD *)a1 + 2) = v11;
  if ( v11 == 3017 && !v10 )
  {
    LODWORD(v21) = v6;
    LODWORD(v20) = v3;
    LODWORD(v19) = v5;
    LODWORD(v18) = *((unsigned __int16 *)a1 + 100);
    WPP_RECORDER_SF_dDDD(
      a1[179],
      v5,
      4u,
      0x55u,
      (__int64)&WPP_c9133184bb0b3c65ec7754ef3e1e0957_Traceguids,
      v18,
      v19,
      v20,
      v21);
    if ( (*(_DWORD *)(*a1 + 2584LL) & 0x400) != 0 )
      HUBMISC_VerifierDbgBreak("HubHwVerifierPortDeviceDisconnected", a1 + 34);
    if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 0x10000) != 0 )
      McTemplateK0qhhhqhhh(
        v16,
        v15,
        (const GUID *)(*a1 + 2404LL),
        *((unsigned __int16 *)a1 + 100),
        v5,
        v3,
        v6,
        201,
        v7,
        v8,
        v9);
  }
  return v11;
}
