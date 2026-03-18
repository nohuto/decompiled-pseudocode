/*
 * XREFs of HUBDRIVER_EtwRundownHub @ 0x1C00654B0
 * Callers:
 *     HUBDRIVER_EtwEnableCallback @ 0x1C0065EDC (HUBDRIVER_EtwEnableCallback.c)
 * Callees:
 *     McTemplateK0pnq @ 0x1C00012F0 (McTemplateK0pnq.c)
 *     McTemplateK0pq @ 0x1C000136C (McTemplateK0pq.c)
 *     McTemplateK0pqccxqqqqqqqsss @ 0x1C0001774 (McTemplateK0pqccxqqqqqqqsss.c)
 *     McTemplateK0pqn @ 0x1C0001968 (McTemplateK0pqn.c)
 */

void __fastcall HUBDRIVER_EtwRundownHub(const GUID *a1, __int64 a2)
{
  int v4; // edx
  int v5; // edx
  __int64 v6; // rdi
  _QWORD *i; // r14
  int v8; // eax
  int v9; // r11d
  int v10; // r13d
  int v11; // r12d
  int v12; // r10d
  char v13; // bp
  __int64 v14; // r9
  __int64 v15; // rdx
  __int64 v16; // rcx
  const EVENT_DESCRIPTOR *v17; // rdx
  __int64 v18; // r9
  __int64 v19; // rdx
  __int64 v20; // [rsp+20h] [rbp-B8h]
  __int64 v21; // [rsp+28h] [rbp-B0h]
  __int64 v22; // [rsp+30h] [rbp-A8h]
  __int64 v23; // [rsp+40h] [rbp-98h]
  __int64 v24; // [rsp+48h] [rbp-90h]
  __int64 v25; // [rsp+50h] [rbp-88h]
  __int64 v26; // [rsp+58h] [rbp-80h]
  __int64 v27; // [rsp+60h] [rbp-78h]
  __int64 v28; // [rsp+68h] [rbp-70h]
  __int64 v29; // [rsp+70h] [rbp-68h]
  __int64 v30; // [rsp+80h] [rbp-58h]
  __int64 v31; // [rsp+88h] [rbp-50h]
  int v32; // [rsp+90h] [rbp-48h]
  int v33; // [rsp+E8h] [rbp+10h]
  int v34; // [rsp+F0h] [rbp+18h]
  int v35; // [rsp+F8h] [rbp+20h]

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
  v6 = *(_QWORD *)(a2 + 2352) - 248LL;
  for ( i = *(_QWORD **)(a2 + 2352); (_QWORD *)(a2 + 2352) != i; i = (_QWORD *)*i )
  {
    v8 = *(_DWORD *)(v6 + 1256);
    if ( v8 == 3000 )
    {
      if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 1) == 0 )
        goto LABEL_47;
      v9 = *(_DWORD *)(a2 + 160);
      if ( v9 == 1 )
      {
        v10 = *(unsigned __int16 *)(a2 + 176);
        v33 = *(_DWORD *)(a2 + 172);
        v34 = *(_DWORD *)(a2 + 168);
        v35 = *(_DWORD *)(a2 + 188);
        v32 = *(_DWORD *)(a2 + 184);
      }
      else
      {
        v10 = 0;
        v33 = 0x7FFFFFFF;
        v35 = 0;
        v32 = 0;
        v34 = 0x7FFFFFFF;
      }
      if ( v9 == 1 )
        v11 = *(_DWORD *)(a2 + 180);
      else
        v11 = 0;
      v12 = *(_DWORD *)(v6 + 204) >> 1;
      if ( (*(_DWORD *)(v6 + 204) & 2) != 0 )
        v13 = *(_BYTE *)(v6 + 1341);
      else
        v13 = 0;
      v18 = 0LL;
      if ( v9 == 2 )
        v18 = a2 + 178;
      v19 = 0LL;
      v31 = v18;
      if ( v9 == 2 )
        v19 = a2 + 173;
      v16 = 0LL;
      v30 = v19;
      v17 = (const EVENT_DESCRIPTOR *)&USBHUB3_ETW_EVENT_RUNDOWN_20_PORT_V1;
      if ( v9 == 2 )
        v16 = a2 + 168;
    }
    else
    {
      if ( v8 != 5000 || ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 1) == 0 )
        goto LABEL_47;
      v9 = *(_DWORD *)(a2 + 160);
      if ( v9 == 1 )
      {
        v10 = *(unsigned __int16 *)(a2 + 176);
        v33 = *(_DWORD *)(a2 + 172);
        v34 = *(_DWORD *)(a2 + 168);
        v35 = *(_DWORD *)(a2 + 188);
        v32 = *(_DWORD *)(a2 + 184);
      }
      else
      {
        v10 = 0;
        v33 = 0x7FFFFFFF;
        v35 = 0;
        v32 = 0;
        v34 = 0x7FFFFFFF;
      }
      if ( v9 == 1 )
        v11 = *(_DWORD *)(a2 + 180);
      else
        v11 = 0;
      v12 = *(_DWORD *)(v6 + 204) >> 1;
      if ( (*(_DWORD *)(v6 + 204) & 2) != 0 )
        v13 = *(_BYTE *)(v6 + 1341);
      else
        v13 = 0;
      v14 = 0LL;
      if ( v9 == 2 )
        v14 = a2 + 178;
      v15 = 0LL;
      v31 = v14;
      if ( v9 == 2 )
        v15 = a2 + 173;
      v16 = 0LL;
      v30 = v15;
      v17 = (const EVENT_DESCRIPTOR *)&USBHUB3_ETW_EVENT_RUNDOWN_30_PORT_V1;
      if ( v9 == 2 )
        v16 = a2 + 168;
    }
    LODWORD(v29) = v10;
    LODWORD(v28) = v33;
    LODWORD(v27) = v34;
    LODWORD(v26) = v35;
    LODWORD(v25) = v32;
    LODWORD(v24) = v11;
    LODWORD(v23) = v9;
    LOBYTE(v22) = v13;
    LOBYTE(v21) = v12 & 1;
    LODWORD(v20) = *(unsigned __int16 *)(v6 + 200);
    McTemplateK0pqccxqqqqqqqsss(
      v16,
      v17,
      a1,
      *(_QWORD *)(a2 + 240),
      v20,
      v21,
      v22,
      *(_QWORD *)(v6 + 1416),
      v23,
      v24,
      v25,
      v26,
      v27,
      v28,
      v29,
      v16,
      v30,
      v31);
LABEL_47:
    if ( (*(_DWORD *)(v6 + 204) & 2) != 0 && ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 1) != 0 )
    {
      LODWORD(v21) = 12;
      LODWORD(v20) = *(unsigned __int16 *)(v6 + 200);
      McTemplateK0pqn(
        *(unsigned __int16 *)(v6 + 200),
        &USBHUB3_ETW_EVENT_RUNDOWN_ACPI_UPC,
        a1,
        *(_QWORD *)(a2 + 240),
        v20,
        v21,
        v6 + 1340);
    }
    if ( (*(_DWORD *)(v6 + 204) & 4) != 0 && ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 1) != 0 )
    {
      LODWORD(v21) = 16;
      LODWORD(v20) = *(unsigned __int16 *)(v6 + 200);
      McTemplateK0pqn(
        *(unsigned __int16 *)(v6 + 200),
        &USBHUB3_ETW_EVENT_RUNDOWN_ACPI_PLD,
        a1,
        *(_QWORD *)(a2 + 240),
        v20,
        v21,
        v6 + 1352);
    }
    v6 = *i - 248LL;
  }
}
