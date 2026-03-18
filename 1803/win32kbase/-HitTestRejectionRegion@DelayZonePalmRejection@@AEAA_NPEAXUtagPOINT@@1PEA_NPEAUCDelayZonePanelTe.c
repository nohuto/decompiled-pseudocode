/*
 * XREFs of ?HitTestRejectionRegion@DelayZonePalmRejection@@AEAA_NPEAXUtagPOINT@@1PEA_NPEAUCDelayZonePanelTelemetryData@@@Z @ 0x1C012C818
 * Callers:
 *     ?ProcessInput@DelayZonePalmRejection@@QEAA_NPEAX@Z @ 0x1C012CD3C (-ProcessInput@DelayZonePalmRejection@@QEAA_NPEAX@Z.c)
 * Callees:
 *     PtInRect @ 0x1C0055DE4 (PtInRect.c)
 *     ?HitTestDelayZonePalmRejectionRegion@CPalmRejectZoneInfo@@QEAA_NUtagPOINT@@PEAUCDelayZonePanelTelemetryData@@@Z @ 0x1C012C6E4 (-HitTestDelayZonePalmRejectionRegion@CPalmRejectZoneInfo@@QEAA_NUtagPOINT@@PEAUCDelayZonePanelTe.c)
 *     WPP_RECORDER_SF_sd @ 0x1C012DA2C (WPP_RECORDER_SF_sd.c)
 */

bool __fastcall DelayZonePalmRejection::HitTestRejectionRegion(
        DelayZonePalmRejection *this,
        void *a2,
        struct tagPOINT a3,
        struct tagPOINT a4,
        bool *a5,
        struct CDelayZonePanelTelemetryData *a6)
{
  char *v6; // r14
  bool v7; // bp
  char *v8; // rsi
  DelayZonePalmRejection *v12; // r13
  const char *v14; // rdx
  const char *v15; // rcx

  v6 = (char *)this + 72;
  v7 = 0;
  v8 = (char *)*((_QWORD *)this + 9);
  v12 = this;
  if ( v8 == (char *)this + 72 )
    return 0;
  while ( 1 )
  {
    LODWORD(this) = ((unsigned int)GetUserHandedness(this) != 0) + 1;
    if ( (*((_DWORD *)v8 + 15) & (unsigned int)this) == 0 )
      goto LABEL_9;
    if ( v8[44] )
      break;
    v7 = CPalmRejectZoneInfo::HitTestDelayZonePalmRejectionRegion((CPalmRejectZoneInfo *)v8, a3, (struct tagRECT *)a6);
    if ( v7 )
      goto LABEL_12;
LABEL_9:
    v8 = *(char **)v8;
    if ( v8 == v6 )
      return v7;
  }
  if ( *((void **)v8 + 8) != a2 )
    goto LABEL_9;
  if ( !PtInRect((_DWORD *)v8 + 6, *(_QWORD *)&a4) )
  {
    v7 = 0;
    goto LABEL_9;
  }
  v7 = 1;
LABEL_12:
  v14 = "false";
  v15 = "true";
  if ( !v8[44] )
    v15 = "false";
  LOBYTE(v14) = 4;
  WPP_RECORDER_SF_sd(
    *((_QWORD *)v12 + 14),
    (_DWORD)v14,
    13,
    30,
    (__int64)&WPP_f5710132373f3cabafdc12ce4a875db4_Traceguids,
    (__int64)v15,
    *((_DWORD *)v8 + 10));
  *a5 = v8[44];
  return v7;
}
