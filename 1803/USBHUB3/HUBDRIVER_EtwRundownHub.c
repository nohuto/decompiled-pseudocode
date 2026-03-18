/*
 * XREFs of HUBDRIVER_EtwRundownHub @ 0x1C00654A4
 * Callers:
 *     HUBDRIVER_EtwEnableCallback @ 0x1C0065E98 (HUBDRIVER_EtwEnableCallback.c)
 * Callees:
 *     McTemplateK0pnq @ 0x1C00012E0 (McTemplateK0pnq.c)
 *     McTemplateK0pq @ 0x1C000135C (McTemplateK0pq.c)
 *     McTemplateK0pqccxqqqqqqqsss @ 0x1C0001764 (McTemplateK0pqccxqqqqqqqsss.c)
 *     McTemplateK0pqn @ 0x1C0001958 (McTemplateK0pqn.c)
 */

__int64 __fastcall HUBDRIVER_EtwRundownHub(const GUID *a1, __int64 a2)
{
  int v4; // edx
  int v5; // edx
  __int64 result; // rax
  __int64 v7; // rdi
  __int64 v8; // rcx
  int v9; // eax
  int v10; // r11d
  int v11; // r15d
  int v12; // r12d
  int v13; // r13d
  int v14; // r10d
  char v15; // bp
  __int64 v16; // r9
  __int64 v17; // rdx
  const EVENT_DESCRIPTOR *v18; // rdx
  int v19; // eax
  int v20; // r15d
  int v21; // r12d
  int v22; // r13d
  __int64 v23; // r9
  __int64 v24; // rdx
  int v25; // ecx
  __int64 v26; // [rsp+20h] [rbp-A8h]
  __int64 v27; // [rsp+28h] [rbp-A0h]
  __int64 v28; // [rsp+30h] [rbp-98h]
  __int64 v29; // [rsp+40h] [rbp-88h]
  __int64 v30; // [rsp+48h] [rbp-80h]
  __int64 v31; // [rsp+50h] [rbp-78h]
  __int64 v32; // [rsp+58h] [rbp-70h]
  __int64 v33; // [rsp+60h] [rbp-68h]
  __int64 v34; // [rsp+68h] [rbp-60h]
  __int64 v35; // [rsp+70h] [rbp-58h]
  __int64 v36; // [rsp+78h] [rbp-50h]
  __int64 v37; // [rsp+80h] [rbp-48h]
  __int64 v38; // [rsp+88h] [rbp-40h]
  int v39; // [rsp+D8h] [rbp+10h]
  int v40; // [rsp+D8h] [rbp+10h]
  int v41; // [rsp+E0h] [rbp+18h]
  int v42; // [rsp+E0h] [rbp+18h]
  int v43; // [rsp+E8h] [rbp+20h]
  int v44; // [rsp+E8h] [rbp+20h]

  v4 = *(_DWORD *)(a2 + 2208) - 1;
  if ( v4 )
  {
    v5 = v4 - 1;
    if ( v5 )
    {
      if ( v5 == 2 && ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 1) != 0 )
        McTemplateK0pq(
          (__int64)a1,
          &USBHUB3_ETW_EVENT_RUNDOWN_ROOT_HUB_INFORMATION,
          a1,
          *(_QWORD *)(a2 + 240),
          *(_DWORD *)(a2 + 2592));
    }
    else if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 1) != 0 )
    {
      McTemplateK0pnq(
        a2 + 1172,
        &USBHUB3_ETW_EVENT_RUNDOWN_USB30_HUB_INFORMATION,
        a1,
        *(_QWORD *)(a2 + 240),
        12,
        a2 + 1172,
        *(_DWORD *)(a2 + 2592));
    }
  }
  else if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 1) != 0 )
  {
    McTemplateK0pnq(
      a2 + 1172,
      &USBHUB3_ETW_EVENT_RUNDOWN_USB20_HUB_INFORMATION,
      a1,
      *(_QWORD *)(a2 + 240),
      71,
      a2 + 1172,
      *(_DWORD *)(a2 + 2592));
  }
  result = *(_QWORD *)(a2 + 2352);
  v7 = result - 248;
  if ( a2 + 2352 != result )
  {
    v8 = 0LL;
    do
    {
      v9 = *(_DWORD *)(v7 + 1256);
      if ( v9 == 3000 )
      {
        if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 1) == 0 )
          goto LABEL_43;
        v10 = *(_DWORD *)(a2 + 160);
        if ( v10 == 1 )
        {
          v20 = *(unsigned __int16 *)(a2 + 176);
          v21 = *(_DWORD *)(a2 + 172);
          v22 = *(_DWORD *)(a2 + 168);
          v40 = *(_DWORD *)(a2 + 188);
          v42 = *(_DWORD *)(a2 + 184);
          v44 = *(_DWORD *)(a2 + 180);
        }
        else
        {
          v20 = 0;
          v40 = 0;
          v21 = 0x7FFFFFFF;
          v42 = 0;
          v22 = 0x7FFFFFFF;
          v44 = 0;
        }
        v14 = *(_DWORD *)(v7 + 204) >> 1;
        if ( (*(_DWORD *)(v7 + 204) & 2) != 0 )
          v15 = *(_BYTE *)(v7 + 1341);
        else
          v15 = 0;
        v23 = 0LL;
        v24 = 0LL;
        if ( v10 == 2 )
          v23 = a2 + 178;
        v38 = v23;
        if ( v10 == 2 )
          v24 = a2 + 173;
        v37 = v24;
        if ( v10 == 2 )
          v8 = a2 + 168;
        v18 = (const EVENT_DESCRIPTOR *)&USBHUB3_ETW_EVENT_RUNDOWN_20_PORT_V1;
        v36 = v8;
        LODWORD(v35) = v20;
        LODWORD(v34) = v21;
        LODWORD(v33) = v22;
        LODWORD(v32) = v40;
        LODWORD(v31) = v42;
        v19 = v44;
      }
      else
      {
        if ( v9 != 5000 || ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 1) == 0 )
          goto LABEL_43;
        v10 = *(_DWORD *)(a2 + 160);
        if ( v10 == 1 )
        {
          v11 = *(unsigned __int16 *)(a2 + 176);
          v12 = *(_DWORD *)(a2 + 172);
          v13 = *(_DWORD *)(a2 + 168);
          v39 = *(_DWORD *)(a2 + 188);
          v41 = *(_DWORD *)(a2 + 184);
          v43 = *(_DWORD *)(a2 + 180);
        }
        else
        {
          v11 = 0;
          v39 = 0;
          v12 = 0x7FFFFFFF;
          v41 = 0;
          v13 = 0x7FFFFFFF;
          v43 = 0;
        }
        v14 = *(_DWORD *)(v7 + 204) >> 1;
        if ( (*(_DWORD *)(v7 + 204) & 2) != 0 )
          v15 = *(_BYTE *)(v7 + 1341);
        else
          v15 = 0;
        v16 = 0LL;
        v17 = 0LL;
        if ( v10 == 2 )
          v16 = a2 + 178;
        v38 = v16;
        if ( v10 == 2 )
          v17 = a2 + 173;
        v37 = v17;
        if ( v10 == 2 )
          v8 = a2 + 168;
        v18 = (const EVENT_DESCRIPTOR *)&USBHUB3_ETW_EVENT_RUNDOWN_30_PORT_V1;
        v36 = v8;
        LODWORD(v35) = v11;
        LODWORD(v34) = v12;
        LODWORD(v33) = v13;
        LODWORD(v32) = v39;
        LODWORD(v31) = v41;
        v19 = v43;
      }
      LODWORD(v30) = v19;
      LODWORD(v29) = v10;
      LOBYTE(v28) = v15;
      LOBYTE(v27) = v14 & 1;
      LODWORD(v26) = *(unsigned __int16 *)(v7 + 200);
      McTemplateK0pqccxqqqqqqqsss(
        v8,
        v18,
        a1,
        *(_QWORD *)(a2 + 240),
        v26,
        v27,
        v28,
        *(_QWORD *)(v7 + 1416),
        v29,
        v30,
        v31,
        v32,
        v33,
        v34,
        v35,
        v36,
        v37,
        v38);
LABEL_43:
      v25 = *(_DWORD *)(v7 + 204);
      if ( (v25 & 2) != 0 && ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 1) != 0 )
      {
        LODWORD(v27) = 12;
        LODWORD(v26) = *(unsigned __int16 *)(v7 + 200);
        McTemplateK0pqn(
          *(unsigned __int16 *)(v7 + 200),
          &USBHUB3_ETW_EVENT_RUNDOWN_ACPI_UPC,
          a1,
          *(_QWORD *)(a2 + 240),
          v26,
          v27,
          v7 + 1340);
        v25 = *(_DWORD *)(v7 + 204);
      }
      if ( (v25 & 4) != 0 && ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 1) != 0 )
      {
        LODWORD(v27) = 16;
        LODWORD(v26) = *(unsigned __int16 *)(v7 + 200);
        McTemplateK0pqn(
          *(unsigned __int16 *)(v7 + 200),
          &USBHUB3_ETW_EVENT_RUNDOWN_ACPI_PLD,
          a1,
          *(_QWORD *)(a2 + 240),
          v26,
          v27,
          v7 + 1352);
      }
      result = *(_QWORD *)(v7 + 248);
      v8 = 0LL;
      v7 = result - 248;
    }
    while ( a2 + 2352 != result );
  }
  return result;
}
