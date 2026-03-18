/*
 * XREFs of ExpSetSoftRebootFlags @ 0x1402B82C0
 * Callers:
 *     NtSetSystemInformation @ 0x14048D108 (NtSetSystemInformation.c)
 * Callees:
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ExpSetSoftRebootFlags(__int32 a1)
{
  __int64 result; // rax
  int v3; // edx
  signed __int32 *i; // r8
  signed __int32 v5; // ett
  unsigned __int32 v6; // edi
  _DWORD v7[2]; // [rsp+20h] [rbp-E0h] BYREF
  __int64 (__fastcall *v8)(int, int); // [rsp+28h] [rbp-D8h]
  int v9; // [rsp+30h] [rbp-D0h]
  int v10; // [rsp+34h] [rbp-CCh]
  __int64 (__fastcall *v11)(int, int); // [rsp+38h] [rbp-C8h]
  int v12; // [rsp+40h] [rbp-C0h]
  int v13; // [rsp+44h] [rbp-BCh]
  __int64 (__fastcall *v14)(int, int); // [rsp+48h] [rbp-B8h]
  int v15; // [rsp+50h] [rbp-B0h]
  int v16; // [rsp+54h] [rbp-ACh]
  __int64 (__fastcall *v17)(int, int); // [rsp+58h] [rbp-A8h]
  int v18; // [rsp+60h] [rbp-A0h]
  int v19; // [rsp+64h] [rbp-9Ch]
  __int64 (__fastcall *v20)(int, int); // [rsp+68h] [rbp-98h]
  int v21; // [rsp+70h] [rbp-90h]
  int v22; // [rsp+74h] [rbp-8Ch]
  __int64 (__fastcall *v23)(int, int); // [rsp+78h] [rbp-88h]
  int v24; // [rsp+80h] [rbp-80h]
  int v25; // [rsp+84h] [rbp-7Ch]
  __int64 (__fastcall *v26)(int, int); // [rsp+88h] [rbp-78h]
  int v27; // [rsp+90h] [rbp-70h]
  int v28; // [rsp+94h] [rbp-6Ch]
  __int64 (__fastcall *v29)(int, int); // [rsp+98h] [rbp-68h]
  int v30; // [rsp+A0h] [rbp-60h]
  int v31; // [rsp+A4h] [rbp-5Ch]
  __int64 (__fastcall *v32)(int, int); // [rsp+A8h] [rbp-58h]
  int v33; // [rsp+B0h] [rbp-50h]
  int v34; // [rsp+B4h] [rbp-4Ch]
  __int64 (__fastcall *v35)(int, int); // [rsp+B8h] [rbp-48h]
  int v36; // [rsp+C0h] [rbp-40h]
  int v37; // [rsp+C4h] [rbp-3Ch]
  __int64 (__fastcall *v38)(int, int); // [rsp+C8h] [rbp-38h]
  int v39; // [rsp+D0h] [rbp-30h]
  int v40; // [rsp+D4h] [rbp-2Ch]
  __int64 (__fastcall *v41)(int, int); // [rsp+D8h] [rbp-28h]
  int v42; // [rsp+E0h] [rbp-20h]
  int v43; // [rsp+E4h] [rbp-1Ch]
  __int64 (__fastcall *v44)(int, int); // [rsp+E8h] [rbp-18h]
  int v45; // [rsp+F0h] [rbp-10h]
  int v46; // [rsp+F4h] [rbp-Ch]
  __int64 v47; // [rsp+F8h] [rbp-8h]
  int v48; // [rsp+100h] [rbp+0h]
  int v49; // [rsp+104h] [rbp+4h]
  __int64 (__fastcall *v50)(int, int); // [rsp+108h] [rbp+8h]
  int v51; // [rsp+110h] [rbp+10h]
  int v52; // [rsp+114h] [rbp+14h]
  __int64 (__fastcall *v53)(int, int); // [rsp+118h] [rbp+18h]
  int v54; // [rsp+120h] [rbp+20h]
  int v55; // [rsp+124h] [rbp+24h]
  __int64 (__fastcall *v56)(int, int); // [rsp+128h] [rbp+28h]
  int v57; // [rsp+130h] [rbp+30h]
  int v58; // [rsp+134h] [rbp+34h]
  __int64 (__fastcall *v59)(int, int); // [rsp+138h] [rbp+38h]
  int v60; // [rsp+140h] [rbp+40h]
  int v61; // [rsp+144h] [rbp+44h]
  __int64 (__fastcall *v62)(int, int); // [rsp+148h] [rbp+48h]
  int v63; // [rsp+150h] [rbp+50h]
  int v64; // [rsp+154h] [rbp+54h]
  __int64 (__fastcall *v65)(int, int); // [rsp+158h] [rbp+58h]
  int v66; // [rsp+160h] [rbp+60h]
  int v67; // [rsp+164h] [rbp+64h]
  __int64 (__fastcall *v68)(int, int); // [rsp+168h] [rbp+68h]
  int v69; // [rsp+170h] [rbp+70h]
  int v70; // [rsp+174h] [rbp+74h]
  __int64 (__fastcall *v71)(int, int); // [rsp+178h] [rbp+78h]
  int v72; // [rsp+180h] [rbp+80h]
  int v73; // [rsp+184h] [rbp+84h]
  __int64 (__fastcall *v74)(int, int); // [rsp+188h] [rbp+88h]
  int v75; // [rsp+190h] [rbp+90h]
  int v76; // [rsp+194h] [rbp+94h]
  __int64 (__fastcall *v77)(int, int); // [rsp+198h] [rbp+98h]
  int v78; // [rsp+1A0h] [rbp+A0h]
  int v79; // [rsp+1A4h] [rbp+A4h]
  __int64 (__fastcall *v80)(int, int); // [rsp+1A8h] [rbp+A8h]
  int v81; // [rsp+1B0h] [rbp+B0h]
  int v82; // [rsp+1B4h] [rbp+B4h]
  __int64 (__fastcall *v83)(int, int); // [rsp+1B8h] [rbp+B8h]
  int v84; // [rsp+1C0h] [rbp+C0h]
  int v85; // [rsp+1C4h] [rbp+C4h]
  __int64 (__fastcall *v86)(int, int); // [rsp+1C8h] [rbp+C8h]
  int v87; // [rsp+1D0h] [rbp+D0h]
  int v88; // [rsp+1D4h] [rbp+D4h]
  __int64 (__fastcall *v89)(int, int); // [rsp+1D8h] [rbp+D8h]
  int v90; // [rsp+1E0h] [rbp+E0h]
  int v91; // [rsp+1E4h] [rbp+E4h]
  __int64 (__fastcall *v92)(int, int); // [rsp+1E8h] [rbp+E8h]
  int v93; // [rsp+1F0h] [rbp+F0h]
  int v94; // [rsp+1F4h] [rbp+F4h]
  __int64 (__fastcall *v95)(int, int); // [rsp+1F8h] [rbp+F8h]
  int v96; // [rsp+200h] [rbp+100h]
  int v97; // [rsp+204h] [rbp+104h]
  __int64 (__fastcall *v98)(int, int); // [rsp+208h] [rbp+108h]
  int v99; // [rsp+210h] [rbp+110h]
  int v100; // [rsp+214h] [rbp+114h]
  __int64 (__fastcall *v101)(int, int); // [rsp+218h] [rbp+118h]
  int v102; // [rsp+220h] [rbp+120h]
  int v103; // [rsp+224h] [rbp+124h]
  __int64 v104; // [rsp+228h] [rbp+128h]
  int v105; // [rsp+230h] [rbp+130h]
  int v106; // [rsp+234h] [rbp+134h]
  __int64 (__fastcall *v107)(int, int); // [rsp+238h] [rbp+138h]
  int v108; // [rsp+240h] [rbp+140h]
  int v109; // [rsp+244h] [rbp+144h]
  __int64 (__fastcall *v110)(int, int); // [rsp+248h] [rbp+148h]
  int v111; // [rsp+250h] [rbp+150h]
  int v112; // [rsp+254h] [rbp+154h]
  __int64 (__fastcall *v113)(int, int); // [rsp+258h] [rbp+158h]
  int v114; // [rsp+260h] [rbp+160h]
  int v115; // [rsp+264h] [rbp+164h]
  __int64 (__fastcall *v116)(int, int); // [rsp+268h] [rbp+168h]
  int v117; // [rsp+270h] [rbp+170h]
  int v118; // [rsp+274h] [rbp+174h]
  __int64 (__fastcall *v119)(int, int); // [rsp+278h] [rbp+178h]

  v7[0] = 0;
  v27 = 0;
  v47 = 0LL;
  v52 = 0;
  v58 = 0;
  v63 = 0;
  v8 = BapdpKsrInitiateScenarioPhase0;
  v9 = 4;
  v7[1] = 16777224;
  v10 = 16777224;
  v13 = 16777224;
  v16 = 16777224;
  v19 = 16777224;
  v22 = 16777224;
  v24 = 16777224;
  v51 = 16777224;
  v54 = 16777224;
  v64 = 33554440;
  v67 = 33554440;
  v70 = 33554440;
  v73 = 33554440;
  v11 = BapdpKsrInitiateScenarioPhase0;
  v12 = 1;
  v14 = BapdpKsrInitiateScenarioPhase0;
  v15 = 5;
  v17 = BapdpKsrInitiateScenarioPhase0;
  v18 = 2;
  v20 = BapdpKsrInitiateScenarioPhase0;
  v21 = 6;
  v23 = BapdpKsrInitiateScenarioPhase0;
  v25 = 16777232;
  v26 = BapdpKsrCompleteScenarioPhase0;
  v28 = 16777232;
  v29 = BapdpKsrpInitiateScenario;
  v30 = 4;
  v31 = 16777232;
  v32 = BapdpKsrpInitiateScenario;
  v33 = 1;
  v34 = 16777232;
  v35 = BapdpKsrpInitiateScenario;
  v36 = 5;
  v37 = 16777232;
  v38 = BapdpKsrpInitiateScenario;
  v39 = 2;
  v40 = 16777232;
  v41 = BapdpKsrpInitiateScenario;
  v42 = 6;
  v43 = 16777232;
  v44 = BapdpKsrpInitiateScenario;
  v45 = 16777232;
  v46 = 16777232;
  v48 = 16777232;
  v49 = 2;
  v50 = BapdpKsrCompleteScenario;
  v53 = BapdpKsrCancelScenario;
  v55 = 4;
  v56 = BapdpKsrCancelScenario;
  v57 = 16777232;
  v59 = BapdpKsrCancelScenario;
  v60 = 16777232;
  v61 = 4;
  v62 = BapdpKsrCancelScenario;
  v65 = BapdpKsrInitiateScenarioPhase0;
  v66 = 4;
  v68 = BapdpKsrInitiateScenarioPhase0;
  v69 = 1;
  v71 = BapdpKsrInitiateScenarioPhase0;
  v72 = 5;
  v74 = BapdpKsrInitiateScenarioPhase0;
  v84 = 0;
  v104 = 0LL;
  v109 = 0;
  v115 = 0;
  v75 = 2;
  v76 = 33554440;
  v77 = BapdpKsrInitiateScenarioPhase0;
  v78 = 6;
  v79 = 33554440;
  v80 = BapdpKsrInitiateScenarioPhase0;
  v81 = 33554440;
  v82 = 33554448;
  v83 = BapdpKsrCompleteScenarioPhase0;
  v85 = 33554448;
  v86 = BapdpKsrpInitiateScenario;
  v87 = 4;
  v88 = 33554448;
  v89 = BapdpKsrpInitiateScenario;
  v90 = 1;
  v91 = 33554448;
  v92 = BapdpKsrpInitiateScenario;
  v93 = 5;
  v94 = 33554448;
  v95 = BapdpKsrpInitiateScenario;
  v96 = 2;
  v97 = 33554448;
  v98 = BapdpKsrpInitiateScenario;
  v99 = 6;
  v100 = 33554448;
  v101 = BapdpKsrpInitiateScenario;
  v102 = 33554448;
  v103 = 33554448;
  v105 = 33554448;
  v106 = 2;
  v107 = BapdpKsrCompleteScenario;
  v108 = 33554440;
  v110 = BapdpKsrCancelScenario;
  v111 = 33554440;
  v112 = 4;
  v113 = BapdpKsrCancelScenario;
  v114 = 33554448;
  v116 = BapdpKsrCancelScenario;
  v117 = 33554448;
  v118 = 4;
  v119 = BapdpKsrCancelScenario;
  if ( a1 < 0 )
    return 3221225485LL;
  v3 = 0;
  for ( i = v7; ; i += 4 )
  {
    if ( a1 == i[1] )
    {
      v5 = *i;
      v6 = _InterlockedCompareExchange(&ExSoftRebootFlags, a1 | 0x80000000, *i);
      if ( v5 == v6 )
        break;
    }
    if ( (unsigned int)++v3 >= 0x26 )
      return 3221266435LL;
  }
  result = (__int64)*(&v8 + 2 * v3);
  if ( result )
    result = ((__int64 (__fastcall *)(_QWORD, _QWORD))result)(v6, (unsigned int)a1);
  if ( (int)result < 0 )
    _InterlockedExchange(&ExSoftRebootFlags, v6);
  else
    _InterlockedExchange(&ExSoftRebootFlags, a1);
  return result;
}
