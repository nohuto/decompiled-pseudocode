/*
 * XREFs of ?SetNewValidState@CTouchProcessor@@QEAAHIPEAUCInputPointerNode@@@Z @ 0x1C011B80C
 * Callers:
 *     ?CancelActivePointer@CTouchProcessor@@AEAAXPEAUCInputPointerNode@@@Z @ 0x1C010E18C (-CancelActivePointer@CTouchProcessor@@AEAAXPEAUCInputPointerNode@@@Z.c)
 *     ?CreateNode@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GKI@Z @ 0x1C010FB2C (-CreateNode@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GKI@Z.c)
 *     ?UpdateActivePointer@CTouchProcessor@@QEAAGPEBUtagPOINTEREVENTINT@@VCInputDest@@PEAV3@PEAKPEAGPEAIK@Z @ 0x1C011E4F0 (-UpdateActivePointer@CTouchProcessor@@QEAAGPEBUtagPOINTEREVENTINT@@VCInputDest@@PEAV3@PEAKPEAGPE.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003A778 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_L @ 0x1C011F76C (WPP_RECORDER_SF_L.c)
 *     WPP_RECORDER_SF_LL @ 0x1C011F908 (WPP_RECORDER_SF_LL.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

_BOOL8 __fastcall CTouchProcessor::SetNewValidState(struct _KTHREAD **this, __int64 a2, struct CInputPointerNode *a3)
{
  unsigned int v4; // esi
  BOOL v6; // ebx
  int v8; // ebp
  bool v9; // zf
  _QWORD *v10; // rax
  __int64 v11; // rcx
  _QWORD *v12; // rdx
  int v13; // [rsp+20h] [rbp-38h]

  v4 = a2;
  if ( this[13] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xBu,
      0x40u,
      (__int64)&WPP_89f826b31d6938ddefcc6fc243748b84_Traceguids);
  if ( (v4 & 0x70006) == 0x10006 )
  {
    v8 = 2;
  }
  else
  {
    if ( (v4 & 0x70006) == 0x20000 )
    {
      v9 = *((_DWORD *)a3 + 9) == 1;
      v8 = 3;
LABEL_21:
      v6 = v9;
      goto LABEL_26;
    }
    if ( (v4 & 0x70006) != 0x20002 )
    {
      if ( (v4 & 0x70006) == 0x20006 )
      {
        v8 = 2;
        v9 = *((_DWORD *)a3 + 9) == 2;
      }
      else
      {
        if ( (v4 & 0x70006) == 0x40000 )
        {
          v8 = 3;
        }
        else
        {
          if ( (v4 & 0x70006) != 0x40002 )
          {
            WPP_RECORDER_SF_L((unsigned int)this[1], a2, (_DWORD)a3, 65);
LABEL_12:
            v6 = 0;
LABEL_13:
            LOBYTE(a2) = 2;
            WPP_RECORDER_SF_LL((unsigned int)this[1], a2, (_DWORD)a3, 66, v13, v4, *((_DWORD *)a3 + 9));
            goto LABEL_14;
          }
          v8 = 1;
        }
        v9 = *((_DWORD *)a3 + 9) == 2;
      }
      goto LABEL_21;
    }
    v8 = 1;
  }
  v6 = *((_DWORD *)a3 + 9) <= 1u;
LABEL_26:
  if ( !v6 )
    goto LABEL_13;
  if ( (v4 & 4) != 0 )
  {
    if ( (v4 & 0x1F0) == 0 )
      goto LABEL_12;
    v6 = 1;
  }
  if ( (*((_DWORD *)a3 + 82) & 8) != 0 )
  {
    v6 = (v4 & 0x8000) != 0;
    if ( (v4 & 0x8000) == 0 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(1LL, a2);
  }
  if ( !v6 )
    goto LABEL_13;
  *((_DWORD *)a3 + 9) = v8;
  if ( v8 == 3 )
  {
    v10 = (_QWORD *)((char *)a3 + 16);
    v11 = *((_QWORD *)a3 + 2);
    if ( (struct CInputPointerNode *)v11 != (struct CInputPointerNode *)((char *)a3 + 16) )
    {
      if ( *(_QWORD **)(v11 + 8) != v10 || (v12 = (_QWORD *)*((_QWORD *)a3 + 3), (_QWORD *)*v12 != v10) )
        __fastfail(3u);
      *v12 = v11;
      *(_QWORD *)(v11 + 8) = v12;
      *((_QWORD *)a3 + 3) = (char *)a3 + 16;
      *v10 = v10;
    }
  }
  *((_DWORD *)a3 + 82) = *((_DWORD *)a3 + 82) & 0xFFFFFFF3 | ((v4 & 0x2000 | (v4 >> 1) & 0x4000) >> 11);
LABEL_14:
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xBu,
      0x43u,
      (__int64)&WPP_89f826b31d6938ddefcc6fc243748b84_Traceguids);
  return v6;
}
