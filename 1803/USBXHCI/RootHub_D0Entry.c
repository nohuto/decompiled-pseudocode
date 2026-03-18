/*
 * XREFs of RootHub_D0Entry @ 0x1C00198E4
 * Callers:
 *     Controller_InternalReset @ 0x1C00086D4 (Controller_InternalReset.c)
 *     Controller_WdfEvtDeviceD0Entry @ 0x1C000BB80 (Controller_WdfEvtDeviceD0Entry.c)
 * Callees:
 *     WPP_RECORDER_SF_dd @ 0x1C000DAE4 (WPP_RECORDER_SF_dd.c)
 *     XilRegister_ReadUlong @ 0x1C0019708 (XilRegister_ReadUlong.c)
 *     XilRegister_WriteUlong @ 0x1C00197EC (XilRegister_WriteUlong.c)
 *     DynamicLock_Acquire @ 0x1C003E230 (DynamicLock_Acquire.c)
 *     DynamicLock_Release @ 0x1C003E42C (DynamicLock_Release.c)
 */

__int64 __fastcall RootHub_D0Entry(__int64 a1)
{
  int v1; // edi
  __int64 v3; // r14
  unsigned int *v4; // rsi
  __int64 v5; // rbp
  int Ulong; // eax
  unsigned __int8 v7; // r8
  __int64 v8; // rcx
  unsigned __int16 v9; // dx
  __int64 v10; // rbp
  __int16 v11; // ax
  __int64 v13; // [rsp+28h] [rbp-30h]
  __int64 v14; // [rsp+30h] [rbp-28h]

  v1 = 1;
  v3 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 88LL);
  *(_BYTE *)(a1 + 57) = 1;
  if ( *(_DWORD *)(a1 + 16) )
  {
    while ( 1 )
    {
      v4 = (unsigned int *)(*(_QWORD *)(a1 + 40) + 16LL * (unsigned int)(v1 - 1));
      v5 = (unsigned int)(v1 - 1);
      Ulong = XilRegister_ReadUlong(v3, v4);
      v7 = *(_BYTE *)(((unsigned __int64)(unsigned int)v5 << 6) + *(_QWORD *)(a1 + 48) + 1);
      v8 = *(_QWORD *)(a1 + 8);
      if ( v7 == 2 )
        break;
      if ( v7 == 3 )
      {
        v9 = 32;
LABEL_6:
        LODWORD(v14) = Ulong;
        LODWORD(v13) = v1;
        WPP_RECORDER_SF_dd(
          *(_QWORD *)(v8 + 72),
          4u,
          0xBu,
          v9,
          (__int64)&WPP_62692f86e29e3be0ae2694370e9ff5b6_Traceguids,
          v13,
          v14);
        if ( (*(_QWORD *)(*(_QWORD *)(a1 + 8) + 272LL) & 0x20000000LL) != 0 )
        {
          v10 = v5 << 6;
          DynamicLock_Acquire(*(_QWORD *)(*(_QWORD *)(a1 + 48) + v10 + 16));
          v11 = XilRegister_ReadUlong(v3, v4);
          XilRegister_WriteUlong(v3, v4, v11 & 0xC200 | 0xE000000);
          DynamicLock_Release(*(_QWORD *)(*(_QWORD *)(a1 + 48) + v10 + 16));
        }
        goto LABEL_9;
      }
      LODWORD(v14) = v7;
      LODWORD(v13) = v1;
      WPP_RECORDER_SF_dd(
        *(_QWORD *)(v8 + 72),
        2u,
        0xBu,
        0x21u,
        (__int64)&WPP_62692f86e29e3be0ae2694370e9ff5b6_Traceguids,
        v13,
        v14);
LABEL_9:
      if ( (unsigned int)++v1 > *(_DWORD *)(a1 + 16) )
        return 0LL;
    }
    v9 = 31;
    goto LABEL_6;
  }
  return 0LL;
}
