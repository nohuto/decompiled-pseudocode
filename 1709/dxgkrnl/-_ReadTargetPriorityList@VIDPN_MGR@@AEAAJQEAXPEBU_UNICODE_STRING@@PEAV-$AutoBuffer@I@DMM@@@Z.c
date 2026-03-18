/*
 * XREFs of ?_ReadTargetPriorityList@VIDPN_MGR@@AEAAJQEAXPEBU_UNICODE_STRING@@PEAV?$AutoBuffer@I@DMM@@@Z @ 0x1C0110264
 * Callers:
 *     ??0VIDPN_MGR@@QEAA@QEAVADAPTER_DISPLAY@@@Z @ 0x1C0110304 (--0VIDPN_MGR@@QEAA@QEAVADAPTER_DISPLAY@@@Z.c)
 * Callees:
 *     memmove @ 0x1C0016740 (memmove.c)
 *     ??1?$AutoBuffer@U_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION@@@DMM@@UEAA@XZ @ 0x1C003497C (--1-$AutoBuffer@U_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION@@@DMM@@UEAA@XZ.c)
 *     ?Initialize@?$AutoBuffer@U_KEY_VALUE_PARTIAL_INFORMATION@@@DMM@@QEAAJ_KQEBXW4_POOL_TYPE@@@Z @ 0x1C00356D0 (-Initialize@-$AutoBuffer@U_KEY_VALUE_PARTIAL_INFORMATION@@@DMM@@QEAAJ_KQEBXW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall VIDPN_MGR::_ReadTargetPriorityList(__int64 a1, void *a2, struct _UNICODE_STRING *a3, __int64 a4)
{
  NTSTATUS v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 v12; // rax
  void *v13; // rcx
  char *v14; // rdi
  NTSTATUS v15; // eax
  __int64 v16; // rcx
  unsigned __int64 v17; // rbx
  __int64 v18; // rax
  __int64 v19; // rax
  void **v20; // [rsp+30h] [rbp-40h] BYREF
  __int128 v21; // [rsp+38h] [rbp-38h]
  void **v22; // [rsp+48h] [rbp-28h]
  PVOID KeyValueInformation; // [rsp+50h] [rbp-20h]
  __int64 v24; // [rsp+58h] [rbp-18h]
  int v25; // [rsp+60h] [rbp-10h]
  ULONG ResultLength; // [rsp+90h] [rbp+20h] BYREF
  int v27; // [rsp+94h] [rbp+24h]

  v27 = HIDWORD(a1);
  ResultLength = 0;
  v7 = ZwQueryValueKey(a2, a3, KeyValuePartialInformation, 0LL, 0, &ResultLength);
  v10 = v7;
  if ( v7 == -2147483643 || v7 == -1073741789 )
  {
    KeyValueInformation = 0LL;
    v24 = 0LL;
    v20 = &DMM::AutoBuffer<_DMM_MONITORPRESENCEEVENTSET_SERIALIZATION>::`vftable'{for `SetElement'};
    v22 = &DMM::AutoBuffer<_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION>::`vftable'{for `NonReferenceCounted'};
    v21 = 0LL;
    v25 = 3;
    DMM::AutoBuffer<_KEY_VALUE_PARTIAL_INFORMATION>::Initialize((__int64)&v20, ResultLength);
    v14 = (char *)KeyValueInformation;
    if ( KeyValueInformation )
    {
      v15 = ZwQueryValueKey(a2, a3, KeyValuePartialInformation, KeyValueInformation, ResultLength, &ResultLength);
      v17 = v15;
      if ( v15 < 0 )
      {
        v18 = WdLogNewEntry5_WdError(v16);
        *(_QWORD *)(v18 + 24) = v17;
        WdLogEvent5_WdError(v18);
LABEL_12:
        DMM::AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>::~AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>(&v20);
        return (unsigned int)v17;
      }
      v17 = (ResultLength - 12) & 0xFFFFFFFC;
      DMM::AutoBuffer<_KEY_VALUE_PARTIAL_INFORMATION>::Initialize(a4, v17);
      v13 = *(void **)(a4 + 32);
      if ( v13 )
      {
        memmove(v13, v14 + 12, v17);
        LODWORD(v17) = 0;
        goto LABEL_12;
      }
    }
    v19 = WdLogNewEntry5_WdLowResource(v13);
    WdLogEvent5_WdLowResource(v19);
    LODWORD(v17) = -1073741801;
    goto LABEL_12;
  }
  if ( v7 >= 0 )
  {
    v12 = WdLogNewEntry5_WdAssertion(v9);
    WdLogEvent5_WdAssertion(v12);
  }
  *(_QWORD *)(WdLogNewEntry5_WdTrace(v9, v8) + 24) = v10;
  return 3221226021LL;
}
