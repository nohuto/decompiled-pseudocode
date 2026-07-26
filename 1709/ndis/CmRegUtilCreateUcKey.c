/*
 * XREFs of CmRegUtilCreateUcKey @ 0x1C00FD298
 * Callers:
 *     CmRegUtilCreateWstrKey @ 0x1C00FD338 (CmRegUtilCreateWstrKey.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmRegUtilCreateUcKey(
        void *a1,
        _UNICODE_STRING *a2,
        __int64 a3,
        ULONG a4,
        void *a5,
        ULONG *a6,
        _QWORD *a7)
{
  NTSTATUS v7; // r8d
  void *v8; // rdx
  ULONG v9; // ecx
  _OBJECT_ATTRIBUTES v11; // [rsp+40h] [rbp-38h] BYREF
  ULONG v12; // [rsp+98h] [rbp+20h] BYREF

  v12 = a4;
  v11.Length = 48;
  v11.RootDirectory = a1;
  v11.Attributes = 576;
  v11.SecurityQualityOfService = 0LL;
  v11.SecurityDescriptor = a5;
  v11.ObjectName = a2;
  v7 = ZwCreateKey(&a5, 0xF003Fu, &v11, 0, 0LL, 0, &v12);
  if ( v7 >= 0 )
  {
    v9 = v12;
    v8 = a5;
  }
  else
  {
    v8 = 0LL;
    v9 = 0;
  }
  *a7 = v8;
  if ( a6 )
    *a6 = v9;
  return (unsigned int)v7;
}
