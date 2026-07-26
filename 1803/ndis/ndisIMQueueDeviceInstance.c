/*
 * XREFs of ndisIMQueueDeviceInstance @ 0x1C00E5D58
 * Callers:
 *     NdisIMInitializeDeviceInstanceEx @ 0x1C00E5660 (NdisIMInitializeDeviceInstanceEx.c)
 * Callees:
 *     memcmp @ 0x1C0025D20 (memcmp.c)
 *     WPP_SF_qqq @ 0x1C003A95C (WPP_SF_qqq.c)
 *     WPP_SF_qqqL @ 0x1C0043FB4 (WPP_SF_qqqL.c)
 */

__int64 __fastcall ndisIMQueueDeviceInstance(__int64 a1, const UNICODE_STRING *a2, wchar_t *a3)
{
  unsigned int v6; // ebx
  _UNICODE_STRING *PoolWithTag; // rax
  _UNICODE_STRING *v8; // rdi
  _UNICODE_STRING *v9; // r12
  unsigned __int16 v10; // ax
  __int64 *v11; // rax
  __int64 *v12; // rsi
  unsigned __int16 Length; // r13
  __int64 *v15; // [rsp+68h] [rbp+10h]

  v6 = 0;
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_qqq(0x26u, &WPP_f15752027639342d7f4a984ed5eb2bc7_Traceguids, a1, a2, a3);
  PoolWithTag = (_UNICODE_STRING *)ExAllocatePoolWithTag(NonPagedPoolNx, a2->Length + 34LL, 0x6964444Eu);
  v8 = PoolWithTag;
  if ( PoolWithTag )
  {
    PoolWithTag->Buffer = a3;
    v9 = PoolWithTag + 1;
    v10 = a2->Length + 2;
    v8[1].Length = 0;
    v8[1].MaximumLength = v10;
    v8[1].Buffer = &v8[2].Length;
    RtlUpcaseUnicodeString(v8 + 1, a2, 0);
    v11 = *(__int64 **)(a1 + 96);
    v15 = v11;
    v12 = v11;
    if ( v11 )
    {
      Length = v9->Length;
      while ( Length != *((_WORD *)v12 + 8) || memcmp(v8[1].Buffer, (const void *)v12[3], Length) )
      {
        v12 = (__int64 *)*v12;
        if ( !v12 )
        {
          v11 = v15;
          goto LABEL_11;
        }
      }
      ExFreePoolWithTag(v8, 0);
      v6 = 65539;
    }
    else
    {
LABEL_11:
      *(_QWORD *)&v8->Length = v11;
      *(_QWORD *)(a1 + 96) = v8;
    }
  }
  else
  {
    v6 = -1073741670;
  }
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_qqqL(0x27u, &WPP_f15752027639342d7f4a984ed5eb2bc7_Traceguids, a1, a2, a3, v6);
  return v6;
}
