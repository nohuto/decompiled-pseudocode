/*
 * XREFs of Controller_ExecuteDSMToSendPORTSCValues @ 0x1C0010B30
 * Callers:
 *     Controller_WdfEvtDeviceD0Exit @ 0x1C0001C10 (Controller_WdfEvtDeviceD0Exit.c)
 * Callees:
 *     memset @ 0x1C0008A40 (memset.c)
 *     WPP_RECORDER_SF_P @ 0x1C0014F68 (WPP_RECORDER_SF_P.c)
 *     XilRegister_ReadUlong @ 0x1C001F6D0 (XilRegister_ReadUlong.c)
 *     Controller_ExecuteDSM @ 0x1C0057028 (Controller_ExecuteDSM.c)
 */

void __fastcall Controller_ExecuteDSMToSendPORTSCValues(__int64 a1, int a2, int a3)
{
  __int64 v3; // rsi
  __int64 v5; // r13
  __int64 v6; // r14
  unsigned int v7; // ebp
  __int64 v8; // rcx
  int v9; // r9d
  _DWORD *PoolWithTag; // rax
  _DWORD *v11; // rdi
  _DWORD *v12; // r15
  int Ulong; // eax

  v3 = 0LL;
  if ( *(_BYTE *)(a1 + 520) )
  {
    v5 = *(_QWORD *)(a1 + 152);
    v6 = *(unsigned int *)(*(_QWORD *)(a1 + 88) + 88LL);
    v7 = 4 * v6 + 4;
    if ( v7 > 0xFFFF )
    {
      v8 = *(_QWORD *)(a1 + 72);
      v9 = 242;
LABEL_4:
      WPP_RECORDER_SF_P(v8, a2, a3, v9);
      return;
    }
    PoolWithTag = ExAllocatePoolWithTag(*((POOL_TYPE *)&WPP_MAIN_CB.AlignmentRequirement + 1), v7, 0x49434858u);
    v11 = PoolWithTag;
    if ( !PoolWithTag )
    {
      v8 = *(_QWORD *)(a1 + 72);
      v9 = 243;
      goto LABEL_4;
    }
    memset(PoolWithTag, 0, v7);
    *v11 = v6;
    if ( (_DWORD)v6 )
    {
      v12 = v11 + 1;
      do
      {
        Ulong = XilRegister_ReadUlong(*(_QWORD *)(*(_QWORD *)(v5 + 8) + 88LL), v3 + *(_QWORD *)(v5 + 40));
        v3 += 16LL;
        *v12++ = Ulong;
        --v6;
      }
      while ( v6 );
    }
    Controller_ExecuteDSM(a1, &GUID_DSM_SEND_PORTSC_VALUES, 1LL);
    ExFreePoolWithTag(v11, 0x49434858u);
  }
}
