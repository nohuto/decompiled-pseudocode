/*
 * XREFs of ?SetPointerInfoNodeMessagePosted@CTouchProcessor@@IEAAH_KIH@Z @ 0x1C011CDA0
 * Callers:
 *     ?MarkPointerMessageGenerated@CTouchProcessor@@QEAAXI_JHPEAX@Z @ 0x1C0117A10 (-MarkPointerMessageGenerated@CTouchProcessor@@QEAAXI_JHPEAX@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003A778 (WPP_RECORDER_SF_.c)
 *     ?FindFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@K@Z @ 0x1C01115A4 (-FindFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@K@Z.c)
 *     ?LookupNode@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@PEBUCPointerInputFrame@@K@Z @ 0x1C01179C4 (-LookupNode@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@PEBUCPointerInputFrame@@K@Z.c)
 *     IsPointerInputMessageWithState @ 0x1C011F670 (IsPointerInputMessageWithState.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CTouchProcessor::SetPointerInfoNodeMessagePosted(
        CTouchProcessor *this,
        __int64 a2,
        unsigned int a3,
        int a4)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  PDEVICE_OBJECT v10; // rcx
  unsigned __int16 v11; // r9
  struct CPointerInputFrame *FrameById; // rax
  CTouchProcessor *v14; // rcx
  struct CPointerInputFrame *v15; // rbp
  struct CPointerInfoNode *v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  int *v19; // rbx
  __int64 v20; // rcx
  __int64 v21; // rcx
  int v22; // esi
  int v23; // edi
  int v24; // eax
  int v25; // eax
  int v26; // eax
  unsigned int v27; // eax
  __int64 v28; // rcx
  __int64 v29; // rcx

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xBu,
      0xEAu,
      (__int64)&WPP_89f826b31d6938ddefcc6fc243748b84_Traceguids);
  if ( !(unsigned int)IsPointerInputMessageWithState(a3) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v9, v8);
  if ( !a2 )
  {
    v10 = WPP_GLOBAL_Control;
    if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      return 0LL;
    v11 = 235;
LABEL_8:
    WPP_RECORDER_SF_(
      (__int64)v10->DeviceExtension,
      5u,
      0xBu,
      v11,
      (__int64)&WPP_89f826b31d6938ddefcc6fc243748b84_Traceguids);
    return 0LL;
  }
  FrameById = CTouchProcessor::FindFrameById(this, *(_DWORD *)(a2 + 28));
  v15 = FrameById;
  if ( !FrameById )
  {
    v10 = WPP_GLOBAL_Control;
    if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      return 0LL;
    v11 = 236;
    goto LABEL_8;
  }
  v16 = CTouchProcessor::LookupNode(v14, FrameById, *(_DWORD *)(a2 + 32));
  v18 = *(unsigned __int16 *)(a2 + 16);
  v19 = (int *)v16;
  if ( *((_WORD *)v16 + 118) != (_WORD)v18 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v18, v17);
  v20 = *((unsigned int *)v15 + 12);
  if ( v19[2] >= (unsigned int)v20 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v20, v17);
  switch ( a3 )
  {
    case 0x249u:
      v21 = (unsigned int)*v19;
      if ( (*v19 & 8) == 0 && (*v19 & 0x40) == 0 && (v19[61] & 1) == 0 )
      {
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v21, v17);
        v21 = (unsigned int)*v19;
      }
      v22 = 0x800000;
      v23 = 0x1000000;
      if ( (v21 & 0x800000) != 0 || (v21 & 0x1000000) != 0 || (v21 & 0x4000000) != 0 || (v21 & 0x2000000) != 0 )
      {
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v21, v17);
        LODWORD(v21) = *v19;
      }
      v24 = a4 << 24;
LABEL_28:
      v25 = v22 | v21 ^ v23 & (v21 ^ v24);
LABEL_58:
      *v19 = v25;
      goto LABEL_59;
    case 0x24Au:
      v21 = (unsigned int)*v19;
      v22 = 0x8000000;
      v23 = 0x10000000;
      if ( (v21 & 0x8000000) != 0 || (v21 & 0x10000000) != 0 || (v21 & 0x40000000) != 0 || (v21 & 0x20000000) != 0 )
      {
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v21, v17);
        LODWORD(v21) = *v19;
      }
      v24 = a4 << 28;
      goto LABEL_28;
    case 0x251u:
      v26 = *v19;
      if ( (*v19 & 0x40) == 0 )
      {
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v20, v17);
        v26 = *v19;
      }
      if ( v26 < 0 || (v20 = (unsigned int)v19[1], (v20 & 1) != 0) || (v20 & 4) != 0 || (v20 & 2) != 0 )
      {
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v20, v17);
        v26 = *v19;
        LODWORD(v20) = v19[1];
      }
      *v19 = v26 | 0x80000000;
      v27 = v20 ^ (a4 ^ v20) & 1;
      break;
    case 0x252u:
      v28 = (unsigned int)v19[1];
      if ( (v28 & 8) != 0 || (v28 & 0x10) != 0 || (v28 & 0x40) != 0 || (v28 & 0x20) != 0 )
      {
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v28, v17);
        LODWORD(v28) = v19[1];
      }
      v27 = v28 ^ ((unsigned __int8)v28 ^ (unsigned __int8)(16 * a4)) & 0x10 | 8;
      break;
    default:
      v29 = (unsigned int)*v19;
      if ( (v29 & 0x80000) != 0 || (v29 & 0x400000) != 0 || (v29 & 0x200000) != 0 )
      {
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v29, v17);
        LODWORD(v29) = *v19;
      }
      v25 = v29 ^ (v29 ^ (a4 << 20)) & 0x100000 | 0x80000;
      goto LABEL_58;
  }
  v19[1] = v27;
LABEL_59:
  if ( a4 )
    *(_DWORD *)(224LL * (unsigned int)v19[2] + *((_QWORD *)v15 + 13) + 204) |= 8u;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xBu,
      0xEDu,
      (__int64)&WPP_89f826b31d6938ddefcc6fc243748b84_Traceguids);
  return 1LL;
}
