/*
 * XREFs of DpiOpenPnpRegistryKey @ 0x1C01EFBD0
 * Callers:
 *     DpiGetAdapterInfo @ 0x1C01EE780 (DpiGetAdapterInfo.c)
 *     DpiReadPnpRegistryValue @ 0x1C01EFEF8 (DpiReadPnpRegistryValue.c)
 *     DpiFdoStartAdapter @ 0x1C01F913C (DpiFdoStartAdapter.c)
 *     ??0VIDPN_MGR@@QEAA@QEAVADAPTER_DISPLAY@@@Z @ 0x1C020F214 (--0VIDPN_MGR@@QEAA@QEAVADAPTER_DISPLAY@@@Z.c)
 * Callees:
 *     memset @ 0x1C001C940 (memset.c)
 *     DpiGetPnpRegistryKeyName @ 0x1C01EFA20 (DpiGetPnpRegistryKeyName.c)
 */

__int64 __fastcall DpiOpenPnpRegistryKey(__int64 a1, int a2, ACCESS_MASK a3, void **a4)
{
  __int64 v4; // rdi
  __int64 v7; // rcx
  __int64 v8; // rax
  NTSTATUS v10; // eax
  __int64 v11; // rcx
  __int64 v12; // rbx
  __int64 v13; // rax
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+20h] [rbp-38h] BYREF
  struct _UNICODE_STRING *v15; // [rsp+60h] [rbp+8h] BYREF

  v4 = a2;
  if ( (int)DpiGetPnpRegistryKeyName(a1, a2, (__int64 *)&v15) >= 0 )
  {
    memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = v15;
    ObjectAttributes.Length = 48;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    ObjectAttributes.Attributes = 576;
    v10 = ZwOpenKey(a4, a3, &ObjectAttributes);
    v12 = v10;
    if ( v10 < 0 )
    {
      v13 = WdLogNewEntry5_WdError(v11);
      *(_QWORD *)(v13 + 24) = v4;
      *(_QWORD *)(v13 + 32) = v12;
      WdLogEvent5_WdError(v13);
    }
    return (unsigned int)v12;
  }
  else
  {
    v8 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v8 + 24) = v4;
    WdLogEvent5_WdError(v8);
    return 3221225485LL;
  }
}
