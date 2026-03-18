/*
 * XREFs of Register_GetAllExtendedCapability @ 0x1C001F3A4
 * Callers:
 *     Controller_WdfEvtDeviceD0EntryPostInterruptsEnabled @ 0x1C0006190 (Controller_WdfEvtDeviceD0EntryPostInterruptsEnabled.c)
 * Callees:
 *     WPP_RECORDER_SF_dd @ 0x1C00055AC (WPP_RECORDER_SF_dd.c)
 *     XilRegister_ReadBufferUlong @ 0x1C001F688 (XilRegister_ReadBufferUlong.c)
 *     XilRegister_ReadUlong @ 0x1C001F6D0 (XilRegister_ReadUlong.c)
 */

void __fastcall Register_GetAllExtendedCapability(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rdi
  int Ulong; // eax
  __int64 v6; // r9
  __int64 v7; // r8
  unsigned __int8 v8; // al
  __int64 v9; // rcx
  __int64 v10; // [rsp+28h] [rbp-20h]
  __int64 v11; // [rsp+30h] [rbp-18h]

  v2 = *(_QWORD *)(a1 + 56);
  if ( v2 )
  {
    while ( 1 )
    {
      Ulong = XilRegister_ReadUlong(a1, v2);
      *(_DWORD *)a2 = Ulong;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        LODWORD(v11) = *(unsigned __int8 *)(a2 + 1);
        LODWORD(v10) = (unsigned __int8)Ulong;
        WPP_RECORDER_SF_dd(
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
          5u,
          6u,
          0x44u,
          (__int64)&WPP_a32df80a94123ec82d8da458aa91e220_Traceguids,
          v10,
          v11);
      }
      if ( (unsigned __int8)*(_DWORD *)a2 == 1 )
        break;
      if ( (unsigned __int8)*(_DWORD *)a2 == 2 )
      {
        XilRegister_ReadBufferUlong(a1, v2, a2, 4LL);
        v6 = *(_DWORD *)(a2 + 8) >> 28;
        if ( (_DWORD)v6 )
        {
          v7 = a2 + 16;
LABEL_9:
          XilRegister_ReadBufferUlong(a1, v2, v7, v6);
        }
      }
      v8 = *(_BYTE *)(a2 + 1);
      if ( !v8 )
        return;
      v9 = 4LL * v8;
      v2 += v9;
      if ( v2 >= *(_QWORD *)(a1 + 24) + (unsigned __int64)*(unsigned int *)(a1 + 20) )
        return;
      a2 += v9;
    }
    v6 = 2LL;
    v7 = a2;
    goto LABEL_9;
  }
}
