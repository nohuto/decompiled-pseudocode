/*
 * XREFs of DpiOpenPnpRegistryKey @ 0x1C01148F0
 * Callers:
 *     DpiFdoStartAdapter @ 0x1C0111538 (DpiFdoStartAdapter.c)
 *     DpiGetAdapterInfo @ 0x1C01127F8 (DpiGetAdapterInfo.c)
 *     ??0VIDPN_MGR@@QEAA@QEAVADAPTER_DISPLAY@@@Z @ 0x1C0114098 (--0VIDPN_MGR@@QEAA@QEAVADAPTER_DISPLAY@@@Z.c)
 *     DpiReadPnpRegistryValue @ 0x1C01147D0 (DpiReadPnpRegistryValue.c)
 * Callees:
 *     memset @ 0x1C0015700 (memset.c)
 */

__int64 __fastcall DpiOpenPnpRegistryKey(__int64 a1, __int64 a2, ACCESS_MASK a3, void **a4)
{
  __int64 v4; // r14
  __int64 v6; // rbx
  __int64 v8; // rdi
  NTSTATUS v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdi
  __int64 v14; // rax
  __int64 v15; // rax
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+20h] [rbp-38h] BYREF

  v4 = *(_QWORD *)(a1 + 64);
  v6 = (int)a2;
  if ( (_DWORD)a2 == 1 )
  {
    v8 = 512LL;
  }
  else
  {
    if ( (_DWORD)a2 != 2 )
    {
      v14 = WdLogNewEntry5_WdError((unsigned int)(a2 - 1), a2);
      *(_QWORD *)(v14 + 24) = v6;
      WdLogEvent5_WdError(v14);
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
  v12 = v9;
  if ( v9 < 0 )
  {
    v15 = WdLogNewEntry5_WdError(v11, v10);
    *(_QWORD *)(v15 + 24) = v6;
    *(_QWORD *)(v15 + 32) = v12;
    WdLogEvent5_WdError(v15);
  }
  return (unsigned int)v12;
}
