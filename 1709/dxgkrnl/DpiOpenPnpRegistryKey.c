/*
 * XREFs of DpiOpenPnpRegistryKey @ 0x1C0110B90
 * Callers:
 *     ??0VIDPN_MGR@@QEAA@QEAVADAPTER_DISPLAY@@@Z @ 0x1C0110304 (--0VIDPN_MGR@@QEAA@QEAVADAPTER_DISPLAY@@@Z.c)
 *     DpiReadPnpRegistryValue @ 0x1C0110A74 (DpiReadPnpRegistryValue.c)
 *     DpiGetAdapterInfo @ 0x1C0117154 (DpiGetAdapterInfo.c)
 *     DpiFdoStartAdapter @ 0x1C0117FA8 (DpiFdoStartAdapter.c)
 * Callees:
 *     memset @ 0x1C0016A80 (memset.c)
 */

__int64 __fastcall DpiOpenPnpRegistryKey(__int64 a1, int a2, ACCESS_MASK a3, void **a4)
{
  __int64 v4; // r14
  __int64 v6; // rbx
  __int64 v8; // rdi
  NTSTATUS v9; // eax
  __int64 v10; // rcx
  __int64 v11; // rdi
  __int64 v13; // rax
  __int64 v14; // rax
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+20h] [rbp-38h] BYREF

  v4 = *(_QWORD *)(a1 + 64);
  v6 = a2;
  if ( a2 == 1 )
  {
    v8 = 512LL;
  }
  else
  {
    if ( a2 != 2 )
    {
      v13 = WdLogNewEntry5_WdError((unsigned int)(a2 - 1));
      *(_QWORD *)(v13 + 24) = v6;
      WdLogEvent5_WdError(v13);
      return 3221225485LL;
    }
    v8 = 528LL;
  }
  memset(&ObjectAttributes.RootDirectory, 0, 0x28uLL);
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)(v4 + v8);
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v9 = ZwOpenKey(a4, a3, &ObjectAttributes);
  v11 = v9;
  if ( v9 < 0 )
  {
    v14 = WdLogNewEntry5_WdError(v10);
    *(_QWORD *)(v14 + 24) = v6;
    *(_QWORD *)(v14 + 32) = v11;
    WdLogEvent5_WdError(v14);
  }
  return (unsigned int)v11;
}
